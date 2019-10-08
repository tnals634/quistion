#include <iostream>
using namespace std;

//2장 연습문제
void Question01()
{
	double miles = 100, MILE_TO_KILOMETER = 1.609, kilometer;
	kilometer = miles * MILE_TO_KILOMETER;
	cout << "결과" << kilometer << endl;
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

//3,4번은 문제 1,2번의 문제가 에러가 났을경우 수정하라는 문제였음

void Question05()
{
	cout << "사과가 " << 10 << "개있다\n";
	cout << "사과가 한개에 " << 500 << "원이다.\n";
}

void Question06()
{
	int unit, count, total;
	unit = 500;
	count = 5;
	total = unit * count;
	cout << "총금액 : " << total << endl;
}

//7번문제는 변수가 초기화 되지않은 변수를 출력하려고 해서 오류가 난것

void Question08()
{
	short m_short = 40000;

	cout << "m_short = 40000 일 때 m_short = " << m_short << "\n";
	m_short = 20000;

	cout << "m_short = 20000 일 때 m_short = " << m_short << "\n";

	int m_int = 40000;
	cout << "m_int = 40000 일 때 m_int = " << m_int << "\n";

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