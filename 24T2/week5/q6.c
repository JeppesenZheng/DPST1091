// How would you declare a variable people to be an array of struct customer with 15 elements? 
// How would you assign 123456 to the id of the second person (index will be 1)
// and 70000.500 to the salary of the fifth person? (index will be 4)

#include <stdio.h>

struct customer {
   int customer_id;
   double salary;
};

int main(void) {
   struct customer customers[15];
   customers[1].customer_id = 123456;
   customers[4].salary = 70000.5;
   printf("%d\n", customers[1].customer_id);
   printf("%lf\n", customers[4].salary);
}