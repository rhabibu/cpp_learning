/*A B C
  D E F
  G H I */
#include <iostream>
using namespace std;
int main(){
    for(char start = 'a'; start <= 'i'; ++start){
        for(int row=1; row<=3; row++){
            for(int colume=1; colume<=3; colume++){
                cout<<start<<" ";
                start=start+1;   
            }cout<<endl;
        }
    }
    return 0;
}