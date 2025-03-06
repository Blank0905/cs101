#include<stdio.h> 

int main(){
	char a[] = "10001111";
	int number , length , length2 ;
	int L = 0;
	length = sizeof(a)-1;
	if(length%4==0) {
		length2 = length/4;
	} 
	else {
		length2 = (length/4)+1;
	}

	int sixteen [length2];

	for (int i = 0 ; i<length ; i+=4) {
		int k = 8;
		for (int j = 0; j<4 ; j++){
			while(1 & a [i+j]) {
				number = number + k;
				break;
			}
			k /= 2;
		}
		sixteen[L] = number;
		L += 1;
		k = 8;
		number = 0;
	}

	for (int i = 0 ; i<length2 ; i++){
		printf("%hx" , sixteen[i]);
	}
	return 0 ;
}
