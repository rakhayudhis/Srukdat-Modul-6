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
    return stackData[top--];
}
bool reverse(string str)
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
    cout << "Kata di Reverse : " << rvrsdStr;
}

int main()
{
    string kalimat;
    cout << "Kata           : ";
    getline(cin, kalimat);
    reverse(kalimat);

    return 0;
}