#include <iostream>
using namespace std;

//2�� ��������
void Question01()
{
	double miles = 100, MILE_TO_KILOMETER = 1.609, kilometer;
	kilometer = miles * MILE_TO_KILOMETER;
	cout << "���" << kilometer << endl;
}

void Question02()
{
	int score1 = 100, score2 = 78, score3 = 78;
	int total;
	float average;
	total = score1 + score2 + score3;
	average = (float)total / 3;
	cout << "total : " << total << "\naverage : " << average << endl;
}

//3,4���� ���� 1,2���� ������ ������ ������� �����϶�� ��������

void Question05()
{
	cout << "����� " << 10 << "���ִ�\n";
	cout << "����� �Ѱ��� " << 500 << "���̴�.\n";
}

void Question06()
{
	int unit, count, total;
	unit = 500;
	count = 5;
	total = unit * count;
	cout << "�ѱݾ� : " << total << endl;
}

//7�������� ������ �ʱ�ȭ �������� ������ ����Ϸ��� �ؼ� ������ ����

void Question08()
{
	short m_short = 40000;

	cout << "m_short = 40000 �� �� m_short = " << m_short << "\n";
	m_short = 20000;

	cout << "m_short = 20000 �� �� m_short = " << m_short << "\n";

	int m_int = 40000;
	cout << "m_int = 40000 �� �� m_int = " << m_int << "\n";

}

int main()
{
	//Question01();
	//Question02();
	//Question05();
	//Question06();
	Question08();

	return 0;
}