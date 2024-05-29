#include <stdio.h>
int main(){
int banyak, i, j, start = 0;
scanf("%d", &banyak);
int array[banyak];
for(i=0; i<banyak; i++){
    scanf("%d", &array[i]);
    start+=array[i];
    if(start == 30){
        start = 10;
    }
    else if(start == 12){
        start = 28;
    }
    else if(start == 35){
        start = 7;
    }
    else if(start > 39){
        start = start - 40;
    }
}
printf("%d\n", start);
    return 0;
}