#include <stdio.h>
int area(int r);
int perimeter(int r);

int main(){
    int r, type;
    printf("Enter radian:");
    scanf("%d", &r);
    printf("Select Type: ");
    scanf("%d", &type);
    while(1){
        if (r == -1){
            break;
        } else{
            if (type == 1){
                printf("Area = %d\n", area(r)) ;
            }
            if (type == 2){
                printf("Perimeter = %d\n", perimeter(r)) ;
            }
        }
        printf("Enter radian:");
        scanf("%d", &r);
        printf("Select Type: ");
        scanf("%d", &type);
    }
}

int area(int r){
    float area;
    area = 3 *r*r;
    return area;
}

int perimeter(int r) {
    int perimeter;
    perimeter = 2* 3 * r;
    return perimeter;
}
