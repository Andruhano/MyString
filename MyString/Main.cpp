#include "MyString.h"

int main() 
{

    MyString str1;
    cout << "Default Constructor: " << str1 << endl;

    MyString str2(10);
    cout << "Constructor with size 10: " << str2 << endl;

    MyString str3;
    cout << "Enter a string for Constructor with user input: ";
    cin >> str3;
    cout << "User input: " << str3 << endl;

    MyString str4("Hello");
    MyString str5(" World");

    MyString str6;
    str6.MyStrcpy(str4);
    cout << "Copied String: " << str6 << endl;

    cout << "Substring 'lo' found in str4: " << boolalpha << str4.MyStrStr("lo") << endl;

    cout << "Index of 'e' in str4: " << str4.MyChr('e') << endl;

    cout << "Length of str4: " << str4.MyStrLen() << endl;

    str4.MyStrCat(str5);
    cout << "Concatenated String: " << str4 << endl;

    str4.MyDelChr('o');
    cout << "String after deleting 'o': " << str4 << endl;

    MyString str7("Hello");
    MyString str8("World");
    cout << "Comparison Result: " << str7.MyStrCmp(str8) << endl;

    cout << "Number of MyString objects: " << MyString::getObjectCount() << endl;

    return 0;
}
