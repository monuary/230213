//const�� ������ ���ȭ��Ų��.

#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;	//���ǵ� ��, ����� ���ÿ� �̷�����.
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
	AAA& ref;
	const int& num;
public:
	BBB(AAA& r, const int& n) :ref(r), num(n){}	//const ������� �̴ϼȶ������ �ʱ�ȭ�ߴ�.
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}