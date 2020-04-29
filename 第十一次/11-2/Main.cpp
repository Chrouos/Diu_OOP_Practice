#include<iostream>
#include"stack.h"
using namespace std;

int main() {

	char c;
	Stack<char> bottle;

	//將九個字元 輸入進Bottle裡面 一個一個放
	for (int i = 0; i < 9; i++) {
		cin >> c;
		bottle.push(c);
	}
	
	int n1, symbol, n2, ans = 0;
	for (int i = 0; i < 4; i++) {

		//給予的數字為 ACSII值(char)
		//補充：數字的ASCII需 -48 ， ASCII: 加為43 、 減為45 、 乘為42 、 除為47
		n1 = bottle.pop() - 48; 
		symbol = bottle.pop();
		n2 = bottle.pop() - 48;
		//cout << n1 << " " << symbol << " " << n2 << endl;  可以利用此串去檢查

		//拿出來的順序為 >> n1, symbol, n2 ， 所以計算為 n2 (+-*/) n1。	
		//ex. 9 - 6 ， n1 = 6 , symbol = - , n2 = 9 所以變成 n2 - n1 = 9 - 6 。
		if (symbol == 43) ans = n2 + n1;  
		else if (symbol == 45) ans = n2 - n1;
		else if (symbol == 42) ans = n2 * n1;
		else if (symbol == 47) ans = n2 / n1;

		cout << ans << endl;
		
		//再次放入答案
		bottle.push(ans + 48); //由於這次放入的是int ， 所以主動加入48

	}


	system("pause");
	return 0;

}