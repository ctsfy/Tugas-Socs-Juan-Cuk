#include <stdio.h>
#include <string.h>

struct data{//struct untuk menampung data-data.
    char location[30];
    char city[30];
    int price;
    int rooms;
    int bathrooms;
    int carpark;
    char type[30];
    char furnish[30];
};

void displayMenu(){//function untuk menampilkan menu utama.
printf("What do you want to do?\n");
printf("1.  Display data\n");
printf("2.  Search Data\n");
printf("3.  Sort Data\n");
printf("4.  Export Data\n");
printf("5.  Exit\n");
printf("Your choice: ");
}

void displayData(int n, struct data array[]){//function untuk menampilkan data ketika menekan menu 1.
    printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
    for(int i=0; i<n; i++){
        printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms,
        array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
    }
}

void searchDataLocation(struct data array[], char target[]){//mencari data lokasi yang ingin dicari dan menampilkan semua lokasi yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(strcmp(array[i].location, target)==0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(strcmp(array[i].location, target)==0){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataCity(struct data array[], char target[]){//mencari data kota / city yang ingin dicari dan menampilkan semua city yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(strcmp(array[i].city, target)==0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(strcmp(array[i].city, target)==0){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataPrice(struct data array[], int n){//mencari data harga / price yang ingin dicaridan menampilkan semua data price yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(array[i].price == n){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(array[i].price==n){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataRooms(struct data array[], int n){//mencari data jumlah kamar / rooms yang ingin dicari dan menampilkan semua data rooms yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(array[i].rooms == n){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(array[i].rooms==n){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataBathroom(struct data array[], int n){//mencari data jumlah kamar mandi / bathroom yang ingin dicari dan meanmpilkan semua data bathroom yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(array[i].bathrooms == n){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(array[i].bathrooms==n){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataCarpark(struct data array[], int n){//mencari data jumlah parkiran mobil / carpark yang ingin dicari dan menampilkan semua data carpark yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(array[i].carpark == n){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(array[i].carpark==n){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataType(struct data array[], char target[]){//mencari data tipe kamar yang ingin dicari dan menampilkan semua data tipe kamar yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(strcmp(array[i].type, target)==0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(strcmp(array[i].type, target)==0){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

void searchDataFurnish(struct data array[], char target[]){//mencari data furnish yang ingin dicari dan menampilkan semua data furnish yang dicari
    int flag = 0;
    for(int i=0; i<3939; i++){
        if(strcmp(array[i].furnish, target)==0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Data found. Detail of data:\n");
        printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
        for(int i = 0; i<3939; i++){
            if(strcmp(array[i].furnish, target)==0){
                printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
            } 
        }
    }
    else{
        printf("Data not found!\n");
    }
}

//function di bawah akan berisi merge data dan untuk mendivide data

void mergeSortDataLocationAscending(struct data array[], int left, int right){//fungsi untuk merge data location ascending
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].location, array[rightindex].location)>0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataLocationAscending(struct data array[], int left, int right){//fungsi untuk mendivide data location ascending
    if(left<right){
        int mid = (right+left)/2;
        sortDataLocationAscending(array, left, mid);
        sortDataLocationAscending(array, mid+1, right);
        mergeSortDataLocationAscending(array, left, right);
    }
}

void mergeSortDataLocationDescending(struct data array[], int left, int right){//fungsi untuk merge data location descending
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].location, array[rightindex].location)<0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataLocationDescending(struct data array[], int left, int right){//fungsi untuk mendivide data location descending
    if(left<right){
        int mid = (right+left)/2;
        sortDataLocationDescending(array, left, mid);
        sortDataLocationDescending(array, mid+1, right);
        mergeSortDataLocationDescending(array, left, right);
    }
}

void mergeSortDataCityAscending(struct data array[], int left, int right){//fungsi untuk merge data city ascending 
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].city, array[rightindex].city)>0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataCityAscending(struct data array[], int left, int right){ //fungsi untuk mendivide data city ascending
    if(left<right){
        int mid = (right+left)/2;
        sortDataCityAscending(array, left, mid);
        sortDataCityAscending(array, mid+1, right);
        mergeSortDataCityAscending(array, left, right);
    }
}

void mergeSortDataCityDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].city, array[rightindex].city)<0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataCityDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataCityDescending(array, left, mid);
        sortDataCityDescending(array, mid+1, right);
        mergeSortDataCityDescending(array, left, right);
    }
}

void mergeSortDataPriceAscending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].price>array[rightindex].price){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataPriceAscending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataPriceAscending(array, left, mid);
        sortDataPriceAscending(array, mid+1, right);
        mergeSortDataPriceAscending(array, left, right);
    }
}

void mergeSortDataPriceDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].price<array[rightindex].price){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataPriceDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataPriceDescending(array, left, mid);
        sortDataPriceDescending(array, mid+1, right);
        mergeSortDataPriceDescending(array, left, right);
    }
}

void mergeSortDataRoomsAscending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].rooms>array[rightindex].rooms){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataRoomsAscending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataRoomsAscending(array, left, mid);
        sortDataRoomsAscending(array, mid+1, right);
        mergeSortDataRoomsAscending(array, left, right);
    }
}

void mergeSortDataRoomsDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].rooms<array[rightindex].rooms){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataRoomsDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataRoomsDescending(array, left, mid);
        sortDataRoomsDescending(array, mid+1, right);
        mergeSortDataRoomsDescending(array, left, right);
    }
}

void mergeSortDataBathroomAscending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].bathrooms>array[rightindex].bathrooms){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataBathroomAscending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataBathroomAscending(array, left, mid);
        sortDataBathroomAscending(array, mid+1, right);
        mergeSortDataBathroomAscending(array, left, right);
    }
}

void mergeSortDataBathroomDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].bathrooms<array[rightindex].bathrooms){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataBathroomDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataBathroomDescending(array, left, mid);
        sortDataBathroomDescending(array, mid+1, right);
        mergeSortDataBathroomDescending(array, left, right);
    }
}

void mergeSortDataCarparkAscending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].carpark>array[rightindex].carpark){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataCarparkAscending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataCarparkAscending(array, left, mid);
        sortDataCarparkAscending(array, mid+1, right);
        mergeSortDataCarparkAscending(array, left, right);
    }
}

void mergeSortDataCarparkDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(array[leftindex].carpark<array[rightindex].carpark){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataCarparkDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataCarparkDescending(array, left, mid);
        sortDataCarparkDescending(array, mid+1, right);
        mergeSortDataCarparkDescending(array, left, right);
    }
}

void mergeSortDataTypeAscending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].type, array[rightindex].type)>0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataTypeAscending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataTypeAscending(array, left, mid);
        sortDataTypeAscending(array, mid+1, right);
        mergeSortDataTypeAscending(array, left, right);
    }
}

void mergeSortDataTypeDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].type, array[rightindex].type)<0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataTypeDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataTypeDescending(array, left, mid);
        sortDataTypeDescending(array, mid+1, right);
        mergeSortDataTypeDescending(array, left, right);
    }
}

void mergeSortDataFurnishAscending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].furnish, array[rightindex].furnish)>0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataFurnishAscending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataFurnishAscending(array, left, mid);
        sortDataFurnishAscending(array, mid+1, right);
        mergeSortDataFurnishAscending(array, left, right);
    }
}

void mergeSortDataFurnishDescending(struct data array[], int left, int right){
    int mid = (right+left)/2;
    int leftindex = left;
    int rightindex = mid+1;
    int cur = 0; 
    struct data temp[right-left+1];

    while(leftindex<=mid && rightindex<=right){
        if(strcmp(array[leftindex].furnish, array[rightindex].furnish)<0){
            temp[cur] = array[rightindex];
            cur++, rightindex++;
        }
        else{
            temp[cur] = array[leftindex];
            cur++; leftindex++;
        }
    }

    while(leftindex<=mid){
        temp[cur] = array[leftindex];
        cur++; leftindex++;
    }
    while(rightindex<=right){
        temp[cur] = array[rightindex];
        cur++, rightindex++;
    }
    for(int i = 0; i<cur; i++){
        array[left+i] = temp[i];
    }
}

void sortDataFurnishDescending(struct data array[], int left, int right){
    if(left<right){
        int mid = (right+left)/2;
        sortDataFurnishDescending(array, left, mid);
        sortDataFurnishDescending(array, mid+1, right);
        mergeSortDataFurnishDescending(array, left, right);
    }
}

int main(){
FILE *myfile = fopen("file.csv", "r");
struct data array[4000];
struct data baru[4000];
char lokasi[30];
char kota[30];
char harga[30];
char kamar[30];
char kamar_mandi[30];
char parkiran[30];
char tipe[30];
char furnitur[30];
fscanf(myfile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", &lokasi, &kota, &harga, &kamar, &kamar_mandi, &parkiran,&tipe, &furnitur);
for(int i=0; i<3939; i++){
    fscanf(myfile, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n", &array[i].location, &array[i].city, &array[i].price, &array[i].rooms, &array[i].bathrooms, &array[i].carpark, &array[i].type, &array[i].furnish);
}
for(int i=0; i<3939; i++){
    fscanf(myfile, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n", &baru[i].location, &baru[i].city, &baru[i].price, &baru[i].rooms, &baru[i].bathrooms, &baru[i].carpark, &baru[i].type, &baru[i].furnish);
}
displayMenu();
int choice;
scanf("%d", &choice);
while(choice>=1 && choice<=5){
    if(choice == 1){
        int rows;
        printf("Number of rows: ");
        scanf("%d", &rows);
        puts("");
        displayData(rows, array);
        puts("");
        displayMenu();
        scanf("%d", &choice);
    } 

    else if(choice == 2){
        printf("Choose column: ");
        char kolom[20];
        scanf("%s", kolom);
        if(strcmp(kolom, "Location")==0){
            printf("What data do you want to find? ");
            char target[30];
            scanf("%s", target);
            searchDataLocation(array, target);
        }
        else if(strcmp(kolom, "City")==0){
            printf("What data do you want to find? ");
            char target[30];
            scanf("%s", target);
            searchDataCity(array, target);
        }
        else if(strcmp(kolom, "Price")==0){
            printf("What data do you want to find? ");
            int harga;
            scanf("%d", &harga);
            searchDataPrice(array, harga);
        }
        else if(strcmp(kolom, "Rooms")==0){
            printf("What data do you want to find? ");
            int room_aja;
            scanf("%d", &room_aja);
            searchDataRooms(array, room_aja);
        }
        else if(strcmp(kolom, "Bathroom")==0){
            printf("What data do you want to find? ");
            int bathroom_aja;
            scanf("%d", &bathroom_aja);
            searchDataBathroom(array, bathroom_aja);
        }
        else if(strcmp(kolom, "Carpark")==0){
            printf("What data do you want to find? ");
            int carpark_aja;
            scanf("%d", &carpark_aja);
            searchDataCarpark(array, carpark_aja);
        }
        else if(strcmp(kolom, "Type")==0){
            printf("What data do you want to find? ");
            char target[30];
            scanf("%s", target);
            searchDataType(array, target);
        }
        else if(strcmp(kolom, "Furnish")==0){
            printf("What data do you want to find? ");
            char target[30];
            scanf("%s", target);
            searchDataFurnish(array, target);
        }
        else{
            printf("Please try again!\n");
        }
        puts("");
        displayMenu();
        scanf("%d", &choice);
    }

    else if(choice == 3){
        printf("Choose column: ");
        char kolom[20];
        scanf("%s", kolom);
        if(strcmp(kolom, "Location") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataLocationAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataLocationDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "City") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataCityAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataCityDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "Price") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataPriceAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataPriceDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "Rooms") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataRoomsAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataRoomsDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "Bathroom") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataBathroomAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataBathroomDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "Carpark") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataCarparkAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataCarparkDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "Type") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataTypeAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataTypeDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else if(strcmp(kolom, "Furnish") == 0){
            printf("Sort ascending or descending (asc/desc)? ");
            char pilih[10];
            scanf("%s", pilih);
            if(strcmp(pilih, "asc")==0){
                sortDataFurnishAscending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
            else if(strcmp(pilih, "desc")==0){
                sortDataFurnishDescending(array, 0, 3938);
                printf("Data found. Detail of data:\n");
                printf("%-30s%-20s%-15s%-13s%-15s%-15s%-13s%-20s\n", "Location", "City", "Price", "Rooms", "Bathrooms", "Carparks", "Type", "Furnish");
                for(int i=0; i<10; i++){
                    printf("%-30s%-20s%-15d%-13d%-15d%-15d%-13s%-20s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
                }
            }
        }
        else{
            printf("Please try again!\n");
        }
        puts("");
        displayMenu();
        scanf("%d", &choice);
    }

    else if(choice == 4){
        char nama_file_baru[101];
        printf("File name: ");
        scanf("%s", &nama_file_baru);
        strcat(nama_file_baru, ".csv");
        FILE *hehe = fopen(nama_file_baru, "w");
        fprintf(hehe, "%s,%s,%s,%s,%s,%s,%s\n", lokasi, kota, harga, kamar, kamar_mandi, parkiran, tipe, furnitur);
        for(int i=0; i<3939; i++){
            fprintf(hehe, "%s,%s,%d,%d,%d,%d,%s,%s\n", array[i].location, array[i].city, array[i].price, array[i].rooms, array[i].bathrooms, array[i].carpark, array[i].type, array[i].furnish);
        }
        printf("Data successfully written to file sorted_data.csv!\n");
        fclose(hehe);
        puts("");
        displayMenu();
        scanf("%d", &choice);
    }

    else if(choice == 5){
        printf("Thank you for using this program!\n");
        break;
    }
}
fclose(myfile);
    return 0;
}