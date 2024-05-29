#include <stdio.h>
int main(){
char d, s, t;
scanf("%c %c %c", &d, &s, &t);
if(d > s && s > t){
    printf("3 2 1\n");
}
else if(d > t && t > s){
    printf("2 3 1\n");
}
else if(t > d && d > s){
    printf("2 1 3\n");
}
else if(t > s && s > d){
    printf("1 2 3\n");
}
else if(s > d && d > t){
    printf("3 1 2\n");
}
else if(s > t && t > d){
    printf("1 3 2\n");
}
    return 0;
}