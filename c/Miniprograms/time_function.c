#include <stdio.h>
#include <time.h>

int main() {
    // Create a time_t variable to hold the current time
    time_t current_time;
    
    // Get the current time
    time(&current_time);
    
    // Convert the time to a human-readable string
    char* time_string = ctime(&current_time);
    
    // Output the current date and time
    printf("Current date and time: %s", time_string);

    return 0;
}
