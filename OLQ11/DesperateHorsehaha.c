#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int is_valid(int x, int y) {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

int gerak[][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

int gerak_kuda(int x1, int y1, int x2, int y2, int steps) {
    if (x1 == x2 && y1 == y2) {
        return 0;
    }

    if (steps == 0) {
        return 1000;
    }

    int min_moves = 1000;

    for (int i = 0; i < 8; i++) {
        int new_x = x1 + gerak[i][0];
        int new_y = y1 + gerak[i][1];

        if (is_valid(new_x, new_y)) {
            min_moves = min(min_moves, 1 + gerak_kuda(new_x, new_y, x2, y2, steps - 1));
        }
    }

    return min_moves;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char x1, y1, x2, y2;
        scanf(" %c %c", &x1, &y1);
        scanf(" %c %c", &x2, &y2);

        int x1_int = toupper(x1) - 'A' + 1; 
        int y1_int = y1 - '0';
        int x2_int = toupper(x2) - 'A' + 1;
        int y2_int = y2 - '0';

        int result = gerak_kuda(x1_int, y1_int, x2_int, y2_int, 6);
        printf("Case #%d: %d\n", i + 1, result);
    }

    return 0;
}
