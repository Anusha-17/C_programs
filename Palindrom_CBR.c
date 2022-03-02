#include<stdio.h>
void check(int n, int *p) 
{
    int r, rev = 0;
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    *p = rev;
}

int main()
 {
    int n, p = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    check(n, &p);
    if (p == n)
	 {
        printf("Number is palindrome:%d", n);
    } else {
        printf("Number is not palindrome:%d", n);
    }

    return 0;
}
