#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"The sum of given two numbers is "<<a+b<<endl;
    return 0;
}
int main()
{
    int a,b,c;
    cout<<"Enter the two numbers you want to add"<<endl;
    cin>>a>>b;
    c=sum(a,b);
    return 0;

}