#include <iostream>
#include <string>
using namespace std;

typedef struct
{
	int Number;
	char Name[30];
	char Address[50];
	char MPhoneNum[20];
	char Birthday[9];
}PERSON;

typedef struct
{
	int Month;
	int Day;
	char ItemName[50];
	int Quantity;
	int UnitCost;
	int Price;
}ITEM;

typedef struct
{
	int ReceiptNum;
	char Name1[50];
	char BusinessRegNum[50];
	char FirmName[50];
	char Name2[50];
	char FirmAddress[50];
	char TypeOfFirm[50];
	char LinesOfBusiness[50];
	char Date[20];
	int Amount;
	char Handler[50];
	ITEM Item[10];
}RECEIPY;