// strlen 함수를 사용하여 문자열 길이 출력하기 
#include<stdio.h>
#include<string.h>// 문자열 표준 함수를 사용하기 위해 추가함
void main() {
	int data_length; // 문자열 길이를 저장할 변수
	char data1[] = "happy";
	data_length = strlen(data1);
	printf("%d", data_length);
}
