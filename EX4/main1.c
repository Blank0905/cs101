#include <stdio.h>
int main() {
    int n = 1;
    for (int i = 6; i >= 0; i--) {
        printf("%*s", i, "");
        for(int k = 0 ;k < n;k++) {
            printf("%d ", n);
        }
        n++;
        printf("\n");
    }
  
  return 0;
}
