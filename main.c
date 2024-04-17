#include <stdio.h>

//calculates the total amount of all expenses
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
        printf("What's your monthly income?\n"); //asks the user for their income
        success = scanf("%f", &income); //reads the user input and stores it in the variable
        
        //clears the input if its entered invalid input like letters
        while (getchar() != '\n');

        if (!success) {
            printf("Invalid input. Please enter a number.\n"); //displays error message if invalid input is entered
        }
    } while (!success); //loops until a valid input like number is entered

    do {
        printf("Enter the number of your monthly expenses:\n");
        success = scanf("%d", &mExpenses);
        
        while (getchar() != '\n');
        
        if (!success) {
            printf("Invalid input. Please enter a number.\n");
        }
    } while (!success);

    //creates an array or more to store the monthly expenses entered by the user
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
    
    float totalExpenses = calculateAllExpenses(expenses, mExpenses); //calculates the amount of the expenses
    float remainingBalance = income - totalExpenses - savings; //calculates the remaining balance after substracting the expenses and savings from the income

    //displays the expenses and remaining balance
    printf("\nYour total monthly expenses: %.2f\n", totalExpenses);
    printf("Your remaining budget after savings: %.2f\n", remainingBalance);
    
    return 0;
}
