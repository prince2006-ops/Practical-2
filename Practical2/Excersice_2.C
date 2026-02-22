#include<stdio.h>
int main(){
    double celcius,farenheit;
    printf("Enter the degree in Celcius:");
    scanf("%lf",&celcius);
    farenheit=(9.0 / 5.0) * celcius + 32;
    printf("The degree in farenheit is %.2f\n",farenheit );
    return 0;

}