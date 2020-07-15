#include <iostream>

/* 6.14 ���� ���� */

using namespace std;

struct Sth
{
	int v1;
	float v2;
};

struct Other
{
	Sth st;
};

void doSomething(int& n)
{
	n = 10;
	cout << &n << endl;
	cout << "In doSomething " << n << endl;
}

// ������ ������ ���簡 �Ͼ����, ������ ���� �������� �ʴ´�.
void doSomething2(const int& x) 
{
	cout << x << endl;
}

int main()
{
	int value = 5;

	/* �ڳ��������� ref�� value�� ���� ���� ó�� ���ȴ�. 
	   (value�� �Ǵٸ� �̸� �̶�� ����)
	   
	   1. reference�� �ݵ�� �ʱ�ȭ�� �Ǿ��Ѵ�.
	   2. reference�� ��� �Ҵ� �Ұ���!
	   3. reference�� �ּҵ� ����!
	   4. reference �ٸ� ���� ���Ҵ� ����
	   
	*/
	int& ref = value;		
	int* ptr = &value;

	cout << ref << endl;
	ref = 10;
	cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;	// �� reference�� �ּҵ� ����!
	cout << ptr << endl;
	cout << &ptr << endl;



	/* const ������ const reference�� �Ҵ� */
	const int y = 8;
	const int& reff = y;
	// int& reff = y;	// const��� �Ұ���




	/* ��reference �Լ� �̿� 
		�Ű������� reference�� ����ϰ� �Ǹ�, �ƿ� ���� ��ü�� �Ѿ��.!
		���� �ٲٰ� ���� �ʴٸ� �Ű������� (const int& n) ���
	*/
	int  n = 5;

	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	cout << n << endl;



	/* sturct ������� ������ reference�� �̿��Ͽ� �����ϰ� 
	   ����Ҽ� �ִ�.*/
	Other ot;
	// ot.st.v1 = 1;
	int& v1 = ot.st.v1;
	v1 = 1;




	/* 6.15 ������ const */
	const int x = 5;
	const int& ref_x = x;
	const int& ref_2 = ref_x;

	/* 
		������ ����Ҵ� �Ұ��� ������, const�� ���̸� ����.
		�ּҿ� ���� ��� ����.
	*/
	const int& ref_ = 3 + 4;
	cout << ref_ << endl;
	cout << &ref_ << endl;

	// doSomething(1); // (int& n) �Ұ���
	doSomething2(1);   // (const int& x) ��� �Ű������� ������ �ִ�.
	doSomething2(n + 1);

	return 0;
}