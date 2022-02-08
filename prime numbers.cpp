#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
main(){
	system("color 0C");
	const short s=4;
    int i,j,total=0;
    for(i=1;i<=300;i++)
    {
        for(j=2;j<300;j++)
        {
            if(j==i)
                continue;
            if(i%j==0)
                break;
            if(i%j!=0 && j==299){
                cout<<setw(s)<<i;
                total++;
            }
        }
    }
    cout<<"\n\n Total number of prime numbers are: "<<total;
    return 0;
} 
