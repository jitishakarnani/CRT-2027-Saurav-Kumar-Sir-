#include <iostream>
using namespace std;

class area {
    private:
    int len;
    int width;

    public:
    area(int l, int w){
        len = l;
        width = w;
    }
    friend void showArea(area a);

}; 

void showArea(area b) {
    cout<<"Area of rectangle:"<< b.len << b.width <<endl;
}

int main(){
    area a1(10,5);
    showArea(a1);
    return 0;
}