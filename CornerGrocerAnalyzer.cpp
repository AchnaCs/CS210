#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

class ItemAnalyzer { //class containing frequency map and menu functions

public:
    void readData();
    void displayMenu();

private:
    map<string, int> itemFrequency; // map to store item and frequency as pairs
    void printItemSearched();
    void printItemFrequency();
    void printItemHistogram();

};

//Function to read data file, update frequency map, and store a backup
void ItemAnalyzer::readData() {
    ifstream inFS("CornerGrocerInputs.txt"); // input file cotaining items purchased
    ofstream outFS("frequency.dat"); // output file to store backup data

    // Reading items from input file and storing frequency in map
    string item;
    while (inFS >> item) {
        ++itemFrequency[item];
    }

    // Writing item and frequency pairs to the output file for backup
    for (auto i : itemFrequency) {
        outFS << i.first << ' ' << i.second << endl;
    }

    inFS.close();
}

// Function to display 4 menu options and call the appropriate menu funtion
void ItemAnalyzer::displayMenu() {
    // Displaying menu options to the user
    int option;
    cout << "Welcome to the text record analyzer!\n";
    do {
        cout << "\nMenu Options:\n\n";
        cout << "1. Find frequency of an item." << endl;
        cout << "2. Print frequency of all items." << endl;
        cout << "3. Print histogram of all items." << endl;
        cout << "4. Exit.\n\n";
        cout << "Enter your option: ";
        cin >> option;
        switch (option) {
        case 1:
            printItemSearched();
            break;
        case 2:
            printItemFrequency();
            break;
        case 3:
            printItemHistogram();
            break;
        case 4:
            cout << "You exited the text record analyzer.\n";
            break;
        default:
            cout << "Please Enter a valid option." << endl;
            break;
        }
    } while (option != 4);
}

// Function to prompt user to enter a grocery item and display item's frequency 
void ItemAnalyzer::printItemSearched() {
    string itemSearched;
    cout << "What item's frequaency do you wish to find? ";
    cin >> itemSearched;
    if (itemFrequency.find(itemSearched) == itemFrequency.end()) {
        cout << endl << itemSearched << " is not found.\n";
    } else{
        cout << endl << itemSearched << " appear " << itemFrequency[itemSearched] << " times." << endl;
    }  
}

// Function to display all items with their frequencies 
void ItemAnalyzer::printItemFrequency() {
    cout << "\nItem Frequency:" << endl;
    for (auto i : itemFrequency) {
        cout << i.first << ' ' << i.second << endl;
    }
}

// Function to display all items and their frequencies as a histogram
void ItemAnalyzer::printItemHistogram() {
    cout << "\nItem Histogram:" << endl;
    for (auto i : itemFrequency) {
        cout << i.first << " ";
        for (int j = 0; j < i.second; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    ItemAnalyzer itemAnalyzer;
    itemAnalyzer.readData();
    itemAnalyzer.displayMenu();

    return 0;
}