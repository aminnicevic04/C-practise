int x,y;
printf("unesite broj x: ");
scanf("%d",&x);

if(x>-5 && x<10){
    if(x>-2 && x<=2){
        y = 5*pow(x,5);
        printf("vrednost je %d\n",y);
    } else if(x>3 && x<=7){
        y = 3*x-1;
        printf("vrednost je %d\n",y);
    } else{
        y = sqrt(pow(x,3) - 5);
       printf("vrednost je %lf\n", (double)y);
    }
}else printf("uneli ste van opsega");