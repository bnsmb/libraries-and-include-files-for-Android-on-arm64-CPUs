# libraries-and-include-files-for-Android-on-arm64-CPUs

----
**Status 25.01.2025**

This repository is work in progress 

----

This repository contains include files and libraries for Android running on **arm64** CPUs

The files can be used to compile executables for Android either in Android or on the PC using the [Android NDK](https://developer.android.com/ndk).

A [Magisk](https://topjohnwu.github.io/Magisk/) Module with the [LLVM](https://llvm.org/)  compiler [clang](https://clang.llvm.org/) **version 19** for Android on **arm64** CPUs (called **clang19** in this document)


```
[clang19 toolchain] ASUS_I006D:/ # clang --version
clang version 19.0.0git (https://android.googlesource.com/toolchain/llvm-project b3a530ec6537146650e42be89f1089e9a3588460)
Target: aarch64-unknown-linux-android
Thread model: posix
InstalledDir: /data/local/tmp/sysroot/usr/clang19/bin
[clang19 toolchain] ASUS_I006D:/ # 
```

is available here:

[http://bnsmb.de/files/public/My_HowTos_for_Android.html#magisk_module_with_clang19_and_ndk
](http://bnsmb.de/files/public/My_HowTos_for_Android.html#magisk_module_with_clang19_and_ndk)


The repository with the files for the Magisk Module with **clang19** for Android is available here:

[https://github.com/bnsmb/Magisk-Module-with-clang19](https://github.com/bnsmb/Magisk-Module-with-clang19)

See [here](http://bnsmb.de/files/public/My_HowTos_for_Android.html#Documentation_for_the_Magisk_Module_with_clang19_and_the_NDK_r27b) or [here](https://xdaforums.com/t/magisk-module-with-clang19-and-the-ndk-r27b.4700994/) for the Documentation for the Magisk Module with **clang19**.


A repository with the **clang19 toolchain for Android** that can be installed on phones or tablets without installed Magisk is available here:

[https://github.com/bnsmb/clang19_toolchain_for_android](https://github.com/bnsmb/clang19_toolchain_for_android)


The documentation for the **clang19 toolchain for Android** is available [here](http://bnsmb.de/files/public/My_HowTos_for_Android.html#How_to_install_a_Toolchain_for_clang_on_phones_without_root_access) and [here](https://xdaforums.com/t/guide-how-to-install-a-toolchain-for-clang-on-phones-without-root-access.4710235/).

---

For most of the libraries contained in the repository, the header files, the dynamic libraries (\***.so**) and the static libraries (\***.a**) are included.

Please note that all libraries are compiled using the prefix **/data/local/tmp/sysroot**. Therefor the directories hardcoded in the libraries for config files etc are searched in the directory **/data/local/tmp/sysroot**, examples:

```
[xtrnaw7@t15g /data/develop/git_repos/new/sysroot/usr/lib]$ strings libcrypto.so | grep /etc/
/data/local/tmp/sysroot/etc/security/ct_log_list.cnf
/data/local/tmp/sysroot/etc/security
/data/local/tmp/sysroot/etc/security/private
/data/local/tmp/sysroot/etc/security/certs
/data/local/tmp/sysroot/etc/security/cert.pem
OPENSSLDIR: "/data/local/tmp/sysroot/etc/security"
[xtrnaw7@t15g /data/develop/git_repos/new/sysroot/usr/lib]$ strings libcrypto.so | grep /etc/
```
```
[xtrnaw7@t15g /data/develop/git_repos/new/sysroot/usr/lib]$ strings libncurses.so | grep /usr/
/data/local/tmp/develop/sysroot/usr/share/terminfo
/data/local/tmp/sysroot/usr/share/terminfo
[xtrnaw7@t15g /data/develop/git_repos/new/sysroot/usr/lib]$ 
```


