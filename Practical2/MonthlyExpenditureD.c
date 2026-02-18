#include<stdio.h> 
int main() {    
    float food, leisure, clothes, accommodation, travel, total;
 
    printf("Enter food expenses: ");
    scanf("%f", &food);
    
    printf("Enter leisure expenses: ");
    scanf("%f", &leisure);
    
    printf("Enter clothes expenses: ");
    scanf("%f", &clothes);
    
    printf("Enter accommodation expenses: ");
    scanf("%f", &accommodation);
    
    printf("Enter travel expenses: ");
    scanf("%f", &travel);
    
    total = food + leisure + clothes + accommodation + travel;
    
    printf("\nTotal spent: $ %.2f\n", total);
          
    return 0; 
}