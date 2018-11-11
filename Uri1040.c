#include<stdio.h>

int main()
{
    float n1,n2,n3,n4,n5;
    float avg,new_avg;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    avg = (n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    printf("Media: %.1f\n",avg);

    if(avg>=7.0)
        printf("Aluno aprovado.\n");
    else if(avg<5.0)
        printf("Aluno reprovado.\n");
    else
    {
         printf("Aluno em exame.\n");
         scanf("%f",&n5);
         printf("Nota do exame: %.1f\n",n5);
         new_avg = (avg+n5)/2;
         if(new_avg>=5.0)
           printf("Aluno aprovado.\n");
         else
            printf("Aluno reprovado.\n");
         printf("Media final: %.1f\n",new_avg);

    }
    return 0;
}
