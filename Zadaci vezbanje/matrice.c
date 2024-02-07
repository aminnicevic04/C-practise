#include <stdio.h>
#define MAX 100

void Citaj(int mat[MAX][MAX], int n, int m){
 int i, j;
 for(i=0; i<n; i++)
 for(j=0; j<m; j++){
 printf(" element[%d][%d] = ", i, j);
 scanf("%d", &mat[i][j]);
 }
}
void Pisi(int mat[MAX][MAX], int n, int m){
 int i, j;
 for (i=0; i<n; i++){
 for(j=0; j<m; j++)
 printf(" %3d",mat[i][j]);
 printf("\n");
 }
} 

int main()
{
    // 11.12 声明变量并赋值
// int i,j,m,n,mat[MAX][MAX];

// printf(" Vrsta m= ");
// scanf("%d", &m);
// printf(" Kolona n= ");
// scanf("%d", &n);
// for(i=0; i<m; i++){
//     for(j=0; j<n;j++){
//         printf("element [%d][%d]= ",i,j); 
//         scanf("%d",&mat[i][j]);
//     }
// }
// printf("\n Uneta matrica: \n");
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf(" %d", mat[i][j]);
//         printf("\n"); 
//     }
// }

// 11.2
// int i,j,n,s=0, mat[MAX][MAX];
// printf(" n= ");
//  scanf("%d", &n);
//  printf(" Elementi:\n"); 
//  for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&mat[i][j]);
//     }
//  }
//  for(i=0; i<n;i++){
//     for(j=0; j<n; j++){
//         s+=mat[i][j]; 
//     }
//  }
//  printf("\n suma= %d", s);

// 11.3. Саставити програм који учита матрицу димензија mхn, а затим врши сабирање елемената
// који су парни бројеви. На крају исписати суму парних бројева и број елемената који су једнаки нули.
// Елементи матрице су цели бројеви од 0 до 9. 

// int i,j,n,m,s=0,nule=0,mat[MAX][MAX];
// printf(" m= ");
//  scanf("%d",&m);
//  printf(" n= ");
//  scanf("%d", &n); 

// for(i=0; i<n; i++){
//     for(j=0; j<m; j++){
//         scanf("%d",&mat[i][j]);
//     }
// }
// for(i=0;i<n;i++){
//     for(j=0;j<m;j++){
//         if(mat[i][j] % 2 == 0) s+=mat[i][j];
//         if(mat[i][j] == 0) nule++;
//     }
// }

// printf("\n Suma parnih elemenata: %d", s);
// printf("\n Broj elemenata jednakih nuli: %d", nule); 

// 11.4.
// int i, j, n, m, mat1[MAX][MAX], mat2[MAX][MAX];
//  printf(" m= ");
//  scanf("%d", &m);
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n Elementi prve matrice: \n"); 
//  for(i=0; i<m; i++){
//     for(j=0;i<n;i++){
//         scanf("%d",&mat1[i][j]);
//     }
//  }
//  printf("\n Elementi druge matrice: \n"); 
//  for(i=0; i<m; i++){
//     for(j=0;i<n;i++){
//         scanf("%d",&mat2[i][j]);
//     }
//  }
//  for(i=0;i<m; i++){
//     for(j=0;j<n;j++){
//         printf(" %d",mat1[i][j] + mat2[i][j]);
//         printf("/n");
//     }
//  }

// 11.5.
// int i,j,n,s1,s2,mat[MAX][MAX];
// printf("unesite n: ");
// scanf("%d",&n);
// printf(" Elementi:\n"); 

// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&mat[i][j]);
//         pritnf("\n");
//     }
// }
// printf("elementi glavne dijagona: ");
// for(i=0; i<n; i++){
//     printf("%d ",mat[i][i]);
//     s1+=mat[i][i];
// }
// printf("suma glavne dijagonale: %d",s1);
// printf("\n elementi sporedne dijagonale: ");
//  for(i=0; i<n; i++){
//     printf("%d", mat[i][n-i-1]);
//     s2+=mat[i][n-i-1];
//  }
// printf("suma sporedne dijagonale: %d",s2);

// 11.6.
// int i,j,n,s=0,mat[MAX][MAX];
// printf(" n= ");
// scanf("%d", &n);
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&mat[i][j]);
//     }
// }
//  printf("\n Uneta matrica:\n"); 

//  //pravilno ispisavnje matrice
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         printf(" %d",mat[i][j]);
//     }
//         printf("\n");
// }
// printf("suma elemenata vrste: ");
// for(i=0; i<n;i++){
//     for(j=0;j<n;j++){
//         s+=mat[i][j];
//     }
//     printf(" %d",s);
// }

// 11.7. ...

//  int i, j, n, m, vrsta, s=0, mat[MAX][MAX];
//  printf(" m= ");
//  scanf("%d", &m);
//  printf(" n= ");
//  scanf("%d", &n);
//  for(i=0; i<m; i++)
//  for(j=0; j<n; j++)
//  {
//  printf(" element[%d][%d] = ", i, j);
//  scanf("%d", &mat[i][j]);
//  }
//  printf("\n Uneta matrica:\n");
//  for(i=0; i<m; i++){
//     for(j=0;j<n;j++){
//         printf(" %d",mat[i][j]);
//     }
//         printf("\n");
//  }
// printf("\n Redni broj vrste ciji zbir elemenata zelite: "); 
// scanf("%d",&vrsta);
// for(j=0;j<n;j++){
//     s +=mat[vrsta-1][j]; //sabiranje odgovarajuceg reda
// }
//  printf("\n Zbir elememenata %d. vrste: %d", vrsta, s); 

// 11.8. ...
// int i,j,m,n,a[MAX][MAX];
//  printf(" m= ");
//  scanf("%d", &m);
//  printf(" n= ");
//  scanf("%d", &n);
//  printf(" Matrica:\n"); 

// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",a[i][j]);
//     }
// }
// for(j=0; j<n;j++){
//     if(j%2 == 0){ 
//         for(i=0;i<m;i++){ //citanje delivih kolona odozdo na dole
//             printf("%d",a[i][j]);
//         }
//     }else {
//         for(i=m-1; i>=0; i--){ //citanje nedeljivih kolona odozgo na dole
//             printf("%d",a[i][j]);
//         }
//     }
// }

// 10.9. ...
// int i,j,n;
// float a[MAX][MAX];
// printf( "Unesite dimenziju matrice: ");
// scanf("%d",&n);
// printf("matrica: \n");
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%f",&a[i][j]);
//     }
// }
// for(i=0;i<n;i++){
//     if(a[i][i] != 0){
//         for(j=0;j<n;j++){
//             a[i][j] /= a[i][i];
//         }
//     }else {
//         for(j=0;j<n;j++){
//             a[i][j] = 0;
//             a[i][i] = 1;
//         }
//     }
// }
// printf("nova matrica: \n");
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         printf(" %.2f",a[i][j]);
//     }
//     printf("\n");
// }

// 10.10. ...

//  int i, j, n, x, a[MAX][MAX];
//  printf(" x= ");
//  scanf("%d",&x);
//  printf(" n= ");
//  scanf("%d", &n);

//  printf("\n Uneta matrica: \n");
//  for(i=0; i<n; i++)
//  for(j=0; j<n; j++)
//  scanf("%d",&a[i][j]);

//  for(i=0; i<n; i++)
//  for(j=0; j<n; j++){
//  if(i>j) a[i][j]+=x; //ispod glavne dijagonale matrice
//  if(i<j) a[i][j]+=2*x; //iznad glavne dijagonale matrice
//  }

//  printf("\n Nova matrica:\n");
//  for(i=0; i<n; i++){
//  for(j=0; j<n; j++)
//  printf(" %d",a[i][j]);
//  printf("\n");
//  }

// 11.11. zameniti redove matrica koje korisnik unese
// int i, j, n, m, k1, k2, pom, a[MAX][MAX];
//  printf(" m= ");
//  scanf("%d", &m);
//  printf(" n= ");
//  scanf("%d", &n);

//  for(i=0; i<m; i++)
//  for(j=0; j<n; j++){
//  printf(" element[%d][%d] = ", i, j);
//  scanf("%d", &a[i][j]);
//  }

//  printf("\n Zadata matrica:\n"); 
// for(i=0; i<m; i++){
//  for(j=0; j<n; j++)
//  printf(" %d", a[i][j]);
//  printf("\n");
//  }

//  do{
//  printf("\n Redni broj kolona za zamenu: ");
//  scanf("%d%d", &k1, &k2);
//  }
//  while(k1<1 || k1>n || k2<1 || k2>n); //odredjivanje uslova za tacan unos od 1-3
//  for(i=0; i<n; i++){
//  pom=a[i][k1-1]; //pomocna cuva matricu
//  a[i][k1-1]=a[i][k2-1]; //ovde se menjaju redovi i-kolona k-red(J)
//  a[i][k2-1]=pom; //vraca na pomocnu
//  }

//  printf("\n Nova matrica:\n");
//  for(i=0; i<m; i++){
//  for(j=0; j<n; j++)
//  printf(" %d", a[i][j]);
//  printf("\n");
//  }

// 11.12 uneti matricu nxn i napraviti njenu transponovanu
// int i, j, n, pom, mat[MAX][MAX];
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n");

//  for(i=0; i<n; i++)
//  for(j=0; j<n; j++){
//  printf(" element[%d][%d] = ", i, j);
//  scanf("%d", &mat[i][j]);
//  }

//  printf("\n Zadata matrica: \n");
//  for(i=0; i<n; i++){
//  for(j=0; j<n; j++)
//  printf(" %d",mat[i][j]);
//  printf("\n");
//  }

// for(i=0; i<n-1; i++)
//  for(j=i+1; j<n; j++)
//  {
//  pom=mat[i][j]; //cuva u pomocnu celu matricu
//  mat[i][j]=mat[j][i]; // menjakolone i redove trenutnoj matrici
//  mat[j][i]=pom; // vraca u pomocnu
//  }

//  printf ("\n Transponovana matrica:\n");
//  for(i=0; i<n; i++)
//  {
//  for(j=0; j<n; j++)
//  printf(" %d",mat[i][j]);
//  printf("\n");
//  } 

// 11.13 //najveci i najmanji element iz  svakog reda i kolone matrice
// int i, j, n, a[MAX][MAX];
//  int maxv[MAX], minv[MAX], maxk[MAX], mink[MAX];
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n");
//  for(i=0; i<n; i++)
//  for(j=0; j<n; j++){
//  printf(" element[%d][%d] = ", i, j);
//  scanf("%d", &a[i][j]);
//  }

//  printf("\n Zadata matrica: \n");
//  for(i=0; i<n; i++){
//  for(j=0; j<n; j++)
//  printf(" %d",a[i][j]);
//  printf("\n");
//  } 

//  for(i=0; i<n; i++){
//  minv[i]=a[i][0];
//  maxv[i]=a[i][0];
//  mink[i]=a[0][i];
//  maxk[i]=a[0][i];
//  for(j=1; j<n; j++){
//  if(a[i][j]<minv[i]) minv[i]=a[i][j]; //inicijalizovanje niza za redove
//  if(a[i][j]>maxv[i]) maxv[i]=a[i][j];
//  if(a[j][i]<mink[i]) mink[i]=a[j][i]; //inicijalizvoanje niza za kolone
//  if(a[j][i]>maxk[i]) maxk[i]=a[j][i];
//  }
//  }
//  printf("\n Najveci u vrstama: ");
//  for(i=0; i<n; i++)
//  printf("%d ", maxv[i]);

//  printf("\n Najmanji u vrstama: ");
//  for(i=0; i<n; i++)
//  printf("%d ", minv[i]);

//  printf("\n Najveci u kolonama: ");
//  for(i=0; i<n; i++)
//  printf("%d ", maxk[i]);

//  printf("\n Najmanji u kolonama: ");
//  for(i=0; i<n; i++)
//  printf("%d ", mink[i]);

// 11.14 imas matricu a dimenzija mxn i matricu b dimenzija mxk,
//  i treba da formiras matricu c mnozenjem te dve

//  int a[MAX][MAX], b[MAX][MAX];
//  int c[MAX][MAX], d[MAX][MAX];
//  int i, j, n, m, k, t; 

//  printf(" Broj vrsta matrice A: ");
//  scanf("%d",&n);
//  printf(" Broj kolona matrice A: ");
//  scanf("%d",&m);
//  printf(" Broj kolona matrice B: ");
//  scanf("%d",&k); 

//  printf("\n Matrica A:\n");
//  Citaj(a,n,m);
//  printf("\n Matrica B:\n");
//  Citaj(b,m,k);

// for(i=0; i<n; i++)
//  for(j=0; j<k; j++){
//  c[i][j]=0; //resetujemo matricu c
//  for(t=0; t<m; t++)
//  c[i][j] += a[i][t]*b[t][j]; 
//  //mnozimo matricu a sa matricom b tako sto red mnozimo sa kolonom, t(broj kolona), j & i (broj redova)
//  }
//  printf("\n Matrica A:\n");
//  Pisi(a,n,m); //arg za fnkc
//  printf("\n Matrica B:\n");
//  Pisi(b,m,k);
//  printf("\n Matrica C:\n");
//  Pisi(c,n,k);

//11.15 pomnozi matricu sa samom sobom
//  int i, j, n, k;
//  int a[40][40],b[40][40];

//  printf("\n n= ");
//  scanf("%d",&n);

//  printf("\n Matrice %dx%d\n", n,n);
//  for(i=0; i<n; i++)
//   for(j=0; j<n; j++)
//    scanf("%d",&a[i][j]);

// for(i=0; i<n; i++)
//  for(j=0; j<n; j++){
//   b[i][j]=0;
//    for(k=0; k<n; k++)
//     b[i][j]+=a[i][k]*a[k][j];
//  }

// 11.16 matricu mxm ispisati na n-ti stepen 
 int i, j, m, n, k, p;
 int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
 printf("\n Stepen n= ");
 scanf("%d",&n);
 printf(" Dimanzija m= ");
 scanf("%d",&m);

 printf("\n Matrica %dx%d:\n", m,m);
 for(i=0; i<m; i++)
 for(j=0; j<m; j++){
 scanf("%d",&a[i][j]);
 b[i][j]=a[i][j]; //kopiramo matricu a u matricu b
 } 

/*Stepenovanje matrice mnozeci je sa samom sobom n-1 puta*/
 for(p=1; p<n; p++){ //ovde samo ubacujemo jos jednu petlju koja vrti do n
    for(i=0; i<m; i++)
        for(j=0; j<m; j++){
        c[i][j]=0;
            for(k=0; k<m; k++)
            c[i][j]+=a[i][k]*b[k][j];
 }

 printf("\n Rezultujuca matrica:\n");
 for(i=0; i<m; i++){
 for(j=0; j<m; j++)
 printf("%6d ",c[i][j]);
 printf("\n");
 } 


 getchar();
 
 return 0; 
}
