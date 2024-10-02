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
void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void place_player(struct celestial_body galaxy[SIZE][SIZE]);
void place_planets_and_nebula(struct celestial_body galaxy[SIZE][SIZE]);
void place_stars(struct celestial_body galaxy[SIZE][SIZE]);
void print_galaxy_sum(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    initialise_galaxy(galaxy);

    // TODO: Place the planets and nebulae in the galaxy
    // if type = p, need to scan the points for PLANT
    // if type = n which is NEBULA
    // if type = q, quit
    place_planets_and_nebula(galaxy);

    // TODO: Place the player in the galaxy
    place_player(galaxy);

    // TODO: Place the stars in the galaxy
    // until press ctrl+d
    // input lie [row] [col] [points]
    place_stars(galaxy);

    // TODO: Print the map
    print_map(galaxy);

    return 0;
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

// Function to initialize the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    // Entity to empty and points to 0
    for (int i = 0; i < SIZE; i ++) {
        for (int j = 0; j < SIZE; j ++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

// Function to place the player in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    int player_row, player_col;
    scanf("%d %d", &player_row, &player_col);
    while (player_row < 0 || player_row >= SIZE || player_col < 0 || player_col >= SIZE || galaxy[player_row][player_col].entity != EMPTY) {
        printf("Invalid player position!\n");
        printf("Please re-enter the starting position of the player: ");
        scanf("%d %d", &player_row, &player_col);
    }

    galaxy[player_row][player_col].entity = SPACESHIP;
    galaxy[player_row][player_col].points = 0;
}

// Function to place the planets and nebulae in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_planets_and_nebula(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter planets and nebulae: ");
    int row, col;
    int points;
    char type;
    scanf(" %c", &type);
    while (type != 'q') {
        scanf("%d %d", &row, &col);
        if (type == 'p') {
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (type == 'n') {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }

        scanf(" %c", &type);
    }
}

// Function to place the stars in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the position and points of the star(s): \n");
    int star_row, star_col, star_points;
    while (scanf("%d %d %d", &star_row, &star_col, &star_points) == 3) {
        galaxy[star_row][star_col].entity = STAR;
        galaxy[star_row][star_col].points = star_points;
    }
}

// Function to print the sum of the points in the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
// 
// returns: nothing
void print_galaxy_sum(struct celestial_body galaxy[SIZE][SIZE]) {
    int sum = 0;
    for (int row = 0; row < SIZE; row ++) {
        for (int col = 0; col < SIZE; col ++) {
            int current_points = galaxy[row][col].points;
            sum = sum + current_points;
        }
    }

    printf("The sum of galaxy is %d\n", sum);
}
