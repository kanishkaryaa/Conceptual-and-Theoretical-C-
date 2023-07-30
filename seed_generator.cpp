#include<iostream>
using namespace std;

int main(){
    srand(2);
    for (int i=0;i<3;i++){
        int x = rand()%11;
        cout<<x<<endl;
    }
}