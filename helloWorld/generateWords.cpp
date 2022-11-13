#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{
    srand(time(NULL));
    string output = "";
    
    //get word from use
    string goal;
    cout << "Enter a phrase: ";
    getline(cin, goal);
    
    int i = 0; //used to keep track of where in goal we are

    while (output != goal) {
        //output word so far
        cout << output;

        //randomly generate next letter until correct one is found
        char temp = rand() % 126 + 32;

        //print randomly generated next letter
        cout << temp << endl;

        //if letter is the same, continue to next letter
        if (temp == goal[i]) {
            output += temp;
            i++;
        }

        //sleep to see progress better
        Sleep(1);
    }

    return 0;
}