#include <stdio.h>
#include <string.h>

int main(){
FILE *myfile = fopen("testdata.in", "r");
int t, i, j, k, ukuran, size;
char string[101];
char a, b;
fscanf(myfile, "%d\n", &t);
for(i=0; i<t; i++){

    fscanf(myfile, "%s\n", string);
    int size = strlen(string);
    
    fscanf(myfile, "%d\n", &ukuran);

    int flag[26] = {0};

    for(j=0; j<ukuran; j++){
        fscanf(myfile, "%c %c\n", &a, &b);
        if(flag[a-'A']==0){
            for(k=0; k<size; k++){
                if(string[k] == a){
                    string[k] = b;
                }
            }
        }
        flag[a-'A'] = 1;
    }

    int count[26] = {0};
    for (int j = 0; j < size; j++) {
        count[string[j]-'A']++;
    }

    for(j=0; j<26; j++){
        if(count[j]){
            printf("%c %d\n", j+'A', count[j]);
        }
    }
}
fclose(myfile);
    return 0;
}