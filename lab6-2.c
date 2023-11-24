#include <stdio.h>

int main() {
    int num, x=2, k=1, bolen=0, counter=0;
    printf("How many prime numbers to be listed: ");
    scanf("%d", &num);

    while(counter<num) {
        while (k <= x) {
            if (x % k == 0) 
            {bolen += 1;
            }
            k += 1;
        }
        if (bolen == 2) {
            printf("%d ", x);
            counter += 1;
        }
        bolen = 0;
        k = 1;
        x += 1;
    }
    return 0;
}
