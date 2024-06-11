// part1_galaxy.c
//
// This program was written by YOUR-NAME (ZID)
// on DATE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);
void init(struct celestial_body galaxy[SIZE][SIZE]);
void place_player(struct celestial_body galaxy[SIZE][SIZE]);
void place_planets(struct celestial_body galaxy[SIZE][SIZE]);
void place_stars(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // Initialize the galaxy
    init(galaxy);

    // Place the player in the galaxy
    place_player(galaxy);

    // Place the planets and nebulae in the galaxy
    place_planets(galaxy);
    
    // Place the stars in the galaxy
    place_stars(galaxy);

    // Print the map
    print_map(galaxy);
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}

void init(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i ++) {
        for (int j = 0; j < SIZE; j ++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

void place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    int row, col;
    scanf("%d %d", &row, &col);
    while(row != 0 && row != SIZE - 1 && col != 0 && col != SIZE - 1) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &row, &col);
    }
    galaxy[row][col].entity = SPACESHIP;
}

void place_planets(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("How many planets and nebulae are there? ");
    int row, col;
    char type;
    int points;
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i ++) {
        printf("Enter the position and points of the planet(s) and nebula(e): ");
        scanf(" %c %d %d", &type, &row, &col);
        if (type == 'p') {
            scanf("%d", points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (type = 'n') {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        } else {
            galaxy[row][col].points = 0;
        }
    }
}

void place_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    int row, col, points;
    printf("Enter the position and points of the star(s): \n");
    while(scanf("%d %d %d", &row, &col, &points) != EOF) {
        galaxy[row][col].points = points;
    }
}