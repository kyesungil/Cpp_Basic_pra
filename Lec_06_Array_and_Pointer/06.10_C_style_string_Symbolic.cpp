#include <iostream>

/* C��� ��Ÿ���� ���ڿ� �ɺ��� ��� */
/* ���ڿ� �򰥸��� �Ͱ� cout ���ڿ� ����� Ư¡!*/


using namespace std;

const char* getName()
{
	return "Jackjack";
}

int main()
{
	/* 1. 
		�ڡڡ� char name[] = "Jack Jack";
		"Jack Jack" ���ͷ� ��, ����̴�. "Jack Jack"�� ��� �޸𸮸� 
		�˼��� ����. name�� ������ �����̹Ƿ� ���ͷ��� ������ ����.
	*/
	// char* name = "Jack Jack";

	// �տ� cosnt�� �ٿ��ָ� ��ȣ���� ����� ����� �� �ִ�.
	const char* name = getName();
	const char* name2 = getName();

	cout << (uintptr_t)name << endl;  // ���: 1145648
	cout << (uintptr_t)name << endl;  // ���: 1145648



	/* 2.
		�ڡڡ� cout���� ���ڿ��� Ư���� ó�� 
	*/
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* ptr_name = "Jack Jack";

	cout << int_arr << endl;		 // ���: 00AFFBF8
	cout << char_arr << endl;		 // ���: Hello, World!
	cout << ptr_name << endl;		 // ���: Jack Jack



	/* 3. 
		�ڡڡ�
		c�� �ּ�(&c)�� ���� ���ڿ��� �Ǵ��ؼ� ���
		(���ڿ� ����� '\0'�� ������ ���� ���)
	*/
	char c = 'Q';
	cout << &c << endl;				 // ���: Q��������L�u


	return 0;
}
