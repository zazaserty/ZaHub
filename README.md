# Zahub
A script to download and setup projects from my git repos without trouble.

# Usage:
curl -fLO https://github.com/zazaserty/Zahub/releases/download/v-1.0.1/Zahub && chmod +x Zahub &&./Zahub

# Compilation:
git clone https://github.com/zazaserty/Zahub && cd Zahub && g++ --output Zahub zahub.cpp &&   ./Zahub
(YOU WILL NEED GIT AND CLANG INSTALLED)

# Tips:
When selecting options such as installing dependencies automatically or setting the make.conf as mine (you should not use my make.conf that option is made in case I wanna copy it to another system, you should make yours and tweak it accordingly to your needs) it will ask for root privileges using sudo since it is the more widely used tool for this purpose. For those who use doas (including me) edit the sources or setup sudo temporarily, I will update the script so that it supports doas too soon.

Never execute the script as root.

Dependencies for termux-rice and Za.dots are listed in their repos https://github.com/zazaserty/Termux-rice https://github.com/zazaserty/Za.dots.

When executing this script inside termux you have to compile it first, just copy the compilation command.

# If it was useful please give it a star!
Have a nice day
