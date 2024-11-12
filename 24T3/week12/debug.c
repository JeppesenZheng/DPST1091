#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM_LEN 100

// definition for individual bus
struct bus {
    // update route_number into string
    // int route_number;
    char route_number[MAX_NUM_LEN];
    // there is no next_buses struct
    // struct next_buses *next_bus;
    struct bus *next_bus;
};

// creates new bus node
// change the parameter into string
struct bus *create_bus(char route_number[MAX_NUM_LEN]) {
    struct bus *new_node = malloc(sizeof(struct bus));
    // new_node->route_number = route_number;
    // since now route_number is a string, then we also need to update the field 
    // in the struct, and when we want to copy a string, we use strcpy in string.h
    strcpy(new_node->route_number, route_number);
    // since this function is to create a new bus node, 
    // normally we set the *next = NULL
    new_node->next_bus = NULL;

    return new_node;
}

// What's my bus route again? I think 390X is one of them...
// NOTE: argv is given as a stack, i.e. argv[1] is the last bus
int main(int argc, char *argv[]) {
    // create bus route from argv
    struct bus *head = NULL;
    // in the *argv[], argv[1] is the command to run the code.
    // then if we want to get the parameters, we should start from 1
    int counter = 1;
    while (counter < argc) {
        // since argv[counter] is a string, then we want to pass in a string
        // then we need to change the paramter in the function
        struct bus *new_bus = create_bus(argv[counter]);
        // the following code will just keep updating the head to the new bus
        // but we want to insert the new bus as the head
        // head = new_bus;
        if (head == NULL) {
            head = new_bus;
        } else {
            new_bus->next_bus = head;
            head = new_bus;
        }

        counter++;
    }

    if (head == NULL) {
        // (1) if no bus route given, i am already home
        printf("Wait, I'm already home!\n");

    } else {
        // (2) if bus route exists, print out bus route
        printf("To get home, I need to take: ");
        
        // iterate over bus route
        struct bus *current = head;
        // inside the condition here, we can find that why we will never goes in
        // to the loop, then we need to check the loop conditon: currently is 
        // == NULL
        while (current != NULL) {
            printf("%s -> ", current->route_number);
            // after we run the code, then we find we can only see the home, 
            // then which means that there're someting wrong with the traverse
            // the following line is move to the next node, which is the another 
            // way around.
            // current->next_bus = current;
            current = current->next_bus;
        }
        printf("Home!\nWow, that's a long bus ride!\n");
    }

    // Now, the code is fixed


    // To test your program, run: ./program_name 348 370 390X
    //     Your output should be:
    //                  To get home, I need to take: 390X -> 370 -> 348 -> Home!
    //                  Wow, that's a long bus ride!
    return 0;
}