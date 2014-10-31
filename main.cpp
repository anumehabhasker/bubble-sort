#include <iostream>
#include <algorithm>
using namespace std;

// Start at beginning of the array and swap the first two elements if the first is bigger than the second. Go to the next pair, etc, 
//continuously making sweeps until array is sorted.

int main()
{
	int arr[]={5,4,6,9,2,1,4};
	int size=7;
	//print original array
	cout<<"\n original array \n";
	for(int i=0; i<size;i++)
	{
		cout<<" "<<arr[i]<<"\t";

	}

	//bubble sort
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
	//print new array
	cout<<"\n bubble sorted array \n";
	for(int i=0; i<size;i++)
	{
		cout<<" "<<arr[i]<<"\t";

	}

	return 0;
}
