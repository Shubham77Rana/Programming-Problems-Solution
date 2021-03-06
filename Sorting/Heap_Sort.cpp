#include <iostream>

using namespace std;

void max_heapify(int array[], int parent, int size)
{
	int left = 2 * parent;
	int right = left + 1;
	int largest = parent;

	if(left <= size && array[left] > array[largest])
		largest = left;

	if(right <= size && array[right] > array[largest])
		largest = right;

	if(largest != parent)
	{
		swap(array[parent], array[largest]);
		max_heapify(array, largest, size);
	}
}

void build_max_heap(int array[], int n)
{
	for(int i=n/2;i>=1;i--)
		max_heapify(array, i, n);
}

void heap_sort(int array[], int n)
{
	build_max_heap(array, n);

	for(int i=n; i>=2; i--)
	{
		swap(array[i], array[1]);
		max_heapify(array, 1, i-1);
	}
}

int main()
{
	int n;
	cin >> n;

	int *array = new int[n+1];
	for(int i=1;i<=n;i++)
		cin >> array[i];

	heap_sort(array, n);

	for(int i=1;i<=n;i++)
		cout << array[i] << " ";
	cout << endl;

	return 0;
}
