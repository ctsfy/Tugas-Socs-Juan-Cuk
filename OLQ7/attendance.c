#include <stdio.h>
int main(){
int t, i, j, k;
scanf("%d", &t);
int array[t][t];
for(i=0; i<t; i++){
    for(j=0; j<t; j++){
        scanf("%d", &array[i][j]);
    }
}

int ketemu = 0;
for(k=1; k<=t; k++){
    int counter = 0;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            if(array[i][j] == k){
                counter++;
            }
        }
    }
    if(counter < t){
        ketemu++;
    }
}
printf("%d\n", ketemu);
    return 0;
}