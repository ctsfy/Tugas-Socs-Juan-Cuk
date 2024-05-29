#include <stdio.h>
int main() {
int t, n, m, i, j, num;
scanf("%d", &t);
for(i = 0; i < t; i++) {
    scanf("%d %d", &n, &m);
    int hash[100001] = {0};
    int counter = 0;
    for(j = 0; j < m; j++) {
        scanf("%d", &num);
        if(hash[num] == 1) {
            counter++;
        }
        hash[num] = 1;
    }
    printf("Case #%d: %d\n", i + 1, counter);
}
    return 0;
}