#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
    const char *username = getlogin(); // “Real user account” 
    const char *homedir = "/home/john";
    char filename[1024];

    snprintf(filename, sizeof(filename), "%s/greetings", homedir);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Cannot open file \n");
        exit(0);
    }
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    /* fprintf(file, "%s\n", username); */
    fprintf(file, "%s visited here at %02d-%02d-%04d %02d:%02d:%02d\n",
            username, tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
            tm.tm_hour, tm.tm_min, tm.tm_sec);
    fclose(file);

    return 0;
}
