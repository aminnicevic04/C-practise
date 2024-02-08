#include <stdio.h>
#include <stdlib.h>

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
FILE *dato;
int najmanji,najveci,broj;
dato = fopen("brojevi.txt", "r"); //otvaranje radi  citanja podataka iz fajla
if(dato == NULL){
    pritnf("greska");
    exit(1);
}

fscanf(dato, "%d", &broj); //citamo prvu vrednost i smestamo u varijablu broj
najmanji = broj;
najveci = broj;
while(scanf(dato, "%d",&broj) != EOF){
    if(broj>najmanji) najmanji = broj;
    if(broj<najveci) najveci = broj;
}
fclose(dato);
printf("\n Najmanji je broj: %d", najmanji); 
printf("\n Najveci broj: %d", najveci); 

getchar();
return 0;
}