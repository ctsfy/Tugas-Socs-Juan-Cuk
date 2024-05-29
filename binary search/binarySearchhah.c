#include <stdio.h>
#define ll unsigned long long int

ll binarySearch(ll m){;
    ll low = 1, high = 10000000;
    double anu;
    while (low <= high) {
        ll mid = low + (high-low) / 2;
        ll sum = (mid * (mid + 1) * (2 * mid + 1)) / 6;
        if (sum >= m) {
            anu = mid;
            high = mid-1;
        } 
        else{
            low = mid+1;
        }
    }
    return anu;
}

int main() {
    ll m;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%llu", &m);
        ll result = binarySearch(m);
        printf("Case #%d: %llu\n", i+1, result);
    }
    return 0;
}