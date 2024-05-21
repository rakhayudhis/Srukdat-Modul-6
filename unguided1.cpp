#include <iostream>
#include <string>
using namespace std;

char stackData[77];
int top = -1;

bool isFull(int n)
{
    return (top == n - 1);
}
bool isEmpty()
{
    return (top == -1);
}
void push(char x)
{
    if (!isFull(77))
    {
        stackData[++top] = x;
    }
}
char pop()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dihapus" << endl;
    }
    else
    {
        return stackData[top--];
    }
}
bool Palindrom(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        push(str[i]);
    }
    string rvrsdStr = "";
    while (!isEmpty())
    {
        rvrsdStr += pop();
    }
    return (str == rvrsdStr);
}

int main()
{
    string str;
    cout << "Kalimat : ";
    getline(cin, str);
    if (Palindrom(str))
    {
        cout << "Kalimat " << str << " adalah Palindrom" << endl;
    }
    else
    {
        cout << "Kalimat " << str << " bukan Palindrom" << endl;
    }
    return 0;
}