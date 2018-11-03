#include<stdio.h>

int main()
{
    int x,y;
    float c;
    scanf("%d %d",&x,&y);

    if(x==1)
       c= (y*4.00);
    else if(x==2)
        c = y*4.50;
    else if(x==3)
        c = y*5.00;
    else if(x==4)
       c = y*2.00;
    else
        c = y*1.50;

        printf("Total: R$ %.2f\n",c);

}
