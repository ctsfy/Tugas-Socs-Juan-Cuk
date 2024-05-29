#include <stdio.h>
#include <string.h>
int main(){
int t, i, j;
scanf("%d", &t); getchar();
for(i=0; i<t; i++){
    char ip[101];
    scanf("%s", ip); getchar();
    int counterangka = 0;
    int countertitik = 0;
    int salah = 0;
    int valid = 0;
    int benarbenarsalah = 0;
    for(j=0; j<strlen(ip); j++){
        if('0' <= ip[j] && ip[j] <= '9' || ip[j] == '.'){
            if(ip[j] == '.'){
                countertitik++;
            }
        }
        else{
            benarbenarsalah = 1;
            break;
        }
    }
    for(j=0; j<strlen(ip); j++){
        if(ip[0] == '.' || ip[strlen(ip) - 1] == '.'){
            salah = 1;
            break;
        }
    }

    for(j=0; j<strlen(ip); j++){
        if(ip[j] == '.' && ip[j+1] == '.'){
            valid = 1;
            break;
        }
    }
    if(countertitik == 5 && salah == 0 && valid == 0 && benarbenarsalah == 0){
        printf("Case #%d: YES\n", i+1);
    }
    else{
        printf("Case #%d: NO\n", i+1);
    }
}
    return 0;
}