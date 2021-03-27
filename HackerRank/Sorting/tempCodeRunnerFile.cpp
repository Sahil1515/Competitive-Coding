#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    vector<int> arr(257,0);
    for(int ele:s)
    arr[ele]++;

    sort(arr.begin(),arr.end());

    auto ip=unique(arr.begin(),arr.end());
    int dis= distance(arr.begin(),ip);
    arr.resize(distance(arr.begin(),arr.end()-2));

    if(dis==2)
    return "YES";
    if(dis==3)
    {
        if(arr[2]-arr[1]>1)
        return "NO";
        else if(arr[2]-arr[1]==1)
        {
            cout<<"hey";
             for(auto ele : arr)
                cout<<ele<<" ";
            if(find(ip,arr.end(),arr[1]) !=arr.end() && find(ip,arr.end(),arr[2]) !=arr.end())
            {
                for(auto ele : arr)
                cout<<ele<<" ";
                cout<<arr[1]<<arr[2];
                cout<<"HI";
                return "NO";
            }
            else return "YES";
        }
    }

    cout<<arr.size();

    return "NO";
    
}
  

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";


    return 0;
}
