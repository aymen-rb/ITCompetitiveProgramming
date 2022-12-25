#include <stdbool.h>
#include <stdio.h>

int main() {
  int a[] = {0, 2, 4, 6, 8};
  int b[] = {1, 3, 5, 7};
  int a_size = sizeof(a) / sizeof(a[0]);
  int b_size = sizeof(b) / sizeof(b[0]);
  int i ;
  int j ;
  int x;
  
 for(i=0;i<=a_size-1;i++){
    for(j=0;j<=b_size-1;j++){
        if (a[i]>b[j]) {
        x=a[i];
        a[i]=b[j] ;
        b[j]=x;

        }
 }}

   int key;
    for (i = 1; i < b_size; i++) {
        key = b[i];
        j = i - 1;


        while (j >= 0 && b[j] > key) {
        b[j + 1] = b[j];
            j = j - 1;
        }
        b[j + 1] = key;
        
    }

 for (int k = 0; k<=a_size-1;k++) {
        printf("%d",a[k]);
    }
    printf("\n");

 for (int k = 0; k<=b_size-1;k++) {
        printf("%d\n",b[k]);
    }
    
  return 0;
}
