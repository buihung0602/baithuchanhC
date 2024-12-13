#include <stdio.h>
int number,i;
int main () {
	printf("nhap vao mot so nguyen duong: ");
	scanf("%d",&number);
	printf("uoc cua %d la : ",number);
	for (i=1;i<=number;i=i+1) {
		if (number%i==0) {
			printf("%d ",i);
		}
	}
	return 0;
}
