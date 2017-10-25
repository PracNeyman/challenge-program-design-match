#define _CRT_SECURE_NO_WARNINGS
#define maxN 1000
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string ss;
	getline(cin, ss);
	int maxLen = ss.length() > 0 ? 1 : 0;
	for (int i = 0; i < ss.length(); i++) {
		int j = i - 1;
		int k = i + 1;
		int nowLen = 1;
		while (j > -1 && k < ss.length()) {
			if (ss[j] == ss[k]) {
				nowLen += 2;
				j--;
				k++;
			}
			else {
				break;
			}
		}
		maxLen = maxLen >= nowLen ? maxLen : nowLen;
	}
	for (int i = 0; i < ss.length(); i++) {
		int j = i;
		int k = i + 1;
		int nowLen = 0;
		while (j > -1 && k < ss.length()) {
			if (ss[j] == ss[k]) {
				nowLen += 2;
				j--;
				k++;
			}
			else {
				break;
			}
		}
		maxLen = maxLen >= nowLen ? maxLen : nowLen;
	}
	printf("%d", maxLen);
	system("pause");
	return 0;
}
