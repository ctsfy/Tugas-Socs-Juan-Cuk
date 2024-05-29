#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *fibo(int n, char satu[2], char dua[2]){
    if(n == 0){
        return satu;
    }

    else if(n == 1){
        return dua;
    }
    else {
        char *prev1 = fibo(n-1, satu, dua);
        char *prev2 = fibo(n-2, satu, dua);
        char *result = (char*)malloc(strlen(prev1) + strlen(prev2) + 1);
        strcpy(result, prev1);
        strcat(result, prev2);

        return result;
    }
    printf("\n");
}

int main(){
    int t, n;
    char satu[2], dua[2];

    scanf("%d", &t);
    getchar();

    for(int i = 0; i < t; i++){
        scanf("%d %s %s", &n, satu, dua);
        getchar();
        char *result = fibo(n, satu, dua);
        printf("Case #%d: %s\n", i+1, result);
    }

    return 0;
}

