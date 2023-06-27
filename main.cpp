#include<iostream>
using namespace std;
 
int count = 0;
int fibonacci(int n)
{
    count++;
    int ans = 0;
    if (n == 0 || n == 1) 
    {
        ans = n;
    } 
    else 
    {
        ans = ans + fibonacci(n - 1) + fibonacci(n - 2);
    }
    return ans;
}



int main()
{
    int i;
    cin>>i;

    cout<<"Fibo: "<<fibonacci(i)<<endl;
    cout<<"Count:"<<count<<endl;
}