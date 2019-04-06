course=%1
ses=%2
link="https://poll.keep.edu.hk/a/%course%/%ses%"
google-chrome $link || google-chrome-stable $link || firefox $link
sleep  6s
google-chrome $link || google-chrome-stable $link || firefox $link
