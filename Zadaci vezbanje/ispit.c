#include <stdio.h>

int main() {
    int x, y;
    char orijentacija;
    char naredba;

    // Unos pocetnih koordinata i orijentacije
    printf("Unesite pocetne koordinate x i y: ");
    scanf("%d %d", &x, &y);
    printf("Unesite orijentaciju (n, s, e, w): ");
    scanf(" %c", &orijentacija);

    // Unos naredbi i izracun krajnjih koordinata
    while (scanf(" %c", &naredba) == 1) {
        switch (naredba) {
            case 'n':
                y++;
                break;
            case 's':
                y--;
                break;
            case 'e':
                x++;
                break;
            case 'w':
                x--;
                break;
            default:
                printf("Nepoznata naredba: %c\n", naredba);
        }
    }

    // Ispis krajnjih koordinata
    printf("Krajnje koordinate: (%d, %d), orijentacija: %c\n", x, y, orijentacija);

    return 0;
}