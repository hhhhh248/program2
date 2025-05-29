//#pragma once

#ifndef _CONTACT_H_129847575
#define _CONTACT_H_129847575

enum gender { MAN, WOMAN };
typedef enum gender EGender;

struct contact {
	char name[24];
	char phone[24];
	int year;
	EGender gender;
};

typedef struct contact Contact;


int IsEqualIcontact(Contact a, Contact b);

void printContact(Contact c1);
int IsEqualContactPtr(Contact* a, Contact* b);
void printContactPtr(Contact* c1);
;

#endif _CONTACT_H_129847575