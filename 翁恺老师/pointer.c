#include <stdio.h>
int main() {      // 主函数

int a = 10;       // 定义一个int型变量
int *p = &a;     // 定义一个int型指针p，&a表示对a取地址，指针p的内容是a的地址
// int  *p;   p = &a;    // 第二行也可以这样写，意思一样
printf("%p\n", &a);      // 打印a的地址
printf("%p\n", p);       // 打印指针p指向的地址
// %p是打印地址（指针地址），是十六进制的形式

return 0;
}                // 主函数结束  