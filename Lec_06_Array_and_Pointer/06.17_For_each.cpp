#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

/* 6.17 For-each반복문 */
using namespace std;

int main()
{
	/* 주의: array을 동적할당을 하면 for-each을 사용할수 없다.*/

	int fibonacci[] = { 0,1,2,3,5,8,13,21,34,55,89 };

	// change array values
	for (auto& number : fibonacci)
		number *= 10;


	// output
	for (const auto number : fibonacci)
		cout << number << " ";
	cout << endl;


	// 가장 큰수 출력
	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_number = std::max(max_number, n);
	cout << max_number << endl;
	
	return 0;
}