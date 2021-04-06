#include <linux/init.h>
#include <linux/module.h>

static int modtest_init(void){
    printk(KERN_ALERT "Hello !!!\n");
    return 0;
}

static void modtest_exit(void){
    printk(KERN_ALERT "Bye !!!\n");
}

module_init(modtest_init);
module_exit(modtest_exit);

/*
 * usage:
 *  make all
 *  sudo insmod simplemod.ko   # we install module in core
 *  dmesg
 *  --- in the tail u should see Hello !!!
 *  sudo rmmod simplemod   # removes module from kernel
 *  dmesg
 *  --- in the tail u should see Bye !!!
 *  === if u want recompile use ===
 *  make clean
 */