#include <stdio.h>
int main(){
int a, b, c, x, y, z, counter1 = 0, counter2 = 0, p;

int pertama1 = 1, pertama2 = 1;

int kosong = 1;

scanf("%d %d %d %d %d %d %d", &a, &b, &c, &x, &y, &z, &p);
for(int i=1; i<=100; i+=kosong){
    counter1++;
    printf("%d ", i);
    if(i>=a && i<b && i<c && i<=p){
        kosong = a;
    }
    else if(i>=b && i>a && i<c && i<=p){
        kosong = b;
    }
    else if(i>=c && i>a && i>b && i<=p){
        kosong = c;
    }
    else if(i>p){
        break;
    }
}

int kosong2 = 1;

for(int i=1; i<=100; i+=kosong2){
    counter2++;
    printf("%d ", i);
    if(i>=x && i<y && i<z && i<=p){
        kosong2 = x;
    }
    else if(i>=y && i>x && i<z && i<=p){
        kosong2 = y;
    }
    else if(i>=z && i>x && i>b && i<=p){
        kosong2 = z;
    }
    else if(i>p){
        break;
    }
}
puts("");

if(counter1>counter2){
    printf("%d\n", 2);
}
else if (counter1<counter2){
    printf("%d\n", 1);
}
else{
    printf("-1\n");
}
    return 0;
}