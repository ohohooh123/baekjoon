#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int num; // 숫자 몇 개인지
    float n1, n2, temp;
    int index = 0;
    char car;      // 계산 부호
    string st;     // 주어진 문자열
    float arr[30]; // 숫자만 들어갈 배열
    stack<double> numStack;

    cin >> num;
    cin >> st;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < st.length(); i++)
    { // 주어진 문자열 끝날 때까지 검사
        if (st[i] >= 'A' && st[i] <= 'Z')
        {                                // 알파벳이면
            numStack.push(arr[st[i]-'A']); // 스택에 숫자 삽입
        }
        else
        { // 연산자면
            n1 = numStack.top();
            numStack.pop();
            n2 = numStack.top();
            numStack.pop();
            switch (st[i])
            {
            case '+':
                temp = n2 + n1;
                break;
            case '-':
                temp = n2 - n1;
                break;
            case '*':
                temp = n2 * n1;
                break;
            case '/':
                temp = n2 / n1;
                break;
            }
            numStack.push(temp);
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << numStack.top();

    return 0;
}