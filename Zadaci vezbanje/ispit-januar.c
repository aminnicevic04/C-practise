
// spremanje za ispit |januar


#include <stdio.h>
#include <math.h>

 #define PI 3.14

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

int temp;
double fahr, celsius;
printf("\n unesite Temperaturu u stepenima F <ceo broj od 0 do 300>: ");
scanf("%d", &temp);

fahr = (double)temp;
celsius = (5.0/9.0)*(fahr-32);
printf("\n%d F = %.2f C\n", temp, celsius);

return 0;
}

