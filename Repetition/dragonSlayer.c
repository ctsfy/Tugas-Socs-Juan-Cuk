#include <stdio.h>
int main(){
int senjata, damage, i, j, maxbibi = 0, maxnaga = 0;
scanf("%d %d", &senjata, &damage);
int bibi[senjata], naga[damage];
for(i=0; i<senjata; i++){
    scanf("%d", &bibi[i]);
}
maxbibi = bibi[0];
for(i=0; i<senjata; i++){
    if(bibi[i] > maxbibi){
        maxbibi = bibi[i];
    }
}

for(j=0; j<damage; j++){
    scanf("%d", &naga[j]);
}
maxnaga = naga[0];
for(j=0; j<damage; j++){
    if(naga[j] > maxnaga){
        maxnaga = naga[j];
    }
}

if(maxbibi > maxnaga){
    printf("The dark secret was true\n");
}
else if(maxbibi <= maxnaga){
    printf("Secret debunked\n");
}
    return 0;
}