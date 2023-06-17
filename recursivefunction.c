#include <stdio.h>

int factorial(int number){
    if(number == 1 || number == 0){
        return 1;
    } else{
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Factorial Number: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}

/*
 * recursive function or recursion is a process when a function calls a copy of itself to work on a smaller problem.
 * Any function which calls itself is called recursive function.
 * Any problem that can be solved recursively, can also be solved iteratively.
 *  n! = n *(n-1)!
 * 0! = 1
 * 1! = 1
 * 2! = 2 * 1
 * 3! = 3 * 2 *1 // HERE IS THE RECURSIVE CASE IS : 3*2
 * 4! = 4 * 3 * 2 * 1 // HERE IS THE BASECASE IS : 1 [BASECASE Baade ja thake tay recursive case]
 */