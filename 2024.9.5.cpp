#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    string str, name;
    cout << "Please input name: ";
    cin >> name;
    cout << "Please enter the equation (type " << '"' << "stop" << '"' << " to stop): ";
    cin.ignore();
    while (getline(cin, str) && str != "stop")
    {
        string a = "", b = "";
        char op;
        for (int i = 0; i<str.length(); i++)
        {
            if (str[i] == ' ') continue;
            if (!isnumber(str[i]))
            {
                op = str[i];
                b = str.substr(i+1, str.length());
                break;
            }
            a += str[i];
        }
        int num1 = stoi(a), num2 = stoi(b);
        if (op == '+') cout << "Result: " << num1+num2 << "\n";
        else if (op == '-') cout << "Result: " << num1-num2 << "\n";
        else if (op == '*') cout << "Result: " << num1*num2 << "\n";
        else
        {
            if (num2 == 0) cout << "Error! Second number cannot be 0!\n";
            else cout << "Result: " << num1/num2 << "\n";
        }
    }
    

    //The normal code is below marked as comments.

    /*
    string name;
    int num1, num2, time;
    char op;
    cout << "Input Name: ";
    cin >> name;
    cout << "How many operations do you need: ";
    cin >> time;
    for (int i = 0; i<time; i++)
    {
        cout << "Input First Number: ";
        cin >> num1;
        cout << "Input Operator: ";
        cin >> op;
        cout << "Input Second Number: ";
        cin >> num2;
        if (op == '+') cout << num1+num2 << "\n";
        else if (op == '-') cout << num1-num2 << "\n";
        else if (op == '*') cout << num1*num2 << "\n";
        else
        {
            if (num2 == 0) cout << "Error! Second number cannot be 0!\n";
            else cout << num1/num2 << "\n";
        }
    }
    */
}