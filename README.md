```bash
https://nito.network/tools/nitopool/
```

# Nito optimized stratum pool.

1. Edit nito.conf
```bash
maxconnections=300
listen=1
server=1
txindex=1
rpcuser=user
rpcpassword=pass
rpcport=8825
zmqpubhashblock=tcp://127.0.0.1:28825
```


2. Apt-Get
```bash
sudo apt-get update && sudo apt-get install -y autoconf automake libtool pkg-config python3 python3-pip build-essential libssl-dev git yasm libzmq3-dev libpq-dev libgsl-dev pkgconf git tmux nano
```

3. Git Clone
```bash
git clone https://github.com/NitoNetwork/STRATUM-Pool.git stratum && cd stratum
```
4. Build
```bash
chmod +x autogen.sh && ./autogen.sh && ./configure && make
```
5. Stratum Pool Config [ Change IP: serverurl ]
```bash
nano nitopool.conf
```

6. Firewall
```bash
sudo ufw allow 3333/tcp && sudo ufw reload && sudo ufw status
```

7. Run
```bash
./src/nitopool -B
```

[ Tmux Commands ]
* tmux new -s nitopool

* CTRL+B > D

* tmux a -t nitopool
