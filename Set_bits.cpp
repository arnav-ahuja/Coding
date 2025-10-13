#include<iostream>
using namespace std;

int bit_calculator(int n)
{
    int count=0;
    while (n!=0)
    {           
            if ((n&1)==1)
            {
                count+=1;
            }
                n=n>>1;       
    }
    return count;
}
int main()
{
    cout<<"So I am here to calculate set bits , So Less Go"<<endl;
    int number;
    cout<<"Enter your number:->";
    cin>>number;
    cout<<bit_calculator(number)<<endl;
}