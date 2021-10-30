#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,j, keylen,msglen;
	char input[100],key[50],temp[30],quot[100],rem[50],key1[50];
	cout<<"\nPlease enter the data: ";
	gets(input);
	cout<<"\nPlease enter Key: ";
	gets(key);
	
	//determining lengths
	keylen=strlen(key);
	msglen=strlen(input);
	
	//using temporary key
	strcpy(key1,key);
	
	
	//Appending '0' to input data to form dividend
	for( i=0;i<keylen-1;i++)
	{
		input[msglen+i]='0';
	}
	
	
	//Extracting values for doing division of input data through key
	for( i=0;i<keylen;i++)
	{
		temp[i]=input[i];
	}
	
	
	//continuous division of input data with key to obtain quotien and remainder
	for( i=0;i<msglen;i++)
	{
		quot[i]=temp[0];
		if(quot[i]=='0')
		{
			for(j=0;j<keylen;j++)
			{
				key[j]='0';
			}
		}
		else
		{
			for( j=0;j<keylen;j++)
			{
				key[j]=key1[j];
			}
		}
		for( j=keylen-1;j>0;j--)
		{
			if(temp[j]==key[j])
			{
				rem[j-1]='0';
			}
			else
			rem[j-1]='1';
		}
		rem[keylen-1]=input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	
	cout<<"\n***Simulating Cyclic Redudancy Check***";
	cout<<"\n---------------------------------------";
	cout<<"\nInput data: ";
	for( i=0;i<msglen;i++)
	{
		cout<<input[i];
	}
	cout<<"\nKey: ";
	for( i=0;i<keylen;i++)
	{
		cout<<key[i];
	}
	
	cout<<"\nQuotient:";
	for( i=0;i<msglen;i++)
	{
		cout<<quot[i];
	}
	cout<<"\nremainder:";
	for( i=0;i<keylen-1;i++)
	{
		cout<<rem[i];
	}
	//Encoded data to be sent to the receiver: 
	
	cout<<"\nFinal data: ";
	for( i=0;i<msglen;i++)
	{
		cout<<input[i];
	}
	for( i=0;i<keylen-1;i++)
	{
		cout<<rem[i];
	}
getch()	;
	
	
}
