#include<stdio.h>

int count;
int playerRow, playerColumn;
char map[105][105];

void floodfill(int row,int column){
	if(map[row][column]=='#' || map[row][column] =='\n' || map[row][column] =='\0' || row < 0 || column < 0 ){
		return;
	}
	
	//Bagaimana kalo ketemu titik?
	if(map[row][column] == '.'){
		count++;
	}
	
	map[row][column] = '#';
	
	floodfill(row+1,column); //Cek bawah
	floodfill(row-1,column); //Cek Atas
	floodfill(row,column+1); //Cek Kanan
	floodfill(row,column-1); //Cek Kiri
}

int main(){
	int tc;
	scanf("%d",&tc);
	for(int k = 1 ; k <= tc ; k++){
		int row,column;
		scanf("%d %d",&row,&column);
		
		for(int i=0;i<row;i++){
			for(int j=0; j<column+1;j++){
				scanf("%c",&map[i][j]);
				if(map[i][j]=='S'){
					playerRow = i;
					playerColumn = j;
				}
			}
		}
		
		floodfill(playerRow, playerColumn);
		
		printf("Case #%d: %d\n",k,count);
		//Reset -> Balikin semua global variable ke default value
		count = 0, playerRow = 0, playerColumn = 0;
		for(int i=0;i<105;i++){
			for(int j=0;j<105;j++){
				map[i][j]='\0'; //Null terminator => penanda kalau charnya kosong
			}
		}
	}
	return 0;
}
