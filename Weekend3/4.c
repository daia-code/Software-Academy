#include <stdio.h>

int main() {

int source[5]={1,2,3,4,5};
int destination[5];
    for (int i = 0; i < 5; i++) {
      //destination[i]= *(source+i);
       *(destination+i) = *(source+i);
    }

    for(int i=0;i<5;i++){
        printf("%d",destination[i]);
    }

}
