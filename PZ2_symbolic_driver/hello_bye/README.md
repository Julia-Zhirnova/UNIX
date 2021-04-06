
make all
загрузка
sudo insmod simplemod.ko   
dmesg // выводится Hello !!!
выгрузка
sudo rmmod simplemod  
dmesg // выводится Bye !!!
make clean
