#include <iostream>
using namespace std;

//4장 연습문제
void Quistion01()
{
	int score[5] = { 100,90,45,100,98 };
	int total = 0;
	int* p_score;
	int* p_total;

	p_score = score;
	p_total = &total;

	for (int i = 0; i < 5; i++)
	{
		total += score[i];
		cout << "p_score : " << *(p_score+i) << endl;
	}

	cout << "\np_total : " << *p_total << endl;
}

void Quistion02()
{
	int a, * pa;
	a = 100;
	pa = &a;
	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*************" << endl;
	*pa = 200;
	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;

}

//3,4번은 필기문제이다.

int main()
{
	//Quistion01();
	Quistion02();
	return 0;
}