#include<iostream>
using namespace std;

int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
//int div (int a, int b);

int main()
{
    int a=1,b=2;
    int temp=a;
    a=b;
    b=temp;
    int sum=add(a,b);
    int dif=sub(a,b);
    int pro=mul(a,b);
    //int divi=div(a,b);

    cout<<a<<endl;
    cout<<"sum :"<<sum <<endl;
    cout<<"Difference :"<<dif<<endl;
    cout<<"Product :"<<pro<<endl;
    return 0;
}

int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    if(a>b){
        return (a-b);
    }
    else{
        return (b-a);
    }
}
int mul(int a, int b)
{
    return (a*b);
}

/* int div(int a,int b)
{
    return (a/b);
} */