#include<stdio.h> //Q3
void main() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	short result = 0;
	for (int i = 0; i < 9; i++) {
		if (result < data[i]) {
			result = data[i];
		}
	}
	printf("%d", result);
}