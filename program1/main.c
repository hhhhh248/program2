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
	Contact c1 = { "ȫ�浿","01027780298",MAN,2025 };
	Contact c2 = { "ȫ�浿","01027780298",MAN,2025 };
	Contact c3 = { "��浿","01027780298",MAN,2025 };

	printContact(c1);
	printContactPtr(&c2);
	printContactPtr(&c3);

	if (IsEqualIcontact(c1, c3))
	{
		printf("c1�� c2�� ����.\n");
	}
	else
	{
		printf("c1�� c2�� �ٸ���.\n");
	}



}
