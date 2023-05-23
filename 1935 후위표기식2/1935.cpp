#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int num; // ���� �� ������
    float n1, n2, temp;
    int index = 0;
    char car;      // ��� ��ȣ
    string st;     // �־��� ���ڿ�
    float arr[30]; // ���ڸ� �� �迭
    stack<double> numStack;

    cin >> num;
    cin >> st;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < st.length(); i++)
    { // �־��� ���ڿ� ���� ������ �˻�
        if (st[i] >= 'A' && st[i] <= 'Z')
        {                                // ���ĺ��̸�
            numStack.push(arr[st[i]-'A']); // ���ÿ� ���� ����
        }
        else
        { // �����ڸ�
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