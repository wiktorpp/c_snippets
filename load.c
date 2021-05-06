#include <stdio.h> 
#include <time.h> 
  
void delay(int number_of_seconds) { 
    int milli_seconds = 1000 * number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds) {}; 
}

int main() {
    setbuf(stdout, NULL);
    while(1) {
        delay(100);
        printf("\x1b[D|");
        delay(100);
        printf("\x1b[D/");
        delay(100);
        printf("\x1b[D-");
        delay(100);
        printf("\x1b[D\\");
    }
    return 0; 
} 