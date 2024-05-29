#include <stdio.h>
int main(){
int a, ukuran, k, i, j;
scanf("%d", &a); getchar();
for(i=0; i<a; i++){
    scanf("%d %d", &ukuran, &k); getchar();
    char kata[ukuran+1];
    for(j=0; j<ukuran; j++){
        scanf("%c", &kata[j]);
        int counter = kata[j] + k - 97;
        if(j==0 && j==ukuran-1){
            if(counter > 25){
                while(counter > 25){
                    counter-=26;
                }
                printf("Case #%d: %c\n", i+1, counter+97);
            }
            else{
            printf("Case #%d: %c\n", i+1, counter+97);
            }
        }
        else if(j==0){
            if(counter > 25){
                while(counter > 25){
                    counter-=26;
                }
                printf("Case #%d: %c", i+1, counter+97);
            }
            else{
            printf("Case #%d: %c", i+1, counter+97);
            }
        }
        else if(j==ukuran-1){
            if(counter > 25){
                while(counter > 25){
                    counter-=26;
                }
                printf("%c\n", counter+97);
            }
            else{
            printf("%c\n", counter+97);
            }
        }
        else{
            if(counter > 25){
                while(counter > 25){
                    counter-=26;
                }
                printf("%c", counter+97);
            }
            else{
            printf("%c", counter+97);
            }
        }
    }
}
    return 0;
}