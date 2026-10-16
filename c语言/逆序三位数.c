#include <stdio.h>
int main(){
    int a=0;
    scanf("%d",&a);
    int bai=a/100;
    int shi=(a/10)%10;
    int ge=a%10;
    int rev=ge*100+shi*10+bai;
    printf("%d",rev);
    return 0;
}