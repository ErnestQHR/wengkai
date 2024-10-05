#include <stdio.h>

int main() {
    int price = 0;
    int bill =0;

    printf("Enter the price of the item: ");
    scanf("%d", &price);

    printf("Enter the number of bills: ");
    scanf("%d", &bill);

    if (bill>= price)
    {
        printf("change is %d\n", bill - price);
    }   else{
        printf("not enough money\n");  
    }
    
    return 0;
}   