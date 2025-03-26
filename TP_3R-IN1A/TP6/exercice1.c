#include <stdio.h>

int maxCountFunction(int tab[], int size, int* maxCount);

int main() {
    int tab[] = {14, 87, 12, 34, -9, -5, 5, 6, 87, 22, 33};
    int maxCount;
    int size = sizeof(tab) / sizeof(tab[0]); 
    int max = maxCountFunction(tab, size, &maxCount);
    printf("Le maximum est %d, il apparait %d fois dans le tableau\n", max, maxCount);
    return 0;
}

int maxCountFunction(int tab[], int size, int* maxCount) {
    int max = tab[0];
    *maxCount = 1; 
    for (int i = 1; i < size; i++) {
        if (tab[i] == max) {
            (*maxCount)++; 
        } else if (tab[i] > max) {
            max = tab[i];
            *maxCount = 1; 
        }
    }
    return max;
}
