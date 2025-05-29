#include <stdio.h>
#include <string.h> //<--- strcmp 함수 사용을 위해 추가 한다. 
#include "contact.h"


// IsEqualIcontact()
// 
// 반환값 만약 같으면 1 (true) 반환, 그렇지 않으면 0을 반환
// 입력 비교할 두 Contact 값
int IsEqualIcontact(Contact a, Contact b)
{

	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContact(Contact c1)
{
	// 이름: 000
	// 전번: 0000000000
	// 성별: 남 혹 여
	//연도: 000

	printf("이름: %s \n", c1.name);
	printf("전번: %s \n",c1.phone);
	//printf("성별: %s \n",c1.gender == MAN ? "남자" : "여자");
	//printf("연도: %4d \n", c1.year);
	printf("성별:%d" ,c1.gender == MAN ? "남자" : "여자")
}


int IsEqualContactPtr(Contact * a, Contact * b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	
	}
	else
	{
		return 0;	
	}
}

void printContactPtr(Contact * c1)
{
	// 이름: 000
	// 전번: 0000000000
	// 성별: 남 혹 여
	//연도: 000

	printf("이름: %s \n", c1->name);
	printf("전번: %s \n", c1->phone);
	printf("성별: %s \n", c1->gender == MAN ? "남자" : "여자");
	printf("연도: %4d \n", c1->year);
}