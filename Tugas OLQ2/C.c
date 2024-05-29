#include <stdio.h>
int main(){
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t;
char kelas1[11], kelas2[11], kelas3[11], kelas4[11], kelas5[11];
scanf("%s %d:%d-%d:%d", &kelas1, &a, &b, &c, &d);
scanf("%s %d:%d-%d:%d", &kelas2, &e, &f, &g, &h);
scanf("%s %d:%d-%d:%d", &kelas3, &i, &j, &k, &l);
scanf("%s %d:%d-%d:%d", &kelas4, &m, &n, &o, &p);
scanf("%s %d:%d-%d:%d", &kelas5, &q, &r, &s, &t);

printf("%s %02d:%02d-%02d:%02d\n", kelas1, a-1, b, c-1, d);
printf("%s %02d:%02d-%02d:%02d\n", kelas2, e-1, f, g-1, h);
printf("%s %02d:%02d-%02d:%02d\n", kelas3, i-1, j, k-1, l);
printf("%s %02d:%02d-%02d:%02d\n", kelas4, m-1, n, o-1, p);
printf("%s %02d:%02d-%02d:%02d\n", kelas5, q-1, r, s-1, t);
return 0;
}