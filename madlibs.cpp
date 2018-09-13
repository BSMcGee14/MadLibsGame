//Authors: 
#include <iostream>
#include <string>
using namespace std;

string name, pronoun, misterName, noun, yourName, docName;

int main()
{
    cout << "Please insert name: ";
    cin >> misterName;
    cout << "Please insert a pronoun: ";
    cin >> pronoun;
    cout << "Please insert another pronoun: ";
    cin >> noun;
    cout << "Please insert another name: ";
    cin >> docName;
    cout << "Please insert one more name: ";
    cin >> yourName;
    cout << "I'm terribly sorry Mr. " << misterName << ", I'm not gonna be able to come to work today. \n";
    cout << "Last night I had gone to " << pronoun << " and had broken my " << noun << " while partying. \n";
    cout << "I'm going to the hospital to see doctor " << docName  << "to wrap up my broken bone. I will see you, \n";
    cout << "tomorrow. Sincerely, " << yourName;

  return 0;
}
