#include <stdio.h>

void swap(int a,int b){
   int n=a;
   int* temp=&b;
   int* temp2=&n;
   a=*temp;
   b=*temp2;
   printf("\n%d ",a);
   printf("%d ",b);

}
int main() {

   int a;
   int b;
   printf("Values:");
   scanf("%d %d",&a,&b);
   printf("%d %d ",a,b);
   swap(a,b);
}
