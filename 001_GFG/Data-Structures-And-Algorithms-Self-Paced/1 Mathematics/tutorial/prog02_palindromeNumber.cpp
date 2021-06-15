#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(long long int n)
{
    long long int rev=0,temp=n;

    while(n)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }

    if(rev==temp)
    return 1;

    return 0;
}

int main()
{
    printf("Enter the number \n");
    long long int n;
    scanf("%lld",&n);

    if(checkPalindrome(n))
    printf("Number is Palindrome\n");
    else printf("Number is not Palindrome\n");


    return 0;

}