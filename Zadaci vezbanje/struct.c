#include <stdio.h>
#include <math.h>
#define MAX 100

struct datum{ //4.2 a
 int dan;
 int mesec;
 int godina;
} dan;

struct licnost{ //4.2 b
    char ime[30];
    char prezime[30];
    int plata;
};
struct licnost1{ //4.3
 char ime[30];
 char adresa[50];
 int starost;
}; 
//4.6 
struct tacka{
    float x;
    float y;
};
double Rastojanje(struct tacka t1, struct tacka t2){ //fnkc za rastojanje tacaka
return sqrt((t1.x-t2.x)*(t1.x-t2.x) + (t1.y-t2.y)*(t1.y-t2.y));
};
void odstampaj(struct tacka t){
    printf(" (%.2f, %.2f)\n",t.x,t.y);
};

//4.7
struct datum1{
    int dan,mesec,godina;
};
typedef struct studenti{
    char ime[15];
    char prezime[20];
    int ocena;
}STUDENTI;
int main(){
// 4.3 a)
//  int d,m,g;
//  printf("\n Dan: ");
//  scanf("%d",&d);
//  printf(" Mesec: ");
//  scanf("%d",&m);
//  printf(" Godina: ");
//  scanf("%d",&g); 
//  dan.dan = d;
//  dan.mesec = m;
//  dan.godina = g;
//  printf("\n danasnji dan je %d.%d.%d ",dan.dan,dan.mesec,dan.godina);

// b)
// struct licnost radnik;
// printf( "Unesite ime i prezime: \n");
// scanf ("%s %[^\n]s", &radnik.ime, &radnik.prezime);
// printf("plata: ");
// scanf("%d",&radnik.plata);
// printf("\n Radnik %s %s zaradjuje %d DIN.",radnik.ime, radnik.prezime, radnik.plata);

// 4.3

// struct licnost1 osobal, osoba2, s;
//  printf("\n -OSOSBA 1-");
//  printf("\n Ime i prezime: ");
//  gets(osobal.ime);
//  printf(" Adresa: ");
//  gets(osobal.adresa);
//  printf(" Starost: ");
//  scanf("%d",&osobal.starost);
//  while (getchar()!='\n');
//  printf("\n -OSOSBA 2-");
//  printf("\n Ime i prezime: ");
//  gets(osoba2.ime);
//  printf(" Adresa: ");
//  gets(osoba2.adresa);
//  printf(" Starost: ");
//  scanf("%d",&osoba2.starost);
//  if(osobal.starost > osoba2.starost)
//  s=osobal;
//  else s=osoba2;
//  printf ("\n Starija osoba:\n" );
//  printf(" %s, %s, star:%d.\n",s.ime,s.adresa,s.starost);

// 4.6
// struct tacka t1, t2;
// printf("\n Koordinate prve tacke: "); 
// scanf("%f",&t1.x);
// scanf("%f",&t1.y);
// printf(" Koordinate druge tacke: "); 
// scanf("%f",&t2.x);
// scanf("%f",&t2.y);
// odstampaj(t1);
// odstampaj(t2);
// printf("\n d = %.2f\n", Rastojanje(t1, t2)); 

//4.7
// int brDana[] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
// struct datum danas,sutra;
// int ok = 0;
// while(ok==0){
//     printf("\n Unesite trenutnu godinu: "); 
//     scanf("%d", &danas.godina);
//     if(danas.godina < 0){
//         printf("pogresna godina \n");
//     }else ok = 1;
// } 
// if((sutra.godina%4 == 0 && sutra.godina % 100 != 0  || sutra.godina % 4 == 0) == 1){
//     brDana[1] = 29;
// }
// ok = 0;

// while(ok == 0){
//     printf(" Unesite trenutni mesec (1-12): ");
//     scanf("%d", &danas.mesec );
//     if((danas.mesec < 1) || (danas.mesec > 12)){
//         printf("pogresan mesec \n");
//     }else ok == 1;
// }
// ok = 0;
// while(ok == 0){
//     printf(" Unesite današnji dan u mesecu (1-%d): ", brDana[danas.mesec-1]); 
//     scanf("%d",&danas.dan);
//     if((danas.dan<1) || (danas.dan > brDana[danas.mesec - 1])){
//         printf("pogresan dan ");
//     }else ok == 1;
// }
// sutra = danas;
// sutra.dan++;
// if(sutra.dan > brDana[sutra.mesec-1]){
//     sutra.dan=1;
//     sutra.mesec++;
//         if(sutra.mesec>12){
//             sutra.godina++;
//             sutra.mesec=1;
//  }
// }
// printf("\n Sutrašnji datum: %02d:%02d:%04d\n",sutra.dan, sutra.mesec, sutra.godina ); 

// 4.19

// struct datum1 niz[5];
// int i;
// for(i=0;i<5;i++){
//     printf(" Unesite datum (dan:mesec:godinu): "); 
//     scanf("%d:%d:%d",&niz[i].dan,&niz[i].mesec,&niz[i].godina);
// }
// printf("\n Uneti datumi:\n"); 
// for(i=0;i<5;i++){
//     printf(" %d:%d:%d",niz[i].dan,niz[i].mesec,niz[i].godina);
// }

// 4.28

STUDENTI Student[MAX],pom;
int n,i,j;
printf("\n Unesite broj studenata: ");
scanf("%d", &n); 

for(i=0;i<n;i++){
    printf("\n Unesite podatke studenta br.%d:\n", i+1); 
    printf(" Ime: "); 
    scanf("%s",&Student[i].ime);
    printf(" Prezime: "); 
    scanf("%s",&Student[i].prezime);
    while(getchar() != '\n');
    printf(" Ocena: "); 
    scanf("%d",&Student[i].ocena);
}
for(i=0;i<n-1;i++){
    for(j=0;j<n;j++){
        if(Student[i].ocena < Student[j].ocena){
            pom = Student[i];
            Student[i] = Student[j];
            Student[j] = pom;
        }
    }
    printf("\n Sortiran niz:\n"); 
    for(i=0;i<n;i++){
        printf(" %s %s %d \n",Student[i].ime,Student[i].prezime,Student[i].ocena);
    }

}

 getchar();
 return 0;
}
