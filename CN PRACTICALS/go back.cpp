#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int no_of_frames;
	int no_of_transmission;
	int size;
	
	cout<<"\nENTER THE NUMBER OF FRAMES: ";
	cin>>no_of_frames;
	cout<<"\nENTER THE WINDOW SIZE: ";
	cin>>size;
	srand(time(NULL));
	
	int i=1;
	while(i<=no_of_frames)
	{
		int x=0;
		for (int j=i;j<i+size&&j<=no_of_frames;j++)
		{
			cout<<"SENT FRAME: "<<j<<endl;
			no_of_transmission++;
		}
		for(int j=i;j<i+size&&j<=no_of_frames;j++)
		{
			int flag=rand()%2;
			if(!flag)
			{
				cout<<"ACKNOWLEDGEMENT FOR FRAME "<<j<<endl;
				x++;
			}
			else
			{
				cout<<"FRAME "<<j<<" NOT RECIEVED";
				cout<<"\nRETRANSMITTING WINDOW"<<endl;
				break;
			}
		}
		cout<<endl;
		i+=x;
	}
	cout<<"\nTOTAL NUMBER OF TRANSMISSIONS: "<<no_of_transmission<<endl;
	return 0;
}