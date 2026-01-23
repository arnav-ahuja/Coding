#include<iostream>
using namespace std;

int main(){
    int ith;
    int jth;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int num;
            cin>>num;
            if(num==1){
                ith=i;
                jth=j;
                break;
            }
        }
    }
    cout<< abs(ith - 3) + abs(jth - 3) ;
}