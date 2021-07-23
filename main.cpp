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

void PrintTableHeader() {
    for(int column = 0; column < NUM_COLUMNS - 1; ++column)
        cout << setfill('-') << setw(COLUMN_WIDTH) << "" << "-+-";
    cout << setw(COLUMN_WIDTH) << "" << setfill(' ') << endl;
}

void PrintTableBody() {
    ifstream input("./data/table-data.txt");
    int rowNumber = 0;
    int intValue;
    double doubleValue;
    while (input >> intValue >> doubleValue) {
        if (input.fail()) break;

        cout << setw(COLUMN_WIDTH) << (rowNumber + 1) << " | ";
        cout << setw(COLUMN_WIDTH) << intValue << " | ";
        cout << setw(COLUMN_WIDTH) << doubleValue << endl;

        rowNumber++;
    }
}