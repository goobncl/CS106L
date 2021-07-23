#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_LINES = 4;
const int NUM_COLUMNS = 3;
const int COLUMN_WIDTH = 20;

void PrintTableHeader();
void PrintTableBody();

int main() {
    PrintTableHeader();
    PrintTableBody();
    return 0;
}

void PrintTableBody() {
    ifstream input("./data/table-data.txt");
    for (int k = 0; k < NUM_LINES; ++k) {
        int intValue;
        double doubleValue;
        input >> intValue >> doubleValue;
        cout << setw(COLUMN_WIDTH) << (k+1) << " | ";
        cout << setw(COLUMN_WIDTH) << intValue << "|";
        cout << setw(COLUMN_WIDTH) << doubleValue << endl;
    }
}