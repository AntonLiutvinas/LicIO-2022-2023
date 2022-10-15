#include <iostream>
 
using namespace std;
 
int main()
{
    float A, B;
    int S;
    cin>>S;
    if (S % 2 == 1){
        A = S/2.0 - 0.5;
        B = S/2.0 + 0.5;
    }
    if (S % 2 == 0){
        A = S/2;
        B = S/2;
    }
    cout<<A<<" "<<B<<endl;
    return 0;
}
