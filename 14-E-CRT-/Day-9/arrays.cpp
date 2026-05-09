#include <iostream>
using namespace std;

int main(){
    int even[5]={0,0,0,0,1}; //declaration+initialize
   

    int odd[5];
    
    for(int i=0; i<5; i++){
        cin>>odd[i];            //input
    }

    for(int i=0; i<5; i++){
        
        cout<<odd[i]<<endl;
    }


    return 0;
}