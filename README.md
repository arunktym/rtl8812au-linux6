## RTL8812AU/21AU and RTL8814AU Wireless Drivers - Patched for Modern Kernels

Forked from [aircrack-ng/rtl8812au](https://github.com/aircrack-ng/rtl8812au) and patched to build and run on **Linux kernel 6.12+** (tested up to 6.17).

[![Monitor mode](https://img.shields.io/badge/monitor%20mode-working-brightgreen.svg)](#)
[![Frame Injection](https://img.shields.io/badge/frame%20injection-working-brightgreen.svg)](#)
[![GitHub version](https://raster.shields.io/badge/version-v5.6.4.2-lightgrey.svg)](#)
[![Kernel](https://img.shields.io/badge/kernel-6.12--6.17+-blue.svg)](#)

### What's Changed (Night Rocker's Patches)

These patches fix build failures and runtime issues on modern Ubuntu/Linux kernels (6.12+):

- **Makefile: `EXTRA_CFLAGS` to `ccflags-y` migration** - Kernel 6.x dropped support for `EXTRA_CFLAGS`/`EXTRA_LDFLAGS` in out-of-tree modules. All build flags migrated to `ccflags-y`/`ldflags-y`.
- **Makefile: `$(src)` fallback for kernel 6.12+** - The kbuild variable `$(src)` can be empty on newer kernels. Added fallbacks via `KBUILD_EXTMOD` and `$(M)`.
- **`osdep_service_linux.h`: Timer API for kernel 6.16+** - Kernel 6.16 replaced `from_timer()` with `timer_container_of()` and `del_timer_sync()` with `timer_delete_sync()`. Added version-gated compatibility.
- **`ioctl_cfg80211.c`: cfg80211 callback signature changes** - Kernel 6.17 added an `int link_id` parameter to `set_wiphy_params`, `set_tx_power`, and `get_tx_power` callbacks.
- **`rtw_cmd.c`: USB disconnect crash fix** - Added safety checks to the command thread to prevent executing commands on an adapter that has been flagged for removal (fixes crashes on USB hot-unplug).
- **`usb_intf.c`: Device removal deadlock fix** - Reordered the disconnect sequence to set `surprise_removed` *before* unregistering network devices, preventing a deadlock during USB removal.
- **`rtw_recv.c`: NULL pointer guard & double-free fix** - Added NULL check for adapter/pnetdev in receive path. Fixed a double-free in `recv_frame_monitor()` where `rtw_recv_monitor()` already frees the frame internally.
- **`rtw_xmit.c`: Radiotap header bounds check** - Added validation to prevent stack buffer overflow when processing oversized radiotap headers in monitor mode TX.

### Supported Chipsets

```
RTL8812AU
RTL8821AU
RTL8814AU
```

### Supported Devices (Partial List)

```
Alfa Networks AWUS036AC
Alfa Networks AWUS036ACH
Alfa Networks AWUS036ACM
Alfa Networks AWUS036EAC
TP-Link Archer T4U (v1, v2, v3)
TP-Link Archer T4UHP
TP-Link AC600 (T2U v3, T2U Plus, T2U Nano)
```

### Prerequisites

```
sudo apt-get update
sudo apt-get install bc mokutil build-essential libelf-dev linux-headers-$(uname -r)
```

### Installation

#### Option 1: Using make (Recommended for patched version)

```bash
git clone https://github.com/<YOUR_USERNAME>/rtl8812au.git
cd rtl8812au
make clean
make -j$(nproc)
sudo make install
```

#### Option 2: Using DKMS

```bash
sudo apt-get install dkms
sudo make dkms_install
```

### Blacklist In-Tree Driver

On Ubuntu 24.04+ with kernel 6.x, the in-tree `rtw88_8812au` driver may conflict. Blacklist it:

```bash
echo -e "blacklist rtw88_8812au\nblacklist rtw88_8812a\nblacklist rtw88_usb\nblacklist rtw88_core" | sudo tee /etc/modprobe.d/blacklist-rtw88.conf
sudo update-initramfs -u
sudo reboot
```

### Removal

```bash
sudo make dkms_remove
# or if installed with make install:
sudo rm /lib/modules/$(uname -r)/kernel/drivers/net/wireless/88XXau.ko
sudo depmod -a
```

### Monitor Mode

```bash
sudo airmon-ng check kill
sudo ip link set wlan0 down
sudo iw dev wlan0 set type monitor
sudo ip link set wlan0 up
```

### TX Power

```bash
sudo iw wlan0 set txpower fixed 3000
```

### LED Control

Statically via `/etc/modprobe.d/8812au.conf`:
```
options 88XXau rtw_led_ctrl=0
```

Dynamically:
```bash
echo "0" > /proc/net/rtl8812au/<interface>/led_ctrl
```

### USB Mode Switch

```bash
sudo rmmod 88XXau
sudo modprobe 88XXau rtw_switch_usb_mode=1
# 0: no switch, 1: USB 2.0 -> 3.0, 2: USB 3.0 -> 2.0
```

### NetworkManager Random MAC Fix

Add to `/etc/NetworkManager/NetworkManager.conf`:
```
[device]
wifi.scan-rand-mac-address=no
```
Then: `sudo service NetworkManager restart`

### Raspberry Pi

For **ARM** (RPi 1/2/3/Zero):
```bash
sed -i 's/CONFIG_PLATFORM_I386_PC = y/CONFIG_PLATFORM_I386_PC = n/g' Makefile
sed -i 's/CONFIG_PLATFORM_ARM_RPI = n/CONFIG_PLATFORM_ARM_RPI = y/g' Makefile
```

For **ARM64** (RPi 3B+/4B/Zero2):
```bash
sed -i 's/CONFIG_PLATFORM_I386_PC = y/CONFIG_PLATFORM_I386_PC = n/g' Makefile
sed -i 's/CONFIG_PLATFORM_ARM64_RPI = n/CONFIG_PLATFORM_ARM64_RPI = y/g' Makefile
```

### Tested On

| Distro | Kernel | Status |
|--------|--------|--------|
| Ubuntu 24.04 | 6.17.0-20-generic | Working |

### Credits & Contributors

```
Night Rocker  - Kernel 6.12-6.17+ patches & maintenance

Upstream:
Alfa Networks - https://www.alfa.com.tw/
Realtek       - https://www.realtek.com
aircrack-ng   - https://www.aircrack-ng.org

Original Contributors:
astsam        - https://github.com/astsam
evilphish     - https://github.com/evilphish
fariouche     - https://github.com/fariouche
CGarces       - https://github.com/CGarces
ZerBea        - https://github.com/ZerBea
lwfinger      - https://github.com/lwfinger
Ulli-Kroll    - https://github.com/Ulli-Kroll
```

### License

This project is licensed under the GPLv2 - see the [LICENSE](LICENSE) file for details.
