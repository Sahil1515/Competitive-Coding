    #include<iostream>
    using namespace std;

    int catalan_polygon(int n)

    {

        //we are given a convex polygon of n sides
        //we have to find out in how many ways a plane convex polygon of n sides can be divided into triangles by diagonals
        //result will be equal to (n-2)th catalan number ie, c[n-2]

        int c[n-1];

        c[0]=1;
        c[1]=1;
        c[2]=2;

        for(int i=3;i<=(n-2);i++)
        {
            c[i]=0;
            for(int j=0;j<i;j++)
            {
                c[i]+=c[j] * c[(i-1)-j];
            }
        }

        return c[n-2];
    }

    int main()
    {

        int n;
        cin>>n;

        cout<<"Total number of ways in which a convex polygon of "<<n<<" sides can be divided into triangles by diagonals is "<<endl; 

        cout<<catalan_polygon(n);
        cout<<endl;
        return 0;

    }