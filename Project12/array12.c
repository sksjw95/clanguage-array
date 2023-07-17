#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char data[10] = { 'H','e','l','l','o',0 };
	char data2[20];
	strcpy(data2, data);
	strcat(data2, " world!");
	printf("%s", data2);
}