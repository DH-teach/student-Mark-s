C++
/*  C++ Program to Find Grade of a Student using if else  */

#include<iostream>
using namespace std;

int main()
{
        int mark[5], i;
        float sum=0,avg;

        cout<<"\nEnter Marks in 5 subjects :: \n";
        for(i=0; i<5; i++)
        {
            cout<<"\nEnter Marks[ "<<i+1<<" ] :: ";
                cin>>mark[i];
                sum=sum+mark[i];
        }

        avg=sum/5;

        cout<<"\nYour Grade is :: ";
        if(avg>80)
        {
                cout<<"[ A ]\n";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"[ B ]\n";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"[ C ]\n";
        }
        else
        {
                cout<<"[ D ]\n";
        }

        return 0;
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
/*  C++ Program to Find Grade of a Student using if else  */
 
#include<iostream>
using namespace std;
 
int main()
{
        int mark[5], i;
        float sum=0,avg;
 
        cout<<"\nEnter Marks in 5 subjects :: \n";
        for(i=0; i<5; i++)
        {
            cout<<"\nEnter Marks[ "<<i+1<<" ] :: ";
                cin>>mark[i];
                sum=sum+mark[i];
        }
 
        avg=sum/5;
 
        cout<<"\nYour Grade is :: ";
        if(avg>80)
        {
                cout<<"[ A ]\n";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"[ B ]\n";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"[ C ]\n";
        }
        else
        {
                cout<<"[ D ]\n";
        }
 
        return 0;
}
