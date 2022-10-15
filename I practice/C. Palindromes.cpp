#include <iostream>

using namespace std;

int main()
{
    string word, reversed_word;
    cin>>word;
    for (int i = word.length() - 1; i != -1; i--){
        reversed_word += word[i];
    }
    if (word == reversed_word) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
