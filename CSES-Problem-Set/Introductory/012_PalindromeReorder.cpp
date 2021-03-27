#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int arr[256]={0};

    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i]]++;
    }

    int c_odd = 0;
    for (int i = 0; i < 256; i++)
    {
        if (arr[i] % 2 == 1)
            c_odd++;
    }
    if (c_odd > 1)
    {
        printf("NO SOLUTION\n");
        return 0;
    }

    string str1 ="", str2 = "";
    string odd_str ="";
    for (int i = 0; i < 256; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] % 2 == 0)
                for (int j = 0; j < arr[i]/2; j++)
                {
                    str1 += i;
                }
            else
            {
                for (int j = 0; j < arr[i]; j++)
                {
                   odd_str += i;
                }
            }
        }
    }
    str2=str1;
    reverse(str2.begin(),str2.end());
    string final_str= str1+ odd_str + str2;
    cout<<final_str;

    return 0;
}






