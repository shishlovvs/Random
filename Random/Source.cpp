#include<iostream>
#include<algorithm>
#include<ctime>
#define SORTIROVKA
#define UNIQ
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

#ifdef SORTIROVKA
	int const n = 5;
	int arr[n];
	int i = 0;
	cout << "Оригинальный массив, заполненный псевдорандомными числами: ";

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 100;
	}
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl << endl;


	/*cout << "Отсортированный массив с помощью библиотеки algorithm: " << endl;
	sort(arr, arr + n); */ //сортировка с помощью подключения библиотеки algorithm

	int s; //сортировка "пузырьковым" методом
	cout << "Отсортированный массив пузырьковым методом: " << endl;
	for (int i = 1; i <= (n - 1); i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				s = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = s;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl << endl << endl;


#endif // SORTIROVKA

	
		

#ifdef UNIQ
	srand(time(NULL));

	const int SIZE = 10;
	int brr[SIZE];

	bool alreadyThere;
	cout << "Массив, заполненный уникальными неповторяющимися числами:" << endl;
	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int m = rand() % 10;

		for (int j = 0; j < i; j++)
		{
			if (brr[j] == m)
			{
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere)
		{
			brr[i] = m;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << '\t';
	}cout << endl << endl << endl;
#endif // UNIQ

	
	const int k = 10;
	int crr[k];
	cout << "Массив, заполненный уникальными рандомными числами: " << endl;
	for (int i = 0; i < k; i++)
	{
		crr[i] = rand() % 10;
	}

	for (int i = 0; i < k; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (crr[i] == crr[j])
			{
				int wasBefore = 0;
				for (int z = 0; z < i; z++) {
					if (crr[z] == crr[i]) {
						wasBefore = 1; break;
					}
				}
				if (wasBefore == 0) {
					cout << "Уже присутствующие цифры: " << crr[i] << " " << endl;
				}
				break;
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << crr[i] << '\t';
	}
	cout << endl;
}