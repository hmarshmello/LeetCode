
/*Input: strs = ["flower","flow","flight"]
Output: "fl"*/

#include<iostream>
using namespace std;

int main()
{
    string a[3]= {"flower","flow", "flight"};
    string prefix = "";
    prefix = a[0];

    for(int i = 1;i<3;i++){
        if(prefix.size()){
            for(int j = 0;j<prefix.size();j++){
                if(prefix[j] != a[i][j]){
                    prefix = prefix.substr(0,j);
                    break;
                }
            }
        }
        else cout << "";
    }
    cout << prefix;
    return 0;
}