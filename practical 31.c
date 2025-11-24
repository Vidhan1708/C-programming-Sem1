#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size1, size2;
    char *summary;

    printf("Enter initial summary size: ");
    scanf("%d", &size1);
    getchar();

    summary = (char *)calloc(size1, sizeof(char));
    if(!summary) return printf("Memory allocation failed.\n"), 1;

    printf("Enter intial summary: ");
    fgets(summary, size1, stdin);
    printf("Initial summary: %s", summary);

    printf("\nEnter new size for updated summary: ");
    scanf("%d", &size2);
    getchar();

    summary = (char *)realloc(summary, size1*sizeof(char));
    if(!summary) return printf("Memory allocation failed.\n"), 1;

    printf("Enter updated summary: ");
    fgets(summary, size2, stdin);
    printf("Updated: %s", summary);

    free(summary);
    return 0;
}
