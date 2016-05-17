#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	cout << "Welcome to Sudoku, the game for lonely people." << endl;
	cout << "But I'm the one who had time to actually make it... " << endl;
	cout << "...what does that say about me..?" << endl;
	cout << ":( " << endl;
	cout << "ANYWAYS.." << endl;
	cout << "Go ahead and start." << endl;
	cout << endl;
	cout << " __ __ __    __ __ __    __ __ __ " << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl << endl <<
			" __ __ __    __ __ __    __ __ __ " << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl << endl <<
			" __ __ __    __ __ __    __ __ __ " << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl <<
			"|  |  |  |  |  |  |  |  |  |  |  |" << endl <<
			"|__|__|__|  |__|__|__|  |__|__|__|" << endl << endl;


	int height = 0;
	int length = 0;
	int num = 0;
	/*
	
	cout << "Pick a position top to bottom and left to right" << endl;
	cin >> x;

	if (x > 9 || x < 1){
		cout << x << " is an invalid number, try again" << endl << endl;
		cin >> x;
	}
	cin >> y;

	if (y > 9 || y < 1){
		cout << y << " is an invalid number, try again" << endl << endl;
		cin >> y;
	}
	cout << "which number goes there?" << endl;
	cin >> num;

	if (num > 9 || num < 1){
		cout << num << " is an invalid number, try again" << endl << endl;
		cin >> num;
	}
*/

	
	char square[82] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' , '10' , '11' , '12' , '13','14','15','16','17','18','19','20','21','22','23','24','25','26','27','28','29','30','31','32','33','34','35','36','37','38','39','40','41','42','43','44','45','46','47','48','49','50','51','52','53','54','55','56','57','58','59','60','61','62','63','64','65','66','67','68','69','70','71','72','73','74','75','76','77','78','79','80','81'};


	cout << "     |     |     |     |     |     |     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "_____|_____|_____|_____|_____|_____|_____|_____|_____" << endl;
	cout << "     |     |     |     |     |     |     |     |     " << endl;

	
	cout << "  " << square[10] << "  |  " << square[11] << "  |  " << square[12] << "  |  " << square[13] << "  |  " << square[14] << "  |  " << square[15] << "  |  " << square[16] << "  |  " << square[17] << "  |  " << square[18] << endl;

	cout << "_____|_____|_____|_____|_____|_____|_____|_____|_____" << endl;
	cout << "     |     |     |     |     |     |     |     |     " << endl;


	cout << "  " << square[19] << "  |  " << square[20] << "  |  " << square[21] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[22] << "  |  " << square[23] << "  |  " << square[24] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[25] << "  |  " << square[26] << "  |  " << square[27] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[28] << "  |  " << square[29] << "  |  " << square[30] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[31] << "  |  " << square[32] << "  |  " << square[33] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[34] << "  |  " << square[35] << "  |  " << square[36] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[37] << "  |  " << square[38] << "  |  " << square[39] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[40] << "  |  " << square[41] << "  |  " << square[42] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[43] << "  |  " << square[44] << "  |  " << square[45] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[46] << "  |  " << square[47] << "  |  " << square[48] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[49] << "  |  " << square[50] << "  |  " << square[51] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[52] << "  |  " << square[53] << "  |  " << square[54] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[55] << "  |  " << square[56] << "  |  " << square[57] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[58] << "  |  " << square[59] << "  |  " << square[60] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[61] << "  |  " << square[62] << "  |  " << square[63] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[64] << "  |  " << square[65] << "  |  " << square[66] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[67] << "  |  " << square[68] << "  |  " << square[69] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[70] << "  |  " << square[71] << "  |  " << square[72] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[73] << "  |  " << square[74] << "  |  " << square[75] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[76] << "  |  " << square[77] << "  |  " << square[78] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[78] << "  |  " << square[80] << "  |  " << square[81] << endl;


	cout << "     |     |     " << endl << endl;

	cout << endl;

	system("pause");
	return 0;
}