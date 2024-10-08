#include <stdio.h>

#define MAX_CHARS 100

int is_lowercase(char c);
int is_uppercase(char c);
int is_letter(char c);
char to_lowercase(char c);
char to_uppercase(char c);
int is_vowel(char c);
int count_lowercase(char string[MAX_CHARS]);
void make_vowels_uppercase(char string[MAX_CHARS]);
void delete_following_words(char string[MAX_CHARS]);


int main(void) {
    char string[MAX_CHARS] = "Hello world!";
    char str[MAX_CHARS] = "aeiou";
    char str1[MAX_CHARS] = "This is a sentence";
    printf("How many lowercases: %d\n", count_lowercase(string));
    make_vowels_uppercase(str);
    printf("Result of converting vowels to uppercase %s\n", (str));
    delete_following_words(str1);
    printf("Result of delete the following words %s\n", (str1));

    return 0;
}

// Provided char functions

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c) {

    return 'A' <= c && c <= 'Z';
}

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c) {

    return is_lowercase(c) || is_uppercase(c);
}

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c) {
    if (is_uppercase(c)) {
        return c - 'A' + 'a';
    }

    return c;
}

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c) {
    if (is_lowercase(c)) {
        return c - 'a' + 'A';
    }

    return c;
}

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c) {
    char lower_c = to_lowercase(c);

    return lower_c == 'a' 
        || lower_c == 'e'
        || lower_c == 'i' 
        || lower_c == 'o' 
        || lower_c == 'u';
}

// TODO: Functions to implement:

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char string[MAX_CHARS]) {
    int counter = 0;
    for (int i = 0; i < MAX_CHARS; i ++) {
        if (is_lowercase(string[i])) {
            counter ++;
        }
    }
    return counter;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char string[MAX_CHARS]) {
    for (int i = 0; i < MAX_CHARS; i ++) {
        if (is_vowel(string[i])) {
            string[i] = to_uppercase(string[i]);
        }
    }
    return;
}

// 3.
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char string[MAX_CHARS]) {
    for (int i = 0; i < MAX_CHARS; i ++) {
        if (string[i] == ' ') {
            string[i] = '\0';
        }
    }
    return;
}
