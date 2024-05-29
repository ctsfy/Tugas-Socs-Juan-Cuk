#include <stdio.h>
#include <string.h>

struct kata{
    char singkatan[51];
    char asli[51];
};

int main(){
FILE *myfile = fopen("testdata.in", "r");
int n, i;
fscanf(myfile, "%d\n", &n);
struct kata word[n];

for(i = 0; i < n; i++){
    fscanf(myfile, "%[^#]#%[^\n]\n", &word[i].singkatan, &word[i].asli);
}

int x;
fscanf(myfile, "%d\n", &x);


    return 0;
}
