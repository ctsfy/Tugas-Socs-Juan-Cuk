#include <stdio.h>
#include <string.h>
int main(){
int t, i, j, ubah;
char string[1001];
FILE *myfile = fopen("testdata.in", "r");
fscanf(myfile, "%d\n", &t);
for(i=0; i<t; i++){
    fscanf(myfile, "%d\n", &ubah);
    fscanf(myfile, "%[^\n]\n", string);
    int size = strlen(string);
    for(j=0; j<size; j++){
        if(string[j] == '0'){
            string[j] = 'O';
        }
        else if(string[j] == '1'){
            string[j] = 'I';
        }
        else if(string[j] == '3'){
            string[j] = 'E';
        }
        else if(string[j] == '4'){
            string[j] = 'A';
        }
        else if(string[j] == '5'){
            string[j] = 'S';
        }
        else if(string[j] == '6'){
            string[j] = 'G';
        }
        else if(string[j] == '7'){
            string[j] = 'T';
        }
        else if(string[j] == '8'){
            string[j] = 'B';
        }
    }
    printf("Case #%d: ", i+1);
    for(j=0; j<size; j++){
        if(string[j] == ' '){
            printf(" ");
        }
        else if(string[j]-ubah >= 'A' && string[j]-ubah <= 'Z'){
            printf("%c", string[j]-ubah);
        }
        else if(string[j]-ubah <= 'A'){
            printf("%c", (string[j]-ubah)+26);
        }
    }
    printf("\n");
}
    return 0;
}