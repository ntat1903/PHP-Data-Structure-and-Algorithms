#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
    for(int i = 0;i < n - 1; i++){
        for(int j = 0; j < n - i - 1;j++){
            if(a[j] > a[j + 1]){
                swap(a[i], a[j + 1]);
            }
        }
    }
}

int main(){
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubbleSort(a, n);
    for(int i = 0; i < n, i++){
        cout << a[i] << " ";
    }
    return 0;
}
