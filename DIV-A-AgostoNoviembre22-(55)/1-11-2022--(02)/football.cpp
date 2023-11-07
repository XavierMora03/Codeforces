#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    getchar();
    string aux, f, l;
    int contf = 1, contl = 0;
    getline(cin, f);
    bool gotten = false;
    for (int i = 1; i < n; i++)
    {
        getline(cin, aux);
        if (aux == f) {
            contf++;
        }
        else {
            contl++;
            if (!gotten) {
                l = aux;
                gotten = true;
            }
        }
    }

    if (contl > contf) {
        cout << l;
    }
    else {
        cout << f;
    }
    return 0;
}
