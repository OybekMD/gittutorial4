#include <stdio.h>
#include <string.h>

int main() {
    char oy;
    printf("Oy raqamini kiriting: ");
    scanf("%s", oy);

    switch(oy) {
        case '1':
            printf("Kunlar: 31");
            break;
        case '2':
            printf("Kunlar: 28");
            break;
        case '3':
            printf("Kunlar: 31");
            break;
        case '4':
            printf("Kunlar: 30");
            break;
        case '5':
            printf("Kunlar: 31");
            break;
        case '6':
            printf("Kunlar: 30");
            break;
        case '7':
            printf("Kunlar: 31");
            break;
        case '8':
            printf("Kunlar: 31");
            break;
        case '9':
            printf("Kunlar: 30");
            break;
        case '10':
            printf("Kunlar: 31");
            break;
        case '11':
            printf("Kunlar: 31");
            break;
        case '12':
            printf("Kunlar: 31");
            break;
        default:
            printf("Noto'g'ri oy raqami kiritilgan");
            break;
    }

    return 0;
}