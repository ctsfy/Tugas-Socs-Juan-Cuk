#include <stdio.h>
int main(){
char string[100];
scanf("%[^\n]", &string);
getchar();
printf("Hello %s!\n", string);
return 0;   
}