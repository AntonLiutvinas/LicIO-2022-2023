#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    long long S[N] = {0};
    long long ans[Q];
    for (int i = 1; i <= N; i++)
    {
        long long a;
        cin >> a;
        S[i] = a + S[i-1];
    }
    for (int i = 0; i < Q; i++)
    {
        int o, j;
        cin >> o >> j;
        ans[i] = S[j] - S[o-1];
    }
    for (int i = 0; i < Q; i++) {
        cout << ans[i] << endl;
    }
}
