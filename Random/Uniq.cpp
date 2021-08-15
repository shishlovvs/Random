#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];
	
	bool alreadyThere;
	
	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int n = rand() % 10;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == n)
			{
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere)
		{
			arr[i] = n;
			i++;
		}
	}

}