#include <stdio.h>
short time;
int wage;
int main() {
	printf("so gio lam viec trong thang: ");
	scanf("%d",&time);
	printf("muc luong theo gio: ");
	scanf("%d",&wage);
	if (0<time && time<=160) {
		printf("luong nhan duoc la %d",time*wage);
	} else {
		printf("luong nhan duoc la %.0f",(time*wage)*1.1);
	}
	return 0;
}
