#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    for (i = 0; i <=100; i++) {
        printf("\r Loading %d％",i);
        if(i<)
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
    return 0;
}