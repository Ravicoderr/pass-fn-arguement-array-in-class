#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setnum(int x,int y){
        a=x;
        b=y;
    }
    void getnum(complex c1, complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;

    }
    void print(void){
        cout<<"complex num is "<<a<<"+"<<b<<"i"<<endl;
    }
    
};
int main(){
    complex ravi,rohan,mohan;
    ravi.setnum(3,2);
    ravi.print();

    rohan.setnum(5,6);
    rohan.print();

    mohan.getnum(ravi,rohan);
    mohan.print();
    return 0;


}