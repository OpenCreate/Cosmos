#include "vgastr.h"

void _strwrite(char *string){
    char *strDest = (char*)0xb8000; //vesa 模式显存映射起始地址
    while(*string){
        *strDest = *string++;
        strDest += 2;
    }
    return;
}

void printf(char *fmt, ...){
    _strwrite(fmt);
    return;
}