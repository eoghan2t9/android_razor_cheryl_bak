# AnyKernel2 Ramdisk Mod Script
# osm0sis @ xda-developers

## AnyKernel setup
# begin properties
properties() {
kernel.string=Papa Smurf Kernel
do.devicecheck=0
do.modules=1
do.rootcheck=1
do.cleanup=1
do.cleanuponabort=0
device.name1=Razer
device.name2=Phone
device.name3=
device.name4=
device.name5=
} # end properties

# shell variables
block=/dev/block/platform/soc/1da4000.ufshc/by-name/boot;
is_slot_device=1;
ramdisk_compression=auto;


## AnyKernel methods (DO NOT CHANGE)
# import patching functions/variables - see for reference
. /tmp/anykernel/tools/ak2-core.sh;


## AnyKernel file attributes
# set permissions/ownership for included ramdisk files
chmod -R 750 $ramdisk/*;
chown -R root:root $ramdisk/*;


## AnyKernel install
dump_boot;
write_boot;

## end install

