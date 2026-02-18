                                                                  
#include<stdio.h> 
int main() {    
    
    float Food_Expenses = 250.75;      
    float Leisure_Expenses = 120.50;    
    float Clothes_Expenses = 185.25;     
    float Accommodation_Expenses = 250.00; 
    float Travel_Expenses = 195.40;      
    float Total_Spent;  
 
    Total_Spent = Food_Expenses + Leisure_Expenses + Clothes_Expenses + Accommodation_Expenses + Travel_Expenses; 
 
    printf("The total expenditure this month was $ %.2f\n\n", Total_Spent);  
          
    return 0; 
}