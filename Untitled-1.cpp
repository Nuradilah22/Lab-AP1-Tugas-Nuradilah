//nomor 1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void hapusduplikat(vector<int>& vec){

    //menghapus nilai duplikat vector
    auto last = unique(vec.begin(),vec.end());
    vec.erase(last,vec.end());
}

int main(){
    vector<int> vec = {1,2,2,3,4,5,5};
    cout << "vector dengan nilai duplikat : ";
    for (auto x : vec){
        cout<<x<< " ";
    }
    cout << endl;

    hapusduplikat(vec);
    cout << "setelah menghapus nilai duplikat : ";
    for (auto x : vec){
        cout<<x<< " ";
    }
    cout << endl;

    return 0;
}