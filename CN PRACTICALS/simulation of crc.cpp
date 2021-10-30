#include<iostream>
#include<string.h>
#include<stdio.h>
#include <conio.h>
using namespace std;

void main
{
	char quot[30],remainder[30];
	int key_len,msg_len;
	char data[100],key[50],temp[30],key1[50];


	cout<<"Enter the data "<<endl;
	cin>>data;
	msg_len=strlen(data);

	cout<<"Enter the key "<<endl;
	cin>>key;
	key_len=strlen(key);

	strcpy(key1,key);

	for(int i=0;i<key_len;i++)
		data[msg_len+i]='0';


	for(int i=0;i,key_len;i++)
	{
		temp[i]=data[i];
	}

	for(int i=0;i<msg_len;i++)
	{
		quot[i]=temp[0];
		if(quot[i]=='0')
		{
			for(int j=0;j<key_len;j++)
				key[j]='0';
		}
		else
		{
			for(int j=0;j<key_len;j++)
				key[j]=key1[j];
		}
		for(int k=key_len-1;k>0;k--)
		{
			if(temp[k]==key[k])
				remainder[k-1]='0';
			else
				remainder[k-1]='1';
		}
		remainder[key_len-1]=data[i+key_len];
		strcpy(temp,remainder);
	}
	strcpy(remainder,temp);

	cout<<"Quotient : ";
	for(int i=0;i<msg_len;i++)
	{
		cout<<quot[i];
	}

	cout<<"Remainder : ";
	for (int i=0;i<key_len;i++)
	{
		cout<<remainder[i];
	}
	cout<<"Final data is : ";
	for(int i=0;i<msg_len;i++)
		cout<<data[i];
	for(int i=0;i<key_len;i++)
		cout<<remainder[i];

	getch();
}