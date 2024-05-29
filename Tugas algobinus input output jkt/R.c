#include <stdio.h>
int main(){
char id[11];
char nama[101];
char kelas;
int num;
    scanf("%s %[^\n] %c %d", &id, &nama, &kelas, &num);
    printf("Id    : %s\n", id);
    printf("Name  : %s\n", nama);
    printf("Class : %c\n", kelas);
    printf("Num   : %d\n", num);
return 0;
}