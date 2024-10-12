#include <stdio.h>

#define MAX_CUSTOMERS 100
#define MAX_SHOPPINGS 50

// Structure to store customer information
typedef struct {
    char name[50];
    int id;
    int num_shoppings;
    double spent_money[MAX_SHOPPINGS];
} Customer;

// Function to calculate the average purchase
double calculate_average_purchase(Customer customer) {
    double total_spent = 0.0;
    for (int i = 0; i < customer.num_shoppings; i++) {
        total_spent += customer.spent_money[i];
    }
    return total_spent / customer.num_shoppings;
}

// Function to find the best customer
Customer find_best_customer(Customer customers[], int total_customers) {
    Customer best_customer = {"", 0, 0, {0}};
    double best_average = 0.0;

    for (int i = 0; i < total_customers; i++) {
        if (customers[i].num_shoppings > 10) {
            double average_purchase = calculate_average_purchase(customers[i]);
            if (average_purchase > best_average) {
                best_average = average_purchase;
                best_customer = customers[i];
            }
        }
    }

    return best_customer;
}

int main() {
    Customer customers[MAX_CUSTOMERS];
    int total_customers = MAX_CUSTOMERS;

    // Input customer details
    for (int i = 0; i < total_customers; i++) {
        printf("Enter name for customer %d: ", i + 1);
        scanf("%s", customers[i].name);
        printf("Enter ID for customer %d: ", i + 1);
        scanf("%d", &customers[i].id);
        printf("Enter number of times shopped for customer %d: ", i + 1);
        scanf("%d", &customers[i].num_shoppings);
        printf("Enter the spent money for each shopping for customer %d:\n", i + 1);
        for (int j = 0; j < customers[i].num_shoppings; j++) {
            printf("Shopping %d: ", j + 1);
            scanf("%lf", &customers[i].spent_money[j]);
        }
    }

    // Find and print the best customer
    Customer best_customer = find_best_customer(customers, total_customers);
    printf("\nBest Customer Award goes to: %s\n", best_customer.name);

    return 0;
}
