#include <windows.h>
#include <stdio.h>
int main()
{
     ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav", NULL, SND_SYNC);
     ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav", NULL, SND_SYNC);
     ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav", NULL, SND_SYNC);

     ///�ؿ����׽u�i�H�� ��Ӥϱ׽u\\ �άO�@�ӱ׽u/
     PlaySound("do-re-mi/do.wav" , NULL, SND_SYNC);
     ///�۹���| Relative path
     printf("Hello World\n");
}

