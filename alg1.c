// 2- 200'lük dizide en çok tekrar eden karakteri bulan fonksiyon
#include <stdio.h>

int main (void) {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charCounter[36];
    char text[20]; int counter;

    printf("Rakamlar ve harflerden olusan bir metin girin: ");
    fgets(text, sizeof(text), stdin);
    printf("%s\n", text);
    for (counter = 0; text[counter] != '\n'; counter++) {
        
    }
}