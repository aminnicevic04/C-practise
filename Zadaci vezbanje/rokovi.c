#include <stdio.h>
#include <string.h>
int deljivost(int broj){
    int org_broj = broj;
    int cifra;

    while(broj > 9){
        cifra = broj % 10; //uzimanje posl.cifre
        if(cifra == 0 || org_broj % cifra != 0){
            return 0;
        }
        broj = broj /10;
    }
    return 1;
}

int main() {
    //2.jun
    // int N, i, j;
    // printf("Unesite red matrice N: ");
    // scanf("%d", &N);
    
    // int A[N][N];
    
    // for(i = 0; i < N; i++) {
    //     for(j = 0; j < N; j++) {
    //         if(i >= j){
    //             A[i][j] = i + j + 1;
    //         }else A[i][j] = 0;
    //     }
    // }

    // printf("Generisana kvadratna matrica A reda %d:\n", N);
    
    // for(i = 0; i < N; i++) {
    //     for(j = 0; j < N; j++) {
    //         printf("%d ", A[i][j]);
    //     }
    //     printf("\n");
    // }

    //1.jun
    // int a,b,org_broj,i;
    // printf("Unesite cijeli broj a: ");
    // scanf("%d",&a);
    // printf("Unesite cijeli broj b: ");
    // scanf("%d",&b);

    
    // for(i=a;i<=b;i++){
    //     if(deljivost(i)){
    //         printf(" %d", i);
    //     }
    // }

    //januar 2.
 

    return 0;
}
