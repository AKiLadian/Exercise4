#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define heads 1
#define tails 2

int main ()
{
    int times;
    char isheads[6] = "Heads";
    char istails[6] = "Tails";
    char name[10];

    printf("Who are you? (insert your name with less than 10 charcters)\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    srand(time(NULL));

    for(times = 0 ; times < 3 ; times++)
    {
        printf("Round %d: ", times + 1);

        if((rand() % 2) + 1 == 1) printf("%s\n", isheads);
        else printf("%s\n", istails);

    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}
