
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

 getche();
 return 0;
}

