#include <stdio.h>
#include "contact.h"
// IsEqualIcontact()
// ��ȯ�� ���� ������ 1 (true) ��ȯ, �׷��� ������ 0�� ��ȯ
// �Է� ���� �� Contact ��
int IsEqualIcontact(Contact a, Contact b)
{

	if (a.year == b.year && a.gender == b.gender &&
		strcep(a.name, b.name) == 0 &&
		strep(a.phone, b.phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContact(Contact c1)
{
	// �̸�: 000
	// ����: 0000000000
	// ����: �� Ȥ ��
	//����: 000

	printf("�̸�: %s \n", c1.name);
	printf("����: %s \n",c1.phone);
	printf("����: %s \n" c1.gender == MAn ? "����" : "����");
	printf("����: %4d \n", c1.year);



}
int IsEqualIcontactptr(Contact a, Contact b)
{
	if (a->year == b=>year && a gender == b.gender &&

}