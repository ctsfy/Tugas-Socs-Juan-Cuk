#include <stdio.h>
int main(){
char string[101], a[9], b[101];
scanf("%[^\n] %s %s", &string, &a, &b);
getchar();
printf("Name: %s\n", string);
printf("NIS: %8s\n", a);
printf("Age: %s\n", b);
return 0;   
}