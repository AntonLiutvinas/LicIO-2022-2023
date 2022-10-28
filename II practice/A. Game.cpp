#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int test_n;
    cin >> test_n;
    vector<int> levelsn_global;
    vector<int> levels_global;
    vector<int> sums;
    for (int i = 0; i < test_n; i++) {
        int leveln;
        cin >> leveln;
        levelsn_global.push_back(leveln);
        for (int a = 0; a < levelsn_global[i]; a++) {
            int level;
            cin >> level;
            levels_global.push_back(level);
        }
        int a = 0, b = levels_global.size() - 1, sum = 0;
        while (a < levels_global.size()) {
            if (levels_global[a] == 1) {
                sum += 1;
                if (a == b - 1) {
                    sum = 0;
                }
            }
            else {
                break;
            }
            a++;
        }
        while (b >= 0) {
            if (levels_global[b] == 1) {
                sum += 1;
            }
            else {
                break;
            }
            b--;
        }
        sums.push_back(levels_global.size() - sum + 1);
        levels_global.clear();
    }
    for (int i = 0; i < sums.size(); i++) {
        cout << sums[i] << endl;
    }
}
