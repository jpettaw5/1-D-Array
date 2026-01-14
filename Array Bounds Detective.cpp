//Joshua Pettaway

#include <iostream>

using namespace std;

int main()
{
	const int size = 5;
	int arr[size];

	for (int index = 0; index < size; index++)
	{
		cin >> arr[index];
	}

	cout << "Fixed input loop works!\n";

	return 0;
}

