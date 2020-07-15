#include <iostream>
/* 6.13 포인터와 const */
using namespace std;

int main()
{
	/*
		1. const 변수이면 const 포인터 변수로 해줘야함
	*/
	const int value = 5;
	const int* ptr = &value;
	// *ptr = 6; 바꾸지 못함
	



	/*
		2. 포인터로는 바꾸지 못하지만 변수로는 값을 바꿀수 있다
	*/
	int val = 5;
	const int* ptr_v = &val;
	// *ptr_v = 6; 불가능
	val = 6; // 가능




	/* 
		3. 
		const int* ptr_1 = &value1;
		ptr_1이 가리키고 있는 값을 바꾸지 않겠다는 뜻
		ptr_1 저장되는 주소값을 안바꾸는것이 아님
	*/
	int value1 = 5;
	const int* ptr_1 = &value1;
	// *ptr_1 = 7; 불가능

	int value2 = 6;
	ptr_1 = &value2;




	/*
		4. 포인터 상수
		int *const ptr_s = &s;
		ptr_s(pointer)에 있는 주소값을 바꿀수 없음
	*/
	int s = 5;
	int *const ptr_s = &s;

	*ptr_s = 10;
	cout << *ptr_s << endl;
	
	int ss = 8;
	// ptr_s = &ss; 불가능




	/*
		5. const int* const ptr_k = &k;
		값도 주소값도 바꿀수 없다.
	*/
	int k = 5;
	const int* const ptr_k = &k;


	return 0;
}