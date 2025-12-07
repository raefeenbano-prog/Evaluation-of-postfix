#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char postfix[100];
    int stackarr[100];
    int top=-1;
    cout<<"Enter postfix:";
    cin>>postfix;
    for(int i=0;postfix[i]!='\0';i++){
        char ch=postfix[i];
        if(isdigit(ch)){
            stackarr[++top]=ch-'0';
        }
    
    else
    {
        int b=stackarr[top--];
        int a=stackarr[top--];
        int result;
        switch(ch){
        case '+':result=a+b; 
        break;
        case '-':result=a-b;
        break;
        case '/':result=a/b;
        break;
        default:
        cout<<"invalid operation";
        return 1;      
        }
        stackarr[top++]=result;

    }
}
cout<<"result="<<stackarr[top];
return 0;
}