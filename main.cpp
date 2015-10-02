#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main()
{
	DynamicArray<int> arr;
	//DynamicArray<int> arr1;
	//for(int i =1; i<=2; i++)
	//	arr -= i;
	
	arr.insertNodeAt(1,2);
	for (int i =1; i<5; i++)
		arr.insertNodeAt(i,i*2);

	/*for(int i =3; i<=4; i++)
		arr1 -= i;
	cout<<arr;
	cout<<arr1;
		
	arr -= arr1;
	cout<<arr;

	if(arr > arr1)
		cout<<"true\n";
	arr1 = arr;
	cout<<arr;
	
	cout<<arr1[2]<<endl;
	cout<<arr1[10]<<endl;
	
	arr.insertNodeAt(2, 9);
	cout<<arr;*/\
	
	cout << arr << endl;
}