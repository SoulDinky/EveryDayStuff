#!/usr/bin/env bash

#mkdir ~/.config &

cp .xinitrc .Xresources .xprofile .zshrc .zhistory .imwheelrc ~/ &

cp ARTWORK-nighthawk.jpg ~/ &

sudo cp lightdm.conf lightdm-gtk-greeter.conf /etc/lightdm/ &

sudo cp vimrc /etc/ &

sudo cp .zshrc .zhistory /root &

gsettings set org.gnome.desktop.interface color-scheme prefer-dark &

sudo systemctl enable lightdm &

sudo ufw default deny &
sudo ufw enable &
sudo systemctl enable ufw &
sudo systemctl start ufw &
sudo ufw status










  
   
