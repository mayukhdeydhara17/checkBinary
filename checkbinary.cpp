#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_complement();
    void display();
    void display_complement();
};

void binary ::read()
{
    cout << "Enter your binary number " << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "INVALID BINARY INPUT";
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "DISPLAYING YOUR BINARY NUMBER" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary ::display_complement(void)
{
    cout << "DISPLAYING YOUR COMPLEMENTED BINARY NUMBER" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display_complement();
    return 0;
}