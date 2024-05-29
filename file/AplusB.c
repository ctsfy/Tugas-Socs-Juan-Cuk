#include <stdio.h>
int main(){
    FILE *myfile = fopen("testdata.in", "r");
    int a, b;
    fscanf(myfile, "%d %d\n", &a, &b);
    printf("%d\n", a+b);
    return 0;
}