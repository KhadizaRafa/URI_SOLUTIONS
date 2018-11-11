#include<stdio.h>

int main()
{
    int a,b,c,i,j,k,temp;
    scanf("%d%d%d",&i,&j,&k);
    a=i;b=j;c=k;
    if(a>b)
    {
        temp = a;
        a = b ;
        b=temp;
    }
    if(a>c)
    {
        temp = a;
        a = c ;
        c=temp;
    }
    if(b>c)
    {
        temp = b;
        b = c ;
        c = temp;
    }

    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",i,j,k);

    return 0;
}


