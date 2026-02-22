#include <stdio.h>

int main() {
    int pin;
    int correct_pin = 1357;

    for (int i = 3; i >= 1; ) { 
        printf("Enter your 4-digit pin code: ");

        if (scanf("%d", &pin) != 1) {
            printf("Invalid input! Please enter numeric data only.\n");
            
            while (getchar() != '\n');
            continue; 
        }

        if (pin < 1000 || pin > 9999) {
            printf("Invalid input! Please enter exactly 4 digits.\n");
            continue; 
        }

        if (pin == correct_pin) {
            printf("Permission Granted!!\n");
            break; 
        } else {
            i--;
            if (i > 0)
                printf("Incorrect PIN. %d attempt(s) left.\n", i);
            else
                printf("Incorrect PIN. No attempts left. Access denied.\n");
        }
    }

    return 0;
}