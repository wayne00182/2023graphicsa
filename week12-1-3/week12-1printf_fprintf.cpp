#include <stdio.h>
int main(void)
{
    ///�ɮ׫��� fout = fopen("�ɦW", "�Ҧ�");
    FILE * fout = fopen("file.txt", "w");
    printf("Hello world\n");
    fprintf(fout, "Hello world�b�ɮ׸�\n");
    return 0;
}
