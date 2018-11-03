#include<stdio.h>
#define n 3.14159
int main()
{
    double R,A;
    scanf("%lf",&R);
    A = (4/3.0)*n*(pow(R,3));

    printf("VOLUME = %.3lf\n",A);

    return 0;
}


