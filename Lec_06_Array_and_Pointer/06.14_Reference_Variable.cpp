#include <iostream>

/* 6.14 참조 변수 */

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

// 포인터 변수는 복사가 일어나지만, 참조는 값을 복사하지 않는다.
void doSomething2(const int& x) 
{
	cout << x << endl;
}

int main()
{
	int value = 5;

	/* ★내부적으로 ref가 value와 같은 변수 처럼 사용된다. 
	   (value의 또다른 이름 이라고 생각)
	   
	   1. reference는 반드시 초기화가 되야한다.
	   2. reference는 상수 할당 불가능!
	   3. reference는 주소도 같다!
	   4. reference 다른 변수 재할당 가능
	   
	*/
	int& ref = value;		
	int* ptr = &value;

	cout << ref << endl;
	ref = 10;
	cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;	// ★ reference는 주소도 같다!
	cout << ptr << endl;
	cout << &ptr << endl;



	/* const 변수는 const reference로 할당 */
	const int y = 8;
	const int& reff = y;
	// int& reff = y;	// const경우 불가능




	/* ★reference 함수 이용 
		매개변수가 reference을 사용하게 되면, 아에 변수 자체가 넘어간다.!
		값을 바꾸고 싶지 않다면 매개변수는 (const int& n) 사용
	*/
	int  n = 5;

	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	cout << n << endl;



	/* sturct 멤버변수 접근을 reference을 이용하여 간결하게 
	   사용할수 있다.*/
	Other ot;
	// ot.st.v1 = 1;
	int& v1 = ot.st.v1;
	v1 = 1;




	/* 6.15 참조와 const */
	const int x = 5;
	const int& ref_x = x;
	const int& ref_2 = ref_x;

	/* 
		참조는 상수할당 불가능 하지만, const을 붙이면 가능.
		주소와 값도 출력 가능.
	*/
	const int& ref_ = 3 + 4;
	cout << ref_ << endl;
	cout << &ref_ << endl;

	// doSomething(1); // (int& n) 불가능
	doSomething2(1);   // (const int& x) 상수 매개변수을 받을수 있다.
	doSomething2(n + 1);

	return 0;
}