#include<stdio.h>
int main(){
    double monthly_savings;
    double yearly_rate=5.0/100.0;
    double monthly_rate= yearly_rate/12;
    double total_money=0;
    int time=6;
    printf("Enter the monthly savings: ");
    scanf("%lf",&monthly_savings);
    for (int i=1;i<=time;i++){
        total_money=(monthly_savings+total_money)*(1+monthly_rate);
        printf("Money after month %d is %lf \n",i,total_money);
    }
}