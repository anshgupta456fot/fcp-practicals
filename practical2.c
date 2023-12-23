//temperature conversion
#include<stdio.h>

float celsius_temp(float);
float far_temp(float);
int main(void)
{
    float c, f, cc, cf;
    printf("enter the temperature in celsius:");
    scanf("%f", &c);
    printf("enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    cc=celsius_temp(c);
    cf=far_temp(f);
    printf("%f degree celsius in Fahrenheit is: %0.2f\n",c,cc);
    printf("%f degree Fahrenheit in celsius is: %0.2f\n",f,cf);
}

float celsius_temp(float c)
{
    float cc;
    cc = (c * 1.8) + 32;
    return cc;
}
float far_temp(float f)
{
    float cf;
    cf = ((f - 32) * (5.0)) /9.0;
    return cf;
}