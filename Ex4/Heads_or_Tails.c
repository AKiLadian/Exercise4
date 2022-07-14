#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int times, heads = 0;
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

        if((rand() % 2) == 0)
        {
            printf("%s\n", isheads);
            heads++;
        }
        else printf("%s\n", istails);
    }

    printf("Heads: %d, Tails: %d\n", heads, times - heads);

    return 0;
}
