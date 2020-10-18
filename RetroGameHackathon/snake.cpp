#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main (void) {
	for (int i = 0; i < 44; i++) {
		if (i > 5 && i < 10) {
			cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen
			cout  << "||" << string(i,' ') << ":>" << string(10-i,' ') << "@" << string(33,' ') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(44-i,' ') << "<:" << string(i,' ') << "||" << endl;
			chrono::milliseconds dura(200);
			this_thread::sleep_for( dura );
		}
		else if (i >= 10 && i < 20) {
			cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen
			cout  << "||" << string(i,' ') << "=:>" << string(43-i,' ') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(44-i,' ') << "<:" << string(i,' ') << "||" << endl;
			chrono::milliseconds dura(200);
			this_thread::sleep_for( dura );
		}
		else if (i >= 20 && i < 25) {
			cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen
			cout  << "||" << string(i,' ') << "=:>" << string(25-i,' ') << "@" << string(17,' ') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(44-i,' ') << "<:" << string(i,' ') << "||" << endl;
			chrono::milliseconds dura(200);
			this_thread::sleep_for( dura );
		}
		else if (i >= 25) {
			cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen
			cout  << "||" << string(i,' ') << "==:>" << string(42-i,' ') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(44-i,' ') << "<:" << string(i,' ') << "||" << endl;
			chrono::milliseconds dura(200);
			this_thread::sleep_for( dura );
		}
		else {
			cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen
			cout  << "||" << string(i,' ') << ":>" << string(44-i,' ') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(6,'\t') << "||" << endl;
			cout  << "||" << string(44-i,' ') << "<:" << string(i,' ') << "||" << endl;
			chrono::milliseconds dura(200);
			this_thread::sleep_for( dura );
		}
	}
}