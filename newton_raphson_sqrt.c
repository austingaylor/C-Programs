#include <stdio.h>

double mysqrt(double n, unsigned iter);

int main()
{
    int n;
    unsigned i;
    
    printf("Enter a number you want to know the square root of:\n");
    fflush(stdout);
    scanf("%d", &n);
    printf("Enter number of iterations to be worked out:\n");
    fflush(stdout);
    scanf("%u", &i);
    
    printf("%.3f\n", mysqrt(n, i - 1));
    
    return 0;
}

double mysqrt(double n, unsigned iter)
{
    unsigned k;
    double xk = 1;
    for (k = 0; k < iter; k++) {
        xk = 0.5 * (xk + n / xk);
    }
    return xk;
}