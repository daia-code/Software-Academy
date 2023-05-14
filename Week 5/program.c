#include <stdio.h>
#include <stdlib.h>
#DEFINE SNA_VALUE = 255
#DEFINE Can_OUTOFRANGEHIGH = 200
#DEFINE Can_OUTOFRANGELOW = 100

int main(){
int Processed_value;
 scanf("%d",&Processed_value);
  if(Processed_value == SNA_VALUE){
    printf("%d", SNA_VALUE);
  }else
    if(Processed_value<Can_OUTOFRANGEHIGH ){
        printf("%d", Can_OUTOFRANGEHIGH);
    }else
      if(Processed_value< Can_OUTOFRANGELOW){
           printf("%d", Can_OUTOFRANGELOW);
      }else{
         printf("%d",Processed_value);
      }
return 0;
}
