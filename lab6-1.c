#include <stdio.h>

int main() {
    int month;
    printf("Please enter an integer : ");
    scanf("%d", &month);
    switch (month) {
        case 1: printf("1. Mounth of the year is January");break;
        case 2: printf("2. Mounth of the year is February");break;
        case 3: printf("3. Mounth of the year is March");break;
        case 4: printf("4. Mounth of the year is April");break;
        case 5: printf("5. Mounth of the year is May");break;
        case 6: printf("6. Mounth of the year is June");break;
        case 7: printf("7. Mounth of the year is July");break;
        case 8: printf("8. Mounth of the year is August");break;
        case 9: printf("9. Mounth of the year is September");break;
        case 10: printf("10. Mounth of the year is Octeber");break;
        case 11: printf("11. Mounth of the year is November");break;
        case 12: printf("12. Mounth of the year is December");break;
        default: printf("Wrong entry");
    }
}
