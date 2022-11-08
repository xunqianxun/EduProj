#/bin/bash!
#Author: Guoqi Li
#Data  : 2022.11.6

echo "playse enter your password!!"
read -s -p "Password: " PASSWD
echo "pach setting!!"
echo $PASSWD | sudo -S apt-get update
echo $PASSWD | sudo -S apt-get upgrade
echo $PASSWD | sudo -S apt-get install git
echo $PASSWD | sudo -S apt-get install gcc
echo $PASSWD | sudo -S spt-get install make
git glone git@gitee.com:qianxunyu/liunx-cptch.git

echo "init finish !!"
exit 1