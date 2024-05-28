// coffee_shop.c
//
// Written by YOUR-NAME (zID)
// on TODAYS-DATE 
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees 
// the shop sells. These are: LATTE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.
enum coffee_type {
    LATTE,
    CAPPUCCINO,
    ESPRESSO,
    AMERICANO,
    MATCHA
};

// TODO: Define a struct `coffee` that stores 
// 1. the coffee type (an enum)
// 2. the number of sugars 
// 3. the size of a coffee 
struct coffee {
    enum coffee_type type;
    double num_sugars;
    char size;
};

int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee coffee;

    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, \
            3: AMERICANO, 4: MATCHA): ");
    
    // TODO: take user input
    int type;
    scanf("%d", &type);
    if (type == 0) {
        coffee.type = LATTE;
    } else if (type == 1) {
        coffee.type = CAPPUCCINO;
    } else if (type == 2) {
        coffee.type = ESPRESSO;
    } else if (type == 3) {
        coffee.type = AMERICANO;
    } else {
        coffee.type = MATCHA;
    }

    printf("Enter number of sugars: ");
    // TODO: take user input
    scanf("%lf", &coffee.num_sugars);

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input
    scanf(" %c", &coffee.size);
    
    double total_cost = BASE_COST;
    if (coffee.size == LARGE) {
        total_cost = total_cost + ADDED_COST;
        // total_cost += ADDED_COST;
    }

    // TODO: Calculate cost of order
    if (coffee.type == LATTE || coffee.type == CAPPUCCINO || coffee.type == MATCHA) {
        total_cost += ADDED_COST;
    }

    total_cost = total_cost + coffee.num_sugars * ADDED_COST;

    printf("Total cost: %.2lf\n", total_cost);
    return 0;
}