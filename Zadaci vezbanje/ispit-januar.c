
// spremanje za ispit |januar

// 2.19. Саставити програм који за унети полупречник основице и висине ваљка исписује његову
// површину и запремину. (Површина: P=2*r*π*(r+h) , Запремина: V=r2
// *π*h) 
#include <stdio.h>
#include <math.h>

 #define PI 3.14

main(){ 
 double p, r, h, v;

    printf("Unesite visinu valjka: ");
    scanf("%lf", &h);

    printf("Unesite poluprecnik valjka: ");
    scanf("%lf", &r);

    p = 2 * r * PI * (r + h);
    v = r * r * PI * h;

    printf("Povrsina valjka: %.2f\n", p);
    printf("Zapremina valjka: %.2f\n", v);

return 0;
}

