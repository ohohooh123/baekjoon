#include <stdio.h>
#include <string.h>

#define STACK_MAX 10000

int stack[STACK_MAX];
int idx = -1;

void push(int num) {
    stack[++idx]=num;    
}

int empty(){
    if(idx==-1) {
        return 1;
    } else {
        return 0;
    }
}
int pop() {
    if(empty()) return -1;
    else return stack[idx--];
}

int size(){
    return idx+1;
}


int top() {
    if(empty()) return -1;
    else return stack[idx];
}

int main() {
    int count, i;
    char order[100000];
    int number;
    scanf("%d",&count);

    for(i=0;i<count;i++){
        scanf("%s",order);
        if(!strcmp(order,"top")){
            printf("%d\n",top());
        } else if(!strcmp(order,"pop")) {
            printf("%d\n",pop());
        } else if(!strcmp(order,"empty")){
            printf("%d\n",empty());
        } else if(!strcmp(order,"push")) {
            scanf("%d\n",&number);
            push(number);
        } else if(!strcmp(order,"size")) {
            printf("%d\n",size());
        }
    }
    return 0;
}