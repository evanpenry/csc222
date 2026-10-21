#include <iostream>
using namespace std;

void swapValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10;
    int y = 20;

    cout << "Original: x = " <<x <<", y = " << y << endl;
    swapValue(x,y);
    cout << "After pass by value: x= " << x<<", y = "<<y<<endl;
    swapPointer(x,y);

    cout << "After pass by pointer: x= " << x<<", y = "<<y<<endl;

    return 0;
}
