#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int* niz(int n) {
//     int *b;
//     int i;
//     b = (int)malloc(n * sizeof(int)); // Alociraj memoriju na heapu
//     if (b == NULL) {
//         printf("Nije uspelo alociranje memorije\n");
//         return 1;
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("element niza: ");
//         scanf("%d", &b[i]);
//     }
//     return b;
// }
// void anagram(int a[], int b[],int n, int m){
//     int i, j, temp;
//     for (i = 0; i < n-1; i++) {
//         for (j = 0; j < n-i-1; j++) {
//             if (a[j] > a[j+1]) {
//                 // Zamjena elemenata ako su u krivom redoslijedu
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }

//     // Sortiranje niza b
//     for (i = 0; i < m-1; i++) {
//         for (j = 0; j < m-i-1; j++) {
//             if (b[j] > b[j+1]) {
//                 // Zamjena elemenata ako su u krivom redoslijedu
//                 temp = b[j];
//                 b[j] = b[j+1];
//                 b[j+1] = temp;
//             }
//         }
//     }

// int flag = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] != b[i])
//         {
//             flag = 1;
//             break;
//         }

//     }

//     if (flag !=0)
//     {
//         printf("Nisu anagram");
//     } else printf("Anagram su");

// }

// int main() {
//     int n,m;
//     scanf("%d",&n);
//     int *a = niz(n);
//     scanf("%d",&m);
//     int *c = niz(m);

// anagram(a,c,n,m);

// free(a);
// free(c); 
// int student, odgovori, pitanje, tacniOdgovori = 0;
    
//     printf("Redni broj studenta: ");
//     scanf("%d", &student);
    
//     for (pitanje = 1; pitanje <= 7; pitanje++) {
//         printf("Tani odgovori za pitanje %d: ", pitanje);
//         scanf("%d", &odgovori);
        
//         // Provera da li je student dao tačan odgovor na trenutno pitanje
//         if (odgovori / 100 == student || (odgovori / 10) % 10 == student || odgovori % 10 == student) {
//             tacniOdgovori++;
//         }
//     }
    
//     printf("Ukupno tanih odgovora: %d\n", tacniOdgovori);

//1 februarski rok 

// int x,y;
// char orjentacija,naredba;

// printf("unesite ocetne koordinate: ");
// scanf("%d%d",&x,&y);
// printf("unesite orjentaciju (S - sever, J - jug, I - istok, Z - zapad): ");
// scanf("%c", &orjentacija);

// printf("unesite naredbu za kretnju (F - napred, B - nazad, L - levo, R - desno):");
// while(scanf("%c",&naredba) == 1){
//     if(naredba == 'F'){
//         if(orjentacija == 'S'){
//             y++;
//         }else if(orjentacija == 'J'){
//             y--;
//         }else if(orjentacija == 'I'){
//             x++;
//         }else if(orjentacija == 'Z'){
//             x--;
//         }
//     }
// }
 int x, y;  
    char orijentacija; 

    printf("Unesite pocetne koordinate x i y: ");
    scanf("%d %d", &x, &y);
    printf("Unesite orijentaciju (N - sever, S - jug, E - istok, W - zapad): ");
    scanf(" %c", &orijentacija);


    printf("Unesite naredbe za kretanje (F - napred, B - nazad, L - levo, R - desno): ");
    char naredba;
    while (scanf(" %c", &naredba) == 1) {
        if (naredba == 'F') {
            if (orijentacija == 'N')
                y++;
            else if (orijentacija == 'S')
                y--;
            else if (orijentacija == 'E')
                x++;
            else if (orijentacija == 'W')
                x--;
        } else if (naredba == 'B') {
            if (orijentacija == 'N')
                y--;
            else if (orijentacija == 'S')
                y++;
            else if (orijentacija == 'E')
                x--;
            else if (orijentacija == 'W')
                x++;
        } else if (naredba == 'L') {
            if (orijentacija == 'N')
                orijentacija = 'W';
            else if (orijentacija == 'S')
                orijentacija = 'E';
            else if (orijentacija == 'E')
                orijentacija = 'N';
            else if (orijentacija == 'W')
                orijentacija = 'S';
        } else if (naredba == 'R') {
            if (orijentacija == 'N')
                orijentacija = 'E';
            else if (orijentacija == 'S')
                orijentacija = 'W';
            else if (orijentacija == 'E')
                orijentacija = 'S';
            else if (orijentacija == 'W')
                orijentacija = 'N';
        } else {
            printf("Nepoznata naredba: %c\n", naredba);
        }
    }

    printf("Krajnje koordinate: (%d, %d)\n", x, y);
    printf("Krajnja orijentacija: %c\n", orijentacija);


return 0;
}