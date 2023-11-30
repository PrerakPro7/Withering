#include "testlib.h"
 
int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int t=inf.readInt(1, 100, "n");
    inf.readEoln();
    for(int i = 1;i <= t;i++)
    {
		int x = inf.readInt(1, 100'000, "N");
        inf.readEoln();
    }
    inf.readEof();
}
