# Nito optimized stratum pool.


nito.conf [ Nito QT / Nitod ]
```bash
maxconnections=300
listen=1
server=1
txindex=1
rpcuser=user
rpcpassword=pass
rpcport=8825
```


Apt-Get
```bash
sudo apt-get update

sudo apt-get install -y autoconf automake libtool pkg-config python3 python3-pip build-essential libssl-dev git yasm libzmq3-dev libpq-dev libgsl-dev pkgconf git tmux nano
```
Git Clone
```bash
git clone https://github.com/NitoNetwork/STRATUM-Pool.git

cd STRATUM-Pool
```
Build For Linux
```bash
chmod +x autogen.sh

./autogen.sh

./configure

make
```
Stratum Pool Config [ Change IP: serverurl ]
```bash
nano nitopool.conf
```

Firewall
```bash
sudo ufw allow 3333/tcp

sudo ufw reload

sudo ufw status
```

Reboot auto:
1:
sudo nano /usr/local/bin/start_nitopool.sh
2:
#!/bin/bash
tmux new-session -d -s nitopool
tmux send-keys -t nitopool 'cd /root/STRATUM-Pool' C-m
tmux send-keys -t nitopool './src/nitopool -B' C-m
3:
sudo chmod +x /usr/local/bin/start_nitopool.sh
4:
sudo nano /etc/systemd/system/nitopool.service
5:
[Unit]
Description=Start tmux session for nitopool
After=network.target

[Service]
Type=forking
ExecStart=/usr/local/bin/start_nitopool.sh
Restart=on-failure
User=root

[Install]
WantedBy=multi-user.target
6:
sudo systemctl daemon-reload
7:
sudo systemctl enable nitopool.service


Run [ Add -D For Daemon ]
```bash
./src/nitopool -B
```

[ Tmux Commands ]
* tmux new -s nitopool

* CTRL+B > D

* tmux a -t nitopool

