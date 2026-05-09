#include <stdio.h>

int getDaysInMonth(int month) {
    int days;

    switch (month) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            days = 31;
            break;
        case 4:
        case 6: 
        case 9:
        case 11: 
            days = 30;
            break;
        case 2: 
            days = 28; 
            break;
        default:
            return -1; 
    }

    return days;
}

int main() {
    int month;
    scanf("%d", &month);

    int days = getDaysInMonth(month);
    if (days != -1) printf("%d", days);
    else printf("Invalid!");

    return 0;
}