#include <stdio.h>

int main() {
    int a, b, amal;
    printf("A, B haqiqiy va amal butun sonlari kiriting: ");
    scanf("%d %d %d", &a, &b, &amal);

    switch(amal) {
        case 1:
            printf("%d + %d = %d", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d", a, b, a * b);
            break;
        case 4:
            printf("%d / %d = %d", a, b, a / b);
            break;
        default:
            printf("Noto'g'ri amal kiritilgan");
            break;
    }

    return 0;
}