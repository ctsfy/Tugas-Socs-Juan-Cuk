#include <stdio.h>

void mergeSort(int arr[], int left, int right){
	if(left == right){
		return;
	}
	
	//divide
	int middle = (right-left)/2 + left;
	mergeSort(arr, left, middle); //sub array kiri
	mergeSort(arr, middle+1, right); //sub array kanan
	
	//conquer
	int temp_arr[right-left+1];
	int temp_arr_pointer = 0;
	int left_pointer = left;
	int left_limit = middle;
	int right_pointer = middle+1;
	int right_limit = right;
	
	//selama belum ngelewatin limit, berarti masih boleh ngeloop. kalo
	//salah satu aja ngelewatin limit, maka keluar dari loopingan.
	while(left_pointer <= left_limit && right_pointer <= right_limit){
		if(arr[left_pointer]<arr[right_pointer]){
			temp_arr[temp_arr_pointer] = arr[left_pointer];
			temp_arr_pointer++;
			left_pointer++;
		}
		else{
			temp_arr[temp_arr_pointer] = arr[right_pointer];
			temp_arr_pointer++;
			right_pointer++;
		}
	}
	//kalau ada yang lewat limit
	while(right_pointer <= right_limit){
		temp_arr[temp_arr_pointer] = arr[right_pointer];
		right_pointer++;
		temp_arr_pointer++;
	}
	while(left_pointer <= left_limit){
		temp_arr[temp_arr_pointer] = arr[left_pointer];
		left_pointer++;
		temp_arr_pointer++;
	}
	//pindahin dari temp_arr ke array original
	temp_arr_pointer = 0;
	for(int i=left; i<=right; i++){
		arr[i] = temp_arr[temp_arr_pointer];
		temp_arr_pointer++;
	}
}


void printarr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(){
	int array[] = {3,-13,-2,5-3,-8,8,7};
	int size = sizeof(array)/sizeof(int);
	printf("Sebelum disorting:\n");
	printarr(array, size);
	printf("\n");
	printf("Sesudah disorting pake mergesort:\n");
	mergeSort(array, 0, size-1);
	printarr(array, size);
	printf("\n");
	
	return 0;
}