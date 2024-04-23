#include <stdio.h>
#include <stdlib.h>
#define MAX 20

// int *Kreiraj(int n) {
//     return (int *)malloc(n * sizeof(int));
// }
int *ucitavanje(){
    int *b, i;
    b = (int*)malloc(MAX*sizeof(int));
    if(b ==  NULL){
        pritnf("greska");
        exit(1);
    }
    for(i=0;i<MAX;i++){
        printf("unesite element %d",i);
        scanf("%d",&b[i]);
    }
    return b;
}
void bubblesort(int niz[]){
    int i,j,pom;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX-i-1;j++){
            if(niz[i] < niz[j+1]){
                pom = niz[i];
                niz[i] = niz[j+1];
                niz[j+1] = pom;
            }
        }
    }
}

int main() {
  
int *A, *B,i;

printf("unesite niz a: ");
A = ucitavanje();

B = (int*)malloc(MAX*sizeof(int)); 
if(B == NULL){
    printf("greska b");
    exit(1);
}
for(i=0;i<MAX; i++){
    B[i] = i;
}

    return 0;
}
