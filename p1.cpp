#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse_second_part(int mid, string &second_part, string input) {
	char temp;
	if (mid == 1) {
		temp = input[1];
		second_part += temp;
		return;
	}
	if (mid > input.size()) {
		return;
	}
	else {
		temp = input[mid];
		second_part += temp;
		mid += 1;
		return reverse_second_part(mid, second_part, input);
	}
}
void reverse_first_part(int mid, int i, string &first_part, string input) {
	char temp;
	if (mid == 1) {
		temp = input[0];
		first_part += temp;
		return;
	}
	if (i == mid) {
		return;
	}
	else {
		temp = input[i];
		first_part += temp;

		return reverse_first_part(mid, i + 1, first_part, input);
	}
}
int main(void) {
	int i = 0;
	string input, first_part, second_part;
	cin >> input;

	if (input.size() == 1) {
		cout << endl << input;
	}
	else {
		int mid = input.size() / 2;
		reverse_first_part(mid, i, first_part, input);
		reverse_second_part(mid, second_part, input);
	}
	input = second_part + first_part;
	cout << input;

}
