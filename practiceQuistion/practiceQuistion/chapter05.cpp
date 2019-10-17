#include <iostream>
#include <string>
using namespace std;

//5¿Â ±∏¡∂√º øπ¡¶πÆ¡¶«Æ¿Ã

void Example01()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	strcpy_s(Name, 30, "±Ë∞©µπ");
	strcpy_s(MPhoneNum, 20, "010.8741.0000");

	cout << Name << endl;
	cout << MPhoneNum << endl;
}

void Example02()
{
	struct
	{
		char Name[30];
		char MPhoneNum[20];
	} Friend;

	strcpy_s(Friend.Name, 30, "±Ë∞©µπ");
	strcpy_s(Friend.MPhoneNum, 20, "010.8741.0000");

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;
}

void Example03()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	char Name1[30] = "";
	char MPhoneNum1[20] = "";

	strcpy_s(Name, 30, "±Ë∞©µπ");
	strcpy_s(MPhoneNum, 20, "010.8741.0000");

	strcpy_s(Name1, 30, Name);
	strcpy_s(MPhoneNum1, 20, MPhoneNum);

	cout << "Name : " << Name << endl << "MPhoneNum : " << MPhoneNum << endl;
	cout << endl << "Name1 : " << Name1 << endl << "MPhoneNum1 : " << MPhoneNum1 << endl;
}

void Example04()
{
	struct
	{
		char Name[30];
		char MPhoneNum[20];
	} Friend, Friend1;

	strcpy_s(Friend.Name, 30, "±Ë∞©µπ");
	strcpy_s(Friend.MPhoneNum, 20, "010.8741.0000");

	Friend1 = Friend;

	cout << "Name : " << Friend.Name << endl << "MPhoneNum : " << Friend.MPhoneNum << endl;
	cout << endl << "Name1 : " << Friend1.Name << endl << "MPhoneNum1 : " << Friend1.MPhoneNum << endl;
}

void Example05()
{
	struct POINT
	{
		int x;
		int y;
	};

	struct RECT
	{
		struct POINT LeftTop;
		struct POINT RightBottom;
		int area;
	};

	struct RECT a;

	a.LeftTop.x = 10;
	a.LeftTop.y = 100;

	a.RightBottom.x = 50;
	a.RightBottom.y = 15;

	a.area = (a.RightBottom.x - a.LeftTop.x) * (a.LeftTop.y - a.RightBottom.y);

	cout << "¡˜ªÁ∞¢«¸ ∏È¿˚ : " << a.area << endl;

}

void Example06()
{
	struct sam
	{
		char Name[30];
		char MPhoneNum[20];
	};

	typedef struct sam SAM;
	SAM Friend, Friend1;

	strcpy_s(Friend.Name, 30, "±Ë∞©µπ");
	strcpy_s(Friend.MPhoneNum, 20, "010.8741.0000");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << endl << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;
}

void Example07()
{
	typedef struct
	{
		char Name[30];
		char MPhoneNum[20];
	}SAM;

	SAM Friend;
	strcpy_s(Friend.Name, 30, "±Ë∞©µπ");
	strcpy_s(Friend.MPhoneNum, 20, "010.8741.0000");

	SAM Friend1;

	Friend1 = Friend;

	cout << Friend.Name << endl << Friend.MPhoneNum << endl << endl;

	cout << Friend1.Name << endl << Friend1.MPhoneNum << endl;
}

#include "example08.h"

void Example08()
{
	SAM Friend;
	strcpy_s(Friend.Name, 30, "±Ë∞©µπ");
	strcpy_s(Friend.MPhoneNum, 20, "010.8741.0000");

	SAM Friend1;

	Friend1 = Friend;

	cout << Friend.Name << endl << Friend.MPhoneNum << endl << endl;
	cout << Friend1.Name << endl << Friend1.MPhoneNum << endl;

}

#include "ch05_person.h"

void PracticalTraining01()
{
	PERSON p1 = { 12,"±Ë∞©µπ","ºˆø¯Ω√ øµ≈Î±∏ ∫¿øµ∑Œ","010.8741.0000","94/12/03" };

	cout << p1.Number << p1.Name << p1.Address << p1.MPhoneNum << p1.Birthday << endl;
}

void PracticalTraining02()
{
	cout << sizeof(ITEM) << endl << sizeof(RECEIPY) << endl;
}

void PracticalTraining03()
{
	ITEM Item;
	
	cout << "Month ¡÷º“ : " << &Item.Month << endl << "Day ¡÷º“ : " << &Item.Day << endl << "ItemName ¡÷º“ : " << &Item.ItemName << endl;
	cout << "Quantity ¡÷º“ : " << &Item.Quantity << endl << "UnitCost ¡÷º“ : " << &Item.UnitCost << endl << "Price ¡÷º“ : " << &Item.Price << endl;
}

//Example09

typedef struct
{
	char Name[30];
	char MPhoneNum[20];

}TEST;

void Example09()
{
	TEST arr[5] = { "±Ë∞©µπ","010.8741.0000",
				"¿Ãƒ°ºˆ","010.3456.0000",
				"¡§¥Î»£","010.8765.0000",
				"«—ƒ°øÌ","010.1234.0000",
				"π⁄ªÁ∂˚","010.4567.0000" };
	
	int i;

	cout << "±‚∫ª ≈©±‚ : " << sizeof(SAM) << endl;

	for (i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "]¿« ¡÷º“ : " << &arr[i] << endl;
	}
	for (i = 0; i < 5; i++)
	{
		cout << "¿Ã∏ß : " << arr[i].Name << ", »ﬁ¥Î¿¸»≠ π¯»£ : " << arr[i].MPhoneNum << endl;
	}
}

void Example10()
{
	TEST a = { "±Ë«‡∫π","010.7777.3333" };
	TEST* pa;

	pa = &a;

	cout << "¿Ã∏ß : " << a.Name << endl;
	cout << "¿Ã∏ß : " << (*pa).Name << endl;
}

void Example11()
{
	TEST a = { "±Ë«‡∫π","010.7777.3333" };
	TEST* pa;
	pa = &a;

	cout << "¿Ã∏ß : " << a.Name << endl;
	cout << "¿Ã∏ß : " << pa->Name << endl;
	cout << "¿¸»≠π¯»£ : " << pa->MPhoneNum << endl;
}

int main()
{
	//øπ¡¶πÆ¡¶«Æ¿Ã
	//Example01();
	//Example02();
	//Example03();
	//Example04();
	//Example05();
	//Example06();
	//Example07();
	//Example08();
	//PracticalTraining01();
	//PracticalTraining02();
	//PracticalTraining03();
	//Example09();
	//Example10();
	Example11();
}