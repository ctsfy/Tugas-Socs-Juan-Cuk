#include <stdio.h>
#include <string.h>

int main() {
    long long int t, i, j;
    scanf("%lld", &t); getchar();
    for(i=0; i<t; i++){
        char string[100001];
        scanf("%s", string);
        long long int alphabet[26] = {0};
        long long int length = strlen(string);
        long long int unik = 0;
        for (int j = 0; j < length; j++) {
            int index = string[j] - 'a';
            if (alphabet[index] == 0) {
                unik++;
            }
            alphabet[index]++;
        }
        if(unik%2==0){
            printf("Case #%lld: Yay\n", i+1);
        }
        else{
            printf("Case #%lld: Ewwww\n", i+1);
        }
    }
    return 0;
}