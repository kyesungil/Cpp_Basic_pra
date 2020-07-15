#include <iostream>
/* 6.8 포인터와 정적 배열 */
using namespace std;

void printArray(int array[])		//★(int array[]) 배열처럼 보이지만, 내부적으로는 포인터이다.
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
	// ★첫번째 바이트는 주소 array변수에 들어있다.
	int array[5] = { 9,7,5,3,1 };

	cout << array << endl;			   // 출력: 005AFD90
	cout << &array[0] << endl;		   // 출력: 005AFD90
	cout << *array << endl;			   // 출력: 9
	cout << sizeof(array) << endl;     // 출력: 20byte

	int* ptr = array;
	cout << ptr << endl;			   // 출력: 005AFD90
	cout << *ptr << endl;			   // 출력: 9
	cout << sizeof(ptr) << endl;	   // 출력: 4byte

	printArray(array);				   // 출력: 4byte 9

	cout << array[0] << " " << *array << endl; // 100 100

	
	char name[] = "jackjack";
	cout << *name << endl;			   // 출력: j


	MyStruct ms;
	cout << ms.array[0] << endl;	   // 출력: 9
	cout << sizeof(ms.array) << endl;  // 출력: 20byte 

	doSomething(&ms);				   //출력:20bye



	/* 포인터 연산과 배열 인덱싱 */
	char names[] = "Jhon Park";

	const int n_names = sizeof(names) / sizeof(char);

	for (int i = 0; i < n_names; i++)
		cout << *(names + i);

	return 0;
}