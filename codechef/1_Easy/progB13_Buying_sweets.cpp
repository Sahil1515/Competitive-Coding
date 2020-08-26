#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// your code goes here
	
	int t,noOfNotes,sweetPrice;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d%d",&noOfNotes,&sweetPrice);
	    int noteArray[noOfNotes];
	    
	    for(int i=0;i<noOfNotes;i++)
	    scanf("%d",&noteArray[i]);
	    
	    sort(noteArray,noteArray+noOfNotes);
	    
	    int sum=0;
	    
	    for(int i=0;i<noOfNotes;i++)
	    sum=sum+noteArray[i];
	    
	        if(sum/sweetPrice==(sum-noteArray[0])/sweetPrice)
	        {
	            printf("-1\n");
	        }
	        else printf("%d\n",sum/sweetPrice);
	        
	    
	    t--;
	}
	return 0;
}



// Input:
// 3
// 4 7
// 10 4 8 5
// 1 10
// 12
// 2 10
// 20 50

// Output:
// -1
// 1
// 7