#include <stdio.h>

int main() {
    int capacity = 100;
    int refillRate = 10;
    int currentLevel = 0;

    printf("Starting the tank refill process...\n");

    for (currentLevel = refillRate; currentLevel <= capacity; currentLevel += refillRate) {

        if (currentLevel < capacity) {
            printf("Current water level: %d liters\n", currentLevel);
        } else {
            // When currentLevel reaches 100
            printf("Current water level: 100 liters\n");
            printf("Tank is full.\n");
        }
    }

    return 0;
}
