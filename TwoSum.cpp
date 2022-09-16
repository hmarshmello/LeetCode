#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int m(){
    int nums; 
    cout << "No. Of Elements in the Array(>=2): ";
    cin >> nums;
    int a[nums];
    
    cout << "Elements of the Array: ";
    for(int i = 0; i<nums;i++) cin >> a[i];
    
    cout << "Target Sum: ";
    int target; cin >> target;
    
    vector<int> result;
    for(int i = 0;i<nums;i++){
        for(int j = i+1;j<nums;j++){
            if(a[i] + a[j] == target){result.push_back(i); result.push_back(j);}
        }
    }
    for(int i=0; i<result.size(); i++) cout << result.at(i) << ' ';
}

int main(){
    /*int t = 5;
    rep:
        int n; 
        cout << "No. Of Elements in the Array(>=2): ";
        cin >> n;
        int a[n];
        cout << "Elements of the Array: ";
        for(int i = 0; i<n;i++) cin >> a[i];
        cout << "Target Sum: ";
        int target,flag = 0; cin >> target;

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(a[i] + a[j] == target) {
                    cout << "Found the match at: [" << i << "," << j << "]" << endl;
                    flag = 1;
                }
            }
                if(flag != 1) {cout << "Target is Invalid\n"; break;}
        }
    while(t--) {cout << "Rem: " << t << endl; goto rep;}*/
    m();
    return 0;
}


