nt i,j,n,s,mat[MAX][MAX];
printf(" n= ");
scanf("%d", &n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
    }
}
 printf("\n Uneta matrica:\n"); 

 //pravilno ispisavnje matrice
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf(" %d",mat[i][j]);
    }
        printf("\n");
}
printf("suma elemenata vrste: ");
for(i=0; i<n;i++){
    for(j=0;j<n;j++){
        s+=mat[i][j];
    }
    printf("%d",s);
}