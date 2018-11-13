#include "competitive.h"
#include "codechef.h"
using namespace std;

const string DELIM = "**DELIM**";
const string SUBMIT = "submit.cpp";

//TODO Mention relative path of cpp file to run for example "October Mega Cook-Off 2018 Division 2/ADASTAIR"
const string PFILE = "October Mega Cook-Off 2018 Division 2/ADASTAIR";

/*
 * Executes the mentioned PFILE
 */
void run(string pcode) {
    string ip = PFILE + ".in";
    string op = PFILE + ".out";

    printf("Executing File: %s\n", pcode.c_str());
    printf("Reading: %s\n", ip.c_str());
    printf("Writing: %s\n", op.c_str());

    freopen(ip.c_str(), "r", stdin);
    freopen(op.c_str(), "w", stdout);

    process[pcode]();
}

void readBetweenDelims(string in) {
    freopen(in.c_str(), "r", stdin);
    string line;
    while(getline(cin, line)) if(line.find(DELIM) != string::npos) break;

    while(getline(cin, line)) {
        if(line.find(DELIM) != string::npos) break;
        else cout<<line<<endl;
    }
}

/*
 * Generate file for submission to codechef
 */
void generate(string pcode) {
    freopen(SUBMIT.c_str(), "w", stdout);
    readBetweenDelims("competitive.h");
    readBetweenDelims(PFILE + ".cpp");
}

int main() {
    string pcode = PFILE.substr(PFILE.find_last_of("/") + 1);
    
    run(pcode);
    generate(pcode);

    freopen("CONOUT$", "w", stdout);
    freopen("CONIN$", "r", stdin);
    printf("DONE!\n");
    system("pause");
    fclose(stdin);
    fclose(stdout);

    return 0;
}