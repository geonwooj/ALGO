#include<stdio.h>
int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", A * (B % 10));//1의자리수 완료
	printf("%d\n", A * ((B % 100)/10));//10의자리수 완료
	printf("%d\n", A * (B / 100));
	printf("%d\n", A * B);
}
