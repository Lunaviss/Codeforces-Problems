#include <bits/stdc++.h>
using namespace std;
const int N = 26;

bool isOperand(char digit) {
	if((digit >= 'a' && digit <= 'z') || (digit >= 'A' && digit <= 'Z') || (digit >= '1' && digit <= '9'))
		return true;
	return false;
}

int precedence(char Operator) {
	if (Operator == '^')
		return 3;
	else if (Operator == '/' || Operator == '*')
		return 2;
	else if (Operator == '+' || Operator == '-')
		return 1;
	else
		return -1;
}

void infixToPostfix(string s) {
	stack<char> st;
	string result;

	for(int i = 0; i < s.length(); ++i) {
		char c = s[i]; 

		if (isOperand(c))
			result += c;
		else if (c == '(')
			st.push(c);
		else if (c == ')') {
			while(st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while(!st.empty() && precedence(c) <= precedence(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while(!st.empty()) {
		result += st.top();
		st.pop();
	}
	cout << result;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("learning.INP", "r", stdin);
    string exp;
    cin >> exp;
    infixToPostfix(exp);
}
