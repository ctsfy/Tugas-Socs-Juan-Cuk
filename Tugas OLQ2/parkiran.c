#include <stdio.h>
int main(){
int masuk, keluar, total, a = 4000, b = 3000;
scanf("%d %d", &masuk, &keluar);
if(keluar - masuk==1){
    printf("%d", a);
}
else{
    printf("%d", a + (keluar - masuk - 1)*b);
}
return 0;
}