#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    float discriminant = b * b - 4 * a * c;

    
        float root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        float root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("The roots are %f and %f\n", root1, root2);
    
    float c1=1/(root1-root2);
    float c2=-c1;
    printf("(%f^n)%f + (%f^n)%f",c1,root1,c2,root2);
    return 0;
}
