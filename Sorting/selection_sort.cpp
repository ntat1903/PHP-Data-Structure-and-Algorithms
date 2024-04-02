#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n){
    for(int i = 0;i < n - 1; i++){
        int minpos = 1;
        for(int j = i + 1; j < n;j++){
            if(a[j] < [minpos]){
                minpos = j;
            }
        }
        swap(a[i], a[minpos]);
    }
}

int main(){
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    selectionSort(a, n);
    for(int i = 0; i < n, i++){
        cout << a[i] << " ";
    }
    return 0;
}
