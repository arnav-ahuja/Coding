#include<iostream>
using namespace std;

/*
int search(int arr[] , int size , int key){
    bool value=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            value=1;
            break;
        }
    }
    return value;
    
}
*/
//Can use both
bool search(int arr, int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }   
    }
    return 0;
}

int main(){
    int arr[10]={2,-11,3,5,7,0,4,-3,8,6};
    cout<<"Enter the key wanna check it's present or not -> ";
    int key;
    cin>>key;
    bool found= search( arr , 10 , key);
    if (found)
    {
        cout<<"Key is present in this";
    }
    else
    {
        cout<<"Key is absent in this";
    }
}