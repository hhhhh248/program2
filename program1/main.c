#include <stdio.h>
#include "contact.h"

void testContact();

int main()
{
	testContact();

	return 0;
}



void testContact()
{
	Contact c1 = { "홍길동","01027780298",MAN,2025 };
	Contact c2 = { "홍길동","01027780298",MAN,2025 };
	Contact c3 = { "김길동","01027780298",MAN,2025 };

	printContact(c1);
	printContactPtr(&c2);
	printContactPtr(&c3);

	if (IsEqualIcontact(c1, c3))
	{
		printf("c1과 c2는 같다.\n");
	}
	else
	{
		printf("c1과 c2는 다르다.\n");
	}



}
