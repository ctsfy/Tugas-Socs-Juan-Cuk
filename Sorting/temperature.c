#include <stdio.h>
#include <string.h>
struct City{
    char city[1001];
    double temperature;
    char metric;
};

void swap(struct City *a, struct City *b){
    struct City temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct City arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j].temperature>arr[j+1].temperature){
                swap(&arr[j], &arr[j+1]);
            }
            else if (arr[j].temperature==arr[j+1].temperature && strcmp(arr[j].city, arr[j+1].city)>0){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void print(struct City arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i].metric == 'C'){
            printf("%s is %.2lf%c\n", arr[i].city, arr[i].temperature, arr[i].metric);
        }
        else{
            printf("%s is %.2lf%c\n", arr[i].city, (arr[i].temperature*9/5)+32, arr[i].metric);
        }
    }
}

int main(){
FILE *myfile = fopen("testdata.in", "r");
struct City list[100];
int i = 0;
while(!feof(myfile)){
    fscanf(myfile, "%[^#]#%lf#%c\n", list[i].city, &list[i].temperature, &list[i].metric);
    if(list[i].metric == 'F'){
        list[i].temperature = (list[i].temperature-32)*5/9;
    }
    i++;
}
fclose(myfile);
sort(list, i);

print(list, i);
    return 0;
}