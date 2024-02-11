#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int number=0;
    int count=0,luckynumber=0;
    srand(time(0));
    number=(rand()%100)+1;
    while(number!=luckynumber)
    {
        cout<<"enter the lucky number:";
        cin>>luckynumber;
        if(number>luckynumber)
        {
            cout<<"the number is too low \n";
            count++;
        }
        else if(number<luckynumber)
        {
            cout<<"the number is too high \n";
            count++;
        }
        else{
            cout<<"the number is found \n";
            break;
        }
    }
cout<<"the number is found in "<<count<<" counts";
return 0;
}
