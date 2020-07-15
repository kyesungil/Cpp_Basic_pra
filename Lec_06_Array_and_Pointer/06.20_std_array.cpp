#include <iostream>
#include <array>
#include <algorithm>

/* 정적 배열을 대체할수 있는 std::array 소개 */

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	
	std::array<int, 5> my_arr = { 31,12,53,24,75 };
	//my_arr = { 0,1,2,3,4 };
	//my_arr = { 0,1,2 };

	//cout << my_arr[10] << endl;		// 에러발생
	//cout << my_arr.at(10) << endl;	// 범위가 넘으면 예외처리을 한다.

	printLength(my_arr);

	// sort()
	std::sort(my_arr.begin(), my_arr.end());
	// 역순 sort
	std::sort(my_arr.rbegin(), my_arr.rend());

	for (const auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	


	return 0;
}