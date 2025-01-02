// TAMAMLANDI
// 3- Öğrencilerin bilgileri, ders kodları ve notlarını -3 tane- kaydeden program
#include <stdio.h>

// Yapıların Tanımı
typedef struct
{
    int dersKodu;
    int vizeNotu;
    int finalNotu;
} dersler;

typedef struct
{
    char isim[24];
    char soyisim[20];
    int numara;
    dersler ders[3];
} ogrenci;


int main (void) {
    // Gerekli Değişkenlerin Bildirimi
    ogrenci ogrenciler[3]; int i, j; char temp;

    // Ad, Soyad, Öğrenci No Bilgilerinin Alınması [Tek döngüde 5 öğrenci]
    for (i = 0; i < 3; i++) {
        printf("%d. ogrencinin adini giriniz: ", i + 1); fgets(ogrenciler[i].isim, sizeof(ogrenciler[0].isim), stdin);
        printf("%d. ogrencinin soyadini giriniz: ", i + 1); fgets(ogrenciler[i].soyisim, sizeof(ogrenciler[0].soyisim), stdin);
        printf("%d. ogrencinin numarasini giriniz: ", i + 1); scanf("%d", &ogrenciler[i].numara); temp = getchar();
    }

    // İlk Öğrenci İçin Ders Kodlarının Tanımlanması ve Diğer Öğrencilere Kopyalanması
    for (i = 0; i < 3; i++) {
        printf("%d. dersin kodunu giriniz: ", i + 1); scanf("%d", &ogrenciler[0].ders[i].dersKodu); temp = getchar();
        for (j = 1; j < 3; j ++) {
            ogrenciler[j].ders[i].dersKodu = ogrenciler[0].ders[i].dersKodu;
        }
    }

    // Ders Kodları sırasına Göre Her Öğrenci İçin Vize, Final Notlarının Tanımlanması
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d numarali ogrencinin %d kodlu dersinin vize notu: ", ogrenciler[i].numara, ogrenciler[i].ders[j].dersKodu); scanf("%d", &ogrenciler[i].ders[j].vizeNotu);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d numarali ogrencinin %d kodlu dersinin final notu: ", ogrenciler[i].numara, ogrenciler[i].ders[j].dersKodu); scanf("%d", &ogrenciler[i].ders[j].finalNotu);
        }
    }

    // Öğrenci bilgilerinin ve geçme notlarının sırasıyla ekrana yazdırılması
    for (i = 0; i < 3; i++) {
        printf("\t%d numarali ogrencinin derslerdeki gecme notlari:\n", ogrenciler[i].numara);
        for (j = 0; j < 3; j++) {
            printf("%d kodlu dersin gecme notu: %.2f\n", ogrenciler[i].ders[j].dersKodu, (ogrenciler[i].ders[j].vizeNotu * .4 + ogrenciler[i].ders[j].finalNotu * .6));
        }
    }
}