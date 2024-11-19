# DayZVanillaServer
Server extra options for vanilla Server

[DayZ:Hosting_a_Linux_Server]=(https://community.bistudio.com/wiki/DayZ:Hosting_a_Linux_Server)

launch the install script
```sh
#!/bin/bash
# install necessary packets 
sudo apt-get install lib32gcc-s1 curl
#does the installation of the steam cmd working directory
mkdir -p ~/servers/steamcmd && cd ~/servers/steamcmd
#does the installation of the steam cmd 
curl -sqL "https://steamcdn-a.akamaihd.net/client/installer/steamcmd_linux.tar.gz" | tar zxvf -
```
Then  *also be sure to replace your_login 
```sh
#!/bin/bash
~/servers/steamcmd/steamcmd.sh +force_install_dir ~/servers/dayz-server/ +login your_login +app_update 223350 +quit 
```



### open redirect the relevant port on your router
### go in the dayz folder file and launch the vanilla thing 
```sh
    cd ~/servers/dayz-server/
    ./DayZServer -config=serverDZ.cfg -port=2302 -BEpath=battleye -profiles=profiles -dologs -adminlog -netlog -freezecheck -cpuCount=4
```



## If server works fine with real vanilla  and no service 

## Add Service

### allow execution permission to update script put it in the right location 
```sh
    sudo chmod +x ~/servers/dayz-server/update.sh
```

### do a pwd and replace your username on the "REPLACE HERE"
```sh
    pwd
```
## add the content from dayz-server.service and copy the content 

```sh
sudo nano /etc/systemd/system/dayz-server.service
```
#### don't forget to change the username according to the pwd inside the service file  as well as the server port 
```.service
[Unit]
Description=DayZ Dedicated Server
Wants=network-online.target
After=syslog.target network.target nss-lookup.target network-online.target

[Service]
ExecStartPre=/home/dzserver/servers/dayz-server/update.sh
ExecStart=/home/dzserver/servers/dayz-server/DayZServer -config=serverDZ.cfg -port=2302 -BEpath=battleye -profiles=profiles -dologs -adminlog -netlog -freezecheck -cpuCount=4
WorkingDirectory=/home/dzserver/servers/dayz-server/
LimitNOFILE=100000
ExecReload=/bin/kill -s HUP $MAINPID
ExecStop=/bin/kill -s INT $MAINPID
User= ######################################   REPLACE HERE ##############################################################################################################
Group=users                                     
Restart=on-failure
RestartSec=5s

[Install]
WantedBy=multi-user.target
```





#### check server logs 
```sh 
    journalctl -xeu dayz-server.service
```







### Directory
/home/dzserver/servers/dayz-server/mpmissions/dayzOffline.chernarusplus/CustomScripts
### File
/home/dzserver/servers/dayz-server/mpmissions/dayzOffline.chernarusplus/init.c

### Daemon Commands
#### - Enables server autostart when the OS starts.
```
    sudo systemctl enable dayz-server 
```
#### - Disables server autostart when the OS starts.
```
    sudo systemctl disable dayz-server 
```
####  - Starting the server.
```
    sudo systemctl start dayz-server
```
#### - Restarting the server.
```
    sudo systemctl restart dayz-server 
```
#### - Stopping the server.
```
    sudo systemctl stop dayz-server 
```
#### - Checking the server status.
```
    sudo systemctl status dayz-server 
```