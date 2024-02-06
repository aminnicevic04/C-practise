// prvi zadatak

// #include <stdio.h>
// #define MAX 100

// int min(int a[MAX]){
//     int lenght = sizeof(a)/sizeof(a[0]);
//     int min = a[0];
//     for(int i=0;i<lenght;i++){
//         if(a[i] < min) min = a[i];
//     }
//     return min;
// }
// int max(int b[MAX]){
//     int lenght = sizeof(b)/sizeof(b[0]);
//     int max = b[0];
//     for(int i=0;i<lenght;i++){
//         if(b[i] > max) max = b[i];
//     }
//     return max;
// }

// int main(){ 
// int i,j,a[MAX],b[MAX],aleng,bleng;
// printf("duzina a: ");
// scanf("%d",&aleng);
// printf("niz a: ");
// for(i=0;i<aleng;i++){
//     scanf("%d",&a[i]);
// }
// printf("duzina b: ");
// scanf("%d",&bleng);
// printf("niz b: ");
// for(i=0;i<bleng;i++){
//     scanf("%d",&b[i]);
// }
// int najveciNizaB = max(b);
// int najmanjiNizaA = min(a);

// printf("indexi: ");
// for(i=0;i<aleng;i++){
//     int index = 1;
//     for(j=0;j<bleng;j++){
//        if(i + j >= aleng || a[i+j] != b[j]){
//         index = 0;
//         break;
//        }
//        }
//     if(index == 1){
//     printf("%d, ",i);
//     }
//     }
// getchar();
// return 0;
// }


#include <stdio.h>
#define MAX 100

int min(int a[], int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i] < min) min = a[i];
    }
    return min;
}
int max(int b[], int n){
    int max = b[0];
    for(int i=0;i<n;i++){
        if(b[i] > max) max = b[i];
    }
    return max;
}

int main(){ 
    int i,j,a[MAX],b[MAX],aleng,bleng, first = -1, last = -1;
    printf("duzina a: ");
    scanf("%d",&aleng);
    printf("niz a: ");
    for(i=0;i<aleng;i++){
        scanf("%d",&a[i]);
    }
    printf("duzina b: ");
    scanf("%d",&bleng);
    printf("niz b: ");
    for(i=0;i<bleng;i++){
        scanf("%d",&b[i]);
    }
    int najveciNizaB = max(b, bleng);
    int najmanjiNizaA = min(a, aleng);

    printf("indexi: ");
    for(i=0;i<aleng;i++){
        int index = 1;
        for(j=0;j<bleng;j++){
            if(i + j >= aleng || a[i+j] != b[j]){
                index = 0;
                break;
            }
        }
        if(index == 1){
            printf("%d, ",i);
            if(first == -1)
                first = i;
            last = i;
        }
    }
    printf("\n");

    if(first != -1 && last != -1) {
        for(i = first; i < first + bleng; i++)
            a[i] = najmanjiNizaA;
        for(i = last; i < last + bleng; i++)
            a[i] = najveciNizaB;
    }

    printf("Transformisani niz AN: ");
    for(i = 0; i < aleng; i++)
        printf("%d ", a[i]);

    return 0;
}

