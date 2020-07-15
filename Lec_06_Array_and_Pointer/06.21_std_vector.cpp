#include <iostream>
#include <vector>

/* 동적 배열을 대체 할수 있는 std_vector */
using namespace std;

int main()
{
	/*
		vector의 장점은 메모리를 알아서 지워준다.
	*/

	// std::array<int, 5> array;
	std::vector<int> array;

	std::vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	std::vector<int> array3 = { 1,2,3 };

	cout << array3.size() << endl;

	std::vector<int> array4{ 1,2,3 };

	cout << array4.size() << endl;


	vector<int> arr = { 1,2,3,4,5 };
	arr.resize(10);

	for (const auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	return 0;
}