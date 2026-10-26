#include <iostream>
using namespace std;

int main(){
    int trash[4] = {10,20,30,40};

    for (int i =0;i<4;i++)
        cout << "Trash " << i << "= "<<trash[i] << endl;
    
    cout << "Trash outside array: " << trash[4] << endl;
    
    cout << "Garbage in garbage out: " << trash[4] *2 <<endl;
    return 0;

}
