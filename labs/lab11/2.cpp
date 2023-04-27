#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
if (atoi(argv[1])>0) exit (1);
else if (atoi(argv[1])==0) exit(2);
else exit(3);
return 0;
}
