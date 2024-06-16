# Nito Stratum Pool
```
sudo apt-get update
sudo apt-get install -y autoconf automake libtool pkg-config python3 python3-pip build-essential libssl-dev git yasm libzmq3-dev pkgconf git nano
```
# Git clone
```
git clone https://github.com/nitocoin/STRATUM-Pool.git

cd STRATUM-Pool
```
# Build for Linux
```
chmod +x autogen.sh

./autogen.sh

./configure

make
```
# Config 
[ Edit serverurl ip ]
```
nano nitopool.conf
```

# Firewall
```
sudo ufw allow 3333/tcp
sudo ufw reload
sudo ufw status numbered
```

# Run
[ For daemon add -D ]
```
./src/nitopool -B
```
