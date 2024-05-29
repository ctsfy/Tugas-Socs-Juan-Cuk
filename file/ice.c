#include <stdio.h>
int main() {
    FILE *myfile = fopen("testdata.in", "r");
    int t, i, j, ukuran;
    fscanf(myfile, "%d\n", &t);
    for(i = 0; i<t; i++){
        fscanf(myfile, "%d\n", &ukuran);
        int arr[ukuran];
        for(j=0; j<ukuran; j++){
            if(j == ukuran-1){
                fscanf(myfile, "%d\n", &arr[j]);
            }
            else{
                fscanf(myfile, "%d ", &arr[j]);
            }
        }
        int area = 0;
        for(j=0; j<ukuran; j++){
            area+=arr[j];
        }

        int alas = 4*ukuran;
        //nanti 2*alas

        int tinggiujung = 2*(arr[0]+arr[ukuran-1]);

        int tinggi = 0;
        for(j=0; j<ukuran-1; j++){
            if(arr[j]<arr[j+1]){
                tinggi+=2*(arr[j+1]-arr[j]);
            }
            else{
                tinggi+=2*(arr[j]-arr[j+1]);
            }
        }
        printf("Case #%d: %d %d\n", i+1, alas+tinggi+tinggiujung, 4*area);
    }
}