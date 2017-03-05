#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

class Sir{
	public:
		Sir operator+(char *sir_adaug);
		Sir(char *in_sir){
			strcpy(buffer,in_sir);
			lung = strlen(buffer);
		}
		Sir(){
			lung = 0;
		}
		void arata_sir(){
			cout << buffer;
		}

	private:
		char buffer[256];
		int lung;
};

Sir Sir::operator+(char *sir_adaug){
	Sir temp;
	int lungTemp;
	lungTemp = strlen(buffer) + strlen(sir_adaug) + 1;
	if (lungTemp > 256){
		cout << "Sir prea lung!" << endl;
		strcpy(temp.buffer, buffer);
		return temp;
	}
	lung = lungTemp;
	strcpy(temp.buffer, buffer);
	strcat(temp.buffer , sir_adaug);
	return temp;
}

void main(){
	Sir titlu("Jamsas C/C++");
	titlu = titlu + "Programmers Bible\n";
	titlu.arata_sir();
	system("pause");
}

