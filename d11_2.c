#include <stdio.h>

int main() {
    int k, natijalar = 0;
    printf("K butun soni kiriting: ");
    scanf("%d", &k);

    if (k >= 1 && k <= 5) {
        if (k == 1) {
            printf("Yomon");
            natijalar++;
        } else if (k == 2) {
            printf("Qoniqarsiz");
            natijalar++;
        } else if (k == 3) {
            printf("Qoniqarli");
            natijalar++;
        } else if (k == 4) {
            printf("Yahshi");
            natijalar++;
        } else if (k == 5) {
            printf("Alo");
            natijalar++;
        }
    } else {
        printf("Xator");
    }

    if (natijalar == 0) {
        printf("Natijalar mavjud emas");
    } else {
        printf("Natijalar soni: %d", natijalar);
    }

    return 0;
}