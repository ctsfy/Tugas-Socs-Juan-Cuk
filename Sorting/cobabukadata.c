#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fpointer;
fpointer = fopen("testdata.in", "r");
int arr[100];
char nama[100][100];
double ipk[100];
int i = 0;
while(!feof(fpointer)){
    fscanf(fpointer, "%d#%[^#]#%lf", &arr[i], &nama[i], &ipk[i]);
    printf("%d %s %.2lf\n", arr[i], nama[i], ipk[i]);
    i++;
}

fclose(fpointer);
return 0;
}