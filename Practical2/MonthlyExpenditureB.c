

#include<stdio.h> 
int main() {    
    //My own monthly expenditure 
    float foodExpenses = 350.0;     
    float leisureExpenses = 200.0;    
    float clothesExpenses = 500.0; 
    float totalSpent; 
 
    totalSpent = foodExpenses + leisureExpenses + clothesExpenses; 
 
    printf("The total expenditure this month was $ %.2f\n\n", totalSpent);  
          
    return 0; 
}