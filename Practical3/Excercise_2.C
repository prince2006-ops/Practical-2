#include<stdio.h>
int main(){
    int month,year,days;
    printf("Enter the number for month: ");
    scanf("%d",&month);
    printf("Enter the year: ");
    scanf("%d",&year);
    const char *months[]={"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 9: case 11:
        days=31;
        break;
    case 4: case 6: case 8: case 10: case 12:
        days=30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
    default:
            printf("Invalid input");
        break;
    }
    printf("%s %d had %d days",months[month-1],year,days);
return 0;
}