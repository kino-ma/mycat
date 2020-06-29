#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++) {
        // provided by stdio
        FILE *f;

        int c;

        f = fopen(argv[i], "r");
        if (!f) {
            perror(argv[i]);
            return 1;
        }

        while ((c = fgetc(f)) != EOF) {
            if (putchar(c) < 0) return 1;
        }
        fclose(f);
    }
    exit(0);
}
