#include <iostream>
#include <string>

using namespace std;

void countVowels(string input){
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    int count[5] = {0,0,0,0,0};

    int length = input.length();
    cout << length << endl;
    
    for(int i=0; i<length; i++){ //Moves to next letter in string
      for(int v=0; v<5; v++){ //Checks if letter mathces any vowel
        if (input.at(i) == vowel[v])
          count[v] +=1; //Counts how many times each vowel was counted
      }
    }

    cout << "The number of a's: " << count[0] << endl;
    cout << "The number of e's: " << count[1] << endl;
    cout << "The number of i's: " << count[2] << endl;
    cout << "The number of o's: " << count[3] << endl;
    cout << "The number of u's: " << count[4] << endl;
}

int main() {
    string input;

    cout << "String: ";
    getline(cin, input);

    countVowels(input);
    return 0;
}
