#!/usr/bin/env bash

#mkdir ~/.config &

cp .xinitrc .Xresources .zshrc .zhistory ~/ &

cp city.jpeg DarkCyan.png archlinux-simplyblack.png ~/ &

cp -R awesome qtile ~/.config &

#sudo cp lightdm.conf lightdm-gtk-greeter.conf /etc/lightdm/ &

sudo cp vimrc /etc/ &


gsettings set org.gnome.desktop.interface color-scheme prefer-dark &

sudo systemctl enable bluetooth.service














  
   
