/*
 * FileReader.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: Elijah Weske
 */
#include <iostream>
#include <fstream>
#include <vector>
#include "../327_proj3_test/includes/FileIO.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;
using namespace KP_FileIO;

//tries to open filename, and return its contents in contents
//it will strip out only \n's (char return\line feed)
//returns:
//SUCCESS all worked, contents string contains all in the file
//COULD_NOT_OPEN_FILE_TO_READ contents string is cleared
int KP_FileIO::getFileContents(const std::string &filename, std::string &contents) {
	ifstream inputFile;
	string line;

	inputFile.open(filename);
	if (!inputFile.is_open()){
		return COULD_NOT_OPEN_FILE_TO_READ;
	}

	// No built-in string parsing allowed...
	while(!inputFile.eof()){
		cout << line << endl;
	}

	inputFile.close();

}

//tries to open filename, and serialize  myEntryVector contents to it
//returns:
//SUCCESS all worked, filename contains myEntryVector strings
//COULD_NOT_OPEN_FILE_TO_WRITE
int KP_FileIO::writeVectortoFile(const std::string filename,std::vector<std::string> &myEntryVector){
	ofstream outputFile;
	outputFile.open(filename);

	if (!file.is_open()){
		return COULD_NOT_OPEN_FILE_TO_WRITE;
	}

	for (int i = 0; i < myEntryVector.size(); i++){
		file << myEntryVector[i] << endl;
	}

	return SUCCESS;
}
