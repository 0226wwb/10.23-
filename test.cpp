//通过指针求数组的下标数
#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];
	for (i = 0; i < 5; i++)
	{
		printf(" %d ",*p);
		p-=2;

	}

	return 0;
}