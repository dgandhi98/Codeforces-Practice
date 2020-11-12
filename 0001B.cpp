#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>

#define forn(n) for(int i = 0; i < n; i++)
using namespace std;

void Convert(string s) {
int nTmp = 0;
bool bTmp = false;
for(int i = 0; i < s.size(); i++)
{
	if(isdigit(s[i]) && !bTmp) { bTmp = true; nTmp++; }
	if(!isdigit(s[i])) { bTmp = false; }
}
if(nTmp!=1) {
	//int col_num = stoi(sm[2]);
	int col_num = 0;
	int nPos = s.find('C');
	for(int i = nPos+1; i < s.size(); ++i){
		col_num *= 10;
		col_num += (s[i] - '0');
	}
	string col = "";
	while(col_num > 0) {
		if(col_num % 26==0) {
		col = 'Z' + col; col_num/=26; col_num--; continue;
		}
		char dig = (char)(((col_num-1) % 26)+'A');
		col = dig + col;
		col_num /= 26;
	}
	cout << col << s.substr(1, nPos-1) << '\n';
} else {
//	regex re2("^([A-Z]+)([0-9]+)$");
//	regex_match(s, sm,re2); 
//	string col = sm[1];

	string row, col;
	for(int i = 0; i < s.size(); i++) {
		if(isalpha(s[i])) { col += s[i]; }
		else {row+=s[i];}
	}
	int col_num{0};
	for(int i = 0; i < col.size(); ++i) {
		int dig = (col[i]-'A')+1;

		for(int j = 1; j < col.size()-i; ++j) {
			dig*=26;
		}
		
		col_num += dig;
	}

	cout << "R" << row << "C" << col_num << '\n';
}
}

int main() {
	string s;
	int n{};
	cin >> n;
	//regex re("^R([0-9]+)C([0-9]+)$");
	//smatch sm;
	for(int k = 0; k < n; k++) {
	cin >> s;
	Convert(s);
	}
}
