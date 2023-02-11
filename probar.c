#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    for (i = 0; i <=100; i++) {
        printf("\r Loading %c %d％",i);
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
    return 0;
}