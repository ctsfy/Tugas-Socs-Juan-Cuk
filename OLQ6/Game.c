#include <stdio.h>
int main(){
int ukuran, ubah, i, j;
scanf("%d %d", &ukuran, &ubah); getchar();
int array[ubah];
char string[ukuran+1];
scanf("%s", string);
for(i=0; i<ubah; i++){
    scanf("%d", &array[i]); getchar();
}

for(i=0; i<ubah; i++){
    if(string[array[i]] >= 'A' && string[array[i]] <= 'Z'){
        string[array[i]] += 32;
    }
    else if(string[array[i]] >= 'a' && string[array[i]] <= 'z'){
        string[array[i]] -= 32;
    }
    else{
        string[i];
    }
}
printf("%s\n", string);
    return 0;
}