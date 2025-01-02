// TAMAMLANDI (parçalar)
// 4- Üçgen şekli yazdıran kod
#include <stdio.h>
void dikUcgen (int x);
void tersDikUcgen (int x);
void ucgen (int x);

int main (void) {
    int userInput;
    printf("Kullanici girdisini giriniz: "); scanf("%d", &userInput);

    dikUcgen(userInput);
    tersDikUcgen(userInput);
    ucgen(userInput);
}

void dikUcgen (int x) {
    int i, j;

    for (i = 1; i <= x; i++) {
        for (j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

void tersDikUcgen (int x) {
    int i, j;

    for (i = x; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

void ucgen (int x) {
    int i, j, bosluk;
    for (i = 1; i <= x; i++) {
        for (bosluk = 1; bosluk <= x - i; bosluk++) {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++) {
            printf("#");
        }

        printf("\n");
    }
}