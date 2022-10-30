#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned long long int N;
    vector<long long> answers;
    cin >> N;
    while (N != 0) {
        unsigned long long int sum = 0;
        for (int i = 0; i <= N; i++) {
            sum += i;
            /*cout << "sum: " << sum << endl;
            cout << "N: " << N << endl;*/
            if (sum + i + 1 > N) {
                answers.push_back(i);
                N -= sum;
                break;
            }
        }
    }
    for (int i = 0; i < answers.size(); i++) {
        cout << answers[i] << endl;
    }
}
