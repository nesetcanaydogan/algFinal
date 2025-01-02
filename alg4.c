// TAMAMLANDI
// 5- Dizideki tek indisleri büyük, çift indisleri küçük karaktere çeviren program
#include <stdio.h>

int main (void) {
    // Gerekli Değişkenlerin Bildirimi
    char text[20]; int counter;

    // Metni Kullanıcıdan Alınması ve Ekrana Yazdırılması
    printf("20 karakterlik bir metin girin: "); fgets(text, sizeof(text), stdin);
    printf("%s", text);

    // Çift indisleri küçük karaktere çevirme
    for (counter = 0; counter < sizeof(text); counter += 2) {
        if (text[counter] > 64 && text[counter] < 91) text[counter] += 32;
    }
    // Tek indisleri büyük karaktere çevirme
    for (counter = 1; counter < sizeof(text); counter += 2) {
        if (text[counter] > 96 && text[counter] < 123) text[counter] -= 32;
    }

    // Metnin son halinin ekrana yazdırılması
    printf("%s", text);

    return 0;
}