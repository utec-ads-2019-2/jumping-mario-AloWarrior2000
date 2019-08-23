#include <iostream>


using namespace std;

void FillArray(int size, int*& array){
    for (int j = 0, x = 0; j < size; ++j) {
        cin >> x;
        array[j] = x;
    }
}

void CompareJumps(int Walls, int* Sizes, int& Highs, int&Lows) {
    for (int k = 0; k < Walls - 1; ++k) {
        if (Sizes[k + 1] > Sizes[k]) {
            Highs++;
        } else if (Sizes[k + 1] < Sizes[k]){
            Lows++;
        }
    }
}

void Mario_Problem(){
    int CaseNumbers, WallsAmount;
    cin >> CaseNumbers;
    int* HighJumps = new int[CaseNumbers];
    int* LowJumps = new int[CaseNumbers];
    for (int i = 0; i < CaseNumbers; ++i) {
        cin >> WallsAmount;
        int* WallsSizeList = new int[WallsAmount];
        FillArray(WallsAmount,WallsSizeList);
        CompareJumps(WallsAmount, WallsSizeList, HighJumps[i], LowJumps[i]);
    }
    for (int j = 0; j < CaseNumbers; ++j) {
        cout << "Case " << j+1 << ": " << HighJumps[j] << " " << LowJumps[j] << endl;
    }

}

int main() {
    Mario_Problem();
    return EXIT_SUCCESS;
}

