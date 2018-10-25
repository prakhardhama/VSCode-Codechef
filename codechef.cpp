#include "competitive.h"
#include "codechef.h"
using namespace std;

//Mention relative path of cpp file to run for example "October Mega Cook-Off 2018 Division 2/ADASTAIR"
string RUN = "October Mega Cook-Off 2018 Division 2/ADASTAIR";

int main() {
    size_t ptr = RUN.find_last_of("/");
    string dir = RUN.substr(0, ptr);
    string file = RUN.substr(ptr + 1);
    string ip = RUN + ".in";
    string op = RUN + ".out";

    printf("Executing File: %s\nLocation: %s\n", file.c_str(), dir.c_str());

    freopen(ip.c_str(), "r", stdin);
    freopen(op.c_str(), "w", stdout);

    process[file]();

    fclose(stdin);
    fclose(stdout);

    return 0;
}