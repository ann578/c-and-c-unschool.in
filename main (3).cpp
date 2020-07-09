#include<iostream>
using namespace std;
class calculations
{
    public:
    int a,b;
    float division;
    int Answer;
    calculations()
    {
       a=0;
       b=0;
    }
    void get()
    {
        a=8;
        b=2;
    }
    void sum()
      {
        
        cout << "sum of 8 and 2 is" << a+b;
      }
    cout << "Are you ready to proceed to futher calculations(1=Yes/0=No)? ";
	cin >> Answer;

	if(Answer == 1)
{
     void difference()
      {
         cout << "the difference of 8 and 2 is:" << a-b; 
      }
      void product()
      {
          cout << "the product of 8 and 2 is:" << a*b;
      }
      void division()
      {
          cout << "8 by 2 is:" << a/b;
      }
      void modulus()
      {
          cout << "modulus of 8 and 2 is:"<< a%b;
      }
}
     else if(Answer==0)
    {
        ~calculations()
        {
            cout << "destructor called";
        }
    }
};   
int main()
{
    calculations obj;
    obj.get();
    obj.sum();
    obj.difference();
    obj.product();
    obj.division();
    obj.modulus();
    return 0;
}