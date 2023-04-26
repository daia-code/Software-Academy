#include <stdio.h>

int speed_adjustment(int adjustment) {
    static int current_speed = 50; // static variable to store current speed value

    current_speed += adjustment;

    if (current_speed < 0) {
        current_speed = 0;
    } else if (current_speed > 100) {
        current_speed = 100;
    }

    return current_speed;
}

int main() {
    printf("Current speed: %d\n", speed_adjustment(20)); // Adjust speed by 20, current speed should be 70
    printf("Current speed: %d\n", speed_adjustment(-10)); // Adjust speed by -10, current speed should be 60
    printf("Current speed: %d\n", speed_adjustment(-60)); // Adjust speed by -60, current speed should be 0

    return 0;
}
