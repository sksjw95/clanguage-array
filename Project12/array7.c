// �迭�� �� ��ҿ� ����� �� ���ϱ�
#include<stdio.h>
void main() {
	char data[5] = { 1,2,3,4,5 };
	int result = 0;

	for (int i = 0; i < 5; i++) {
		result = result + data[i];
	}
	printf("data �迭�� �� ����� ���� %d �Դϴ�.", result);
}