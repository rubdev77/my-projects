#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main(){
    int num = 1000;
    while (num >= 0){
        cout << num << " - 7 = ";
        num-=7;
        cout << num << endl;
        Sleep(40);
    }
    cin.get();
}
