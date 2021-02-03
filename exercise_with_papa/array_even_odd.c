#include <stdio.h>
void main()
{
    int tmp[] = {7, 54, 21, 79, 102, 34, 22, 60, 94, 34};

   for(int i = 0;i < 10;i++){
    if(tmp[i]%2 == 0){
        printf("Even numbers: %d\n", tmp[i]);
    }
    printf("Odd Numbers: %d\n", tmp[i]);
   }
}
