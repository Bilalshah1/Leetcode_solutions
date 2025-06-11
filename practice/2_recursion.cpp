#include <iostream>
using namespace std;

void func(int n, int i)
{
    if (i>n)
        return ;
    else
    {
        cout <<i<<endl;
        return func(n, i+1);
    }
}

int main()
{
    int n;
    cin >> n;
    func(n,1);
    return 0;
}