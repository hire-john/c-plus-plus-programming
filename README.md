## Synopsis

John McDonnell's Computer Science Introduction to C++ Programming Coursework.


## Installation

Run the C++ through a compiler or open the project files in Visual Studio.

## Contributors

John McDonnell

## License

Use at-will.


## Code Highlights

For our chapter 8 assignment, we were tasked to develop a program to receive single character input which was limited to the twenty-six letters of the english alphabet and produce the international phoentic alpabet translations as output. My instructor gave me some pretty decent remarks and stated my solution was "the most elegant and concise he'd seen while teaching the course." 

Here was the instructor's proposed solution: 

``` c++
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// function prototypes
void getString(string&);
void displayChar(char);

int main() {
    string instring, sub;
    char letter;
    int len, ipos;
    getString(instring);
    len = instring.length();
    cout << "Phonetic version is: ";
    // see page 426 to refer to for statement
    ipos = 0;
    while (ipos <= len - 1) {
        sub = instring.substr(ipos, 1);
        letter = sub[0];
        letter = toupper(letter);
        if (isalpha(letter) == 0)
            cout << "Invalid " << letter << ", character must be alphabetic. " << endl;
        else

            displayChar(letter);
        ipos = ipos + 1;

    }
    cout << endl << endl;
    cin.get();
    cin.get();
    return 0;
}

void getString(string& input) {
    do {

        cout << "Enter string: ";
        cin >> input;
        if (input.length() <= 0)
            cout << "Length of string must be greater than 0, please retry " << endl;
    } while (input.length() <= 0);
    return;
}

void displayChar(char letter) {

    if (letter == 'A')
        cout << " Alpha ";
    else
        if (letter == 'B')
        cout << " Bravo ";
    else
        if (letter == 'C')
        cout << " Charlie ";
    else
        if (letter == 'D')
        cout << " Delta ";
    else
        if (letter == 'E')
        cout << " Echo ";
    else
        if (letter == 'F')
        cout << " Foxtrot ";
    else
        if (letter == 'G')
        cout << " Golf ";
    else
        if (letter == 'H')
        cout << " Hotel ";
    else
        if (letter == 'I')
        cout << " India ";
    else
        if (letter == 'J')
        cout << " Juliet ";
    else
        if (letter == 'K')
        cout << " Kilo ";
    else
        if (letter == 'L')
        cout << " Lima ";
    else
        if (letter == 'M')
        cout << " Mike ";
    else
        if (letter == 'N')
        cout << " November ";
    else
        if (letter == 'O')
        cout << " Oscar ";
    else
        if (letter == 'P')
        cout << " Papa ";
    else
        if (letter == 'Q')
        cout << " Quebec ";
    else
        if (letter == 'R')
        cout << " Romeo ";
    else
        if (letter == 'S')
        cout << " Sierra ";
    else
        if (letter == 'T')
        cout << " Tango ";
    else
        if (letter == 'U')
        cout << " Uniform ";
    else
        if (letter == 'V')
        cout << " Victor ";
    else
        if (letter == 'W')
        cout << " Whiskey ";
    else
        if (letter == 'X')
        cout << " X-ray ";
    else
        if (letter == 'Y')
        cout << " Yankee ";
    else
        if (letter == 'Z')
        cout << " Zulu ";
    else
        cout << "Letter entered was not alphabetic " << endl;
    return;
}

```

John McDonnell's solution:

``` c++
#include <iostream> // i o
#include <string> // for string

using namespace std;
void makeICAO(char letter); // function prototype

int main() {
    string inputString;
    string currentChar;
    char letter;
    int len, strPos;
    cout << "Please enter a string to convert to ICAO phoenetic alpabet:" << endl;
    getline(cin, inputString); // have user input a string
    len = inputString.length(); // determine length of string for loop
    strPos = 0; // set the loop's starting value
    // begin string to char parse loop
    cout << "Phonetic Version is: " << endl;
    while (strPos < len) {
        currentChar = inputString.substr(strPos, 1); // 
        letter = currentChar[0];
        if (isalpha(letter)) { // check that the input character is alpha and call makeICAO function otherwise do nothing.
            makeICAO(letter); // pass the letter variable as an argument to the makeICAO function
        }
        strPos++; // increment the count variable
    }
    // end string to character parse loop
    cout << endl << "Press Enter to exit";
    cin.get(); // exit
}

// Create a function that converts each of the parsed alpha characters to upper case and use a conditional that finds the appropriate match for the letter

void makeICAO(char letter) {
    string wordOutput;
    letter = toupper(letter);
    switch (letter) {
        default: wordOutput = "No Translation!";
            break;
        case 'A': wordOutput = "Alpha";
            break;
        case 'B': wordOutput = "Brave";
            break;
        case 'C': wordOutput = "Charlie";
            break;
        case 'D': wordOutput = "Delta";
            break;
        case 'E': wordOutput = "Echo";
            break;
        case 'F': wordOutput = "Foxtrot";
            break;
        case 'G': wordOutput = "Golf";
            break;
        case 'H': wordOutput = "Hotel";
            break;
        case 'I': wordOutput = "India";
            break;
        case 'J': wordOutput = "Juliet";
            break;
        case 'K': wordOutput = "Kilo";
            break;
        case 'L': wordOutput = "Lima";
            break;
        case 'M': wordOutput = "Mike";
            break;
        case 'N': wordOutput = "November";
            break;
        case 'O': wordOutput = "Oscar";
            break;
        case 'P': wordOutput = "Papa";
            break;
        case 'Q': wordOutput = "Quebec";
            break;
        case 'R': wordOutput = "Romeo";
            break;
        case 'S': wordOutput = "Sierra";
            break;
        case 'T': wordOutput = "Tango";
            break;
        case 'U': wordOutput = "Uniform";
            break;
        case 'V': wordOutput = "Victor";
            break;
        case 'W': wordOutput = "Whiskey";
            break;
        case 'X': wordOutput = "X-Ray";
            break;
        case 'Y': wordOutput = "Yankee";
            break;
        case 'Z': wordOutput = "Zulu";
            break;
    }
    cout << wordOutput << " ";
}
```

