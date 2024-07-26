#include<iostream>
 
using namespace std;
 
int main()
{
    int w,i,f,frames[50];
 
    cout<<"Enter window size: ";
    cin>>w;
 
    cout<<"\nEnter number of frames to transmit: ";
    cin>>f;
 
    cout<<"\nEnter "<<f<<" frames: ";
 
    for(i=1;i<=f;i++)
        cin>>frames[i];
 
    cout<<"\n frames will be sent in the following manner \n\n";
    cout<<"After sending "<<w<<" waits for acknowledgement \n\n";
 
    for(i=1;i<=f;i++)
    {
        if(i%w==0)
        {
            cout<<frames[i]<<"\n";
            cout<<"Acknowledgement received \n\n";
        }
        else
            cout<<frames[i]<<" ";
    }
 
    if(f%w!=0)
        cout<<"\nAcknowledgement received \n";
 
    return 0;
}