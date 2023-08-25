#include<iostream.h>
#include<fstream.h>
using namespace std;
int main()
{
	ofstream fout("abcd.txt");
	fout<<"i am creating a file\n";
	fout<<"this file contains numbers and alphets\n";
	fout.close();
}
	