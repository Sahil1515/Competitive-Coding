#include <bits/stdc++.h>

using namespace std;


// Complete the isValid function below.
string isValid(string s) {

    if(s.size()==1)
    return "YES";
    vector<int> arr(256,0);
    for(int ele:s)
    arr[ele]++;

    vector<int> arr2;

    for(auto ele: arr)
    if(ele!=0)
    arr2.push_back(ele);

    sort(arr2.begin(),arr2.end());

    if(arr2.size()>1)
    {
        if(arr2[0]==arr2[arr2.size()-1])
        return "YES";

        if(arr2[0]==1 && arr2[1]==arr2[arr2.size()-1])
        return "YES";

        if(abs(arr2[0]-arr2[arr2.size()-1])==1 && abs(arr2[arr2.size()-2]-arr2[arr2.size()-1])==1)
        {
            return "YES";
        }

    }

    return "NO"; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


