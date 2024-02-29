#include<iostream>
using namespace std;


int numS(int array[2][3], int size, int key){
    int sum = 0;
    for(int i = 0; i <= size-1; i++){
        for(int j = 0; j<=3; j++){
            if(array[i][j] == key){
                sum++;
            }
        }
    } 
    return sum;
}

int main(){
    int array[2] [3] =  {{4,7,8},{8,8,7}};
    int size = 2;
    int key = 7;
    int result = numS(array, size, key);
    cout << result;
    return 0;
}