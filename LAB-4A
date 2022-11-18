// sitthiphol Yuwanaboon
//section number 21956
//lab 4A
#include<iostream>
#include<ios>
#include<string>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFS;
	ofstream outFS;
	char byte0;
	char byte1;
	char byte2;
	char byte3;
	char byte4;
	char byte5;
	char byte6;
	char byte7;
	char byte8;
	char byte9;
	char byte10;
	char byte11;
	char byte12;
	char byte13;
	char byte14;
	char byte15;
	char byte16;
	char byte17;
	char byte18;
	char byte19;
	char byte20;
	char byte21;
	char byte22;
	char byte23;
	char byte24;
	char byte25;
	char byte26;
	char byte27;
	char byte28;
	char byte29;



	byte0 = 'B';
	byte1 = 'M';

	outFS.open("Yuwanaboon.txt");
	cout << "RectAng.BMP will be tried to open." << endl;
	
	inFS.open("RectAng.BMP");
	if (!inFS.is_open()) {
		cout << "Could not open file RectAng.BMP ." << endl;
		return 1;
	}
	else {
		cout << "The file are successfully  open. " << endl;
	}
	inFS >> byte0 >> byte1;
	if ((byte0 == 'B') && (byte1 == 'M')) {
		cout << "The operation are operated properly:" << endl;

	}
	else {
		cout << "The test has failures" << endl;
	}

	int fileSize;
	// read the file size in byte 2-5
	inFS >> byte2 >> byte3 >> byte4 >> byte5;
	fileSize = ((int)byte2 * 1) + ((int)byte3 * 256) + ((int)byte4 * 65536) + ((int)byte5 * 16777216);
	cout << "The file size is: " << fileSize << " Bytes"  << endl;
	outFS << "The file size is: " << fileSize << " Bytes" << endl;
	
	//read the byte 6-9 and do not process it
	inFS >> byte6 >> byte7 >> byte8 >> byte9;
	
	// read byte 10-13 for offset
	inFS >> byte10 >> byte11 >> byte12 >> byte13;
		int offSet;
	offSet = ((int)byte10 * 1) + ((int)byte11 * 256) + ((int)byte12 * 65536) + ((int)byte13 * 16777216);
	cout << "The offset of the file is: " << offSet << " Bytes" << endl;
	outFS << "The offset of the file is: " << offSet << " Bytes" << endl;
	
	
	// 14-17 containing the header file.
	inFS >> byte14 >> byte15 >> byte16 >> byte17;
		int headerFile;
	headerFile	= ((int)byte14 * 1) + ((int)byte15 * 256) + ((int)byte16 * 65536) + ((int)byte17 * 16777216);
	cout << "The header file size : " << headerFile << " Bytes" << endl;
	outFS << "The header file size : " << headerFile << " Bytes" << endl;
	 /// read the file width 18-21
	inFS >> byte18 >> byte19 >> byte20 >> byte21;
	int fileWidth;
	fileWidth = ((int)byte18 * 1) + ((int)byte19 * 256) + ((int)byte20 * 65536) + ((int)byte21 * 16777216);
	cout << "The File width: " << fileWidth << " pixels" << endl;
	outFS << "The File width: " << fileWidth << " pixels" << endl;
	//find the file height 
	int fileHeight;
	inFS >> byte22 >> byte23 >> byte24 >> byte25;
	fileHeight = ((int)byte22 * 1) + ((int)byte23 * 256) + ((int)byte24 * 65536) + ((int)byte25 * 16777216);
	cout << "The file Height is: " << fileHeight << " lines" << endl;
	outFS << "The file Height is: " << fileHeight << " line" << endl;
	
	//read 26-27  but ignore to process the output
	inFS >> byte26 >> byte27;

	//read 28-29 to read the bit per pixel
	int bitPerPixel;
	inFS >> byte28 >> byte29;
	bitPerPixel = ((int)byte28 * 1) + ((int)byte29 * 256);
	cout << "The bit per pixel is: " << bitPerPixel << " pixels" << endl;
	outFS << "The bit per pixel is: " << bitPerPixel << " pixels" << endl;
	// the size of image by size time height
	cout << "the size of image is: " << fileWidth << "X" << fileHeight << " pixels"<< endl;
	outFS << "the size of image is: " << fileWidth << "X" << fileHeight << " pixels" << endl;

	cout << "in another way of size of image is: " << fileWidth * fileHeight << " pixels" << endl;
	outFS << "in another way of size of image is: " << fileWidth * fileHeight << " pixels" << endl;
	inFS.close();
	outFS.close();

	system("pause");
	return 0;


}
