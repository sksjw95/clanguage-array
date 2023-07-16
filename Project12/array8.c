#include <stdio.h>
//배열에 문자열을 저장하고 출력하기!
void main() {
	
	char data1[23] = { 'D','o','n','\'','t',' ','w','o','r','r','y',',',' ','B','e',' ','h','a','p','p','y','!',0 };
	char data2[23] = "Don't worry, Be happy!";
	char data3[] = "Don't worry, Be happy!";


	char data4[] = "걱정 마. 행복할 거야.";


	printf("%s\n", data1);
	printf("%s\n", data2);
	printf("%s\n", data3);
	printf("%s\n", data4);

}