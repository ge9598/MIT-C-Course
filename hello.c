#include <stdio.h>


void printSum(int arg1, int arg2){
    int sum = arg1 + arg2;
    printf("the sum is %d \n", sum);

}

int main()
{
    printSum(9, 1);
    return 0;
}