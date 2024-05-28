#include <stdio.h>

int main(void) {
    printf("How many layers: ");
    int num_layers;
    scanf("%d", &num_layers);

    printf("Please enter layers: ");

    int i = 0;
    char layer;
    while (i < num_layers) {
        scanf(" %c", &layer);
	int j = 0;
        while (j < num_layers) {
            printf("%c", layer);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
