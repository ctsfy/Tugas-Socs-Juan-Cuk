#include <stdio.h>
int main(){
char string[100];
scanf("%[^\n]", &string);
getchar();
printf("Congrats \"%s\" for joining the CS department at BINUS.\n", string);
return 0;   
}