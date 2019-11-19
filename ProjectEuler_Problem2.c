
#include <stdio.h>
#include <stdlib.h>

int main(){
int avg;
int counter;
int total;
int valuex = 1;
int valuey;


do{
    if(total%2 == 0)
    {
    counter = counter + total;
    }
    total = valuex + valuey;
    valuex = valuey;
    valuey = total;

}while(total<4000000);

printf("the total value is %d", counter);
}


