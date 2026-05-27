#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num>0){
        
    if(num%2==0)
        {
            cout<<"Its positive and even";
        }
    else
    {
        cout<<"It is positive and odd";
    }
}
else
{
    cout<<"It is a negative number";

}
return 0;
}