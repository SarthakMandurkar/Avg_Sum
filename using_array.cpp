#include<iostream>
using namespace std;

int main(){
int n,i;

cout<<"Enter the number of positive integers : "<<endl;
cin>>n;
double numbers[n];
double sum=0.0;
  
for(i=0;i<n;i++){
cout<<"Enter Numbers "<<i+1<<": ";
cin>>numbers[i];
sum+=numbers[i];
}
double average = sum/n;
cout<<"Sum : "<<sum<<endl;
cout<<"Average : "<<average<<endl;
return 0;
}
