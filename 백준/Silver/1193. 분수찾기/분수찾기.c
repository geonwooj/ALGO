#include<string.h>
#include <stdio.h>

int main() {
    long long int x,count=0,a=0, i=0;
    
    scanf("%lld",&x);
    while(1){
        if(count>=x){
            count=count-i;
            if(a%2==0)
                printf("%lld/%lld",x-count,(a+1)-(x-count));
            else if(x==1)
                printf("%lld/%lld",x,a);
            else
                printf("%lld/%lld",(a+1)-(x-count),x-count);
            break;
}
        i=i+1;
        a++;
        count=count+i;
}        

    return 0;
}