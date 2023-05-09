//nomor 3
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void move_zero(vector<int>& vec){
    int x = vec.size();
    int y = 0;

    for (int i=0; i<x; i++){
        if (vec[i] !=0){
            swap(vec[i],vec[y]);
            y++;
        }
    }

    while (y<x){
        vec[y] = 0;
        y++;
    }
}
int main(){
    vector<int> vec = {1,2,3,0,4,5,0,0};
    cout << "input : ";
     for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
     }

     cout<<endl;

    //mengurutkan dari angka yang terkecil
     move_zero(vec);
      sort(vec.begin(), vec.end());
    cout << "output: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
    



