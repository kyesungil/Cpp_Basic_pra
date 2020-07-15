#include <iostream>
/* 6.8 �����Ϳ� ���� �迭 */
using namespace std;

void printArray(int array[])		//��(int array[]) �迭ó�� ��������, ���������δ� �������̴�.
{
	cout << sizeof(array) << endl;	// 4byte
	cout << *array << endl;			// 9

	*array = 100;
}

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };
};

void doSomething(MyStruct* ms)
{
	cout << sizeof((*ms).array) << endl;
}

int main()
{
	// ��ù��° ����Ʈ�� �ּ� array������ ����ִ�.
	int array[5] = { 9,7,5,3,1 };

	cout << array << endl;			   // ���: 005AFD90
	cout << &array[0] << endl;		   // ���: 005AFD90
	cout << *array << endl;			   // ���: 9
	cout << sizeof(array) << endl;     // ���: 20byte

	int* ptr = array;
	cout << ptr << endl;			   // ���: 005AFD90
	cout << *ptr << endl;			   // ���: 9
	cout << sizeof(ptr) << endl;	   // ���: 4byte

	printArray(array);				   // ���: 4byte 9

	cout << array[0] << " " << *array << endl; // 100 100

	
	char name[] = "jackjack";
	cout << *name << endl;			   // ���: j


	MyStruct ms;
	cout << ms.array[0] << endl;	   // ���: 9
	cout << sizeof(ms.array) << endl;  // ���: 20byte 

	doSomething(&ms);				   //���:20bye



	/* ������ ����� �迭 �ε��� */
	char names[] = "Jhon Park";

	const int n_names = sizeof(names) / sizeof(char);

	for (int i = 0; i < n_names; i++)
		cout << *(names + i);

	return 0;
}