#include <bits/stdc++.h>
using namespace std;

 void fungsi(int *a) {
        *a = 1;
        cout << *a << endl;
    }

int main(){
        int a = 0;
        fungsi(&a);
    return 0; }
    