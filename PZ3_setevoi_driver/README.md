1. Compile all:
_ make all
... If you don't have ifconfig: 
_ sudo apt install net-tools
2. installing module to kernel
_ sudo insmod netmod.ko
3. to check kernel logs in console
_ tail -f /var/log/kern.log
4. check ifconfig 
_ ifconfig myNetDv
6. clean all:
_ make clean
