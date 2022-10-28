#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> laikas1;
    vector<int> laikas2;
    vector<int> resultatai;
    int arr[1440];
    for (int i = 0; i < n; i++) {
        int h1, min1, h2, min2;
        cin >> h1 >> min1 >> h2 >> min2;
        if (h1 * 60 + min1 > h2 * 60 + min2) {
            laikas1.push_back(h1 * 60 + min1);
            laikas2.push_back(h2 * 60 + min2);
        }
        else {
            laikas1.push_back(h1 * 60 + min1);
            laikas2.push_back(h2 * 60 + min2);
        }
    }
    //for (int i = 0; i < laikas1.size(); i++) {
    //    cout << laikas1[i] << " " << laikas2[i] << endl;
    //}//
    for (int i = 0; i < 1440; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < laikas1.size(); i++) {
        if (laikas1[i] > laikas2[i]) {
            for (int a = laikas1[i]; a < 1440; a++) {
                arr[a] += 1;
            }
            for (int a = 0; a <= laikas2[i]; a++) {
                arr[a] += 1;
            }
        }
        else {
            for (int a = laikas1[i]; a <= laikas2[i]; a++) {
                arr[a] += 1;
            }
        }
    }
    int counter = 0;
    //for (int i = 0; i < 1440; i++) {
    //    cout << i << " " << arr[i] << endl;
    //}//
    for (int i = 0; i < 1440; i++) {
        if (arr[i] == n) {
            counter++;
            resultatai.push_back(i);
        }
    }
    if (counter == 0 or counter == 1) {
        cout << "NE";
    }
    else {
        int pirmas_laikas = resultatai[0];
        int antras_laikas = resultatai[resultatai.size() - 1];
        for (int i = 0; i < resultatai.size() - 1; i++) {
            if (resultatai[i] + 1 != resultatai[i + 1]) {
                pirmas_laikas = resultatai[i + 1];
                antras_laikas = resultatai[i];
            }
        }
        //for (int i = 0; i < resultatai.size(); i++) {
        //    cout << resultatai[i] << endl;
        //}//
        cout << "TAIP" << endl;
        cout << pirmas_laikas / 60 << " ";
        cout << pirmas_laikas % 60 << " ";
        cout << (antras_laikas % 1440) / 60 << " ";
        cout << (antras_laikas % 1440) % 60 << " ";
    }
    return 0;
}
