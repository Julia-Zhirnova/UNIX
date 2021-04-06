make all
tail -f /var/log/kern.log
загрузка
sudo insmod nsimplemod.ko   
пользователь может записывать сообщения
sudo sh -c 'echo "<your msg>" > /dev/nsimpmod'
gcc  test_ioctl.c -o main
выводятся сообщения в формате метка времени, PID пользовательской, текст сообщения
sudo ./main
выгрузка
sudo rmmod nsimplemod  
make clean
