#include <stdio.h>
int main(){
    int price=0;
    printf("请输入金额(元)");
    scanf("%d",&price);
    int charge=100-price;
    printf("找您%d\n",charge);
    return 0;
}