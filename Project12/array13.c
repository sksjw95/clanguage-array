#include <stdio.h>
#include <string.h>

void main() {
	char data[10] = { 'a','b','c',0 };

	char data2[16];

	strcpy_s(data2, sizeof(data2), data);
	strcat_s(data2, sizeof(data2), "def");

	printf("%s + \"def\" = %s\n", data, data2);
}