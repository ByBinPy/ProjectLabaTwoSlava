#include <math.h>
#include <stdio.h>
int main(void)
{
    double rad_a;
    double rad_b;
    printf("Enter a and b:\n");
    scanf("%lf",&rad_a);
    scanf("%lf",&rad_b);
    double z_1 = pow(cos(rad_a)-cos(rad_b),2)-pow(sin(rad_a)-sin(rad_b),2);
    double z_2 = -4*pow(sin((rad_a-rad_b)/2),2)*cos(rad_a+rad_b);
    printf("Result this operation %lf for z_1\n",z_1);
    printf("Result this operation %lf for z_2",z_2);
    int end;
    scanf("%d",&end);
    printf("The end");
    printf("Good bye my friend");
    return 0;
}