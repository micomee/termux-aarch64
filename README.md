# termux-aarch64
termux aarch64 binary
## fping
compile
```bash
#add config.h
#install ubuntu in termux
apt install musl
musl-gcc  fping.c seqmap.c socket4.c socket6.c fping.h options.h seqmap.h optparse.c optparse.h -o fping -static
```
usage
```bash
#with termux
chmod +x *
apt install proot -y
proot -0 ~/fping 127.0.0.1
#proot -0 $PREFIX/bin/bash

#without termux
mkdir -p ～/tmp
LD_PRELOAD=~/libtalloc.so.2 PROOT_TMP_DIR=~/tmp  ~/proot -0 ~/fping 127.0.0.1

```
## ike-scan
```bash
#compile
./configure --prefix=$PREFIX
CFLAGS='-static -O2' LDFLAGS='-static' make
make install

#usage
proot -0 ~/ike-scan -s0 127.0.0.1

LD_PRELOAD=~/libtalloc.so.2 PROOT_TMP_DIR=~/tmp  ~/proot -0 ~/ike-scan -s0 127.0.0.1
```

## udpme static build
```bash
CGO_ENABLED=0 go build -a -ldflags '-extldflags "-static"' .
```






