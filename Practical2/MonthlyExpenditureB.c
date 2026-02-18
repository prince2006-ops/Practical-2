// (b). Create a new file MonthlyExpenditureB.C. Copy the content of the file  MonthlyExpenditureA.c in MonthlyExpenditureB.c. Edit MonthlyExpenditureB.c to calculate your total money spent last month on food, leisure and clothes (i.e., to replace those default values with your own expenses). Run the edited program. 

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