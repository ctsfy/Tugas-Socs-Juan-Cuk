#include <stdio.h>
#include <string.h>

struct kamus{
    char singkatan[51];
    char asli[51];
};




int main(){
int t, i, j, k, tc;
FILE *myfile = fopen("testdata.in", "r");
fscanf(myfile, "%d\n", &t);
struct kamus kata[t];
for(i=0; i<t; i++){
    fscanf(myfile, "%[^#]#%s\n", &kata[i].singkatan, &kata[i].asli);
}


fscanf(myfile, "%d\n", &tc);
for(i=0; i<tc; i++){
    char kalimat[101];
    fscanf(myfile, "%[^\n]\n", kalimat);
    int size = strlen(kalimat);
    char temp[51];
    printf("Case #%d: ", i+1);
    int anu = 0;
    for(int j = anu; j<size; j++){
        if(kalimat[j] != ' ' || kalimat[j] != '\n'){
            temp[j] = kalimat[j];
        }
        else if(kalimat[j] == ' ' || kalimat[j] == '\n'){
            anu=j+1;

            break;
        }
    }
}
    return 0;
}