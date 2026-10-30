#include <stdio.h>
int main(){
    printf("请输入一个数:");
    int a=0;
    scanf("%d",&a);
    if (a>0){
        printf("正数");
    }
    else if(a<0){
        printf("负数");
    }
    else{
        printf("零");
    }
    return 0;
}