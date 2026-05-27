#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"KYC VERIFICATION\n";
    cout<<"1.Passport\n";
    cout<<"2.AADHAR\n";
    cout<<"3.APAAR\n";
    cout<<"4.Driving_licence\n ";
    cout<<"Enter the choice\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Passport verified! ";
        break;
        case 2:
        cout<<"AADHAR verified! ";
        break;
        case 3:
        cout<<"APAAR verified! ";
        break;
        case 4:
        cout<<"Driving_license verified! ";
        break;
    default:
        cout<<"Invalid choice";
        
    }
    return 0;
}