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
    

    return 0 ;
}