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
    int a,b;
    cout<<"Enter 1st number:->";
    cin>>a;
    cout<<"Enter 2nd number:->";
    cin>>b;
    cout<<bit_calculator(a)+bit_calculator(b)<<endl;
}