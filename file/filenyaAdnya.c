#include <stdio.h>
#include <string.h>

int main(){

    FILE* file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d\n", &t);

    for(int i = 0; i < t; i++){
        char data[201];
        fscanf(file, " %[^\n]\n", data);
        int n = 0;
        fscanf(file, "%d\n", &n);
        int len = strlen(data);
        int flag[30] = {0};
        for(int j = 0; j < n; j++){
            char a, b;
            fscanf(file, "%c %c\n", &a, &b);
            if(flag[a - 'A'] == 0){
                for(int k = 0; k < len; k++){
                    if(data[k] == a){
                        data[k] = b;
                    }
                }
            }
            flag[a - 'A'] = 1;
        }

        int count[30] = {0};
        for(int j = 0; j < len; j++){
            count[data[j] - 'A']++;
        }

        for(int j = 0; j < 26; j++){
            if(count[j]){
                printf("%c %d\n", 'A' + j, count[j]);
            }
        }
    }

    return 0;
}