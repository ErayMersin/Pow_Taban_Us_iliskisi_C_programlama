#include<stdio.h>
#include<stdlib.h>
#include<math.h>
  
int main() {

	int x, y, sonuc;

	printf("Taban Gir: ");
	scanf_s("%d", &x);

	printf("Us Gir: ");
	scanf_s("%d", &y);

	sonuc = pow(x, y);
	printf("Sonuc: %d", sonuc);

	return 0;
}