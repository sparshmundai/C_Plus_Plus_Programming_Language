#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int count;
int number()
{
	count--;
	cout<<"Number of line :"<<
	count<<endl;
};
int main()
{
	ofstream fout("abc.txt");
	fout<<"I am creating a new text file "<<endl;
	fout<<"This text file contain alphabets "<<endl;
	fout.close();
	string line;
	ifstream file("abc.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			getline(file,line);
			cout<<line<<endl;
			count++;
		}
		file.close();
		
	}
	number();
	return 0;
}
