#include<stdio.h>
int fact(int n);
int main()
 {
    int n;
    printf("Enter A Number To Find Factorial: ");
    scanf("%d",&n);
    printf("The Factorial of %d = % ld", n, fact(n));
    return 0;
}

int fact(int n)
 {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
