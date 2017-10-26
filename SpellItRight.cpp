#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>

char* duiying(int i) {
	switch (i)
	{
	case 1:
		return "one";
		break;
	case 2:
		return "two";
		break;
	case 3:
		return "threee";
		break;
	case 4:
		return "four";
		break;
	case 5:
		return "five";
		break;
	case 6:
		return "six";
		break;
	case 7:
		return "seven";
		break;
	case 8:
		return "eight";
		break;
	case 9:
		return "nine";
		break;
	case 0:
		return "zero";
		break;
	default:
		return "none";
		break;
	}
}

int main() {
	int  sum = 0;
	std::string line;
	std::cin >> line;
	for (int i = 0; i < line.length(); i++) {
		sum +=(line[i]-'0');
	}
	std::ostringstream stream;
	stream << sum;
	std::string str = stream.str();
	int i=0;
	for (i = 0; i < str.length()-1; i++) {
		printf(duiying(str[i]-'0'));
		printf(" ");
	}
	if (str.length() > 0)
		printf(duiying(str[i] - '0'));
	else
		printf("zero");
	return 0;
}