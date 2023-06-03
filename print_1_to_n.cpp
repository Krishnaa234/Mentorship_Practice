//print number from 1 to N
#include<iostream>
using namespace std;
int c=1;
void fun(int x) {
    if(c>=(x+1))
        return;
    cout<<c<<endl;
    c++;
    fun(x);
}
int main() {
    int n;
    cout<<"Starting number is: 1"<<endl;
    cout<<"Enter ending number: ";
    cin>>n;
    fun(n);
}