#include<stdio.h>
int main()
{
    const int MAX_PRICE = 100;
    int price = 0;

    printf("请输入金额（元） ");
    scanf("%d",&price);

    int change = 100 - price;

    printf("找零：%d\n",change);

    return 0;
    
}