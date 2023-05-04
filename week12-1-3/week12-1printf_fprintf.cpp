#include <stdio.h>
int main(void)
{
    ///檔案指標 fout = fopen("檔名", "模式");
    FILE * fout = fopen("file.txt", "w");
    printf("Hello world\n");
    fprintf(fout, "Hello world在檔案裡\n");
    return 0;
}
