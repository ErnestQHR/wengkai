#include <stdio.h>

const int MINOR = 35;

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf ("YOU AGE IS %d", age);

    if (age < MINOR) {
        printf("You are young.");
    }
    
    printf("VALUES THE TIME\n");
    
    return 0;
}   

        
