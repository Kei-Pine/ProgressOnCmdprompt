#include <stdio.h>
#include <unistd.h>

int main() {
    char spin[4] = {'|', '/', '-', '\\'};
    int i;
    for (i = 0; i <=100; i++) {
        printf("\r Loading %c %d％", spin[i % 4],i);
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
    return 0;
}

