#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep function

void drawClock(int hour, int minute, int second) {
    // Clear the console
    printf("\033[H\033[J");

    // Draw the clock face
    printf("       12\n");
    printf("   11      1\n");
    printf("10          2\n");
    printf("9            3\n");
    printf("   8      4\n");
    printf("       6\n");
    printf("   7      5\n");
    
    // Display the time
    printf("Current Time: %02d:%02d:%02d\n", hour, minute, second);
}

int main() {
    while (1) {
        // Get the current time
        time_t now = time(NULL);
        struct tm *local = localtime(&now);

        // Extract hour, minute, and second
        int hour = local->tm_hour % 12; // Convert to 12-hour format
        int minute = local->tm_min;
        int second = local->tm_sec;

        // Draw the clock
        drawClock(hour, minute, second);

        // Wait for 1 second
        sleep(1);
    }

    return 0;
}