#include<stdio.h> 

int main(){
	char arr[] = "Hello";
	int length = sizeof(arr);
	for(int i = length-2 ; i >= 0 ; i-- ) {
		printf("%c" , arr[i]);
	}
	return 0;
}
