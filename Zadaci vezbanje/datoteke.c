#include <stdio.h>
#include <stdlib.h>

typedef struct artikli{
 int barKod;
 char ime[30];
 float cena;
} ARTIKLI; 

int main(){
//5.1
// int i,br;

// FILE *dato;
// dato = fopen("podaci.txt", "w"); //otvaranje fajla -w- upis od pocetka 

// if(dato == NULL){
//     printf( "Greska u otvaranju fajla");
//     exit(1);
// }

// for(i=1;i<=10;i++){
//     fprintf(dato, "%d\n",i); //upisujemo brojeve u fajl
// }

// fclose(dato);//zatvaramo fajl

// dato = fopen("podaci.txt", "r"); //otvaranje radi citanja podataka iz fajla

// if(dato==NULL){
//     printf("\n Greska prilikom otvaranja datoteke podaci.txt za citanje!\n");
//     exit(1);
// } 

// while(1){
//     fscanf(dato, "%d", &br); //citamo broj iz fajla i smestamo u varijablu br

//     if(feof(dato)) break; //proverava da li je stigao do kraja fajla

//     printf("Procitano: %d\n",br); //izlistavanje pročitanog broja
// }

// fclose(dato); // zatvaramo fajl 

// 5.2
// FILE *dato;

// if((dato =fopen("podaci2.txt","a")) == NULL){ //prvo otbvara pa proverava da li je otvoren fajl
//     printf("greska pri otvaranju");
//     exit(1);
// }else printf("otvoreno");
// fprintf(dato,"pozdrav svima"); //upisujemo u fajl
// fclose(dato); //zatvaramo fajl

//5.3
// FILE *dato;
// int najmanji,najveci,broj;
// dato = fopen("brojevi.txt", "r"); //otvaranje radi  citanja podataka iz fajla
// if(dato == NULL){
//     printf("greska");
//     exit(1);
// }

// fscanf(dato, "%d", &broj); //citamo prvu vrednost i smestamo u varijablu broj
// najmanji = broj;
// najveci = broj;
// while(fscanf(dato, "%d",&broj) != EOF){
//     if(broj>najmanji) najmanji = broj;
//     if(broj<najveci) najveci = broj;
// }
// fclose(dato);
// printf("\n Najmanji je broj: %d", najmanji); 
// printf("\n Najveci broj: %d", najveci); 

// 5.4
// int broj, i;
// FILE *a,*b;
// a=fopen("BrojeviStari.txt", "r");
// if(a == NULL) printf("greska pri otvaranju"); exit(1);
// b = fopen("BrojeviNovi.txt", "w");
// if(b == NULL) printf("greska pri otvaranju"); exit(1);

// while(fscanf(a,"%d",&broj) != EOF){
//     if(i % 2 == 0) fprintf("BrojeviNovi.txt","%d\n",broj);
//     else fprintf("BrojeviNovi.txt","%d\n",broj*2);
//     i++;
// }
// fclose("a");
// fclose("b");

// 5.5
// FILE *x,*y;
// int broj,ind,pom,cif;
// fopen("brojeviX.txt", "r");
// if(x == NULL) printf("greska"); exit(1);
// fopen("brojeviY.txt","w");
// if(y == NULL) printf("greska2"); exit(1);

// while(fscanf("x","%d",&broj) != EOF){
//         ind = 1;
//         pom = broj;
//         while(broj != 0){
//             cif = pom % 10;
//             if(cif != 3 || cif != 5 ){
//                     ind=0;
//                     pom /= 10;
//             }
//             if(ind && broj != 0){
//                 printf(y,"%d",broj);
//             }
//         }
//     }
// fclose(x);
// fclose(y);

//5.6
    // FILE *dato ;
    // dato = fopen("podaci.txt","w");
    // if(dato == NULL) printf("greska"); exit(1);
    // fprintf(dato, "ovo je datoteka\n");
    // fprintf(dato, "%d + %d = %d",4,7,11);
    // fputc("A",dato);
    // fputs("kraj datoteke",dato);
    // fclose(dato);

// 5.7
// FILE *dato;
// dato = fopen("podaci6.txt","r");
// if(dato == NULL) printf("greska"); exit(1);
// int brZnakova=0,brRedova=1;
// long znak;
// while(znak = fgetc(dato) == EOF){
//     if(znak == "\n") brRedova++;
//     brZnakova++;
// }
// fclose(dato);
// pritnf("broj znakova: %d",brZnakova);
// pritnf("broj redova: %d",brRedova);

// 5.8
// FILE *dato;
// char str[20];
// dato=fopen("podaci6.txt","r");
// if(dato==NULL){
//  printf("\n Greska pri otvaranju datoteke!");
//  exit(1);
// }
// while(fgets(str,20,dato) != NULL){
//     puts(str);
// }
// fclose(dato);

// 5.13
// FILE *dato;
// dato = fopen("podaci13.txt","w");
// if(dato == NULL) printf("greska"); exit(1);
// fputs("pozdrav svima",dato);
// fseek(dato,10,SEEK_SET);
// fputs("etu",dato);
// fclose(dato);

// 5.14
// FILE *ulaz, *izlaz;
// ulaz = fopen("podaci14.txt","w");
// if(ulaz == NULL) printf("greska"); exit(1);
// int broj,suma=0;

// printf("unesite tri broja: ");
// for(int i=0;i<3;i++){
//     scanf("%d",&broj);
//     fprintf(ulaz,"%d",broj);
// }
// fclose(ulaz);
// getchar();

// izlaz = fopen("podaci14.txt","r");
// if(izlaz == NULL) printf("greska pri izlazu"); exit(1);
// for(int i=0;i<3;i++){
//     fscanf(izlaz,"%d",&broj);
//     suma+=broj;
// }
// printf("\n Suma brojeva u datoteci: %d",suma); 
// fclose(izlaz);

//4.15
// FILE *dato;
// dato = fopen("podaci15.txt", "r");
// if(dato==NULL){
//  printf("\n Greska pri otvaranju datoteke!");
//  exit(1);
//  }
// int ocena,brOcena,suma,i;
// float aritmeticka;
// char Ime[20];
// char Prezime[20];

// while(fscanf(dato,"%s",Ime) != EOF){
//     fscanf(dato,"%s",Prezime);
//     brOcena = 0;
//     aritmeticka = 0.0;
//     suma = 0;
//     while(!feof(dato) && fscanf(dato,"%d",&ocena) > 0){
//         brOcena++;
//         suma += ocena;
//     }
//         aritmeticka = suma / brOcena;
//     printf("%s %s %.2f\n", Ime, Prezime, aritmeticka); 
// }

// 5.32
// ARTIKLI artikal[100];
// int i = 0;
// FILE *dato;
// dato = fopen("proizvodi.txt","r");
// if(dato == NULL) {
//     printf("greska"); exit(1);
// }
// printf("\n Proizvodi sa cenom nizom od 500 din:\n"); 
// while(1){
//     fscanf(dato, "%d%s%f", &artikal[i].barKod,&artikal[i].ime,&artikal[i].cena);
//     if(feof(dato)) break;

//     if(artikal[i].cena<500){
//         printf("%d %s %f",artikal[i].barKod,artikal[i].ime,artikal[i].cena);
//         i++;
//     }
// }
// fclose(dato);



getchar();
return 0;
}