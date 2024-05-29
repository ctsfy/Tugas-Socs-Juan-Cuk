#include <stdio.h>
#include <ctype.h>

int main() {
    int t, panjang, i, j;
    scanf("%d", &t);
    getchar();

    for(i = 0; i < t; i++) {
        scanf("%d", &panjang);
        getchar();

        char karakterinput[panjang+1];
        char karakteroutput[panjang+1];
        int k = 0; 

        gets(karakterinput);
        for(j = 0; karakterinput[j] != '\0'; j++) {
            if(isalpha(karakterinput[j])) {
                karakteroutput[k++] = karakterinput[j];
            }
        }
        karakteroutput[k] = '\0';
        printf("Case #%d: %s\n", i + 1, karakteroutput);
    }
    return 0; 
}