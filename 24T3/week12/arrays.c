#include <stdio.h>

#define MAX_LENGTH 3

enum food_type {
  FRUIT,
  VEGETABLE,
  MEAT,
  DAIRY
};

struct food {
  double price;
  enum food_type type;
  char *name;
};


double total_price_of_food_type(struct food foods[MAX_LENGTH]);

int main(void) {
    struct food foods[3];
    foods[0].price = 1.5;
    foods[0].type = FRUIT;
    foods[0].name = "Apple";

    foods[1].price = 2.75;
    foods[1].type = VEGETABLE;
    foods[1].name = "Broccoli";

    foods[2].price = 3.0;
    foods[2].type = FRUIT;
    foods[2].name = "Banana";

    printf("the result of function is %lf\n", total_price_of_food_type(foods));

    return 0;
}

double total_price_of_food_type(struct food foods[MAX_LENGTH]) {
	int i = 0;
	double sum = 0;
	while (i < MAX_LENGTH) {
		// sum = sum + foods[i].price;
		sum += foods[i].price;
		i ++;
	}

	return sum;
}