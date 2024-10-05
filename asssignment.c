//assignment.c 以十进制，八进制，十六进制打印十进制数100
//10=%d 8=%o 16=%x 
//显示前缀 %#
#include <stdio.h>
int main()
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x,x,x);
    printf("dec = %d; octal =%#O; HEX = %#x\n", x, x,x);
    
    return 0;
}