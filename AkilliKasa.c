#include <stdio.h>
#include <math.h>

int main() {
    float urun, odeme;
    int para, toplam = 0;
    int kupur;

    printf("Urun tutari: ");
    scanf("%f", &urun);

    printf("Odenen para: ");
    scanf("%f", &odeme);

    para = (int)round((odeme - urun) * 100);

    printf("\nPara ustu: %.2f TL\n", para / 100.0);

    kupur = para / 20000;
    printf("200 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 20000;

    kupur = para / 10000;
    printf("100 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 10000;

    kupur = para / 5000;
    printf("50 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 5000;

    kupur = para / 2000;
    printf("20 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 2000;

    kupur = para / 1000;
    printf("10 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 1000;

    kupur = para / 500;
    printf("5 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 500;

    kupur = para / 100;
    printf("1 TL: %d adet\n", kupur);
    toplam += kupur;
    para %= 100;

    kupur = para / 50;
    printf("50 kurus: %d adet\n", kupur);
    toplam += kupur;
    para %= 50;

    kupur = para / 25;
    printf("25 kurus: %d adet\n", kupur);
    toplam += kupur;
    para %= 25;

    kupur = para / 10;
    printf("10 kurus: %d adet\n", kupur);
    toplam += kupur;
    para %= 10;

    kupur = para / 5;
    printf("5 kurus: %d adet\n", kupur);
    toplam += kupur;
    para %= 5;

    kupur = para;
    printf("1 kurus: %d adet\n", kupur);
    toplam += kupur;

    printf("Toplam kupur sayisi: %d\n", toplam);

    return 0;
}