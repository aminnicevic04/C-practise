
// spremanje za ispit |januar


#include <stdio.h>
#include <math.h>

 #define PI 3.141592

main(){ 

    // 2.19. Саставити програм који за унети полупречник основице и висине ваљка исписује његову
// површину и запремину. (Површина: P=2*r*π*(r+h) , Запремина: V=r2
// *π*h) 

//  double p, r, h, v;

//     printf("Unesite visinu valjka: ");
//     scanf("%lf", &h);

//     printf("Unesite poluprecnik valjka: ");
//     scanf("%lf", &r);

//     p = 2 * r * PI * (r + h);
//     v = r * r * PI * h;

//     printf("Povrsina valjka: %.2f\n", p);
//     printf("Zapremina valjka: %.2f\n", v);

// 2.20. Саставити програм којим се вредност темепературе унете у Фаренхајтима приказује у
// Целзијусима. 

// int temp;
// double fahr, celsius;
// printf("\n unesite Temperaturu u stepenima F <ceo broj od 0 do 300>: ");
// scanf("%d", &temp);

// fahr = (double)temp;
// celsius = (5.0/9.0)*(fahr-32);
// printf("\n%d F = %.2f C\n", temp, celsius);

// 2.21. Саставити програм за решавање линеарне једначине AX+B=0, где се коефицијенти А и В
// уносе са тастатуре (А≠0). 

// float X, A, B;
//  printf("A = ");
//  scanf("%f", &A);

//  printf("B = ");
//  scanf("%f",&B);

//  X=-B/A;

//  printf("Jednacina ima oblik %.2fX + %.2f = 0\n", A, B);
//  printf("Resenje X= %.2f\n", X);


// 2.22. Саставити програм за рачунање израза 2 3
// y = x + x + x за унету вредност х. (nije ovaj izraz jer vsc ne moze da procita koren)

// float x,y;

// printf("unesite y= ");
// scanf("%f", &x);

// y = sqrt(x +  x*x + x*x*x);
// printf("y = %.2f", y);

// 2.23. Саставити програм који исписује вредност модула комплексног броја z = a + bi за унете
// вредности а и b. Модул се рачуна по формули 2 2
// z = a + b . 

// float a,b,m;

// printf("a = ");
// scanf("%f" ,&a);

// printf("b = ");
// scanf("%f" ,&b);

// m = sqrt(a*a+b*b);

// printf("modul kompleksnog broja %f+%fi je %.2f", a,b,m);

// 2.24. Саставити програм који за унете реалне и имагинарне делове два комплексна броја исписује
// та да два броја у облику z = a + bi 1
// и z = c + di 2
// , а затим рачуна њихов збир и разлику
// ( ) ( ) z1 ± z2 = a + c ± i b + d . 

// float a1,b1,a2,b2,rz,rr,iz,ir;

// printf("a1 = "); scanf("%f",&a1);
//  printf("b1 = "); scanf("%f",&b1);
//  printf("a2 = "); scanf("%f",&a2);
//  printf("b2 = "); scanf("%f",&b2); 

// rz=a1+a2;
// rr=a1-a2;
// iz=b1+b2;
// ir=b1-b2; 

// printf("\nz1 = %.2f + %.2fi \nz2 = %.2f + %.2fi \n",a1,b1,a2,b2);
//  printf("\nz1+z2 = %.2f + %.2fi", rz, iz);
//  printf("\nz1-z2 = %.2f + %.2fi", rr, ir); 

// 2.25. Саставити програм за исписивање растојања између две тачке у тродимензионалном
// простору на основу унетих координата тачака. 

// float x1,x2,y1,y2,z1,z2,rastojanje;

// printf("Unesite koordinate prve tačke\n <x1,y1,z1>:  ");
// scanf("%lf %lf %lf", &x1, &y1, &z1);

// printf("Unesite koordinate prve tačke\n <x2,y2,z2>:  ");
// scanf("%lf %lf %lf" ,&x2, &y2, &z2);

// rastojanje = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
// printf("rastojanje d = %.2f", rastojanje);

// 2.26. Саставити програм за исписивање површине троугла ако су задате координате његових
// темена. Површину троугла рачунати помоћу следећих формула:
// ( ) ( ) 2 2
// B C B C a x x y y = − − − , ( ) ( ) 2 2
// C A C A b x x y y = − − − , ( ) ( ) 2 2
// A B A B a x x y y = − − −
// 2
// a b c S
// + +
// = , P S S a S b S c = − − − ( )( )( )

// double xa,xb,xc,ya,yb,yc,a,b,c,s,p;

// printf("Koordinate temena trougla\n");
// printf("- prvo teme <xa,ya>: ");
// scanf("%lf %lf", &xa, &ya);

// printf("- prvo teme <xb,yb>: ");
// scanf("%lf %lf", &xb, &yb);

// printf("- prvo teme <xc,yc>: ");
// scanf("%lf %lf", &xc, &yc);

// a = sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
// b = sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));
// c = sqrt(pow(xa-xb, 2) + pow(ya-yb, 2));

// s = (a+b+c) / 2;
// p = sqrt(s*(s-a)*(s-b)*(s-c));

// printf("\nPovrsina trougla je %.2f", p);

// 2.27. Саставити програм који за унети троцифрени број исписује његове цифре и суму цифара. 

// int abc, a, b, c, s;

// printf("unesite trocifreni broj: ");
// scanf("%d", &abc);

// a = abc / 100;
// b = (abc/100)%10;
// c = abc % 10;

// s = a+b+c;

// printf("broj je %d i njegove cifre su %d %d %d /n",abc,a,b,c);
// printf("suma njegovih cifara je %d",s);

// 2.28. Саставити програм који учитава вредност производа у динарима, а затим израчунава и
// приказује колико је потребно новчаница од 500 дин., 100 дин. и 1 дин. за плаћање тог производа. 

// int n, n500, n100, n1;

// printf("unesite cenu proizvoda: ");
// scanf("%d", &n);

// n500 = n/500;
// n100 = (n%500) / 100;
// n1 = (n%500)%100;

// printf("broj novcanica od 500din iznosi %d \n", n500);
// printf("broj novcanica od 100din iznosi %d \n", n100);
// printf("broj kovanica od 1din iznosi %d \n", n1);


// 2.29. Саставити програм који за унети временски интервал у секундама и исписује га у облику
// дани : часови : минуте : секунде. 

// long sec, d,h,m,s;

// printf("unesite vreme u sekundama: ");
// scanf("%ld", &sec);

// s=sec%60;
//  m=sec/60;
//  h=m/60;
//  m=m%60;
//  d=h/24;
//  h=h%24;

// printf("(d:h:m:s) %ld %ld %ld %ld",  d,h,m,s);

// 2.30. Саставити програм који одређује и исписује број степени, минута и секунди у углу који је
// задат у радијанима. 

double x;
int stepen,minut,sekund;

printf("unesite ugao u radijanima: ");
scanf("%lf", &x);

x*=180/PI; //konvertujem u stepene
stepen = (int)x; //zaokruzivanje broja stepeni
x-=stepen; //izracunavanje koliko delova stepena je ostaalo

x*=60; //izracunavanje  broja minuta
minut = (int)x; //zaokruzivanje
x -= minut; //izracunavanje koliko delova minuta je ostalo

x*=60; //izracunavanje broja stepeni
sekund = (int)x; //zaokruzivanje

printf("\nstepena, minuta, sekundi [%d,%d,%d]\n", stepen, minut, sekund);

 getche();
 return 0;
}

