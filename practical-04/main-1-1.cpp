#include <iostream>
#include <string>

using namespace std;

extern void copy_2d_strings(string [][2], string [][2], int );

int main(){
    int number=3;
    string first_array[number][2];
    string second_array[number][2];
    for (int i=0;i<number;i++){
        for (int j=0;j<2;j++){
            cin>>first_array[i][j];
        }
    }
    
    copy_2d_strings(first_array,second_array,number);
    return 0;
}
