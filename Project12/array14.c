// 1���� �迭�� �̿��Ͽ� 2���� �迭�� ������ �����ϰ� �˷��ֱ�
#include<stdio.h>
void main() {
	char data[12] = { 0,0,2,0,1,1,0,0,2,1,0,2 };

	for (int i = 0; i < 12; i++) {
		int x = i % 4 + 1; //�� ��ȣ
		int y = i / 4 + 1; //�� ��ȣ
		printf("%d�� %d����", y, x);
		if (data[i] == 1) {
			printf(" ���� ���� ���� �ֽ��ϴ�. \n");
		}
		else if (data[i] == 2) {
			printf(" �� ���� ���� �ֽ��ϴ�. \n");
		}
		else {
			printf(" �� ���� ���� ���� �ʽ��ϴ�. \n");
		}
	}
}