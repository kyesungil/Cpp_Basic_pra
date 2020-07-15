#include <iostream>
/* 6.11 메모리 동적 할당 new와 delete */
using namespace std;

int main()
{
										  // int var = 7 와 같은 방법
	int* ptr = new (std::nothrow) int{7}; // os에게 4byte(int)할당 받은후, 그 메모리 주소를 알려준다.
	int* ptr2 = ptr;

	delete ptr;							  // os에게 메모리를 돌려준다.
	ptr  = nullptr;						  // run-time error 방지
	ptr2 = nullptr;
	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;	// 주소값 출력
		cout << *ptr << endl;   // run-time error
	}


	// ★★★ Memory leak (메모리 누수)
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}
	
	return 0;
}


/*
	★★★ 메모리 할당 3가지

	1. static memory allocation
	   전역변수와 혹은 static변수와 같이 한번만들면 프로그램이 끝날때 까지 
	   계속 메모리를 갖고있는 것들을 의미한다.

	 - 컴퓨터 사이언스에서 static이라는 말이 붙으면 보통 실행 전(=컴파일 타임)에 일어나는 일을 말한다. 
	   Static memory allocation은 프로그램이 수행되기 전에 미리 메모리를 할당하는 것을 뜻한다. 
	   풀어서 쓰면 컴파일 타임에 code section, data section, BSS section이 메모리에 미리 올라가는 것을 말한다
	   Static allocation의 특징은 변수들의 life cycle이 프로그램의 시작과 종료가 일치하는 것이다.


	2. 자동 memory allocation(자동 메모리 할당) 
	   변수를 선언하거나 정적배열을 선언했을 때, 블럭 밖으로 나가면 전부 사라지고
	   다시 메모리가 os로 할당이 된다.
	   
	   정적 메모리 할당
	   선언된 크기로 생성되며, 중간에 크기를 바꿀 수 없다.
	   소멸할때 자동으로 운영체제가 메모리를 회수한다.

	 - stack에 할당된다. stack memory는 작다.


	3. Dynamic memory allocation(동적 메모리 할당)
	 - heap에 할당. heap은 stack에 비해서 훨씬 크다.


	
*/