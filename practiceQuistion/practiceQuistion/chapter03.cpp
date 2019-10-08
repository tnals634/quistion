#include <iostream>
using namespace std;

//// 네임스페이스 작성과 사용
//
//namespace NS_1 {
//	int a = 200;
//}
//
//int main()
//{
//	int a = 100;
//
//	cout << "main() 범위입니다." << endl;
//	
//	for (int i = 1; i < 3; i++)
//	{
//		cout << "반복문 for의 범위입니다." << endl;
//		cout << "i= " << i << endl;
//		cout << "namespace ns_1의 a= " << NS_1::a << endl;
//		cout << "a= " << a << endl;
//	}
//
//	cout << "namespace NS_1의 a= " << NS_1::a << endl;
//	cout << "a= " << a << endl;
//	cout << "프로그램을 종료합니다." << endl;
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
//	cout << "SAM_1의 a= " << a << endl;
//	cout << "SAM_2의 b= " << b << endl;
//
//	return 0;
//}

//3장 연습문제

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
		cout << "점수 입력 : ";
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