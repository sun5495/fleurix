#include <param.h>
#include <x86.h>
#include <proto.h>
#include <proc.h>

#include <buf.h>
#include <conf.h>
#include <hd.h>

ushort rootdev = DEVNO(1, 0);

struct bdevsw   bdevsw[NBLKDEV] = {
    { 0, }, /* NODEV */
    { &nulldev, &nulldev, &hd_request, &hdtab } 
};

