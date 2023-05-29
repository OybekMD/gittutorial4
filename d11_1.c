#include <stdio.h>

int main() {
    int son;
    printf("1-7 gacha bo'lgan butun sonni kiriting: ");
    scanf("%d", &son);

    switch(son) {
        case 1:
            printf("Dushanba");
            break;
        case 2:
            printf("Seshanba");
            break;
        case 3:
            printf("Chorshanba");
            break;
        case 4:
            printf("Payshanba");
            break;
        case 5:
            printf("Juma");
            break;
        case 6:
            printf("Shanba");
            break;
        case 7:
            printf("Yakshanba");
            break;
        default:
            printf("Noto'g'ri son kiritilgan");
            break;
    }

    return 0;
}