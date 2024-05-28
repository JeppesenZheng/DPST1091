

#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card;
};

int main(void)
{
	// how to assign enum opal_card_type card_type to student

    enum opal_card_type card_type = STUDENT;

    // how to add card type in to struct then assgin CONSESSION to jessica(person strut)
    struct person jessica;

    jessica.card = CONCESSION;

	return 0;
}