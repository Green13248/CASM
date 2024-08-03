//Do not distribute
//Copyright Ben Hall 2024

#define eaa 000001
#define esa 000010
#define ema 000011
#define eda 000100
#define jmp 000101
#define cme 000110
#define cmg 000111
#define cge 001000
#define anb 001001
#define axb 001010
#define rtb 001011
#define btr 001100
#define bta 001101
#define atb 001110
#define btm 001111
#define mtb 010000
#define bts 010001
#define stb 010010
#define qtb 010011
#define btq 010100
#define btl 010101
#define ltb 010110
#define bte 010111
#define etb 011000
#define dtb 011001
#define nop 011010
#define qib 011011
#define lib 011100
#define irf 011101
#define ibf 011110
#define imf 011111
#define iaf 100000
#define ijf 100001
#define isf 100010
#define iqf 100011
#define iof 100100
#define iff 100101
#define hlt 100110
#define caa 100111
#define cab 101000

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int prompt() {
	string input;
	string sourcefile;
	string compilefile;
	string filecontent;
	cout << ">";
	cin >> input;
	if (input == "h") {
		cout << "First type a mode, right now there is only bin so type that";
		cout << "Type the name of the source file path\n";
		cout << "Then type the name of the new file that will be compiled";
	}
	if (input == "bin") {
		cout << "Source: ";
		cin >> sourcefile;
		cout << "Compiled: ";
		cin >> compilefile;
		ofstream MyWriteFile(compilefile);
		ifstream MyReadFile(sourcefile);
		while (getline (MyReadFile, filecontent)) {
			if (filecontent == "eaa") {
				MyWriteFile << "000001\n";
			}
			if (filecontent == "esa") {
				MyWriteFile << "000010\n";
			}
			if (filecontent == "ema") {
				MyWriteFile << "000011\n";
			}
			if (filecontent == "eda") {
				MyWriteFile << "000100\n";
			}
			if (filecontent == "jmp") {
				MyWriteFile << "000101\n";
			}
			if (filecontent == "cme") {
				MyWriteFile << "000110\n";
			}
			if (filecontent == "cmg") {
				MyWriteFile << "000111\n";
			}
			if (filecontent == "cge") {
				MyWriteFile << "001000\n";
			}
			if (filecontent == "anb") {
				MyWriteFile << "001001\n";
			}
			if (filecontent == "axb") {
				MyWriteFile << "001010\n";
			}
			if (filecontent == "rtb") {
				MyWriteFile << "001011\n";
			}
			if (filecontent == "btr") {
				MyWriteFile << "001100\n";
			}
			if (filecontent == "bta") {
				MyWriteFile << "001101\n";
			}
			if (filecontent == "atb") {
				MyWriteFile << "001110\n";
			}
			if (filecontent == "btm") {
				MyWriteFile << "001111\n";
			}
			if (filecontent == "mtb") {
				MyWriteFile << "010000\n";
			}
			if (filecontent == "bts") {
				MyWriteFile << "010001\n";
			}
			if (filecontent == "stb") {
				MyWriteFile << "010010\n";
			}
			if (filecontent == "qtb") {
				MyWriteFile << "010011\n";
			}
			if (filecontent == "btq") {
				MyWriteFile << "010100\n";
			}
			if (filecontent == "btl") {
				MyWriteFile << "010101\n";
			}
			if (filecontent == "ltb") {
				MyWriteFile << "010110\n";
			}
			if (filecontent == "bte") {
				MyWriteFile << "010111\n";
			}
			if (filecontent == "etb") {
				MyWriteFile << "011000\n";
			}
			if (filecontent == "dtb") {
				MyWriteFile << "011001\n";
			}
			if (filecontent == "nop") {
				MyWriteFile << "000000\n";
			}
			if (filecontent == "qib") {
				MyWriteFile << "011011\n";
			}
			if (filecontent == "lib") {
				MyWriteFile << "011100\n";
			}
			if (filecontent == "irf") {
				MyWriteFile << "011101\n";
			}
			if (filecontent == "ibf") {
				MyWriteFile << "011110\n";
			}
			if (filecontent == "imf") {
				MyWriteFile << "011111\n";
			}
			if (filecontent == "iaf") {
				MyWriteFile << "100000\n";
			}
			if (filecontent == "ijf") {
				MyWriteFile << "100001\n";
			}
			if (filecontent == "isf") {
				MyWriteFile << "100010\n";
			}
			if (filecontent == "iqf") {
				MyWriteFile << "100011\n";
			}
			if (filecontent == "iof") {
				MyWriteFile << "100100\n";
			}
			if (filecontent == "iff") {
				MyWriteFile << "100101\n";
			}
			if (filecontent == "hlt") {
				MyWriteFile << "100110\n";
			}
			if (filecontent == "caa") {
				MyWriteFile << "100111\n";
			}
			if (filecontent == "cab") {
				MyWriteFile << "101000\n";
			}
		}
		MyReadFile.close();
	}
}
int main() {
	prompt();
	return 0;
}
