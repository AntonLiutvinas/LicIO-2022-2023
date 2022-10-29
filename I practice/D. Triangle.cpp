#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;
    unsigned long long int answer = n * ((n + 1) / 2.0);
    cout << answer;
}
