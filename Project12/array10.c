// strlen �Լ��� ����Ͽ� ���ڿ� ���� ����ϱ� 
#include<stdio.h>
#include<string.h>// ���ڿ� ǥ�� �Լ��� ����ϱ� ���� �߰���
void main() {
	int data_length; // ���ڿ� ���̸� ������ ����
	char data1[] = "happy";
	data_length = strlen(data1);
	printf("%d", data_length);
}
