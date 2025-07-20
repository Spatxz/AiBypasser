#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void slowPrint(const string& text, int delay = 40) {
 for (char c : text) {
  cout << c << flush;
  this_thread::sleep_for(chrono::milliseconds(delay));
 }
 cout << endl;
}

void simulateBypass(const string& input) {
 slowPrint("[*] Starting AI content analysis...");
 this_thread::sleep_for(chrono::seconds(1));

 slowPrint("[*] Running bypass algorithms...");
 this_thread::sleep_for(chrono::seconds(2));

 slowPrint("[*] Rewriting syntax patterns...");
 this_thread::sleep_for(chrono::seconds(2));

 slowPrint("[*] Checking grammar and style...");
 this_thread::sleep_for(chrono::seconds(1));

 slowPrint("[+] Input bypassed AI detection");
 cout << "\nOriginal input:\n" << input << "\n\n";
 cout << "Transformed output:\n";
 slowPrint("This text is carefully rewritten to avoid AI detection.", 20);
}

int main() {
 cout << "AI-Bypasser v1.0\n";
 cout << "Enter the text you want to bypass AI detection:\n> ";

 string input;
 getline(cin, input);

 simulateBypass(input);

 return 0;
}
