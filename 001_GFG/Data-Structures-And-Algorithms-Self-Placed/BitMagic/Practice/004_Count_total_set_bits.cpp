




// Not acceptable

// class Solution{
//     public:
//     // n: input to count the number of set bits
//     //Function to return sum of count of set bits in the integers from 1 to n.
//     int countSetBitsUtil(int n)
//     {
//         int counter=0;
        
//         while(n){
//             int mask=n&(-n);
//             n=n-mask;
//             counter++;
//         }
//         return counter;
//     }
//     int afterPowerValue(int val, int n)
//     {
//         int counter=0;
        
//         for(int i=val;i<=n;i++)
//         counter=counter+countSetBitsUtil(i);
        
//         // cout<<counter<< "\n";
//         return counter;
//     }
//     int countSetBits(int n)
//     {
//         // Your logic here
        
//         int a=1;
//         int power=0;
//         while(a<=n)
//         {
//             power++;
//             a=a<<1;
//         }
//         power--;
//         // cout<<power<<" ";
//         int val= pow(2,power);
        
//         int result= (val/2) * power+ afterPowerValue(val,n); 
//     }
// };
