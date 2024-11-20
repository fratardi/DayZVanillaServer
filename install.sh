#!/bin/bash
# install necessary packets 
sudo apt-get install lib32gcc-s1 curl
#does the installation of the steam cmd 
mkdir -p ~/servers/steamcmd && cd ~/servers/steamcmd
curl -sqL "https://steamcdn-a.akamaihd.net/client/installer/steamcmd_linux.tar.gz" | tar zxvf -