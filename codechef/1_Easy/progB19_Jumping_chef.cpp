#include <stdio.h>

int main(void) {
	// your code goes here
	long long int a;
	scanf("%lld", &a);
	int flag=0;  
	
    switch(a)
    {
        case 0: flag=1;
        break;
        case 1: flag=1;
        break;
        case 2: flag=0;
        break;
        case 3: flag=1;
        break;
        case 4: flag=0;
        break;
        case 5: flag=0;
        break;
        case 6: flag=1;
        break;
        default : if(a%6==0 || a%6==1 || a%6==3)
                  flag=1;
                  else if(a%6==2 || a%6==4 || a%6==5)
                  flag=0;
        
    }
	if(flag==1)
	printf("yes\n");
	else 
	printf("no\n"); 
	return 0;
}

