#include <iostream>
using namespace std;

class MyString 
{
    char* str; 
    int length; 
    static int objectCount; 

public:
    MyString(); 
    MyString(int size); 
    MyString(const char* inputStr); 
    ~MyString(); 

    void inputString();
    void displayString() const;

    MyString& operator=(const MyString& other); 
    MyString operator+(const MyString& other) const; 

    void MyStrcpy(const MyString& obj);
    bool MyStrStr(const char* substr) const;
    int MyChr(char c) const;
    int MyStrLen() const;
    void MyStrCat(const MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(const MyString& b) const;

    static int getObjectCount();

    friend ostream& operator<<(ostream& os, const MyString& myStr);
    friend istream& operator>>(istream& is, MyString& myStr);
};