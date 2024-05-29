#include <stdio.h>

int count = 0;

void floodfill(char map[10][5], int x, int y, int a, int b){
	if((a >= 0 && a <= x) && (b >= 0 && b <= y) && map[a][b] == ' '){
		map[a][b] = 'o';
		count++;
		floodfill(map, x, y, a, b+1);
		floodfill(map, x, y, a, b-1);
		floodfill(map, x, y, a+1, b);
		floodfill(map, x, y, a-1, b);
//		floodfill(map, x, y, a-1, b-1);
//		floodfill(map, x, y, a+1, b+1);
//		floodfill(map, x, y, a-1, b+1);
//		floodfill(map, x, y, a+1, b-1);
	}
}

int main(){
	
	int x = 10, y = 5, a = 1, b = 1;
	char map[10][5] = {
		{"#####"},
		{"#  ##"},
		{"##  #"},
		{"#   #"},
		{"## ##"},
		{"# # #"},
		{"# ###"},
		{"##  #"},
		{"#   #"},
		{"#####"},
		};
	floodfill(map, x, y, a, b);
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("%c", map[i][j]);
		}
		puts("");
	}
	printf("%d", count);
	
	return 0;
}