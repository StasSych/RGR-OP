#include <iostream>
using namespace std;

void ResultPrint(bool result) {

	if (result == true) {
		cout << "�������� �i����i�� ���i L" << endl;
	
	}
	else {
		cout << "�������� �� �i����i�� ���i L" << endl;
	
	}
	

}
int main() {
	setlocale(LC_ALL, "ukr");

	char word[]{'+', '3', '7','A','H', '^', '&'};//�������� ���� ��������
	int size = sizeof(word);

	//����� ��������

	static bool result = true;
	for (int i = 0;i < size; i++)
	{

		if (word[0] == '+') {
			if (i + 1 == size) {
				break;
			}
			else {
				if (word[i] == '+') { continue; }
				if (word[i] >= '0' && word[i] <= '9') {
					if (word[i + 1] >= '0' && word[i + 1] <= '9') {
						continue;
					}if (word[i + 1] >= 'A' && word[i + 1] <= 'K') {
						continue;
					}
					if (word[i + 1] == '^' || word[i + 1] == '&') {

						continue;
					}
					else {
						result = false;
						ResultPrint(false);
						break;
					}
				}
				if (word[i] >= 'A' && word[i] <= 'K') {
					if (word[i + 1] >= '0' && word[i + 1] <= '9') {
						result = false;
						ResultPrint(false);
						break;
					}if (word[i + 1] >= 'A' && word[i + 1] <= 'K') {
						continue;
					}
					if (word[i + 1] == '^' || word[i + 1] == '&') {

						continue;
					}
					else {
						result = false;
						ResultPrint(false);
						break;
					}
				}
				if (word[i] == '^' || word[i] == '&') {
					if (word[i + 1] >= '0' && word[i + 1] <= '9') {
						result = false;
						ResultPrint(false);
						break;
					}if (word[i + 1] >= 'A' && word[i + 1] <= 'K') {
						result = false;
						ResultPrint(false);
						break;
					}
					if (word[i + 1] == '^' || word[i + 1] == '&') {

						continue;
					}
					else {
						result = false;
						ResultPrint(false);
						break;
					}
				}
				else {
					result = false;
					ResultPrint(false);
					break;
				}
			}
		}
		else {
			result = false;
			ResultPrint(false);
			break;
		}

		
	}
	if (result == true) {
	
		ResultPrint(true);
	}
	return 0;
}