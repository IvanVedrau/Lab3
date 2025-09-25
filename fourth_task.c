/*
John Wallis, British mathematician developed the following expression to compute the constant π:

π   2·2   4·4   6·6   8·8
─ = ─── · ─── · ─── · ─── · …
2   1·3   3·5   5·7   7·9

Identify the repeating pattern in the formula, and write a program to evaluate it up to the first n factors (n is obtained from the user). Test the program with n=10, n=100 and n=1000 settings!
*/

#include<stdio.h>

int main(){

    int input;

    float firstPart = 1.0;
    

    printf("Type in any integer number: ");
    scanf("%d", &input);

    for (float i = 2.0; i <= input; i=i+2.0)
    {
        firstPart *=(i*i)/((i-1.0)*(i+1.0));
    }
    
    float secondPart = firstPart*2.0;
    printf("Pi is: %f", secondPart);

return 0;
}
