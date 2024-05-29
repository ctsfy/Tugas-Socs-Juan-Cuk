#include <stdio.h>
int main(){
int acara, teman, awal, akhir, i, j, k;
scanf("%d", &acara);
int array[acara];
for(i=0; i<acara; i++){
    scanf("%d", &array[i]);
}

    scanf("%d", &teman);
    for(j=0; j<teman; j++){
        int counter = 0;
        scanf("%d %d", &awal, &akhir);
        for(k=awal-1; k<=akhir-1; k++){
            counter+=array[k];
        }
        printf("Case #%d: %d\n", j+1, counter);
    }




    return 0;
}