#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{\
	type t = x;\
	x = y;\
	y = t;\
}while(0)
// first line t : the number of test cases ( 1<= t <= 3 * 10000 )
// each test case has four integers a1,a2,a3,a4 ( 1<= ai <= 10000 )

void calc(int *arr);
void bubble_sort(int *arr);

int main(void) {

	int t=1;
	int arr[4]={0,};
	
	for(int i = 0 ; i < t; i++) {
		int temp;
		scanf("%d ", &temp);
		arr[i] = temp;

		calc(arr);
	}

	return 1;
}

	
void calc (int *arr) {

	bubble_sort(arr);

	int v1 = arr[1] - arr[0];
	int v2 = arr[3] - arr[2];

	printf("%d\n",v1*v2);

	return ;
}

void bubble_sort(int * arr) {

	int i, j;

	for( i = 0; i < 3 ; i++) {
		for( j = 3; j > i ; j-- ) {
			if(arr[j] < arr[j-1])
				swap(int, arr[j], arr[j-1]);
		}
	}

	return ;
}
