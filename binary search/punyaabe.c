#include<stdio.h>
#define ll unsigned long long int

ll binary(ll max){
	ll low = 1, high = 1500000;
	
	double temp;
	while(low <= high){
		unsigned long long mid = low + (high-low) / 2;
		
		ll sum = (mid * (mid+1) * (2.0*mid+1.0)) / 6.0;
		
		if(sum >= max){
			temp = mid;
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return temp;
}
 
int main(){
	int t;
	scanf("%d", &t);
	
	ll max;
	for(int i = 1; i <= t; i++){
		scanf("%llu", &max);
		ll res;
		res = binary(max);
		printf("Case #%d: %llu\n", i, res);
	}
	
	return 0;
}