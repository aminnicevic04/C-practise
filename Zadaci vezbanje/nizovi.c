#include <stdio.h>
#define MAX 100
int main()
{
    // 10.7. Саставити програм за израчунавање и исписивање аритметичке средине задатог низа (дужине
    // n) целих бројева. 

    // int i,n, niz[MAX], suma=0;
    // printf("Unesite broj elemenata niza: "); 
    // scanf("%d",&n);
    // printf("Unesite elemente niza: ");
    // for(i=0; i<n; i++){
    //     scanf("%d",&niz[i]);
    //     suma += niz[i];
    // }
    // printf("aritmeticka sredina = %.2f", (float)suma/n);

    // 10.8. Саставити програм који за унети низ (дужине n) целих бројева израчунава и исписуеј
    // аритметичку средину оних елемената низа који су дељиви са 3. 

// int i,n,k=0, niz[MAX];
// double suma = 0;

// printf(" Broj elemenata: ");
//  scanf("%d", &n);
//  printf(" Elementi niza: "); 

// for(i=0; i<n; i++){
//     scanf("%d",&niz[i]);
//     if(niz[i] % 3 == 0){
//         suma += niz[i];
//         k++;
//     }
// }
//  printf(" ar. sredina brojeva koji su deljivi sa 3: %.3f\n", suma/k); 

// 10.9. Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
// а) суму парних и суму непарних бројева;
// б) суму елемената са парним индексима и суму елемената са непарним индексима. 

// int i,n,niz[MAX],sumaP=0,sumaN=0;
// printf(" Broj elemenata: ");
// scanf("%d", &n);
// printf(" Elementi niza: ");
// a)

// for(i=0; i<n; i++){
//     scanf("%d",&niz[i]);
//     if(niz[i] % 2 ==0){
//         sumaP += niz[i];
//     }else{
//         sumaN += niz[i];
//     }
// }
// for(i=0;i<n;i++){
//     scanf("%d",&niz[i]);
//     if(i % 2 == 0){
//         sumaP += niz[i];
//     }else sumaN += niz[i];
// }

// 10.10. ...

// int i,n;
// double proizvod=0, niz1[MAX], niz2[MAX];
// printf(" Broj elemenata: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: "); 
//  for(i=0; i<n; i++){
//     scanf("%lf", &niz1[i]);
//  }
//  printf("Elementi niza B: ");
//  for(i=0; i<n; i++){
//     scanf("%lf",&niz2[i]);
//  }
//  for(i=0; i<n; i++){
//     proizvod += niz1[i] * niz2[i];
//  }
//  printf("Skalarni proizvod: %.2lf ",proizvod);

// int i,n,m,c, niz1[MAX], niz2[MAX], niz3[MAX];
// printf("Unesite broj elemenata prvog niza: ");
// scanf("%d",&n);
// printf("Unesite broj elemenata drugog niza: ");
// scanf("%d",&m);
// c=n+m;
// printf("NIZ 1: ");
// for(i=0; i<n; i++){
//     scanf("%d",&niz1[i]);
// }
// printf("NIZ 2: ");
// for(i=0; i<m; i++){
//     scanf("%d",&niz2[i]);
// }
// prinf("NIZ 3: ");
// // for(i=0; i<c; i++){
// //     if(i<n){ niz3[i] = niz1[i];
// //     }else niz3[i] = niz2[i-n]; // i-n da bi dobili ispravan index iz niza koji zelimo
// //     printf("%d", niz3[i]);
// // }
// //10.12 da sabira niz1[i] + niz2[i] i ubacuje u treci niz. koristimo unos nizova iz proslog zadatka.
// for(i=0; i<n;){
//     niz3[i]=niz1[i] + niz2[i];
//     pritnf("%d", niz3[i]);
// }

// 10.13. ...

// float niz1[MAX],niz2[MAX],niz3[MAX];
// int i,n;
// printf("duzina nizova: ");
// scanf("%d",&n);
// printf("Niz1: ");
// for(i=0; i<n; i++){
//     scanf("%f", &niz1[i]);
// }
// printf("Niz2: ");
// for(i=0; i<n; i++){
//     scanf("%f", &niz2[i]);
// }
// for(i=0; i<n; i++){
//     niz3[i]= pow(niz1[i],3) / 3 + 2*niz1[i]*niz2[i];
//     printf("%d",niz3[i]);
// }

// 10.14.

//  int nizA[MAX], nizB[MAX], nizC[MAX], i;
//  printf (" Elementi niza A: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%d", &nizA[i]);
//  printf (" Elementi niza B: ");
//  for(i=0; i<MAX; i++)
//  scanf ("%d", &nizB[i]);
//  printf (" Elementi niza C: "); 
// for(i=0; i<MAX; i++){
//     nizC[i]=  nizA[i] + nizB[MAX - 1 - i];
//     pritnf("%d",&nizC[i]);
// }

// 10.15
// int i,n,m,k=0,nizA[MAX],nizB[MAX],nizC[MAX];
// printf(" Broj elemenata niza A: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++){
//     scanf("%d", &nizA[i]);
//  }
//   printf(" Broj elemenata niza B: ");
//  scanf("%d", &m);
//  printf(" Elementi niza B: "); 
//  for(i=0; i<m; i++){
//     scanf("%d", &nizB[i]);
//  }
//     printf("Parni brojevi iz prvog i drugog niza: ");
//  for(i=0; i<n; i++){
//     if(nizA[i] % 2 == 0){
//     nizC[i] = nizA[i];
//     k++;
//     }
//  }
//  for(i=0; i<m; i++){
//     if(nizB[i] % 2 == 0){
//     nizC[i] = nizB[i];
//     k++;
//     }
//  }
// for(i=0; i<k; i++){
//     printf("%d", &nizC[i]);
// }

// 10.16. ...
// int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
//  printf(" Broj elemenata niza: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizA[i]);
//  printf(" Elementi niza B: ");
//  for(i=0; i<n; i++)
//  scanf("%d", &nizB[i]);
//  printf("\n Elementi niza C: "); 

// for(i=0; i<n; i++){
//     if(nizA[i] > nizB[i]){
//         nizC[i]=nizA[i];
//     }else if(nizA[i]>nizB[i]){
//         nizC[i]=nizB[i];
//     }else nizC[i] = 0;
// printf("%d",&nizC[i]);
// }

// 10.18. ....
// int i,j=0,n;
// float s=0,as,nizA[MAX],nizB[MAX];
// printf(" Broj elemenata niza A: ");
//  scanf("%d", &n); 
// printf("Unesite niz A: ");
// for(i=0; i<n; i++){
// scanf("%f",&nizA[i]);
// s+=nizA[i];
// }
// as=s/n;
// printf("\n Sredina= %.2f", as);
//  printf("\n Elementi niza B: "); 
//  for(i=0; i<n; i++){
//     if(nizA[i]>as){
//         nizB[j]  = nizA[i];
//         pritnf("%.2f", nizB[j]);
//         j++; 
//     }
//  }

// 10.19. ...
// int n,i,s=0,nizA[MAX],nizB[MAX];
// pritnf("n= ");
// scanf("%d",&n);
// printf("Niz A: ");
// for(i=0;i<n;i++){
//     scanf("%d",nizA[i]);
//     s+=nizA[i];
//     nizB[i]=s;
// }

// 10.34. ... okretanje niza
// int a[MAX], i, n;
//  printf(" Broj elemenata niza: ");
//  scanf("%d", &n);
//  printf(" Elementi niza A: ");
//  for(i=0; i<n; i++)
//  scanf("%d",&a[i]);
//  printf("\n Elementi niza B: "); 
// for(i=n-1; i>=0; i--){
//     printf("%d", a[i]);
// }

// 10.35. ...
//  int niz[MAX], i, n, pom;
//  printf(" Broj elemenata niza: ");
//  scanf("%d", &n);
//  printf(" Elementi niza: ");
// for(i=0; i<n; i++){
//  scanf("%d",&niz[i]); 
// }
// for(i=0; i<n-1; i++){
//     niz[i]=niz[i+1];
// niz[n-1] = pom;
// }
// printf("Novi niz: ");
// for(i=0; i<n; i++){
//     printf("%d",niz[i]);
// }

// 10.38. Саставити програм који за унети низ целих бројева дужине n формира и приказује нови низ
// који је састављен од елемената без понављања унетог низа. 

// int i,j,n,a[MAX], nadjen;
// pritnf("n= ");
// scanf("%d",&n);
// pritnf("unesite elemente niza: ");
// for(i=0; i<n; i++){
//     scanf("%d",&a[i]);
// }
// printf("\n Novi niz: "); 
// for(i=0; i<n-1; i++){
//     nadjen = 0;
//     for(j=0; j<n; j++){
//         if(a[i] == a[j]){
//             nadjen = 1;
//             break;
//         }
//         if(!nadjen){
//             printf("%d",a[i]);
//         }
//     }
//     printf("%d", a[n-1]);
// }

getchar();
 return 0;
}
