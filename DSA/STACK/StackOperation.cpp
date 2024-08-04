#include<iostream>
using namespace std;
#define max_size 100
int stack[max_size];
int top=-1;
void push(int item){
    if(top == max_size - 1){
        printf("Overflow & Exit\n");
    }
    else{
        stack[++top] = item;
        printf("%d Item will be interted\n",item);
    }
}
void pop(){
    if(top == -1){
        printf("Underflow & Exit\n");
    }
    else{
       int item = stack[top--];
       printf("%d Item Deleted \n",item);
    }
}
void display(){
    if(top == -1){
        printf("Stack Is impty\n");
    }
    else{
        printf("Stack Element\n");
        for(int i=0; i<=top; i++){
            printf("%d  ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice, item;
    printf("1.push\n2.Pop\n3.Display\n4.Exit\n");
    while (1){
        printf("Enter your choice  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value to push\n");
            scanf("%d",& item);
            push(item);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
               return 0;

            default:
            printf("Please Enter correct choce\n");
        }
    }
}