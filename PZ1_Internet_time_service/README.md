1. Запуск сервиса
cd ~/prakt
chmod +x install.sh
sudo ./install.sh
2. Проверяем, появился ли файл times.csv
ls /etc/tmwriter/
3. Открываем его
tail -f /etc/tmwriter/times.csv
4. Запускаем скрипт
sudo python /etc/tmwriter/dbusmonitor.py
5. Отключаем/включаем интернет
Отображается потеря соединения и сколько времени провели в интернете
6. Останавливаем сервис
sudo systemctl stop tmwriter.service
7. Удаляем сервис
sudo rm -r /etc/tmwriter
