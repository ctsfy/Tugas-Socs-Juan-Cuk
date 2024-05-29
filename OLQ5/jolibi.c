#include <stdio.h>
int main(){
int t, jojo, lili, bibi, peserta, counter = 0, i, average;
scanf("%d %d %d %d", &t, &jojo, &lili, &bibi);
for(i=0; i<t; i++){
    scanf("%d", &peserta);
    counter+=peserta;
}

average = (counter + jojo + lili + bibi)/(t+3);

if(jojo >= average){
    printf("Jojo lolos\n");
}
else{
    printf("Jojo tidak lolos\n");
}
if(lili >= average){
    printf("Lili lolos\n");
}
else{
    printf("Lili tidak lolos\n");
}
if(bibi >= average){
    printf("Bibi lolos\n");
}
else{
    printf("Bibi tidak lolos\n");
}

    return 0;
}