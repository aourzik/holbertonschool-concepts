#!\bin\bash

pid_max=$(cat /proc/sys/kernel/pid_max.sh)

echo "Valeur maximale d'un PID : $pid_max"
