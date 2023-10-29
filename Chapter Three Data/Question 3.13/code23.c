#include<stdio.h>
static int a = 1;
extern int xa(){
    return a;
}
int ya(){
    return 0;
}

static char b = 2;
int xb(){
    return b;
}
int xy(){
    return b;
}

int xc(){
    int c = 3;
}

int xd(){
    static float d = 4;
}