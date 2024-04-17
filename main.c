#include <stdio.h>

float calculateAllExpenses(float expenses[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += expenses[i];
    }
    return total;
}

int main() {
    
    float income;
    int success;
    int mExpenses;
    float savings;
    
    

    do {
        printf("What's your monthly income?\n");
        success = scanf("%f", &income);
        
        // Clear the input buffer in case of invalid input
        while (getchar() != '\n');

        if (!success) {
            printf("Invalid input. Please enter a number.\n");
        }
    } while (!success);

    do {
        printf("Enter the number of your monthly expenses:\n");
        success = scanf("%d", &mExpenses);
        
        while (getchar() != '\n');
        
        if (!success) {
            printf("Invalid input. Please enter a number.\n");
        }
    } while (!success);
    
    float expenses[mExpenses];
    for (int i = 0; i < mExpenses; i++) {
    printf("Enter expense #%d: ", i+1);
    scanf("%f", &expenses[i]);
    };
    
    do {
        printf("What is your monthly savings goal?\n");
        success = scanf("%f", &savings);
        
        while (getchar() != '\n');
        
        if (!success) {
            printf("Invalid input. Please enter a number.\n");
        }
    } while (!success);
    
    float totalExpenses = calculateAllExpenses(expenses, mExpenses);
    float remainingBalance = income - totalExpenses - savings;
    
    printf("\nYour total monthly expenses: %.2f\n", totalExpenses);
    printf("Your remaining budget after savings: %.2f\n", remainingBalance);
    
    return 0;
}
