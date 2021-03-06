/*
	This project was written by Eric Sweet to fulfill the requirements for CS3100 Project 2
*/

#include "stdafx.h"
#include "OrgTree.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>


int main()
{
	OrgTree o1, o2, o3;

	cout << endl << "Test of read method" << endl;
	o3.read("test.txt");
	o3.write("test.txt");
	o3.printSubTree(o3.getRoot());

	cout << endl << "Test of fire method" << endl;
	o3.fire("VP Software Development");
	o3.printSubTree(o3.getRoot());
	cout << o3.getSize() << endl;
	o3.fire("MagicBag Team Leader");
	o3.printSubTree(o3.getRoot());
	o3.fire("Software Engineer II");
	o3.printSubTree(o3.getRoot());
	cout << o3.getSize();
	o3.write("test1.txt");

	cout << endl << "Test of the read method" << endl;
	o2.read("test.txt");
	o2.printSubTree(o2.getRoot()); //printSubTree from root

	system("PAUSE");
	return 0;
	return 0;
}