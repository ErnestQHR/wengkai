#include <stdio.h> 

int main() {
    int cock, hen, chicken;
    for (cock = 0; cock <= 20; cock++) {
        for (hen = 0; hen <= 33; hen++) {
            chicken = 100 - cock - hen;
            if (chicken % 3 == 0 && 5 * cock + 3 * hen + chicken / 3 == 100) {
                printf("cock=%2d, hen=%2d, chicken=%2d\n", cock, hen, chicken);
            }
        }
    }
    return 0;
}
