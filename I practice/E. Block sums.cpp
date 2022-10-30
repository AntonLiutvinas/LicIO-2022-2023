#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<long long> numbers;
    vector<long long> answers;
    unsigned long long int sum = 0;
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        numbers.push_back(num);
        sum += num;
    }
    for (int i = 0; i < Q; i++) {
        unsigned long long int sumq = sum;
        unsigned long long int sumq2 = 0;
        int quest1, quest2;
        cin >> quest1 >> quest2;
        if ((quest2 - quest1) > (5 * pow(10, 4))) {
            for (int i = 1; i < quest1; i++) {
                sumq -= numbers[i - 1];
            }
            for (int i = quest2 + 1; i < N + 1; i++) {
                sumq -= numbers[i - 1];
            }
            answers.push_back(sumq);
        }
        else {
            for (int i = quest1 - 1; i <= quest2 - 1; i++) {
                sumq2 += numbers[i];
            }
            answers.push_back(sumq2);
        }
    }
    for (int i = 0; i < Q; i++) {
        cout << answers[i] << endl;
    }
}
