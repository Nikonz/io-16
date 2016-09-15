#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

const int N = 1e6 + 5;

char ss[N], *s;
int cnt = 0;
int b[11];

int main()
{
    /// װאיכû!!!
    int n, k;
    cin >> k;
    s = ss + 1;
    gets(s);
    gets(s);
    n = strlen(ss);
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (!b[i])
            cnt++;
        b[i]++;
        if (cnt > k) {
            pos = i;
            break;
        }
    }
    //s[-1] = '0';
    if (pos == -1) {
        puts(s);
        return 0;
    }

    return 0;
}
