#include<stdio.h>

int main()
{
    float a,res;
    scanf("%f",&a);

    printf("NOTAS:\n");

    printf("%f nota(s) de R$ 100,00\n",res/100.00);
    res = res%100.00;
    printf("%d nota(s) de R$ 50,00\n",a/50);
    a %=50;
    printf("%d nota(s) de R$ 20,00\n",a/20);
    a %=20;
    printf("%d nota(s) de R$ 10,00\n",a/10);
    a %=10;
    printf("%d nota(s) de R$ 5,00\n",a/5);
    a %=5;
    printf("%d nota(s) de R$ 2,00\n",a/2);
    a %=2;
    printf("%d nota(s) de R$ 1,00\n",a/1);
    return 0;
}
