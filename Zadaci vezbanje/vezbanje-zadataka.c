#include <stdio.h>
#include <math.h>

 #define PI 3.14
int main(){
    //  1

    // const double PI = 3.141559;
    // double radius;
    // double circumference;
    // double area; 

    // printf("\nEnter radius of circles: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;
    // area = PI * radius * radius;

    // printf("circumference: %lf", circumference);
    // printf("\narea: %lf", area);

    //  2

    // double A;
    // double B;
    // double C;

    // printf("enter side A: ");
    // scanf("%lf", &A);

    // printf("enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(A*A + B*B);
    // printf("C = %lf", C);

    // 3 temp conv

    // char unit;
    // float temp;

    // printf("\nIs temperature in (F or (C)?: ");
    // scanf("%c", &unit);

    // unit = toupper(unit);

    // if(unit == 'C'){
    //     printf("\n Enter the temp in Celsius: ");
    //     scanf("%f", &temp);
    //     temp = (temp * 9 / 5) + 32;
    //     printf("the temp in Farenheit is: %.1f", temp);
    // } else if(unit == 'F'){
    //     printf("\nEnter the temp in Farenheit: ");
    //     scanf("%f",&temp);
    //     temp = ((temp - 32) * 5) / 9;
    //     printf("\nThe temp in Celsius is: %.1f", temp);
    // }else{
    //     printf("\n %c is not a valid unit od measurment", unit);
    // };

    // 4 Саставити програм којим се реални број унет са тастатуре заокружује на две децимале. 

    // int a;
    // printf("unesite decimalni broj: ");
    // scanf("%f", &a);
    // printf("\nBroj zaokruzen na dve decimale je: %.2f", a)

    // 5 cаставити програм којим се замењују вредности два унета цела броја. 

    // int a,b,pomocna;
    // printf("unesite broj a i b: ");
    // scanf("%d %d", &a, &b);
    // printf("pre izmene a = %d b = %d",a,b);
    // pomocna = a;
    // a = b;
    // b = pomocna;
    // printf("posle izmene a = %d b = %d",a, pomocna);

    // 6 2.15. Саставити програм који учитава два цела броја са тастатуре и исписује њихов збир. 

    // int a,b,zbir;
    // printf("unesite broj a i b"); 
    // scanf("%d%d",&a,&b);
    // zbir = a + b;
    // printf("zbir je : %d",zbir);

    // 7 2.16. Саставити програм који учитава два цела броја и исписује њихов збир, разлику, производ, 
    // целобројни количник, реални количник и остатак при целобројном дељењу. 

//  int a, b; 
//  printf("Unesite prvi broj: "); 
//  scanf("%d", &a); 
//  printf("Unesite drugi broj: "); 
//  scanf("%d", &b); 
//  printf("Zbir a+b je: %d\n", a+b); 
//  printf("Razlika a-b je: %d\n", a-b); 
//  printf("Proizvod a*b je: %d\n", a*b); 
//  printf("Celobrojni kolicnik a/b je: %d\n", a/b);
//  printf("Realni kolicnik a/b je: %f\n", (float)a/(float)b); 
//  printf("Ostatak pri deljenju a/b je: %d\n", a%b);

    // 8 2.17. Саставити програм који за унете странице правоугаоника исписује његов обим и површину. 

    // float a,b,o,p;
    // printf("unesite stranicu a: ");
    // scanf("%f",&a);
    // printf("unesite stranicu b: ");
    // scanf("%f",&b);
    // o = 2*a + 2*b;
    // p = a*b;
    // printf("obim je : %.2f",o);
    // printf("povrsina je : %.2f",p);

    // 9  Саставити програм који за унети полупречник круга исписује његов обим и површину

    // float r,obim,povrsina;
   
    
    // printf("unesite poluprecnik kruga: ");
    // scanf("%f", &r);
    // obim = 2*r*PI;
    // povrsina = r*r*PI;
    // printf("obim kruga je : %.2f", obim);
    // printf("povrsina kruga je : %.2f", povrsina);

    //10 2.21. Саставити програм за решавање линеарне једначине AX+B=0, где се коефицијенти А и В
    // уносе са тастатуре (А≠0)

    // float a,x,b;
    // printf("a = ");
    // scanf("%f",&a);
    // printf("b = ");
    // scanf("%f",&b);
    // x = -b/a;
    // printf("Jednacina ima oblik %.2fX + %.2f = 0\n", a, b); 
    // printf("Resenje X= %.2f\n", x); 

    //11 2.22. Саставити програм за рачунање израза 2 3
    // y = x + x + x за унету вредност х. 

    // float x,y;

    // printf("unesite x: ");
    // scanf("%f",&x);
    // y = sqrt(x+x*x+x*x*x);
    // printf("y = %.2f",y);

    //12 2.23. Саставити програм који исписује вредност модула комплексног броја z = a + bi за унете
    // вредности а и b. Модул се рачуна по формули 2 2
    // z = a + b .

    // float a, b, m; 
    // printf("a= "); 
    // scanf("%f",&a); 
    // printf("b= "); 
    // scanf("%f",&b); 
    // m=sqrt(a*a+b*b); 
    // printf("Modul kompleksnog broja %.2f+%.2f i je %.2f ", a, b, m); 

    //13 2.24. Саставити програм који за унете реалне и имагинарне делове два комплексна броја исписује
    // та да два броја у облику z = a + bi 1
    // и z = c + di 2
    // , а затим рачуна њихов збир и разлику
    // ( ) ( ) z1 ± z2 = a + c ± i b + d . 

    // float a1,a2,b1,b2,rz,rr,iz,ir;

    // printf("a1 : ");
    // scanf("%f", &a1);
    // printf("a2 : ");
    // scanf("%f", &a2);
    // printf("b1 : ");
    // scanf("%f", &b1);
    // printf("b2 : ");
    // scanf("%f", &b2);
    // rz = a1 + a2;
    // rr = a1 - a2;
    // iz  = b1 + b2;
    // ir = b1 - b2;
    // printf("\nz1 = %.2f + %.2fi \nz2 = %.2f + %.2fi \n",a1,b1,a2,b2); 
    // printf("\nz1+z2 = %.2f + %.2fi", rz, iz); 
    // printf("\nz1-z2 = %.2f + %.2fi", rr, ir);

    //14 3.1. Саставити програм који исписује обавештење да ли је унети цео број паран или непаран. 
    // int broj;
    // printf("Unesite ceo broj:"); 
    // scanf("%d", &broj);

    // if(broj % 10 == 0){
    //     printf("broj %d je paran", broj);
    // } else{
    //     printf("broj %d je neparan", broj);
    // }

    //15 3.2. Саставити програм који исписује обавештење да ли је унети број позитиван, негативан или је
    // једнак нули. 

    // int broj;
    // printf("unesite neki ceo broj");
    // scanf("%d",&broj);
    //  if(broj > 0){
    //     printf("broj %d je pozitivan", broj);
    //  } else if(broj < 0){
    //     printf("broj %d je negativan", broj);
    //  } else{
    //     printf("broj je %d", broj);
    //  }

    //16 3.3. Саставити програм који за два унета цела броја исписује какав постоји релациони однос
    // између њих (једнаки су, први већи од другог или први је мањи од другог).

    // int a,b;
    // printf("unesite a i b: ");
    // scanf("%d%d",&a,&b);

    // if(a>b){
    //     printf("broj %d je veci od broja %d",a,b);
    // } else if(b>a){
    //     printf("broj %d je veci od %d",b,a);
    // } else {
    //     printf("brojevi su jednaki nuli");
    // }

    //17 3.4. Саставити програм који за три унета цела броја исписује највећи. 

    // int a,b,c, max;
    // printf("unesite brojeve a b c: ");
    // scanf("%d%d%d", &a,&b,&c);

    // max = a;
    // if(b>max){
    //     max = b;
    // } else if(c>max){
    //     max = c;
    // } 
    // printf("najveci broj je %d",max);

    //18    3.5. Саставити програм који три унета реална броја уређује у неопадајућем редоследу. 

    // double prvi,drugi,treci,temp;
    // printf("unesite tri realna proja");
    // scanf("%lf%lf%lf",&prvi,&drugi,&treci);

    // if(prvi>drugi){
    //     temp=prvi;
    //     prvi=drugi;
    //     drugi=temp;
    // }
    // if(prvi>treci){
    //     temp = prvi;
    //     prvi = treci;
    //     treci = temp;
    // }
    // if(drugi>prvi){
    //     temp = drugi;
    //     drugi = prvi;
    //     drugi = temp;
    // }

    // printf("brojevi su : %.2f %.2f %.2f\n",prvi,drugi,treci);

    //nacin 2
//     double x, y, z, p; 
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

    //19 3.6. Саставити програм који проверава и исписује да ли се на k-том месту унетог броја n налази
    // бит који има вредност 1 или 0.
//     int n,k; 
//  printf(" Unesite broj: "); 
//  scanf("%d",&n); 
//  printf(" Unesite poziciju tog broja koju zelite da proverite: "); 
//  scanf("%d",&n); 
//  if((n & (1 << k))!=0) 
//  printf(" Bit je 1\n"); 
//  else 
//  printf(" Bit je 0\n"); 

    //20 3.7. Саставити програм који ће на основу унетих броја поена (од нула до 100) исписати
// одговарајућу оцену (0-50 пет, 51-60 шест, 61-70 седам, 71-80 осам, 81-90 девет, 91-100 десет).

    // int ocena,bodovi;
    // printf("unesite bodove izmedju 0 i 100:\n");
    // scanf("%d", &bodovi);

    // if(bodovi <= 50 ){
    //     printf("ocena 5");
    // }else if(bodovi > 50 && bodovi <= 60){
    //     printf("ocena 6");
    // }else if(bodovi > 60 && bodovi <= 70){
    //     printf("ocena 7");
    // }else if(bodovi > 70 && bodovi <= 80){
    //     printf("ocena 8");
    // }else if(bodovi > 80 && bodovi <= 90){
    //     printf("ocena 9"); 
    // }else{
    //     printf("ocena 10");
    // }

    //21 

    // int d, h, m, s, h1, m1, s1;
    // printf("Unesite duzinu leta u sekundama"); //
    // scanf("%d", &d);
    // printf("Unesite vreme na pocetku leta u satima minutima sekundama");
    // scanf("%d %d %d", &h, &m, &s);
    // h1 = d / 3600;
    // h += h1;
    // m1 = (d - h1 * 3600) / 60;
    // m += m1;
    // s += d - (h1 * 3600 + m1 * 60);
    // while (s >= 60)
    // {
    //     m++;
    //     s -= 60;
    // }
    // while (m >= 60)
    // {
    //     h++;
    //     m -= 60;
    // }
    // printf("Vreme sletanja je : %dh %dm %ds", h, m, s);

    //3. ZADATAK 2 list
  // ispisati program kojim se izracunava: S=1! +3! + 5! n mora biti neparan broj u suprotnom je s=0

  int n, f = 1;
  float s = 0;
  printf("n: ");
  scanf("%d", &n);
  
  if(n%2 != 0){
  for (int i = 1; i <= n; i += 2)
  {
    f = 1;
    for (int j = 1; j <= i; j++)
    {
      f *= j;
    }
    s += f;
  }
  } else {
    s = 0;
  }
  printf("%.2f\n ", s);

 
    return 0 ;
}