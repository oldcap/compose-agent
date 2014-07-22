#define __GXX_EXPERIMENTAL_CXX0X__ 1
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int read_config(string fname, unordered_map <string, int> *m)
{
	ifstream config_file (fname);
	string line;
	if (config_file.is_open()) {
		while (getline(config_file,line)) {
			cout << line << '\n';
		}

		config_file.close();
	}
	// (*m)["foo"] = 77;
	return 0;
}
int main(int argc, char **argv)
{
	unordered_map <string, int> map;
	read_config("compose-agent.cpp", &map);

	cout << map["foo"] << endl;
	while (1) {
		;
	}
	return 0;
}