#include <stdio.h>
int main()
{
    char line[20];
    ///scanf("%s", line);
    FILE * fin = fopen("file.txt", "r");
    fscanf(fin, "%s\n", line);
    printf("Ū��F:%s\n", line);
    fscanf(fin, "%s\n", line);
    printf("Ū��F:%s\n", line);
}
