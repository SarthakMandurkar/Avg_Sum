#include<iostream>
using namespace std;

int main(){
  int n,a,i;
  double sum=0,avg=0;
  
cout<<"Enter number of positive integers :"<<endl;
cin>>n;

for(i=0;i<n;i++){
cout<<"Enter the number :"<<endl;
cin>>a;
sum=sum+a;
}
cout<<"Sum of integers = "<<sum<<endl;
avg=sum/n;
cout<<"Average of integers = "<<sum/n<<endl;
return 0;
}
