#include <iostream>

using namespace std;
class calculator{
    private:
      int a,b;
      char ch,op;
      void input(){
          cout<<"Enter the first number "; cin>>a;
          cout<<"Enter the second number "; cin>>b;
          cout<<"Enter the operator(+,-,*,/,%) "; cin>>op;
      }
      int add(){
          return a+b;
      }
      int sub(){
          return a-b;
      }
      int mul(){
          return a*b;
      }
      int divide(){
          return a/b;
      }
      int modulo(){
          return a%b;
      }
      
    public:
      calculator(){
          ch='y';
      }
      void calc(){
          while(ch=='y'){
              input();
              switch(op){
                  case '+':
                      cout<<a<<" + "<<b<<" = "<<add();
                      break;
                  case '-':
                      cout<<a<<" - "<<b<<" = "<<sub();
                      break;
                  case '*':
                      cout<<a<<" * "<<b<<" = "<<mul();
                      break;
                  case '/':
                      cout<<a<<" / "<<b<<" = "<<divide();
                      break;
                  case '%':
                      cout<<a<<" % "<<b<<" = "<<modulo();
                      break;
                  default:
                      cout<<"\nInvalid input. Try again"<<endl;
              }
              cout<<"\n\nDo you want to continue?(y/n)";
              cin>>ch;
          }
      }
};

int main()
{
    calculator c;
    c.calc();

    return 0;
}
