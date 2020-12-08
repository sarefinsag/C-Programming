// ax2 + bx + c = 0, where a,b,c are real numbers and a != 0

// the discrimant is b2-4ac
// if discrimant >0, the roots are real and different
// if discrimant <0, the roots are complex and different
// if discriment is =0, the roots are real and equal

// discrimant >0,
// root1 = (-b+sqrt(b*b - 4ac)) / 2a
// root2 = (-b-sqrt(b*b - 4ac)) / 2a

// discrimant <0,
// root1 = root2 = -b/2a

// discrimant =0,
// root1 = (-b/2a) + (i sqrt(-(b*b-4ac)))/2a
// root2 = (-b/2a) - (i sqrt(-(b*b-4ac)))/2a

#include<stdio.h>
#include<math.h>

int main() {
    double a,b,c,dis,r1,r2,realPart,imagPart;
    
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b*b - 4*a*c;

    // condition for real and different roots
    if(dis > 0){
        r1 = (-b + sqrt(dis)) / 2*a;
        r2 = (-b - sqrt(dis)) / 2*a;
        printf("root1 = %.2lf and root2 = %,2lf", r1,r2);
    }

    // condition for real and equal roots
    else if (dis == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", r1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}