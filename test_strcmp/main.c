#include <stdio.h>
#include <string.h> //<--- strcmp �Լ� ����� ���� �߰� �Ѵ�.?

int main(int argc, char* argv[])
{

	int result = 0;
	char* str1 = "hello world";
	char* str2 = "hello world";

	if (strcmp(str1, str2) == 0) //<--- strcmp ��� ���� 0�̸� �� ���ڿ��� ���� �׷��� ������ �ٸ���.
	{
		printf("�� ���ڿ��� ����.");
	}
	else
	{
		printf("�� ���ڿ��� ���� �ʴ�.");
	}


}
