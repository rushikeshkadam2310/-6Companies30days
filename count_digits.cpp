#include <iostream>
using namespace::std;

int count_digits(int n)
{int count=0;
if (n == 0) return 1;
    while (n>0)
    {
        
        n=n/10;
        count++;


    }
    return count;
}

int main(){
    int a= 0;
int result = count_digits(a);
cout<<result;



    return 0;
}