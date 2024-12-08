#include <stdio.h>
int main() {
    int h = 1;
    for(int i = 7 ; i >= 1 ; i--) {
        printf("%*s",i-1,"");
        for(int j = 1 ; j <= h ; j++) {
    	    printf("%d ",h);
	}
        printf("\n");
        h++;
    }
    return 0;
}
