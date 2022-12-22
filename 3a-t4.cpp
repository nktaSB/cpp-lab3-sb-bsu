      #include<iostream>
#include<limits>
using namespace std;

int main()
{
       int a, i = 1, sum_a = 0, number;

 cout << " Enter the amount of integers to sum = "; cin >> a;

 cin>>a;
 while(1)
{
if (cin.fail())
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout<<"You have entered wrong input"<<endl;
cin>>a;
}
if(!cin.fail())
break;
}
 if (a == 0) cout << "There is nothing to sum, "; 
    else
    do 
{
    cout << "Enter integer nr. " << i << ": "; 
    cin >> number;
    sum_a += number; i++;
} 
    while (i <= a);
    cout << " The total sum of " << a << " integers is: "  << sum_a; //result
    return 0;
    
}
