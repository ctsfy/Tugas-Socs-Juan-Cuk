#include <stdio.h>
int main(){
int t, i, j, k;
scanf("%d", &t);
int array[t];
for(i=0; i<t; i++){
    scanf("%d", &array[i]);
}

int maxcounter = 0;
for(i=0; i<t; i++){
    int counter = 0;
    for(j=0; j<t; j++){
        if(array[i] == array[j]){
            counter++;
        }
    }

    if(counter > maxcounter){
        maxcounter = counter;
    }
}
printf("%d\n", maxcounter);
    return 0;
}