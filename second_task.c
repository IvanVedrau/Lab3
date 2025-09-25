/*Calculate the sum of divisors for a number entered by the user. (e.g. for 6: 1+2+3+6 = 12.) Modify your algorithm to exclude the number itself from the summation. What should be changed in the program?

Perfect number is an integer that equals to this sum (so the sum of divisors, including 1, excluding the number itself). The first perfect number is 6 as 1+2+3=6. 
The next two are 28 and 496. Print out if the number entered by the user is a perfect number or not.

Hint: Sum of divisors implies applying summation: a loop, and summing in the accumulator. In our case not all numbers in the loop qualify for being a divisor. */

#include <stdio.h>
#include <math.h>

int main(){


    int input;

    int sum = 0;

    printf("Input a number\n");
    scanf("%d", &input);

    for (int i = 1; i < input; i++)
    {
        if (input % i == 0)
    {
         sum = sum + i ;
        printf("%d\n", i);
    }
       
    }
        printf("The sum of the number is %d\n", sum);


    if (sum==6 || sum == 28 || sum == 496)
    printf("Your sum is a perfect number\n");
}
