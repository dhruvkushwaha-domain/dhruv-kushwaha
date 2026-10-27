#include <stdio.h>

int main() {
    int year;

    printf("2028");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d ek Leap Year hai!\n", year);
    } else {
        printf("%d Leap Year nahi hai.\n", year);
    }

    return 0;
}