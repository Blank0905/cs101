#include <stdio.h>

int main() {
    char a[] = "A2B3C4d3";
	int length = sizeof(a)-1;
	for(int i = 0 ; i<length -1 ;i+=2){
		for(int j = 0 ; j< a[i+1]-48 ;j++ ) {
			printf ("%c" , a[i]);
		}
	}

    return 0;
}
