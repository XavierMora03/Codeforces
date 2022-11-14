#include<iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    scanf("%d", &n);
    getchar();
    unsigned long a[n], min, max;
    scanf("%lu", &a[0]);
    min = (max = a[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%lu", &a[i]);
        if (a[i] > max) {
            max = a[i];
        }
        else if (a[i] < min) {
            min = a[i];
        }
    }
    getchar();
    int cont = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > min and a[i] < max)cont++;

    printf("%d", cont);


    return 0;
}
