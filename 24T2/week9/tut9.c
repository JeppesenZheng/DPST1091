/*
How much memory is needed for different type
int:
double:
char:
char[10]:

How to get the value of memory is needed for different type


what does malloc do?
takes:

returns:

what does free do?


difference bewteen staic allocation and dynamic allocation
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct my_struct {
    int number;
    char letter;
    double another_number;
};

#define STRING_LENGTH 50
struct checkin {
    char name[STRING_LENGTH];
    char date[STRING_LENGTH];
};


int main(void) {
    struct my_struct my;
    printf("%d\n", (int)sizeof(my));


    // check-in
    struct checkin *checkin;
    // print the info
    // check-out

}