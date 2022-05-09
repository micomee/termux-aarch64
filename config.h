#define VERSION 5.0
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
gcc  fping.c seqmap.c socket4.c socket6.c fping.h options.h seqmap.h optparse.c optparse.h -o fping -static

setcap cap_net_raw+ep fping

musl-gcc fping.c seqmap.c socket4.c socket6.c fping.h options.h seqmap.h optparse.c optparse.h -o fping -static

*/

