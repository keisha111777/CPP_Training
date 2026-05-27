#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please enter the number";
    cin>>num;
    
    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact= fact*i;

    }
    cout<<"The factorial is ="<<fact<<endl;
    return 0;

}