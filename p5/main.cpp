// Project UID db1f506d06d84ab787baf250c265e24e
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include "Map.h"
#include "csvstream.h"

using namespace std;


class Classifier {

    public:
    void thesauce(char* argv[]);

    private:
    string tester;
    string files;

};


int main (int argc, char *argv[]) {
    string debug = "--debug";
    if (argc != 3 && argc != 4) {
        cout << "Usage: main.exe TRAIN_FILE TEST_FILE [--debug]" << endl;
        return 1; 
    }


    if(argc == 4 && (strcmp(argv[3], debug.c_str()) != 0)){
        cout << "Usage: main.exe TRAIN_FILE TEST_FILE [--debug]" << endl;
            return 0;
    }    

    Classifier thekey;
    thekey.thesauce(argv);

}

void Classifier::thesauce(char* argv[]) {
    csvstream csv_open(tester);
    csvstream first(tester);
    cout << "training data:" << endl;
}

