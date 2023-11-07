#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char aux;
    getchar();
    bool blacknw = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            aux = getchar();
            switch (aux)
            {
            case 'C':case 'M':case 'Y':blacknw = false;
            }
            if (j != m - 1)getchar();
        }
        if (i != n - 1)getchar();
    }


    if (blacknw) {
        cout << "#Black&White";
    }
    else {
        cout << "#Color";
    }
    return 0;
}
