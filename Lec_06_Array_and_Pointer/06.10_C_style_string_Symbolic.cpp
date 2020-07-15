#include <iostream>

/* C언어 스타일의 문자열 심볼릭 상수 */
/* 문자열 헷갈리는 것과 cout 문자열 출력의 특징!*/


using namespace std;

const char* getName()
{
	return "Jackjack";
}

int main()
{
	/* 1. 
		★★★ char name[] = "Jack Jack";
		"Jack Jack" 리터럴 즉, 상수이다. "Jack Jack"이 담길 메모리를 
		알수가 없다. name은 포인터 변수이므로 리터럴을 담을수 없다.
	*/
	// char* name = "Jack Jack";

	// 앞에 cosnt을 붙여주면 기호적인 상수로 사용할 수 있다.
	const char* name = getName();
	const char* name2 = getName();

	cout << (uintptr_t)name << endl;  // 출력: 1145648
	cout << (uintptr_t)name << endl;  // 출력: 1145648



	/* 2.
		★★★ cout에서 문자열은 특별히 처리 
	*/
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* ptr_name = "Jack Jack";

	cout << int_arr << endl;		 // 출력: 00AFFBF8
	cout << char_arr << endl;		 // 출력: Hello, World!
	cout << ptr_name << endl;		 // 출력: Jack Jack



	/* 3. 
		★★★
		c에 주소(&c)가 들어가서 문자열로 판단해서 출력
		(문자열 출력은 '\0'을 만날때 까지 출력)
	*/
	char c = 'Q';
	cout << &c << endl;				 // 출력: Q儆儆儆儆L썈


	return 0;
}
