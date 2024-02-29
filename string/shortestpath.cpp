#include <iostream>
#include <cmath> 
using namespace std;

float getShortestPath(string path){
    int x = 0;
    int y = 0;
    for(int i = 0; i < path.length(); i++){
        char dir = path[i];
        
        if(dir == 'S'){
            y--;
        } else if(dir == 'N'){ 
            y++;
        } else if (dir == 'W'){ 
            x--;
        } else {
            x++;
        }
    }
    int x2 = x * x; 
    int y2 = y * y; 
    return sqrt(x2 + y2); 
}

int main() {
    string path ="WNEENESENNN";
    cout << getShortestPath(path);
    return 0;
}