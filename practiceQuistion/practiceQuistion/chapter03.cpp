#include <iostream>
using namespace std;

//// ���ӽ����̽� �ۼ��� ���
//
//namespace NS_1 {
//	int a = 200;
//}
//
//int main()
//{
//	int a = 100;
//
//	cout << "main() �����Դϴ�." << endl;
//	
//	for (int i = 1; i < 3; i++)
//	{
//		cout << "�ݺ��� for�� �����Դϴ�." << endl;
//		cout << "i= " << i << endl;
//		cout << "namespace ns_1�� a= " << NS_1::a << endl;
//		cout << "a= " << a << endl;
//	}
//
//	cout << "namespace NS_1�� a= " << NS_1::a << endl;
//	cout << "a= " << a << endl;
//	cout << "���α׷��� �����մϴ�." << endl;
//
//	return 0;
//}

//namespace SAM_1 {
//	int a = 100;
//}
//
//namespace SAM_2 {
//	int b = 200;
//}
//
//int main()
//{
//	using namespace SAM_1;
//	using namespace SAM_2;
//
//	cout << "SAM_1�� a= " << a << endl;
//	cout << "SAM_2�� b= " << b << endl;
//
//	return 0;
//}

//3�� ��������

void Quistion01()
{
	int x = 3, y = 3, z = 0;
	if ((x > 2) && (y > 2))
	{
		z = x + y;
		cout << "z = " << z << "\n";
	}
	else
	{
		cout << "x = " << x << "\n";
	}
}

void Quistion02()
{
	int score;
	char grade;
	do {
		cout << "���� �Է� : ";
		cin >> score;
	} while (score > 100 || score < 0);
	score = score / 10;
	if ((score == 10) || (score == 9))
	{
		grade = 'A';
	}
	else if (score == 8)
	{
		grade = 'B';
	}
	else if (score == 7)
	{
		grade = 'C';
	}
	else
	{
		grade = 'F';
	}

	cout << "grade = " << grade << "\n";
}

void Quistion03()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "i = " << i << endl;
		cout << "==================" << endl;
	}

	for (int i = 0; i < 5; i++)
		cout << "i = " << i << "\n";
		cout << "++++++++++++++++++" << endl;
}
#include <iomanip>
void Quistion04()
{
	int i;
	cout << "  | ";
	for (i = 1; i <= 9; i++)
	{
		cout << setw(3) << i;
	}
	cout << "\n-----------------------------------------------\n";
	for (i = 1; i <= 9; i++)
	{
		cout << i << " | ";
		for (int j = 1; j <= 9; j++)
		{
			cout << setw(3) << i * j;
		}
		cout << "\n";
	}
}

void Quistion05()
{
	int n;

	for (n = 0; n < 20; n++)
	{
		if ((n % 3 != 0) && (n % 5 != 0))
		{
			continue;
		}
		cout << n << endl;
	}
}

int main()
{
	//Quistion01();
	//Quistion02();
	//Quistion03();
	//Quistion04();
	Quistion05();
	return 0;
}