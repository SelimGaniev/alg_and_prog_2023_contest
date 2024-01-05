#include<iostream>
#include<string>
#include<stack>
bool isBalanced(const std::string& text) {
	std::stack <char>st;

	for (char c : text) {
		if (c == '(' || c == '{' || c == '[') {
			st.push(c);
		}
		else if (c == ')' || c == '}' || c == ']') {
			if (st.empty()) {
				return false;
			}

			char top = st.top();
			st.pop();

			if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
				return false;
			}
		}
	}

	return st.empty();
}

int main() {
	std::string text;
	std::getline(std::cin, text, '!');

	if (isBalanced(text)) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}

	return 0;
}