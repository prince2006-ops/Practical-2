#include<stdio.h> 
int main() {    
    float food, leisure, clothes, travel, total;
    const float RENT = 650.00;  // Fixed accommodation
 
    printf("Enter food: ");
    scanf("%f", &food);
    printf("Enter leisure: ");
    scanf("%f", &leisure);
    printf("Enter clothes: ");
    scanf("%f", &clothes);
    printf("Enter travel: ");
    scanf("%f", &travel);
    
    total = food + leisure + clothes + RENT + travel;
    
    printf("\nFood: £%.2f\n", food);
    printf("Leisure: £%.2f\n", leisure);
    printf("Clothes: £%.2f\n", clothes);
    printf("Rent: £%.2f (fixed)\n", RENT);
    printf("Travel: £%.2f\n", travel);
    printf("TOTAL: £%.2f\n", total);
          
    return 0; 
}