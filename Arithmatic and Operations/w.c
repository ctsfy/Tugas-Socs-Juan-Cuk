#include <stdio.h>
int main(){
int a, b, c;
int ratusan = 0, ratusan1 = 0, ratusan2 = 0, puluhan = 0, puluhan1 = 0, puluhan2 = 0, satuan = 0, satuan1 = 0, satuan2 = 0;
scanf("%d %d %d", &a, &b, &c);
ratusan = a/100;
ratusan1 = b/100;
ratusan2 = c/100;

puluhan = a - ratusan*100;
puluhan1 = b - ratusan1*100;
puluhan2 = c - ratusan2*100;

satuan = puluhan/10;
satuan1 = puluhan1/10;
satuan2 = puluhan2/10;

printf("%d\n%d\n%d\n", satuan, satuan1, satuan2);

    return 0;
}