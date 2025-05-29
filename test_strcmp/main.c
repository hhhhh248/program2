#include <stdio.h>
#include <string.h> //<--- strcmp 함수 사용을 위해 추가 한다.?

int main(int argc, char* argv[])
{

	int result = 0;
	char* str1 = "hello world";
	char* str2 = "hello world";

	if (strcmp(str1, str2) == 0) //<--- strcmp 결과 값이 0이면 두 문자열이 같고 그렇지 않으면 다르다.
	{
		printf("두 문자열은 같다.");
	}
	else
	{
		printf("두 문자열은 같지 않다.");
	}


}
