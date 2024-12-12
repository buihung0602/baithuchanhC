#include <stdio.h>
int number,money=0,i;
int main() {
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n");
	printf("1. USD to VND\n2. EUR to VND\n3. GBP to VND\n4. JPY to VND\n5. VND to USD\n6. VND to EUR\n7. VND to GBP\n8. VND to JPY\n");
	printf("nhap don vi tien te ma ban muon chuyen doi (1-8): ");
	scanf("%d",&number);
	printf("nhap so tien can chuyen doi: ");
	scanf("%d",&i);
	switch (number) {
		case 1:
			money=i*23500;
			printf("%d USD = %d VND",i,money);
				break;
		case 2:
			money=i*25000;
			printf("%d EUR = %d VND",i,money);
				break;
		case 3:
			money=i*28000;
			printf("%d GBP = %d VND",i,money);
				break;
		case 4:
			money=i*180;
			printf("%d JPY = %d VND",i,money);
				break;
		case 5:
			money=i/23500;
			printf("%d VND = %d USD",i,money);
				break;
		case 6:
			money=i/25000;
			printf("%d VND = %d EUR",i,money);
				break;
		case 7:
			money=i/28000;
			printf("%d VND = %d GBP",i,money);
				break;
		case 8:
			money=i/180;
			printf("%d VND = %d JPY",i,money);
				break;
	}
	return 0;
}
