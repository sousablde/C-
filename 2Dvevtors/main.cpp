#include <iostream>
#include <vector>

using namespace std;

int main() {

    //the type of the vector is going to be a vector of vectors
    //inner vector will be the rows
    //this grid will have 3 rows and 4 columns
    vector<vector<int> > grid(3, vector<int>(4, 7));

    grid[1].push_back(8);//this will make the second row longer than the others

    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            cout << grid[row][col] << flush;
        }
        cout << endl;
    }

    return 0;
}