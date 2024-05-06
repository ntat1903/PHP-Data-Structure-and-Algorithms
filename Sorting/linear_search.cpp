#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool ls(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
            return true;
    }
    return false;
}

int main(){
    int n, x; cin >> n >>x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(ls(a, n, x))
        cout << "Found!\n";
    else
        cout << "Not found !\n";
    return 0;
}

