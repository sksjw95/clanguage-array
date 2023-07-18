//연습문제	Q2
#include<stdio.h>
void main() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	short result = 0;
	for (int i = 2; i < 9; i += 2) {
		result = result + data[i];
	}
	printf("%d", result);
}
