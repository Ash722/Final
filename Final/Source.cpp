#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <mciapi.h>
#pragma comment(lib, "Winmm.lib")

using namespace std;

int main(){
	mciSendString("open \"play.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString("play mp3 repeat", NULL, 0, NULL);

	/*cout << "Welcome to Sudoku, the game for lonely people." << endl;
	cout << "But I'm the one who had time to actually make it... " << endl;
	cout << ":( " << endl;
	cout << "ANYWAYS.." << endl;
	cout << "Go ahead and start." << endl;
	cout << endl;
	*/

char place = 0;
	char num = 0;
	char  sudoku[82] = {'o', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '!', '?', '@', '#', '$', '%', '^', '&', '*', '-', '~', '+', '=', ';', ':', '<', '>', '/', '(', ')', '.', ',', '`', '"', '}', '{', ']', '[', '_' };
do{
	
	cout << " _____ _____ _____   _____ _____ _____   _____ _____ _____" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |     " << endl <<
		"|  " <<  sudoku[1] << "  |  " <<  sudoku[2] << "  |  " <<  sudoku[3] << "  | |  " <<  sudoku[4] << "  |  " <<  sudoku[5] << "  |  " <<  sudoku[6] << "  | |  " <<  sudoku[7] << "  |  " <<  sudoku[8] << "  |  " <<  sudoku[9] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<


		"|  " <<  sudoku[10] << "  |  " <<  sudoku[11] << "  |  " <<  sudoku[12] << "  | |  " <<  sudoku[13] << "  |  " <<  sudoku[14] << "  |  " <<  sudoku[15] << "  | |  " <<  sudoku[16] << "  |  " <<  sudoku[17] << "  |  " <<  sudoku[18] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<


		"|  " <<  sudoku[19] << "  |  " <<  sudoku[20] << "  |  " <<  sudoku[21] << "  | |  " <<  sudoku[22] << "  |  " <<  sudoku[23] << "  |  " <<  sudoku[24] << "  | |  " <<  sudoku[25] << "  |  " <<  sudoku[26] << "  |  " <<  sudoku[27] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl << endl <<
		" _____ _____ _____   _____ _____ _____   _____ _____ _____" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<


		"|  " <<  sudoku[28] << "  |  " <<  sudoku[29] << "  |  " <<  sudoku[30] << "  | |  " <<  sudoku[31] << "  |  " <<  sudoku[32] << "  |  " <<  sudoku[33] << "  | |  " <<  sudoku[34] << "  |  " <<  sudoku[35] << "  |  " <<  sudoku[36] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<

		"|  " <<  sudoku[37] << "  |  " <<  sudoku[38] << "  |  " <<  sudoku[39] << "  | |  " <<  sudoku[40] << "  |  " <<  sudoku[41] << "  |  " <<  sudoku[42] << "  | |  " <<  sudoku[43] << "  |  " <<  sudoku[44] << "  |  " <<  sudoku[45] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<

		"|  " <<  sudoku[46] << "  |  " <<  sudoku[47] << "  |  " <<  sudoku[48] << "  | |  " <<  sudoku[49] << "  |  " <<  sudoku[50] << "  |  " <<  sudoku[51] << "  | |  " <<  sudoku[52] << "  |  " <<  sudoku[53] << "  |  " <<  sudoku[54] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl << endl <<
		" _____ _____ _____   _____ _____ _____   _____ _____ _____" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<

		"|  " <<  sudoku[55] << "  |  " <<  sudoku[56] << "  |  " <<  sudoku[57] << "  | |  " <<  sudoku[58] << "  |  " <<  sudoku[59] << "  |  " <<  sudoku[60] << "  | |  " <<  sudoku[61] << "  |  " <<  sudoku[62] << "  |  " <<  sudoku[63] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<

		"|  " <<  sudoku[64] << "  |  " <<  sudoku[65] << "  |  " <<  sudoku[66] << "  | |  " <<  sudoku[67] << "  |  " <<  sudoku[68] << "  |  " <<  sudoku[69] << "  | |  " <<  sudoku[70] << "  |  " <<  sudoku[71] << "  |  " <<  sudoku[72] << "  |  " << endl <<

		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|" << endl <<
		"|     |     |     | |     |     |     | |     |     |     |" << endl <<

		"|  " <<  sudoku[73] << "  |  " <<  sudoku[74] << "  |  " <<  sudoku[75] << "  | |  " <<  sudoku[76] << "  |  " <<  sudoku[77] << "  |  " <<  sudoku[78] << "  | |  " <<  sudoku[78] << "  |  " <<  sudoku[80] << "  |  " <<  sudoku[81] << "  |  " << endl <<
		"|_____|_____|_____| |_____|_____|_____| |_____|_____|_____|     " << endl;

	
		cout << "Where would you like to put your number?" << endl;
		cin >> place;
		cout << "What number would you like to put there?" << endl;
		cin >> num;

		int swap;
		bool flag = false;
	
		if (place = 'A'){
			while (false){
				for (int i = 0; i < 9; i++){
					swap = sudoku[1];
					sudoku[1] = num;
					




					
				}
			} 
		}
if (place = 'B'){
		do{

			flag = false;
			for (int i = 0; i < 9; i++){
				
					swap = sudoku[2];
					sudoku[2] = num;
					


					flag = true;
				}
			
		} while (false);
}
if (place = 'C'){
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				
					swap = sudoku[3];
					sudoku[3] = num;


					flag = true;
				}
			
		} while (false);
		}

do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'D'){
					swap = sudoku[4];
					sudoku[4] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'E'){
					swap = sudoku[5];
					sudoku[5] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'F'){
					swap = sudoku[6];
					sudoku[6] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'G'){
					swap = sudoku[7];
					sudoku[7] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'H'){
					swap = sudoku[8];
					sudoku[8] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'I'){
					swap = sudoku[9];
					sudoku[9] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'J'){
					swap = sudoku[10];
					sudoku[10] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'K'){
					swap = sudoku[11];
					sudoku[11] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'L'){
					swap = sudoku[12];
					sudoku[12] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'M'){
					swap = sudoku[13];
					sudoku[13] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'N'){
					swap = sudoku[14];
					sudoku[14] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'O'){
					swap = sudoku[15];
					sudoku[15] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'P'){
					swap = sudoku[16];
					sudoku[16] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'Q'){
					swap = sudoku[17];
					sudoku[17] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'R'){
					swap = sudoku[18];
					sudoku[18] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'S'){
					swap = sudoku[19];
					sudoku[19] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'T'){
					swap = sudoku[20];
					sudoku[20] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'U'){
					swap = sudoku[21];
					sudoku[21] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'V'){
					swap = sudoku[22];
					sudoku[22] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'W'){
					swap = sudoku[23];
					sudoku[23] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'X'){
					swap = sudoku[24];
					sudoku[24] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'Y'){
					swap = sudoku[25];
					sudoku[25] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'Z'){
					swap = sudoku[26];
					sudoku[26] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'a'){
					swap = sudoku[27];
					sudoku[27] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'b'){
					swap = sudoku[28];
					sudoku[28] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'c'){
					swap = sudoku[29];
					sudoku[29] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'd'){
					swap = sudoku[30];
					sudoku[30] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'e'){
					swap = sudoku[31];
					sudoku[31] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'f'){
					swap = sudoku[32];
					sudoku[32] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'g'){
					swap = sudoku[33];
					sudoku[33] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'h'){
					swap = sudoku[34];
					sudoku[34] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'i'){
					swap = sudoku[35];
					sudoku[35] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'j'){
					swap = sudoku[36];
					sudoku[36] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'k'){
					swap = sudoku[37];
					sudoku[37] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'l'){
					swap = sudoku[38];
					sudoku[38] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'm'){
					swap = sudoku[39];
					sudoku[39] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'n'){
					swap = sudoku[40];
					sudoku[40] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'o'){
					swap = sudoku[41];
					sudoku[41] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'p'){
					swap = sudoku[42];
					sudoku[42] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'q'){
					swap = sudoku[43];
					sudoku[43] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'r'){
					swap = sudoku[44];
					sudoku[44] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 's'){
					swap = sudoku[45];
					sudoku[45] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 't'){
					swap = sudoku[46];
					sudoku[46] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'u'){
					swap = sudoku[47];
					sudoku[47] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'v'){
					swap = sudoku[48];
					sudoku[48] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'w'){
					swap = sudoku[49];
					sudoku[49] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'x'){
					swap = sudoku[50];
					sudoku[50] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'y'){
					swap = sudoku[51];
					sudoku[51] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = 'z'){
					swap = sudoku[52];
					sudoku[52] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '!'){
					swap = sudoku[53];
					sudoku[53] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '?'){
					swap = sudoku[54];
					sudoku[54] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '@'){
					swap = sudoku[55];
					sudoku[55] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '#'){
					swap = sudoku[56];
					sudoku[56] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '$'){
					swap = sudoku[57];
					sudoku[57] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '%'){
					swap = sudoku[58];
					sudoku[58] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '^'){
					swap = sudoku[59];
					sudoku[59] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '&'){
					swap = sudoku[60];
					sudoku[60] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '*'){
					swap = sudoku[61];
					sudoku[61] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '-'){
					swap = sudoku[62];
					sudoku[62] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '~'){
					swap = sudoku[63];
					sudoku[63] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '+'){
					swap = sudoku[64];
					sudoku[64] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '='){
					swap = sudoku[65];
					sudoku[65] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = ';'){
					swap = sudoku[66];
					sudoku[66] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = ':'){
					swap = sudoku[67];
					sudoku[67] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '<'){
					swap = sudoku[68];
					sudoku[68] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '>'){
					swap = sudoku[69];
					sudoku[69] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '/'){
					swap = sudoku[70];
					sudoku[70] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '('){
					swap = sudoku[71];
					sudoku[71] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = ')'){
					swap = sudoku[72];
					sudoku[72] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '.'){
					swap = sudoku[73];
					sudoku[73] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = ','){
					swap = sudoku[74];
					sudoku[74] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '`'){
					swap = sudoku[75];
					sudoku[75] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '"'){
					swap = sudoku[76];
					sudoku[76] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '}'){
					swap = sudoku[77];
					sudoku[77] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '{'){
					swap = sudoku[78];
					sudoku[78] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = ']'){
					swap = sudoku[79];
					sudoku[79] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '['){
					swap = sudoku[80];
					sudoku[80] = num;


					flag = true;
				}
			}
		} while (false);
		do{
			flag = false;
			for (int i = 0; i < 9; i++){
				if (place = '_'){
					swap = sudoku[81];
					sudoku[81] = num;


					flag = true;
				}
			}
		} while (false);





	}while (true);




		cout << endl;

		system("pause");
		return 0;
	
}