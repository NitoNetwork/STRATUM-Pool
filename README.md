# Nito optimized stratum pool.


nito.conf [ Nito QT / Nitod ]
```bash
maxconnections=300
listen=1
server=1
txindex=1
rpcuser=user
rpcpassword=pass
rpcport=12250
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

Run [ Add -D For Daemon ]
```bash
./src/nitopool -B
```

[ Tmux Commands ]
* tmux new -s nitopool

* CTRL+B > D

* tmux a -t nitopool

