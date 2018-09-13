#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if((a>=b)&&(a%b==0))
        return b;
    else
        gcd(b,(a%b));
}


int main(int argc, char **argv)

{
    cout<<"This program will allow you to find the GCD of  pair of numbers"<<endl;
    int num_1;
    int num_2;
    cout <<"Now enter your numbers please"<<endl;
    cout <<"Enter your first number"<<endl;
    cin>>num_1;
    cout <<"Enter your second number"<<endl;
    cin>>num_2;
    gcd(num_1,num_2);

    cout <<"The GCD = "<<gcd(num_1,num_2)<<endl;

    return 0;
}
