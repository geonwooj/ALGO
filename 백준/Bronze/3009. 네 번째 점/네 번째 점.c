#include <stdio.h>

int main() {
    int d1[6];int d4[2]={0,};
    for(int i=0;i<6;i++){
        scanf("%d",&d1[i]);}
    for (int i=0;i<2;i++){
        if(d1[i]==d1[i+2])
            d4[i]=d1[i+4];
        else if(d1[i+2]==d1[i+4])
            d4[i]=d1[i];
        else
            d4[i]=d1[i+2];
    }
    printf("%d %d",d4[0],d4[1]);}