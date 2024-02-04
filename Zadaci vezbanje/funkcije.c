#include <stdio.h>
#define PI 3.14

int zbir(int a, int b){ //sabiranje dva broja
    int rez;
    rez = a+b;
    return rez;
}

int max2(int a, int b){ //max dva broja
    if(a>b){
        return a;
    }else if(a<b){
        return b;
    }else{
        return 0;
    }
}

double Povrsina(double r){ //povrsina lopte
    return(4*r*r*PI);
}

double Zapremina(double r){ //zapremina lopte
    return((4./3.)*r*r*r*PI);
}

void Ispis(double p, double v){
    printf("\n Povrsina: %.2f", p);
    printf("\n Zapremina: %.2f\n", v); 
}

long Fakt(int n){ //racunanje faktorijela nekog broja
    long i, f=1;
    for(i=1; i<=n; i++) f = f*i;
    return f;
}
int FaktRekurzivna(int n){ // faktorijel rekurzivna funkcija
    if(n==1) return 1;
    return n*FaktRekurzivna(n-1);
}

unsigned nzd(unsigned a, unsigned b){ //najveci zajednicki delilac
    unsigned p;

    while(b != 0){
        p = b;
        b = a % b;
        a = p; 
    }
    return a;
}

unsigned nzs(unsigned a, unsigned b){ //najmanji zajednicki sadrzalac
    return a*b/nzd(a,b);
}

double Stepen(double x, double n){
    int i, negativan;
    double s=1;
    negativan = n < 0; //proverava da li negativan
    if(negativan){ // ako jeste prebacuje ga u pozitivan
        n = -n;
    }
    for(i=0; i<n; i++){//racuna x na n-stepen
        s = s*n;
    }
    if(negativan){ //ako je bio negativan vraca inverzni rezultat
        return(1/s);
    }else return(s);
}

int main(){
// 9.1. Саставити функцију која врши сабирање два цела броја, а затим саставити програм који
// тестира функцију и исписује резултат. 
    // int c;
    // c = zbir(5,3);
    // printf("%d",c);

    // int a,b,c,d,max;
    // printf("Unesite brojeve a,b,c,d");
    // scanf("%d%d%d%d",&a,&b,&c,&d); 
    // int prviMax = max2(a,b);
    // int drugiMax = max2(c,d);
    // max = max2(prviMax,drugiMax);
    // printf("%d",max);


    // while(max == 0){
    //     printf("unesite bolje brojeve sldeceg puta\n");
    //     printf("Unesite brojeve a,b,c,d");
    //     scanf("%d%d%d%d",&a,&b,&c,&d); 
    // }

//     9.5. Саставити програм за израчунавање површине и запремине лопте и исписивање резултата на
// основу унете вредности полупречника r. За рачунање запремине и површине, као и за испис
// резултата формирати одговарајуће функције. 
// double r,p,v;
// printf("r= ");
// scanf("%lf",&r);
// p = Povrsina(r);
// v = Zapremina(r);
// Ispis(p,v);

// 9.10. ....
// int n,k,c;
// printf("unesite brojeve n i k");
// scanf("%d%d",&n,&k);
// c = Fakt(n) / (Fakt(k)*Fakt(n-k));
// printf("\n c= %d", c); 

// 9.9. Саставити програм који коришћењем функција одређује највећи заједнички делилац и
// најмањи заједнички садржалац два природна броја. Програм треба да захтева унос све док не
// прочита нулу за један од два унета природна броја. 

// unsigned a,b;
// while(1){
// printf ("\n a= "); scanf ("%u", &a);
// printf (" b= "); scanf ("%u", &b); 

// if(a == 0 || b == 0 ){
//     break;
// } 

// printf (" nzd= %u", nzd(a,b));
// printf ("\n nzs= %u", nzs(a,b)); 
// }

// 9.12. Саставити програм којим се исписују сви троцифрени бројеви (ако их има) који су једнаки
// суми факторијела својих цифара.
// int a,b,c;

// for(a=1;a<=9;a++){
//     for(b=0;a<=9;b++){
//         for(c=0;c<=9;c++){
//             if((a*100 + b*10 + c) == (Fakt(a) + Fakt(b) + Fakt(c))){
//                 printf("\n %d", a*100+b*10+c);
//             }
//         }
//     }
// }
// 9.13. Саставити функцију за степеновање бројева. Затим саставити програм који помоћу
// формиране функције врши рачунање за дати број и степен и исписује резултат. 

// int n; double x,s;
// printf("\n Osnova: ");
//  scanf("%lf", &x);
//  printf("\n Stepen: ");
//  scanf("%d", &n); 

//  s = Stepen(x,n);
//  printf("rezultat = %.2lf",s); 

    getchar();
    return 0;
}

