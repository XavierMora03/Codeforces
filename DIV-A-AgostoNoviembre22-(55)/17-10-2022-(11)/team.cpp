#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int a,b,c;
    int cont= 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>= 2)cont++;
    }
   cout<<cont; 

    return 0;
}