#include <iostream>

void bubble(int *arr);
void calc(int *arr);

int main(void) {

	int t;
	int arr[4] ={0,};

	std::cin >> t;

	for(int i=0; i < t; i++) {
		for(int j=0; j < 4; j++) {
			std::cin >> arr[j];
		}
		
		calc(arr);
	}
	
	return 0;
}


void calc(int *arr) {

	bubble(arr);

	int result = arr[0] *arr[2] ;

	std::cout << result << std::endl;

	return ;
}

void bubble(int * arr) {

	int i,j;

	for( i=0 ; i < 3; i++ ) {
		for( j = 3 ; j > i ; j-- ) {
			if(arr[j] < arr[j-1] ) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return ;
}
