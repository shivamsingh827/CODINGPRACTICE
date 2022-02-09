#include<iostream>
using namespace std;
int binary_search(int,int,int);

int binary_search(int arr[], int a,int b)
{
    int m,y=0;
    int x=a-1;
   while (y<=x)
   {
       int mid=(a+b)/2;
       if (arr[mid]=b)
       {
           return mid;
       }
       if (arr[mid]<b)
       {
           y=mid+1;
       }
       else{

           x=mid-1;
       }
       
       
       
       
        return -1;





       
   }
   
}

int main(){

int arr[10],i,b=0,a,j,x;
cout<<"enter size of array"<<endl;
cin>>a;
cout<<"enter ur aaray"<<endl;
for (int i = 0; i < a; i++)
{
    cin>>arr[i];

}
cout<<"ur array is"<<endl;

for(int  i = 0; i < a; i++)
{
    cout<<arr[i]<<endl;
}
cout<<"enter the value you want to search";
cin>>b;

x=binary_search(arr,a,b);
cout<<"your numbeer is at index"<<x<<endl;

return 0;

}