#include <stdio.h>
#include <string.h>
int main(){
char string[101];
scanf("%s", string);
int size = strlen(string);
for(int i=size-1; i>=0; i--){
    if(string[i]>='A' && string[i]<='Z'){
        printf("%c", string[i]-'A'+'a');
    }
    else if(string[i]>='a' && string[i]<='z'){
        printf("%c", string[i]-'a'+'A');
    }
}
puts("");

    return 0;
}