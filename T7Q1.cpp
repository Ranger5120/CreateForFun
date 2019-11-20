#include<iostream>
#include<stdlib.h>
using namespace std;

const int SIZE=10;
void sort(string[SIZE], int); 
int main()
{
    //variables definition
    int n;
    string name[SIZE]={};

    //using do-while loop to input the value of n
    do
    {
        cout<<"enter the value of n(1<=n<=10): ";
        cin>>n;
    } while (n>10||n<1);
    
    //input the names
    cout<<"input the name: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"name"<<i+1<<": ";
        cin>>name[i];
    }
    
    //output the unsorted namelist
    cout<<endl<<"unsorted namelist: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"name"<<i+1<<": "<<name[i]<<endl;
    }

    //sort the namelist
    sort(name,n);

    //output the sorted namelist
    cout<<endl<<"the sorted namelist is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<name[i]<<endl;
    }
    
    
    system("pause");
    return 0;
}

void sort(string name[SIZE], int n)
{
    string k;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (name[j]>name[j+1])
            {
                k=name[j];
                name[j]=name[j+1];
                name[j+1]=k;    
            }
            
        }
        
    }
    
}