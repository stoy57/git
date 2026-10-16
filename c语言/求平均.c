#include <stdio.h>
int main(){
    float a=0,b=0;
    printf("请输入数字(2个):");
    scanf("%lf %lf",&a,&b);
    float average=(a+b)/2;
    printf("平均数为%f\n",average);
    return 0;
}