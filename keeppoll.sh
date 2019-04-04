#/bash
URL_KP="https://poll.keep,edu.hk/a/$1/$2"
USERNAME="1155110XXX@link.cuhk.edu.hk"
PASSWRD=""
firefox URL_KP
sleep 2
xvkbd -text "\t"
xvkbd -text USERNAME
xvkbd -text "\t"
xvkbd -text PASSWRD
xvkbd -text "\r"
