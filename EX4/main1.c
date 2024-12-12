#include <stdio.h>
int main() {
    int n = 1;
    for (int i = 0; i <= 6; i++) {
        for (int j = 6; j >= 1; j--) {
            if (j >= n ) {
                printf(" ");
            }  
        }  
        printf("%d", n);
        n++;
        printf("\n");
    }
  
  return 0;
}
