//超出系统最大的int值
#include <stdio.h>
int main()
{
    int i = 21479373;
    unsigned int j =2938939489217;

     printf("%d %d %d\n", i, i+1, i+2);
     printf("%u %u %u\n", j, j+1, j+2);

     return 0;


}