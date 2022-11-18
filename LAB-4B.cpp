//sitthiphol Yuwanaboon
//lab 4B
//Section number 21956
#include<ios>
#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;


int ValueTransform(int num1, int num2, int num3, int num4) {

	int calcValue;
	calcValue = (16777216 * num4) + (65536 * num3) + (256 * num2) + num1;
	return (calcValue);
}
int valueMultiple(int num1, int num2) {
	int multiNum;
	multiNum = num1 * num2;
	return (multiNum);
}

int main() {

	int fileData[61];
	ofstream outFS;
	ifstream inFS;
	int fileSize, fileOffset, headerSize, imageWidth, imageHeight, bitPerPixel;
	int imageSizePixels, xPixelsPerMeter, yPixelsPerMeter, numPixels;;
	char f;



	inFS.open("RectAng-1.BMP");
	if (!inFS.is_open()) {
		cout << "Could not open file RectAng.BMP ." << endl;

	}
	else {
		cout << "The file are successfully  open. " << endl;
	}
	for (int i = 0; i < 62; i++) {
		inFS >> f;
		fileData[i] = f;
	}
	inFS.close();

	outFS.open("Yuwanaboon1.txt");

	if (!outFS.is_open())
		if ((fileData[0] != 'B') && (fileData[1] != 'M')) {
			cout << "The test has failures" << endl;

		}
		else {
			cout << "The operation are operated properly and there B and M in the file:" << endl;
		}
	// read the file size in byte 2-5
	fileSize = ValueTransform(fileData[2], fileData[3], fileData[4], fileData[5]);
	cout << "The file size is: " << fileSize << " Bytes" << endl;
	outFS << "The file size is: " << fileSize << " Bytes" << endl;



	// read byte for offset
	fileOffset = ValueTransform(fileData[10], fileData[11], fileData[12], fileData[13]);
	cout << "The offset of the file is: " << fileOffset << " Bytes" << endl;
	outFS << "The offset of the file is: " << fileOffset << " Bytes" << endl;


	// containing the header file.
	headerSize = ValueTransform(fileData[14], fileData[15], fileData[16], fileData[17]);
	cout << "The header file size : " << headerSize << " Bytes" << endl;
	outFS << "The header file size : " << headerSize << " Bytes" << endl;

	/// read the file width
	imageWidth = ValueTransform(fileData[18], fileData[19], fileData[20], fileData[21]);
	cout << "The File width: " << imageWidth << " pixels" << endl;
	outFS << "The File width: " << imageWidth << " pixels" << endl;
	//find the file height 
	imageHeight = ValueTransform(fileData[22], fileData[23], fileData[24], fileData[25]);
	cout << "The file Height is: " << imageHeight << " lines" << endl;
	outFS << "The file Height is: " << imageHeight << " line" << endl;



	//read to read the bit per pixel

	bitPerPixel = ValueTransform(fileData[28], fileData[29], fileData[5], fileData[6]);
	cout << "The bit per pixel is: " << bitPerPixel << " pixels" << endl;
	outFS << "The bit per pixel is: " << bitPerPixel << " pixels" << endl;


	// image size as pixel

	imageSizePixels = ValueTransform(fileData[34], fileData[35], fileData[36], fileData[37]);
	cout << "Image Size as pixel: " << imageSizePixels << " pixels." << endl;
	outFS << "Image Size as pixel : " << imageSizePixels << " pixels." << endl;
	// x direction pixel per meter
	xPixelsPerMeter = ValueTransform(fileData[38], fileData[39], fileData[40], fileData[41]);
	cout << "Horinzontal as X Pixels per Meter: " << xPixelsPerMeter << " ppm." << endl;
	outFS << "Horinzontal as X Pixels per Meter: " << xPixelsPerMeter << " ppm." << endl;



	// y direction pixel per meter
	yPixelsPerMeter = ValueTransform(fileData[42], fileData[43], fileData[44], fileData[45]);
	cout << "Vertical as Y Pixels per Meter: " << yPixelsPerMeter << " ppm." << endl;
	outFS << "Vertical as Y Pixels per Meter: " << yPixelsPerMeter << " ppm." << endl;


	// the size of image by size time height
	cout << "the size of image is: " << imageWidth << " X " << imageHeight << " pixels" << endl;
	outFS << "the size of image is: " << imageWidth << " X " << imageHeight << " pixels" << endl;
	numPixels = valueMultiple(imageWidth, imageHeight);
	cout << "in another way of size of image is: " << numPixels << " pixels" << endl;
	outFS << "in another way of size of image is: " << numPixels << " pixels" << endl;




	outFS.close();









	system("Pause");
	return 0;
}
/*
The file are successfully  open.
The file size is: 4224062 Bytes
The offset of the file is: 62 Bytes
The header file size : 40 Bytes
The File width: 4844 pixels
The file Height is: 6344 lines
The bit per pixel is: 1 pixels
Image Size as pixel: 4224000 pixels.
Horinzontal as X Pixels per Meter: 23622 ppm.
Vertical as Y Pixels per Meter: 23622 ppm.
the size of image is: 4844 X 6344 pixels
in another way of size of image is: 30730336 pixels*/
