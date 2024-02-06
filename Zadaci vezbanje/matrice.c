#include <stdio.h>
#define MAX 100
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
// int i,j,n,x,a[MAX][MAX];
//  printf(" x= ");
//  scanf("%d",&x);
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n Uneta matrica: \n");
//  for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&a[i][j]);
//     }
//  }
//  for()

 getchar();
 return 0; 
}
