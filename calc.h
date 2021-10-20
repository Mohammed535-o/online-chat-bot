#include<stdio.h>
#include<math.h>
void add(double a,double b)
{
       double sum =0;
       sum = a + b;
       printf("%.4lf + %.4lf = %.7lf\n\n",a,b,sum);
}
void sub(double a,double b)
{
       double diff = 0;
       diff = a-b;
       printf("%.4lf - %.4lf = %.7lf\n\n",a,b,diff);
}
void pdt(double a,double b)
{
       double pro =0;
       pro = a*b;
       printf("%.4lf * %f = %.7lf\n\n",a,b,pro);
}
void divs(double a,double b)
{
       double q = a/b;
       printf("quotient = %.7lf \n\n",q);
}
void sroot(double a)
{
       printf("%.7lf\n\n",sqrt(a));
}
