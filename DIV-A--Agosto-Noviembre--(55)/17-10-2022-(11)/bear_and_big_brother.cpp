#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double a ,b;
    cin>>a>>b;
    int cont= 0;

    while(a<=b){
        cont++;
        a *= 3;
        b *= 2;
    }

    cout<<cont;

    return 0;
}
