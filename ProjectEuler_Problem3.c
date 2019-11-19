#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
     long long  number;
    printf("Enter a number to know its largest prime factor: ");
    scanf("%lld",&number);
    long long div=2, ans = 0, maxFact;
    while(number!=0){
        if(number % div !=0)
            div = div + 1;
        else{
            maxFact  = number;
            number = number / div;

            if(number == 1){
                printf("%d is the largest prime factor !",maxFact);
                ans = 1;
                break;
            }
        }
    }
    return 0;

}



