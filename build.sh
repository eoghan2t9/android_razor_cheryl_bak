#!/bin/bash
#
#  Build Script for CarboniteKERNEL for the OnePlus 5!
#  Based off RenderBroken's build script which is...
#  ...based off AK's build script ~~ Thanks!
#
#  git log --oneline --decorate
#

# Resources
THREAD="-j$(grep -c ^processor /proc/cpuinfo)"
KERNEL="Image.gz-dtb"
DEFCONFIG="cheryl_defconfig"

VER="Razer-Kernel-V1"

# Paths
KERNEL_DIR=$(pwd)
REPACK_DIR="AnyKernel"
MODULES_DIR="$REPACK_DIR/modules/system/lib/modules/"
ZIP_MOVE="$KERNEL_DIR/out/RZR"
ZIMAGE_DIR="$KERNEL_DIR/out/arch/arm64/boot"

# Vars
export ARCH=arm64
export SUBARCH=arm64
export LOCALVERSION=-`echo $VER`
# directory containing cross-compile arm64 toolchain
TOOLCHAIN=$HOME/Android/Razer/toolchains/aarch64-linux-android-6.x
export CROSS_COMPILE=$TOOLCHAIN/bin/aarch64-linux-android-

function clean_all {
  echo "Cleaning"
  make clean O=out && make mrproper O=out
  if [ -f "$ZIMAGE_DIR/$KERNEL" ]
  then
    rm $ZIMAGE_DIR/$KERNEL
  fi
}

function make_kernel {
  echo
  make $DEFCONFIG O=out
  make $THREAD O=out
}

function make_modules {
  pwd
  rm AnyKernel/modules/system/lib/modules/*.ko
  find $KERNEL_DIR -name '*.ko' -exec cp -vrf {} $MODULES_DIR \;
  ${CROSS_COMPILE}strip --strip-unneeded $MODULES_DIR/*
}

function make_zip {
  cd $REPACK_DIR
  zip -r9 "$VER".zip *
  mv "$VER".zip $ZIP_MOVE
  cd $KERNEL_DIR
}

if [ -f "$REPACK_DIR/$KERNEL" ]
then
  rm -rf $REPACK_DIR/$KERNEL
fi

clear
echo "CarboniteKERNEL build script for $ROM:"
echo

if [ -f "$KERNEL_DIR/out/.config" ]
then
  while read -p "Do you want to clean stuffs (y/n)? " cchoice
  do
    case "$cchoice" in
      y|Y )
        clean_all
        echo
        echo "All Cleaned now."
        break
        ;;
      n|N )
        break
        ;;
      * )
        echo
        echo "Invalid try again!"
        echo
        ;;
    esac
  done
  echo
fi

while read -p "Do you want to build kernel (y/n)? " dchoice
do
  case "$dchoice" in
    y|Y)
      DATE_START=$(date +"%s")
      make_kernel
      if [ -f "$ZIMAGE_DIR/$KERNEL" ]
      then
        cp $ZIMAGE_DIR/$KERNEL $REPACK_DIR/$KERNEL
        mkdir $ZIP_MOVE
        make_modules
        make_zip
        echo
        echo "-----------------------------------------"
        echo "-Kernel image build successfull for $ROM-"
        echo "-----------------------------------------"
        echo
      else
        echo "-------------------------------------------"
        echo "-Kernel image build unsuccessfull for $ROM-"
        echo "-------------------------------------------"
      fi
      DATE_END=$(date +"%s")
      DIFF=$(($DATE_END - $DATE_START))
      echo "Time: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
      break
      ;;
    n|N )
      break
      ;;
    * )
      echo
      echo "Invalid try again!"
      echo
      ;;
  esac
done

echo
if [ -f "$ZIP_MOVE/$VER.zip" ]
then
  echo "$ZIP_MOVE/$VER.zip"
else
  echo "No zip was found, build incomplete."
fi
echo
