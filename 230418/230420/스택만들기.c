#include <stdio.h>
#define MAX_STACK_SIZE 100
#define true 1
#define false 0

int stack[MAX_STACK_SIZE];
int top=-1;

int IsEmpty() {
    if(top<0) return true;
    else return false;
}

int IsFull() {
    if(top>=MAX_STACK_SIZE-1) return true;
    else return false;
}

void push(int num) {
    if(IsFull()==true) {
        printf("������ ����á���ϴ�\n");
    } else {
        stack[++top]=num;
    }
}

int pop() {
    if(IsEmpty()==true) printf("������ ������ϴ�\n");
    else return stack[top--];
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
 
    return 0;
}