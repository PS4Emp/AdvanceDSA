#include <iostream>
using namespace std;


bool staircaseSearch(int matrix[4][4], int size, int key){
    int row = 0;
    int col = size-1;

    while(row < size && col >=0){
        if(matrix[row][col] == key){
            cout << "found key at" << row << col << " ";
            return true;
        }
        else if(key < matrix[row][col]){
            col--;
        } else{ 
        row++;
        }
    }
    cout <<"key not found";
    return false; 
}




int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    int key = 33;
    int size = sizeof(matrix)/ sizeof(matrix[0]);
    staircaseSearch(matrix, size, key);
}