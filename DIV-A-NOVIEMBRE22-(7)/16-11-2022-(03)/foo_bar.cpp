#include<bits/stdc++.h>

using namespace std;
using ll = long double;
struct bar{
    ll start[2];
    ll end[2];
};
ll distance(ll (&a)[2], ll (&b)[2]){
    return sqrt(    (  pow((a[0]-b[0]),2)+ pow((a[1]-b[1]),2)  )   );
}
int main() {

    bar a,b;
    cin>>a.start[0]>>a.start[1]>>a.end[0]>>a.end[1];
    cin>>b.start[0]>>b.start[1]>>b.end[0]>>b.end[1];

    ll max_distance = distance(a.start,b.start);
    ll sum_of_bars = distance(a.start,a.end)+distance(b.start,b.end);

    if(max_distance<sum_of_bars){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
