# Nito Stratum Pool
A Nito optimized stratum pool.

# Apt-get
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
```
nano nitopool.conf
```
[ Edit ip: serverurl ]

# Firewall
```
sudo ufw allow 3333/tcp
sudo ufw reload
sudo ufw status numbered
```

# Run
```
./src/nitopool -B
```
[ For daemon add -D ]
