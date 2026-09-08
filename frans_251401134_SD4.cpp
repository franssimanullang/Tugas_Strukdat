#include <iostream>
using namespace std;

int main(){
    int kelipatan2 = 2;
    int nilai[3][3][4] = {};
        for(int i=0; i<3; i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<4;k++){
                    nilai[i][j][k]=kelipatan2;
                    cout<<nilai[i][j][k]<<" ";
                    kelipatan2 += 2;
                }
                cout<<endl;
            }
            cout<<endl;
        }

}