#include <stdio.h>
int sum(int x, int y, int z);
int max(int x, int y, int z);

int main(){
    int x,y,z;
    printf("Enter number 1:");
    scanf("%d", &x);
    printf("Enter number 2:");
    scanf("%d", &y);
    printf("Enter number 3:");
    scanf("%d", &z);
    printf("sum of these = %d\n", sum(x,y,z));
    printf("max of these = %d\n", max(x,y,z));
}

int sum(int x, int y, int z){
    int sum;
    sum = x+y+z;
    return sum;
}

int max(int x, int y, int z){
    int max = 0;
    if (x > max){
        max = x;
    }
    if (y > max){
        max = y;
    }
    if (z > max){
        max = z;
    }
    return max;
}
