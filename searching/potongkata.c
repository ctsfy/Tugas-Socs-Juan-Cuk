#include <stdio.h>
#include <string.h>

struct kata{
    char singkatan[51];
    char asli[51];
};

int main(){
FILE *myfile = fopen("testdata.in", "r");
int n, i, j, k, x;
fscanf(myfile, "%d\n", &n);
struct kata word[n];

for(i = 0; i < n; i++){
    fscanf(myfile, "%[^#]#%[^\n]\n", &word[i].singkatan, &word[i].asli);
}

fscanf(myfile, "%d\n", &x);
char kalimat[101];

for(i=0; i<x; i++){
    fscanf(myfile, "%[^\n]\n", kalimat);
    int anu = 0;
    char hasil[anu][101];
    printf("Case #%d:\n", i+1);
    for(j=0; j<strlen(kalimat); j++){
        if(kalimat[k]== ' '){
            continue;
        }
        else{
            hasil[anu][j] = kalimat[j];
        }
        printf("%s", hasil[anu]);
        anu++;
    }
    printf("\n");
}

    return 0;
}