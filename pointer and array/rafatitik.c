#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d", &t);
    getchar();

	char string[105];
	for(int k = 0; k < t; k++){
		scanf("%s", string); getchar();

		int len = strlen(string);
		int valid = 0;
		int counterangka = 0;
		int countertitik = 0;
		
		for(int i = 0; i < len; i++){
			if(string[0] == '.' || string[len-1] == '.'){
				valid = 1;
			}
            else if(i % 2 == 0){
				if(string[i] == '.'){
					valid = 1;
					break;
				} 
                else if(string[i] >= '0' && string[i] <= '9'){
					valid = 0;
					counterangka++;
				}
			} 
            else if(i % 2 != 0){
				if(string[i] == '.'){
					valid = 0;
					countertitik++;
				} else if(string[i] >= '0' && string[i] <= '9'){
					valid = 1;
					break;
				}
			}
		}
		printf("Case #%d: ", k+1);
		if(valid == 1){
			printf("NO\n");
		} 
        else if(valid == 0){
			if(counterangka == 6 && countertitik == 5){
				printf("YES\n");
			} 
            else{
				printf("NO\n");
			}
		}
		
	}
	return 0;
}