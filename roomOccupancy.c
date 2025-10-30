/*
NAME: OKOTH LENOX OTIENO
REG NO: PA106/G/28809/25
DESCRIPTION: C PROGRAM TO MANAGE ROOM OCCUPANCY IN A HOTEL
*/#include <stdio.h>

int main() {
    int occupancy[5][10];//
    int occupied, vacant;

    // Input occupancy data for each room
    printf("Enter room occupancy data (1 = occupied, 0 = vacant):\n");

    for (int i = 0; i < 5; i++) {//
        printf("\n--- Floor %d ---\n", i + 1);//
        for (int j = 0; j < 10; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    // Display results per floor
    printf("\nRoom Occupancy Report:\n");

    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\nFloor %d:\n", i + 1);
        printf("Occupied rooms: %d\n", occupied);
        printf("Vacant rooms: %d\n", vacant);
    }

    return 0;
}
