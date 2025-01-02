// TAMAMLANDI
// 1- Dijital olarak girilen saatin akrep ile yelkovanı arasındaki açıyı hesaplayan kod
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    // Gerekli Değişkenlerin Bildirimi
    int akrep, yelkovan, value;

    // Akrep, yelkovan değerlerinin kullanıcıdan alınması ve doğruluğunun kontrol edilmesi
    printf("Akrepin isaret ettigi tam sayi degerini giriniz: "); scanf("%d", &akrep);
    if (akrep > 24) {
        printf("Gecersiz saat degeri. Program kapatiliyor...\n");
        return 1;
    }
    printf("Yelkovanin isaret ettigi tam sayi degerini giriniz: "); scanf("%d", &yelkovan);
    if (yelkovan > 24) {
        printf("Gecersiz saat degeri. Program kapatiliyor...\n");
        return 1;
    }

    // Saat değerlerinin 12'den büyük olması durumunun kontrol edilmesi
    if (yelkovan > 12) yelkovan -= 12;
    if (akrep > 12) akrep -= 12;

    // Aradaki açının hesaplanması
    value = abs ((akrep - yelkovan) * 30);

    // 180'den büyük açıların kontrolü ve düzeltilmesi
    if (value > 180) value = 360 - value;
    printf("Akrep ile yelkovan arasindaki dar, dik veya genis aci: %d\n", value);
}