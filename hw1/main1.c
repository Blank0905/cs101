#include <stdio.h>

int main() {
    char a[] = "AABBBCCCCddd";
    int length = sizeof(a)-1;
    int count = 1;
    for(int i = 0 ; i<length ; i++){
    	if(a[i] == a[i+1]) {
    		count ++;
		}
		else {
			printf("%c%d" , a[i] , count);
			count = 1;
		}
	}

    return 0;
}
