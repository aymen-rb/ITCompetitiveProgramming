#include <stdio.h>

int ls(int arr[],int key) {
    int found = 0;
    int arrsize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i<arrsize; i++) {
        if (arr[i] == key) {

        found = 1;
        return i;break;
        }
    }if (found == 0) {
    return -1;
    }

}

int main(){

    int arr[]={1,2,3,4,5};

    printf("%d",ls(arr,0));


}
//this is an abslolute programing horror 