t niz1[MAX],niz2[MAX],niz3[MAX];
int i,n;
pritnf("duzina nizova: ");
scanf("%d",&n);
printf("Niz1: ");
for(i=0; i<n; i++){
    scanf("%f", &niz1[i]);
}
printf("Niz2: ");
for(i=0; i<n; i++){
    scanf("%f", &niz2[i]);
}
for(i=0; i<n; i++){
    niz3[i]= pow(niz1[i],3) / 3 + 2*niz1[i]*niz2[i];
    pritnf("%d",niz3[i]);
}