#include<iostream>
using namespace std;

int main(){
    int m,n,d,r,a,tm,t;
    cout<<"Enter the movie name:"<<endl;
    cin>>m;
    cout<<"Enter the amount of one ticket:";
    cin>>a;
    cout<<"Enter number of tickets sold:"<<endl;
    cin>>n;
    cout<<"Enter total amount";
    cin>>t;
    cout<<"Enter the amount which donated:"<<endl;
    cin>>d;
    cout<<"Remaining amount:"<<endl;
    cin>>r;
    cout<<"Movie Name:.............................$%d"<<m<<endl;
    cout<<"Number of Tickets sold:...................$%d"<<n<<endl;
    cout<<"Amount Donated.............................$%d"<<d<<endl;
    cout<<"Remaining amount...........................$%d"<<t-d<<endl;
     return 0;
}