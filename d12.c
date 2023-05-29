#include <stdio.h>

int main() {
    int raqam;
    printf("Raqam kiriting: ");
    scanf("%d", &raqam);

    switch(raqam) {
        case 0:
            printf("nol");
            break;
        case 1:
            printf("bir");
            break;
        case 2:
            printf("ikki");
            break;
        case 3:
            printf("uch");
            break;
        case 4:
            printf("tort");
            break;
        case 5:
            printf("besh");
            break;
        case 6:
            printf("olti");
            break;
        case 7:
            printf("yetti");
            break;
        case 8:
            printf("sakkiz");
            break;
        case 9:
            printf("toq");
            break;
        default:
            printf("Noto'g'ri raqam kiritilgan");
            break;
    }

    return 0;
}