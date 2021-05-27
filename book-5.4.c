#include<stdio.h>
int main()
{
    float z,a,b,k,l,t;
    int year;
    printf("persentage of ashol+shud :");
    scanf("%f",&a);

    printf("mot rin :");
    scanf("%f",&b);

    z=(a*b)/100;
    printf("mot porishod korte hobe : %f\n",z);

    printf("enter tk porishod er mot year :");
    scanf("%d",&year);//5
    k=(year*365);//1825
    l=((float)k/30);//60.84
    t=(z/l);
    printf("1 month a porishod korte hobe = %f tk\n ",t);
}


