#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int s;
    cin>>s;
    int a[s][s];
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    if(s == 1){
        cout<<a[0][0];
    }else{
        cout<<a[0][0] + a[0][s-1]+
              a[s-1][0] + a[s-1][s-1];
    }
    
    return 0;
}
