#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int testn;
    cin >> testn;
    vector<int> coordinates1;
    vector<int> coordinates2;
    for (int i = 0; i < testn; i++) {
        vector<int> coor1;
        vector<int> coor2;
        for (int a = 0; a < 8; a++) {
            string input;
            cin >> input;
            for (int u = 0; u < 8; u++) {
                if ((int) input[u] == 35) {
                    coor1.push_back(a + 1);
                    coor2.push_back(u + 1);
                }
            }
        }
        for (int j = 2; j < coor1.size() - 2; j++) {
            if (coor1[j] + 1 == coor1[j + 1] && coor1[j] - 1 == coor1[j - 1] && coor1[j] + 1 == coor1[j + 2] && coor1[j] - 1 == coor1[j - 2]) {
                for (int y = 1; y < coor2.size() - 1; y++) {
                    if (coor2[y] - 1 == coor2[y + 1] && coor2[y] + 1 == coor2[y - 1] && y == j) {
                        coordinates1.push_back(coor1[j]);
                        coordinates2.push_back(coor2[y]);
                    }
                }
            }
        }
    }
    for (int i = 0; i < coordinates1.size(); i++) {
        cout << coordinates1[i] << " " << coordinates2[i] << endl;
    }
}
