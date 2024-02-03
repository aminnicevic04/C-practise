
// spremanje za ispit |januar


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

 #define PI 3.141592
 #define STOP 0 

int main(){ 

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

// double x;
// int stepen,minut,sekund;

// printf("unesite ugao u radijanima: ");
// scanf("%lf", &x);

// x*=180/PI; //konvertujem u stepene
// stepen = (int)x; //zaokruzivanje broja stepeni
// x-=stepen; //izracunavanje koliko delova stepena je ostaalo

// x*=60; //izracunavanje  broja minuta
// minut = (int)x; //zaokruzivanje
// x -= minut; //izracunavanje koliko delova minuta je ostalo

// x*=60; //izracunavanje broja stepeni
// sekund = (int)x; //zaokruzivanje

// printf("\nstepena, minuta, sekundi [%d,%d,%d]\n", stepen, minut, sekund);

//sta ispisuje sledeci block koda

//  int a = 3, b = 3;
//  printf("\n a b \n");
//  printf("\n %d %d\n", a--, --b);
//  printf("\n %d% d\n", a--, --b);
//  printf("\n %d% d\n\n", a--, --b);


// 3.1

// int broj;
// printf("unesite broj: \n");
// scanf("%d", &broj);

// if(broj % 2 == 0)
// printf("broj je paran");
// else
// printf("broj je neparan");

// 3.2. Сас

// int a;
// printf("unesite ceo broj: ");
// scanf("%d", &a);

// if(a > 0){
//     printf("broj je pozitivan");
// }else if(a < 0){
//     printf("broj je negativan");
// }else{
//     printf("vas broj je 0");
// };

//nacin dva

// int a;
// printf("unesite ceo broj: "); scanf("%d", &a);
// if(a == 0){
//     printf("vas broj je 0");
// } else
// (a > 0) ? printf("broj je pozitivan") : ("broj je negativan");

// 3.3. Саставити програм који за два унета цела броја исписује какав постоји релациони однос
// између њих (једнаки су, први већи од другог или први је мањи од другог). 

// int a,b;

// printf("unesite broj A: \n");
// scanf("%d", &a);
// printf("unesite broj B: \n");
// scanf("%d", &b);

// if(a==b){
//     printf("brojevi su jednaki");
// } else 
// (a > b ) ? printf("broj A je veci od broja B") : printf("broj B je veci od broja A");

// 3.4. Саставити програм који за три унета цела броја исписује највећи. 

// int a,b,c,max;

// printf("unesite tri broja: ");
// scanf("%d %d %d", &a,&b,&c);
// max = a;
// if(b > max){
//     max = b;
// } 
// if(c > max){
//     max = c;
// }

// printf("najveci broj je %d", max);

// 3.5. Саставити програм који три унета реална броја уређује у неопадајућем редоследу. 

// double x,y,z,prvi,drugi,treci;

// printf("unesite tri realna broja: ");
// scanf("%lf%lf%lf",&x,&y,&z);

// if(x < y && x < z){
//     prvi = x; 
//     if(y < z){
//         drugi = y;
//         treci = z;
//     } else{
//         drugi = z;
//         treci = y;
//     }
// }
// if(y < x && y < z){
//     prvi = y;
//     if(z < x){
//         drugi = z;
//         treci = x;
//     } else{
//         drugi = x;
//         treci = z;
//     }
// }
// if(z < x && z < y){
//     prvi = z;
//     if(x < y){
//         drugi = x;
//         treci = y;
//     } else{
//         drugi = y;
//         treci = x;
//     }
// }

// printf("1) %.2lf \n", prvi);
// printf("2) %.2lf \n", drugi);
// printf("3) %.2lf \n", treci);

//nacin 2

// double x, y, z, p;
//  printf("Unesite tri realna broja: ");
//  scanf("%lf%lf%lf", &x, &y, &z);
//  if(x>y)
//  {
//  p=x; x=y; y=p;
//  }
//  if(x>z)
//  {
//  p=x; x=z; z=p;
//  }
//  if(y>z)
//  {
//  p=y; y=z; z=p;
//  }
//  printf("Uredjeni brojevi: %.2f %.2f %.2f\n", x, y, z); 

// 3.6. Саставити програм који проверава и исписује да ли се на k-том месту унетог броја n налази
// бит који има вредност 1 или 0. 

// int n,k, bit;

// printf("unesite broj n: ");
// scanf("%d",&n);
// printf("unesite poziciju tog broja koju zelite da proverite: ");
// scanf("%d",&k);

// bit = (n << k) & 1; // << jeste operator koji pomera u bitove u desno za k mesta

// printf("na %d-tom mestu u broju %d se nalazi bit sa vrednoscu: %d", k,n,bit);

//nacin 2

    // int n, k;

    // printf("Unesite broj: ");
    // scanf("%d", &n);

    // printf("Unesite poziciju tog broja koju želite da proverite: ");
    // scanf("%d", &k);

    // if ((n & (1 << k)) != 0)
    //     printf("Bit na poziciji %d je 1\n", k);
    // else
    //     printf("Bit na poziciji %d je 0\n", k);

// 3.7. Саставити програм који ће на основу унетих броја поена (од нула до 100) исписати
// одговарајућу оцену (0-50 пет, 51-60 шест, 61-70 седам, 71-80 осам, 81-90 девет, 91-100 десет). 

// int a;

//     printf("Unesite broj bodova: ");
//     scanf ("%d", &a);

//  if (a>90)
//  printf("Ocena je 10\n");
//  else if (a>80)
//  printf("Ocena je 9\n");
//  else if (a>70)
//  printf("Ocena je 8\n");
//  else if (a>60)
//  printf ("Ocena je 7\n");
//  else if (a>50)
//  printf("Ocena je 6\n");
//  else
//  printf("Ocena je 5\n"); 

// 3.8. Саставити програм који ће за унети опсег позитивних целих бројева од а до b исписати да ли
// се у задатом опсегу налази квадрат броја х (број х се уноси са тастатуре). 

// int a,b,x;

// printf("unesite opseg brojeva <pocetak> <kraj> : ");
// scanf("%d%d",&a,&b);
// printf("unesite treci broj koji proveravamo: ");
// scanf("%d",&x);

// if(a < x*x && b > x*x){
//     printf("broj postoji u opsegu \n");
// }else{
//     printf("broj ne postoji u zadatom opsegu");
// }

// 3.9. Саставити програм који ће учитати два броја и од већег одузети мањи и приказати резултат. 

// int a,b,rez;

// printf("unesite broj a i b, unoseci prvo a: ");
// scanf("%d%d",&a,&b);

// if(a>b){
//     rez = a - b;
//     printf("rezulat je : %d",rez);
// }else{
//     rez = b - a;
//     printf("broj a je manji od b i ne mogu se oduzeti");
// }

// 3.10. Саставити програм за одређивање сигнум функције и исписивање резултата за унети реалан
// број х.
//       -1 , x<0
// sgn( ) 0 , x=0
//        1 , x>0

// float x;
// int y;

// printf("unesite broj x: ");
// scanf("%d",&x);

// if(x==0){
//     y = 0;
// }else if(x > 0){
//     y = 1;
// }else{
//     y = -1;
// }
// printf("y = %d",y);

// 3.11. Саставити програм за израчунавање функције у за унето х. Функција у је дефинисана на
// следећи начин:
// 2 , -2< 2
// 3 1, 5 7
// 1/ , ostalo

// float x,y;
// printf("unesite x: ");
// scanf("%f",&x);

// if(x > -2 && x <= 2){
//     y = 2*x;
// }else if(x >= 5 && x < 7){
//     y = 3*x - 1;
// }else {
//     y = 1 / x;
// }

// printf("y: %.2f",y);


// 3.12. Саставити програм за израчунавање функције z за унето х и y. Функција z је дефинисана на
// следећи начин:
// 2 2
// min( , ), 0
// max( , ), 0

// int x,y,z;
// printf("unesite x i y, unoseci prvo x: ");
// scanf("%d%d",&x,&y);

// if(y > 0){
//     if(x < y){
//         z = x;
//     } else{
//         z = y;
//     }
// }else {
//     if(x*x < y*y ){
//         z = y*y;
//     }else{
//         z = x*x;
//     }
// }
// printf("z: %.d",z);

// 3.13. Саставити програм који исписује обавештење да ли унете променљиве а, b и c које
// означавају дужине страница формирају троугао. Уколико формирају троугао израчунати површину
// троугла користeћи следеће формуле:
// 2
// a b c S
// + +
// = , P S S a S b S c = − − − ( )( )( ) .

// int a,b,c,p,s;
// printf("unesite duzine stranica a, b i c: \n");
// scanf("%d%d%d",&a,&b,&c);

// if(a+b>c && b+c>a && a+c>b){
//     s = (a+b+c)/2;
//     p = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("Stranice a b i c formiraju trougao povrsine %d",p);
// }else printf("Date stranice a b i c ne formiraju trougao");

// 3.13. Саставити програм који исписује обавештење да ли унете променљиве а, b и c које
// означавају дужине страница формирају троугао. Уколико формирају троугао израчунати површину
// троугла користeћи следеће формуле:
// 2
// a b c S
// + +
// = , P S S a S b S c = − − − ( )( )( ) .

//  double xa, ya, xb, yb, xc, yc, a, b, c, alfa, beta, gama;
//  printf("Unesite koordinate tacke A(x,y): ");
//  scanf("%lf%lf",&xa,&ya);
//  printf("Unesite koordinate tacke B(x,y): ");
//  scanf("%lf%lf",&xb,&yb);
//  printf("Unesite koordinate tacke C(x,y): ");
//  scanf("%lf%lf",&xc,&yc);

//  a = sqrt(pow(xb-xc,2) + pow(yb-yc,2));
//  b = sqrt(pow(xa-xc,2) + pow(ya-yc,2));
//  c = sqrt(pow(xa-xb,2) + pow(ya-yb,2)); 

// printf("\nStranice:\n");
//  printf("a= %.2f\n", a);
//  printf("b= %.2f\n", b);
//  printf("c= %.2f\n", c);

//  if(a+b>c && a+c>b && b+c>a){
//     alfa = acos((b*b+c*c-a*a) / (2*b*c));
//     beta = acos((c*c+a*a-b*b) / (2*c*a));
//     gama = acos((a*a+b*b-c*c) / (2*a*b));

//     alfa *= 180/PI;
//     beta *= 180/PI;
//     gama *= 180/PI;

//     printf("\nUglovi:\n");
//     printf("Alfa = %.2f stepeni \n",alfa );
//     printf("Beta = %.2f stepeni \n",beta );
//     printf("Gama = %.2f stepeni \n",gama );
//  }else printf("od datih koordinata ne mozemo napraviti trougao");

// 3.15. Саставити програм којим се испитује да ли се секу праве 1 1 y a x b = ⋅ + и 2 2 y a x b = ⋅ + . Ако
// се секу одредити координате пресека. Коефицијенти а1, b1, a2 и b2 се уносе са тастатуре

// double a1,a2,b1,b2,x,y;

// printf("Unesite koeficijente:\na1= "); scanf("%lf", &a1);
//  printf("b1= "); scanf("%lf", &b1);
//  printf("a2= "); scanf("%lf", &a2);
//  printf("b2= "); scanf("%lf", &b2); 

//  printf("\nPrave:\ny=%.2fx+%.2f\ny=%.2fx+%.2f\n", a1, b1, a2, b2); 


// if(a1==a2){
//     if(b1==b2){
//         printf("Prave se podudaraju");
//     }else{
//         printf("Prave se podudaraju");
//     }
// }else{
//     x=(b2-b1)/(a1-a2);
//     y=a1*x+b1; 
//     printf("\nTacka preseka je x= %.2f, y= %.2f\n", x, y);
// }

// 3.16. Саставити програм којим се решава нелинеарна једначина a x b ⋅ + ↔ 0 где је ↔ знак < или >,
// и а≠0. Коефицијенти а и b и знак се уносе са тастатуре. 

// char z;
// double a,b,x;

// printf("Unesite znak [<,>]: "); scanf("%c", &z); 
// printf("unesite koeficijente \na = "); scanf("%lf",&a);
// printf("b = "); scanf("%lf",&b);
// printf("\n nejednacina ima oblik %.2lfx + %.2lf %c 0\n",a,b,z);

// x = -b/a;

// if(a>0){
//     printf("resenje je x %c %.2f",z,x);
// }else{
//     printf("resnje je %.2f %c x",z,x);
// }


// 3.17. Саставити програм за решавање система од две линеарне једначине: 1 1 1 a x b y c + = и
// 2 2 2 a x b y c + = . Коефицијенти a1, a2, b1, b2, c1 и c2 се уносе са тастатуре. За решавање система
// користити методу детерминанти: 1 1
// 1 2 2 1
// 2 2
// a b
// D a b a b
// a b
// = = − ,
// 1 1
// 1 2 2 1
// 2 2
// x
// c b
// D c b c b
// c b
// = = − и
// 1 1
// 1 2 2 1
// 2 2
// y
// a c
// D a c a c
// a c
// = = − .
// Систем има три решења:
// 1) D ≠ 0:
// ,
// Dx
// Dy
// x y
// D D
// = =
// 2) 0: D D D = = = x y
//  неодређено (бесконачно решења)
// 3) остали случајеви: нема решења. 

// double a1, b1, c1, a2, b2, c2, D, Dx, Dy, x, y;

// printf ("Unesite koeficijente prve jednacine:\na1= ");
// scanf("%lf", &a1);
// printf("b1= "); scanf("%lf", &b1);
// printf("c1= "); scanf("%lf", &c1);

// printf("Unesite koeficijente druge jednacine:\na2= ");
// scanf("%lf", &a2);
// printf("b2= "); scanf("%lf", &b2);
// printf("c2= "); scanf("%lf", &c2); 

// D = a1 * b2 - a2 * b1;
// Dx = c1 * b2 - c2 * b1;
// Dy = a1 * c2 - a2 * c1; 

// if(D != 0){
//     x = Dx/D;
//     y = Dy/D;
//     printf ("\nResenje sistema:\nx= %.2f\n", x); 
//     printf ("y= %.2f\n", y); 
// }else 
// if(Dx==0 && Dy==0)
//     printf("Ima beskonacno resenja");
// else{
//     printf("Nema resenja");
// }

// 3.18. Саставити програм за решавање квадратне једначине 2
// ax bx c + + = 0. У зависности од
// коефицијента а и дискриминанте 2 D b ac = − 4 имамо следећа решења:
// 1) а≠0 и D>0: два различита и реална ( 1,2 2
// b d
// x
// a
// − ±
// = ),
// 2) а≠0 и D=0: два једнака реална ( 1,2 2
// b
// x
// a
// −
// = ),
// 3) а≠0 и D<0: два коњуговано комплексна (
// 1,2 2
// b i d
// x
// a
// − ±
// = ),
// 4) а=0 и b≠0: линеарна једначиина, решење ( c
// x
// b
// −
// = ),
// 5) а=0 и b=0: нема решења. 

// double a,b,c,x1,x2,D;

// printf("Unesite koeficijente:\na= ");
//     scanf("%lf", &a);
//     printf("b= ");
//     scanf("%lf", &b);
//     printf("c= ");
//     scanf("%lf", &c);

//     if (a != 0) {
//         D = b * b - 4 * a * c;

//         if (D > 0) {
//             x1 = (-b + sqrt(D)) / (2 * a);
//             x2 = (-b - sqrt(D)) / (2 * a);
//             printf("Resenja:\nx1=%.2f, x2=%.2f\n", x1, x2);
//         } else if (D == 0) {
//             x1 = -b / (2 * a);
//             printf("Resenje:\nx1=x2=%.2f\n", x1);
//         } else {
//             x1 = -b / (2 * a);
//             x2 = sqrt(fabs(-D)) / (2 * a);
//             printf("Kompleksna resenja:\nx1=%.2f+i%.2f, x2=%.2f-i%.2f\n", x1, x2, x1, x2);
//         }
//     } else {
//         if (b != 0) {
//             x1 = -c / b;
//             printf("Resenje:\nx=%.2f\n", x1);
//         } else {
//             printf("Sistem nema resenja.\n");
//         }
//     }

// 4.1. Саставити програм који ће пет пута исписати реченицу Pozdrav svima! употребом FOR
// петље. 

    // int i;

    // for(i=1; i<=5; i++){
    //     printf("pozdrav svima \n");
    // }

//     4.2. Саставити програм који употребом FOR петље исписује:
// а) све бројеве прве десетице,
// б) само непарне бројеве прве десетице
// в) све бројеве прве десетице у обрнутом редоследу. 

    // int i;
    // a)
    // for(i=1; i<=10; i++){
    //     printf("%d\n",i);
    // }
    // b)
    // for(i=1; i<=10; i=i+2){
    //     printf("%d\n",i);
    // }
    // c)
    // for(i=10; i>=1; i--){
    //     printf("%d\n",i);
    // }

//     4.3. Које вредности i и j имају након сваке промене унутар FOR петље у следећем програмском
// коду: 

// int i, j;
//     for(i=1; i<3; i++)
//         for(j=1; j<4; j++)
//             printf("i=%d, j=%d\n", i, j);
//             printf("\n");
//     for(i=1; i<4; i++)
//         for(j=1; j<3; j++)
//             printf("i=%d, j=%d\n", i, j); 

// 4.4. Саставити програм који за унето n исписује збир првих n целих позитивних бројева. 

// int n,z,i;

// printf("unesite broj n: ");
// scanf("%d",&n);
// z=0;
// for(i=1; i<=n; i++){
//     z = z + i;  
// }
// printf("%d",z);

// 4.5. Саставити програм који за унето n учитава n реалних бројева и приказује њихов збир и
// аритметичку средину.

//sam ucitava n realnih brojeva
// int i,n,aritmeticka,z;
// printf("unesite broj n:");
// scanf("%d",&n);
// z=0;
// for(i=1; i<=n; i++){
//     z+=i;
// }
// aritmeticka = z / n;
// printf("aritmeticka sredina = %d\nzbir = %d",aritmeticka,z);

// //korisnik da unese n realnih brojeva
//  int n, i;
//  float a, s, ars;
//  s=0;
//  printf("n= ");
//  scanf("%d",&n);
//  printf(" Unesite %d brojeva:\n", n);
//     for(i=1; i<=n; i++){ 
//         scanf("%f",&a);
//         s+=a;
//     }
//  ars=s/n;
//  printf("\n Suma zadatih brojeva je %.2f", s);
//  printf("\n Aritmeticka sredina zadatih brojeva je %.2f", ars); 

// 4.6. Саставити програм који за унети цео број n приказује његов факторијел. 
// int i,n;
// long faktorijel = 1;
// printf("unesite broj n: ");
// scanf("%d",&n);

// for(i=1; i<=n; i++)
//     faktorijel = faktorijel * i;
// printf("faktorijel broja %d je %ld",n,faktorijel);

// 4.7. Саставити програм којим се за унети природан број n израчунава суму: S n = + + + + 1! 2! 3! ... !. 

// int i,n;
//  long f=1, s=0;
//  printf("n= ");
//  scanf("%d",&n);
//  for(i=1; i<=n; i++){
//     f*=i;
//     s+=f;
//  }
//  printf("\ns= %ld\n", s); 

// 4.8. Саставити програм којим се, за дате природне бројеве m и n, израчунава израз:
// а)... b)...

// int m,n,i;
// long s;

// printf("n= ");
//  scanf("%d",&n);
//  printf("m= ");
//  scanf("%d",&m); 

// s=1;
// for(i=0;i<=m;i++){
//     s=s*(n+i*m);
// }
//  printf("\ns= %ld\n", s); 

// 4.9. Саставити програм којим се, за дати природни n израчунава израз: 
// a)
 
//  int i, n, fakt;
//  float s, q;
//  printf("n= ");
//  scanf("%d",&n);
//  s=0;
//  q=0;
//  fakt=1;
//  for(i=1; i<=n; i++)
//  {
//  fakt=fakt*i;
//  q=q+1./(1+i);
//  s=s+fakt/q;
//  }
//  printf("\ns= %.5f\n", s);

// b)
// int i,n,fakt,znak;
// float s,q;

// printf("unesite broj n: ");
// scanf("%d",&n);

// s=0;
// q=0;
// fakt=1;
// znak=1;

// for(i=1;i<=n;i++){
//     fakt = fakt*i;
//     q = q+i;
//     s = s + znak * q / (float) fakt;
//     znak = - znak;
// }
// printf("\ns = %.5f\n",s);

// c)
// int i,n;
// float s,p,q;

// printf("unesite broj n: ");
// scanf("%d", &n);

// s=1;
// q=0;
// p=0;

// for(i=1;i<=n;i++){
//     p = p + cos(i);
//     q = q + sin(i);
//     s = s * p / (float)q;
// }
//  printf("\ns= %.5f\n", s); 

// 4.10. Саставити програм којим се, за дати природни број n и реалан број х, израчунава израз:
// а) 
// int i,n;
// float p,s,x;

// printf("Unesite broj n: ");
// scanf("%d",&n);
// printf("Unesite broj x: ");
// scanf("%f",&x);

// s=0;
// p=1;
// for(i=1;i<=n;i++){
//     p = p * sin(x);
//     s = s + p;
// }
// printf("s = %.5f",s);

// б)
// int i,n;
// float p,s,x;

// printf("n= ");
//  scanf("%d",&n);
//  printf("x= ");
//  scanf("%f",&x); 

// s=0;
// p=1;

// for(i=1;i<=n;i++){
//     p = p * x;
//     s = s + cos(p);
// }

// printf("s = %.5f",s);

// 4.11. Саставити програм којим се, за дати природни број n, израчунава израз:

// int i,n;
// float s,p;
// printf("unesite broj n: ");
// scanf("%d",&n);

// s=1;
// p=0;
// for(i=1;i<=n;i++){
//     p = sqrt(p+2);
//     s = s / p;
// }
// printf("s = %.5f",s);

// 4.12. Саставити програм који ће учитати n реалних бројева и исписати највећи. 
// int i,n;
// float br,max;

// printf("Unesite broj realnih clanova niza: \n");
// scanf("%d",&n);
// printf("unesite broj 1. : \n");
// scanf("%f",&br);

// max = br;
// for(i=2;i<=n;i++){
//     printf("unesite %d. broj: ",i);
//     scanf("%f",&br);

//     if(br>max){
//         max = br;
//     }
// }
// printf("najveci broj je %.2f",max);


// 4.13. Саставити програм који ће исписати све бројева прве стотине који су дељиви са 6 и њихову
// суму. 

// int i,s;

// s = 0;
// for(i=1;i<=100;i++){
//     if(i%6 == 0){
//         s = s + i;
//         printf("%d\n",i);
//     }
// }
//     printf("suma brojeva deljivih sa 6 je %d",s);

// 4.14. Саставити програм који исписује све троцифрене бројеве код којих је друга цифра за 2 већа
// од прве, а трећа за 1 већа од друге. 

// int a,b,c,i;
// for(i=100;i<=999;i++){
//     a = i / 100;//prva cifra
//     b = (i / 10) % 10;//druga cifra
//     c = i % 10;//treca cifra

//     if ((b == a + 2) && (c == b + 1)) {
//         printf("%d\n", i);
//         }
// }

//nacin 2
// int a,b,c;

// for(a = 1;a<=9;a++)
//     for(b = 3; b <= 9;b++)
//         for(c = 4; c <= 9;c++){
//             if(b == a+2 && c == a+1){
//                 printf("%d%d%d\n",a,b,c);
//             }
//         }

// 4.15. Саставити програм којим се исписују сви троцифрени Амстронгови бројеви. Троцифрени
// број је Амстронгов ако је једнак збиру кубова својих цифара. 
// int a,b,c,broj;
// printf("amstrongovi brojevi: \n");

// for(a = 1; a<=9; a++)
//     for(b = 0; b<=9; b++)
//         for(c = 0; c<=9; c++){
//             broj = a*100+b*10+c;
//             if(broj == pow(a,3)+pow(b,3)+pow(c,3))
//             pritnf("\n %d",broj);
//         }

// 4.16. Саставити програм којим се исписују сви троцифрени бројеви АВС који имају својство
//  (АВС)= (АВ)
// 2
// -С
// 2
// , где су непознате цифре 1 9 ≤ ≤ A , 0 9 ≤ ≤ B , 0 9 ≤ ≤ C . На пример: 147=142
// -72
// . 

// int a,b,c,broj;
// for(a = 1; a<=9; a++)
//     for(b=0; b<=9; b++)
//         for(c=0; c<=9; c++){
//             broj = a*100 + b*10 + c;
//             if(broj == ((10*a+b)*(10*a+b)-c*c))
//             printf("\n%d",broj);
//         }
        
//  4.17. Саставити програм којим се исписују сви троцифрени бројеви који имају особину да су
// дељиви бројем који се добија избацивањем средње цифре. 

// int a,b,c,broj,dvocifreni;

// for(a=1; a<=9; a++)
//     for(b=0; b<=9; b++) 
//         for(c=0; c<=9; c++){
//             broj = a*100+b*10+c;
//             dvocifreni= a*10+c;
//             if(broj % dvocifreni == 0){
//                 printf("%d ",broj);
//             }
//         }

// 4.18. Саставити програм који рачуна суму троцифрених природних бројева чији је збир цифара
// једнак 5. Исписати и обавештење колико бројева има такву особину. 

// int a,b,c,brojac,broj,s;
// s=0;
// brojac=0;
// for(a=1; a<=9; a++)
//     for(b=0; b<9; b++)
//         for(c=0; c<9; c++){
//             broj = a*100 + b*10 + c;
//             if(a + b + c == 5){
//                 brojac++;
//                 s += broj;
//             }
//         }

//         printf("Suma: %d\n",s);
//         printf("Ukupno brojeva: %d\n",brojac);

// 4.19. Саставити програм који ће исписати све делиоце унетог броја n. 
// int n,i;
// printf("unesite broj n: ");
// scanf("%d",&n);

// printf("Delioci broja %d su: \n",n);

// for(i=1;i<=n;i++){
//     if(n%i == 0){
//         printf("\n%d",i);
//     }
// }

// 4.20. Саставити програм који ће исписати обавештење да ли је унети број n савршен. Број је
// савршен ако је једнак суми својих делиоца искључујући њега самог. На пример, 28=1+2+4+7+14. 

// int i,n,s;
// s=0;
// printf("unesite broj n: ");
// scanf("%d",&n);

// for(i = 1; i<n; i++){
//     if(n%i==0){
//         s += i;
//     }
// }
//     if(n==s){
//         printf("Broj %d jeste savrsen broj\n",n);
//     }else{
//         printf("Broj %d nije savrsen broj\n",n);
//     }

// 4.21. Саставити програм који ће учитати оцене за n ученика и исписати просечну оцену свих
// ученика и број ученика који имају оцену 1.

// int n,i,ocena,negativnih;
// float suma,srednja;
// printf("Koliko vase odeljenje ima ucenika ?");
// scanf("%d",&n);

// negativnih = 0;

// for(i=1;i<=n;i++){
//     printf("Unesite ocenu ucenika #%d:\n",i);
//     scanf("%d",&ocena);
//     suma += ocena;
//     if(ocena == 1) {
//         negativnih++;
//     }
// }
//     srednja = suma / n;
//     printf("Prosek datih ocena je %.2f\n", srednja);
//     printf("Broj negativnih ocena je %d",negativnih);

// 4.22. Електронски сат показује време у сатима, минутима и секундама. Саставити програм који ће
// исписати све моменте времена у току једног дана такве да је сума цифара на сату једнака датом броју
// n. Испис треба да је у облику (n=33):
// 0 sat 11 min 31 sec
// 1 sat 32 min 0 sec . 

// int sec,min,sat,n;

// printf("n = ");
// scanf("%d",&n);

// for(sat = 0; sat <=23; sat++)
//     for(min = 0; min <= 59; min++)
//         for(sec = 0; sec <= 59; sec++){
//             if(n == (sat/10+sat%10 + min/10+min%10 + sec/10+sec%10)){
//                 printf("%d sat %d min %d sec \n",sat,min,sec);
//             }
//         }
        //zadatk je ispravan tj.isto je kao u zbirci ali ne radi na vece brojeve iz razloga
        // sto ima preterano veliki broj itreacija for petlje i kod mora da se optimizuje.

// 4.23. Саставити програм за табелирање функције ...

// double xmin,xmax,dx,x,y;
// printf("xmax = ");
// scanf("%lf",&xmax);
// printf("xmin = ");
// scanf("%lf",&xmin);
// printf("dx = ");
// scanf("%lf",&dx);

// for(x = xmin; x <= xmax; x+=dx){
//     y = (2*x+1) / (x*x-1);
//     printf("%10.3f%10.3f\n", x,y);
// }

// 4.24. Саставити програм за табелирање функције ...
// до xmax са кораком dx. Степен функције n се уноси са тастатуре.

// int i,n;
// double xmax,xmin,dx,x,y,p;

// p = 1;
// y = 1;

// printf("n = ");
// scanf("%d",&n);
// printf("xmin = ");
// scanf("%lf",&xmin);
// printf("xmax = ");
// scanf("%lf",&xmax);
// printf("dx = ");
// scanf("%lf",&dx);

// for(x = xmin; x <= xmax; x+=dx){
//     for(i = 1; i<=n; i++){
//         p *= x;
//         y *= (1+p);
//     }
//     printf("%10.6f  %11.6f\n",x,y);
//     p = 1;
//     y = 1;
// }

// 4.25. Саставити програм којим се за све углове од 0 до 90 степени са кораком промене
// (дефинисаним у степенима) израчунава и исписује вредност синусне функције. Функција sin као
// улазни параметар захтева угао у радијанима.

// double dx,ugaoS,ugaoR,p;
// dx=0;
// printf("unesite korak u stepenima: ");
// scanf("%lf",&dx);

// for(ugaoS = 0; ugaoS <= 90; ugaoS+=dx){
//     ugaoR =(ugaoS*PI) / 180;
//     p = sin(ugaoR);
//     printf("%f \t%f\n",ugaoS,p);
// }

// 4.26. Саставити програм који за унети позитиван цео број n исцртава облик приказан на слици, на
// слици је n=5. 

// a)
// int i,j,n;
// printf("unesite n: ");
// scanf("%d",&n);

// for(i=1; i<=n; i++){
//     for(j=1; j<=2*n; j++){
//         printf("*");
//     }
//         printf("\n");
// }

// b)
// int i,j,n;
// printf("unesite n: ");
// scanf("%d",&n);

// for(i = 0; i<n; i++){
//     for(j = 0; j<n*2; j++)
//         printf("%d",j);
//     printf("\n");
// }

// 4.28. Саставити програм који за унети позитиван цео број n исцртава облик приказан на слици, на
// слици је n=5. 

// int i,j,n;
// printf("unesite broj n: ");
// scanf("%d",&n);
// printf("\n");

// a)
// for(i=1;i<=n;i++){
//     for(j=1;j<=n;j++){
//         printf("*");
//     }
//     printf("\n");
// }
// v)
// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         printf("* ");
//     }
//     printf("\n");
// }

// prvi kolkvijum zadaci

// 1)
// int x,y;
// printf("unesite broj x: ");
// scanf("%d",&x);

// if(x>-5 && x<10){
//     if(x>-2 && x<=2){
//         y = 5*pow(x,5);
//         printf("vrednost je %d\n",y);
//     } else if(x>3 && x<=7){
//         y = 3*x-1;
//         printf("vrednost je %d\n",y);
//     } else{
//         y = sqrt(pow(x,3) - 5);
//        printf("vrednost je %lf\n", (double)y);
//     }
// }else printf("uneli ste van opsega");

// 2)
// int br,i,kg,a,b,c;
// printf("unesite broj dzudista: ");
// scanf("%d",&br);
// a=0;b=0;c=0;
// for(i=1;i<=br;i++){
//     printf("unesite kilazu takmicara broj %d : ",i);
//     scanf("%d",&kg);
//     if(kg <= 50){
//         a++;
//     } else if(kg >= 51 && kg <= 75){
//         b++;
//     } else if(kg>75){
//         c++;
//     }
// }
// printf("broj takmicara u prvoj kategoriji : %d\n",a);
// printf("broj takmicara u drugoj kategoriji : %d\n",b);
// printf("broj takmicara u trecoj kategoriji : %d\n",c);

// 3)
// double a,x,n,s,eps,clan;
// int i,znak;


// printf("unesite broj x: ");
// scanf("%lf",&x);
// printf("unesite broj a: ");
// scanf("%lf",&a);
// printf("unesite broj n: ");
// scanf("%lf",&n);
// printf("unesite broj eps: ");
// scanf("%lf",&eps);

// s = a*(a-1);
// znak = -1;

// for (i = 2; i <= n; i++) {
//     clan = znak * pow(x, i) / (i * (i-1));
//     s += clan;
//     znak = -znak;

//     if (fabs(clan) < eps) {
//         break;
//     }
// }

// printf("suma reda je : %f",s);

// 5.1. Саставити програм који ће пет пута исписати реченицу Pozdrav svima! употребом
// WHILE петље. 

// int i=1;
// while(i<=5){
//     printf("pozdrav svima\n");
//     i++;
// }

// 5.2. Саставити програм који употребом WHILE петље исписује:
// а) све бројеве прве десетице,
// б) само парне бројеве прве десетице
// в) све бројеве прве десетице у обрнутом редоследу. 

// int i;
// a)
// i=1;
// while(i<10){
//     printf("%d",i);
//     i++;
// }
// b)
// i=2;
// while(i<=10){
//     printf("%d",i);
//     i+=2;
// }
// c)
// i=10;
//  while(i<=10 & i>0){
//  printf("%d\n", i);
//  i--;
//  } 
// 5.3. Саставити програм за исписивање суме природних бројева од 1 до n. Број n се уноси са
// тастатуре. 
// int i,n,suma;
// i=1;suma=0;
// printf("unesite broj n:");
// scanf("%d",&n);

// while(i<=n){
//     suma+=i;
//     i++;
// }
// printf("%d",suma);

// 5.4. Саставити програм за исписивање суме сваког трећег природног броја од 1 до n. Број n се
// уноси са тастатуре. 

// a)
// int i=1, suma=0,n;

// printf("n=");
// scanf("%d", &n);
// while(i<=10){
//     suma +=i;
//     i+=3;
// }
// printf("%d",suma);
// b)

//  int i, n;

//     printf("n=");
//     scanf("%d", &n);

//     i = 3;
//     while (i <= n) {
//         printf("%d ", i);
//         i += 3;
//     }

// 5.5. Саставити програм којим се за дати природни број n израчунава сума: ...
// int i=1,n;
// float s=0;
// printf("Unesite prirodan broj n: ");
// scanf("%d",&n);
// while(i<=n){
//     s+=1./pow(2*i+1,2);
//     i++;
// }
// printf("%f",s);

// 5.7. Саставити програм којим се:
// а) исписује n елемената Фибоначијевог низа;
// б) израчунава и исписује сума првих n елемената Фибоначијевог низа.
// Фибоначијев низ: f1=1, f2=1, fi=fi-1+fi-2, i=3, 4, 5, ... 

// int i=3, n, fp=1, fpp=1,fn,s=2;
// printf("Unesite prirodan broj n: ");
// scanf("%d",&n);
// while(i<=n){
//     fn=fp+fpp;
//     s=s+fn;
//     fpp=fp;
//     fp=fn;
//     i++;
// }
// printf("s= %d\n",s);

// 5.8. Саставити програм за исписивање n-тог степена броја а. Оба броја се уносе са тастатуре. 
// int i=1,n,a,stepen;
// printf(" a= ");
// scanf("%d",&a);
// printf(" n= ");
// scanf("%d",&n); 
// //moj nacin
// stepen = pow(a,n);
// //nacin iz zbirke
// while(i<=n)
//  {
//  stepen*=a;
//  i++;
//  } 

// printf("\n Broj %d na %d-ti stepen je: %d\n",a,n,stepen); 

// 5.9. Саставити програм за израчунавање средње вредности унетих реалних бројева. Користити
// број 0 као STOP кôд за крај учитавања. 

//moj nacin
// int n=0;
//  float x, suma=0,ar=0;
//  printf("\n Unesite niz realnih brojeva (0 za kraj):\n\n");
//  scanf("%f",&x); 
//  while(x!=0){
//     suma +=x;
//     n++;
//     scanf("%f",&x);
//  }
//     ar = suma / n;
//  printf("suma=%.2f",suma);
//  printf("aritmeticka sredina=%.2f",ar);

//nacin iz zbirke 
//  int n=0;
//  float x, suma=0;
//  printf("\n Unesite niz realnih brojeva (0 za kraj):\n\n");
//  scanf("%f",&x);
//  while(x!=STOP)
//  {
//  suma += x;
//  n++;
//  scanf("%f",&x);
//  }
//  if (n==0)
//  printf("\n Nije zadat niz realnih brojeva.\n\n");
//  else
//  printf("\n Aritmeticka sredina zadatog niza je %.3f\n",suma/n); 

//samo treba da se definira stop izvan main funkcije na pocetku programa 

// 5.10. Саставити програм који ће учитавати један за другим низ бројева. Крај уноса означен је
// нулом. Наћи и исписати аритметичку средину учитаних бројева узимајући у обзир само оне бројеве
// који су већи или једнаки 2 и мањи или једнаки 6.

// int i=0;
// float x, suma=0,sredina;
//  printf("\n Unesite niz realnih brojeva (0 za kraj):\n\n"); 
// while(true){
//     scanf("%f",&x);
//     if(x==0){
//         sredina = suma/i;
//         printf("aritmeticka sredina: %.3f\n", sredina);
//     }
//     if(x>=2 && x<=6){
//         suma+=x;
//         i++;
//     }
// }

// 5.11. Саставити програм који ће учитати природне бројеве m и n (m>n). Уколико услови приликом
// уноса нису испуњени поновити учитавање. Наћи и исписати биномни коефицијент: ...
// int i,m=0,n,brojilac=1,imenilac=1;

// while(m>n){ 
//  printf("\n Unesite m i n: ");
//  scanf("%d%d",&m,&n);
// }
// for(i=m;i>m-n;i--){
//      brojilac=brojilac*i; 
// }
// for(i=1;i<=n;i++)
//  imenilac=imenilac*i;
//  brojilac=brojilac/imenilac;
//  printf("\n Binomni koeficijent b= %d \n ", brojilac);

// 5.12. Саставити програм који ће учитати два броја m и n. Оба броја треба да буду природна. Ако
// тај услов није испињен, учитавање треба поновити. Ако је n<m, заменити m са n. Наћи и исписати
// суму квадратних корена свих непарних бројева од m до n. 

// int m=0,n,pomocna,i;
// float suma=0,koren;
//  printf("\n Unesite m i n [0<m<n]: "); 
// while(m<1 || n<1)
// scanf("%d%d",&m,&n);
// if(m>n){
//     pomocna=n;
//     n=m;
//     m=pomocna;
// }
// for(i=m;i<=n;i+=2){
//     koren = sqrt(i);
//     suma+=koren;
// }
//  printf("\n Suma korena je %.3f\n", suma); 

// 5.13. Саставити програм којим се за унето n рачуна сума: ...

// int znak=1,i=1,n;
// float suma=0;
// printf("n= ");
// scanf("%d",&n);

// while(i<=n){
//     suma+=(float)znak/i;
//     i++;
//     znak=-znak;
// }
// printf("s= %f",suma);

// 5.14. Саставити програм којим се приближно рачуна сума: ...
// Сумирање вршити све док је општи члан већи од 10-4
// int n=1;
// float suma=0,clan;
// clan = 1/(n*n);
// while (clan > 1e-4){ //10 na -4
//     suma=suma+clan;
//     n++;
//     clan = 1.0/(n*n);
// }
// printf("s= %.3f\n",suma);

// 5.15. Саставити програм којим за унто х приближно рачуна сума: ...
// Сумирање вршити до члана (укључујући и њега) који је по апсолутној вредности мањи од задатог
// броја ерѕ. Исписати и колико је елемената сумирано.
// int n=1,i;
// double suma=1.0,x,eps,clan;
// printf("x= ");
// scanf("%lf",&x);
// printf("eps= ");
// scanf("%lf",&eps);
//     clan = x;
// while(abs(clan)>=eps){
//     suma+=clan;
//     clan = x;
//     n++;
//     for(i=2;i<=n;i++){
//         clan = -clan*(-x/i);
//     }
// }
// printf("\n S= %lf", suma);
// printf("\n Br.elemenata= %d\n", n);

// 5.16. Саставити програм којим се за унето х приближно рачуна сума: ...
// где је а реалан број (уноси се са тастатуре). Сумирати до члана који је по апсолутној вредноси мањи
// од задатог броја ерѕ. 
// int i;
// double suma = 1.0,x,a,eps,clan;
// printf("\n x= ");
//  scanf("%lf",&x);
//  printf("\n a= ");
//  scanf("%lf",&a);
//  printf("\n eps= ");
//  scanf("%lf",&eps); 

// clan=x;
//  while(fabs(clan)>=eps){
//  i++;
//  clan=clan*(a-i+1)*x/i;
//  suma=suma+clan;
//  } 
// printf("s= %lf",suma);

// 5.17. Саставити програм којим се исписује највећи заједнички делилац (NZD) бројева a и b
// помоћу Еуклидовог алгоритма:
// - ако је a=b, тада је NZD=a и то је крај алгоритма;
// - ако је а≠b, тада од већег броја одузимамо мањи и враћамо се на први корак. 

// int a,b;
// printf("a= ");
// scanf("%d",&a);
// printf("b= ");
// scanf("%d",&b);
// while(a!=b){
// if(a>b){
//     a=a-b;
// }else b=b-a;
// }
// printf("\n NZD = %d\n",a); 

// 5.18. Саставити програм који испитује да ли је унети број Нивенов. Нивенов број је број који је
// дељив са сумом својих цифара. 

// int n,k,suma=0;
// printf("n= ");
// scanf("%d",&n);

// k = n;
// while(k > 0){
// suma = suma + k%10;
// k=k/suma;
// }

//  if (n % suma == 0)
//         printf("\nBroj %d jeste Nivenov\n", n);
//     else
//         printf("\nBroj %d nije Nivenov\n", n);


// 5.19. Саставити програм који за унети природни број исписује број чије су цифре у обрнутом
// редоследу унетог броја. 
int broj,obrnuti=0;
printf("unesite broj: ");
scanf("%d",&broj);
while(broj>0){
    obrnuti = obrnuti*10 + broj%10;
    broj/=10;
}
 printf("\n Obruti: %d\n", obrnuti); 

 getchar();
 return 0;
}

