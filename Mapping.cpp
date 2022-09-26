#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    map<string,map<string,int>> mp;
    mp["Rohan"]["Age"] = 20;
    mp["Rohan"]["Weight"] = 67;
    mp["Rohan"]["Height"] = 164;
    mp["Wohan"]["Age"] = 20;
    mp["Wohan"]["Weight"] = 67;
    mp["Wohan"]["Height"] = 164;
    
    cout << "Name\t\t" << "Categories\t" << "Numeric"<<endl; 
    map<string,map<string,int>> :: iterator itr;
    map<string,int> :: iterator ptr;
    for(itr=mp.begin();itr!=mp.end();itr++){
        cout << endl;
        for(ptr = itr->second.begin();ptr!=itr -> second.end();ptr++){
            cout << (*itr).first << "\t\t" << (*ptr).first << "\t\t" << (*ptr).second <<"\n";
        }
    }

    cout << endl;

    cout << "Name\t\t" <<"Age"<<endl;
    unordered_map<string,int> mp1; //Last read to first read
    mp1["Aohan"] = 20;
    mp1["Wdarsh"] = 19;
    mp1["Rdarsh"] = 112;

    for(auto i=mp1.begin();i!=mp1.end();i++){
        cout << i->first << " \t\t" << i->second << "\n";//<< (*iter).third <<"\n";
    }

    return 0;
}

