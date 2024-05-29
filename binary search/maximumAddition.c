#include <stdio.h>
int main(){
long long int t, i, j, k, ukuran, max;
scanf("%lld", &t);

for(i=0; i<t; i++){
    scanf("%lld %lld", &ukuran, &max);
    long long int arr[ukuran];
    long long int hasil[ukuran];
    for(j=0; j<ukuran; j++){
        scanf("%lld", &arr[j]);
    }

    for(j=0; j<ukuran; j++){
        long long int counter = 0;
        long long int z = -1;
        for(k=j; k<ukuran; k++){
            if(counter+arr[k]>max){
                break;
            }
            else{
                counter+=arr[k];
                z++;
            }
        }
        if(z==-1){
            hasil[j] = z;
        }
        else if(z!=-1){
            hasil[j] = z+1;
        }
    }
    
    long long int max_result = -1;
    for(j=0; j<ukuran; j++){
        if(max_result<hasil[j]){
            max_result = hasil[j];
        }
    }
    printf("Case #%lld: %lld\n", i+1, max_result);
}
    return 0;
}