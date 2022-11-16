#include<bits/stdc++.h>

using namespace std;
using ll =  long;

int sumOfSquareDigits(int n,int r){
    if( r == 0 || n==1)
        return n;
    int sumSq = 0;
    int digit;
    while(n > 0){
        digit = n%10;
        sumSq += digit*digit;
        n /=10;
    }
    return sumOfSquareDigits(sumSq,r-1);
}
int main() {
    int n;
    cin>>n;
    int cont =0;
    for (int i = 1; i <= n; i++)
    {
        if(sumOfSquareDigits(i,8) == 1)
        cont++;
    }
    
    cout<<cont;
    return 0;
}
