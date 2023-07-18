#include<stdio.h>
void main() {
	int data[7] = { 6,3,9,7,2,4,1 };
	int result[7];
	int answer[7];
	char count;

	for (int i = 0; i < 7; i++) {
		count = 0;
		for (int j = 0; j < 7; j++) {
			if (data[i] > data[j]) {
				count += 1; // 4,2,6,5,1,3,0
			}
			

		}
		result[i] = count;
	}
	for (int i = 0; i < 7; i++) {
		answer[result[i]] = data[i]; //answer[4] = data[0],answer[2] = data[1],
	}    // ....answer[0] = data[6]

	for (int i = 0; i < 7; i++) {
		printf("%d\n", answer[i]);
	}
}




/*#include <stdio.h>

void main() {
	int data[7] = { 6, 3, 9, 7, 2, 4, 1 };
	int result[7];
	int answer[7];
	char count;

	for (int i = 0; i < 7; i++) {
		count = 0;
		for (int j = 0; j < 7; j++) {
			if (data[i] > data[j]) count += 1;
		}
		result[i] = count;
	}
	for (int i = 0; i < 7; i++) answer[result[i]] = data[i];
	for (int i = 0; i < 7; i++) printf("%d\n", answer[i]);
}*/