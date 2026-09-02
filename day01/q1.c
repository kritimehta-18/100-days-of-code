/*
name: kriti mehta
sap id:590039286
day:01 question:1
date:13-08-2026

PROBLEM STATEMENT:Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
*/
include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a , &b);
    printf("Sum = %d", a + b);
    return 0;
}
gcc q1.c -o q1

