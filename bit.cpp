#include <iostream>
#include <string>
using namespace std;

int main(){
    int c;
    string n;
    int x=0;
    cin>>c>>n;
    while (c--){
        if(n=="++X"){
            ++x;
        }else if(n=="X++"){
            x++;
        }else if(n=="--X"){
            --x;
        }else if(n=="X--"){
            x--;
        }   
    }
    cout<<c;
}