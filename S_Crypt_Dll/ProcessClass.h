#include <vector> 
#include <atlstr.h>
using namespace std;

//First instantiate ProcessInfo

class ProcessInfo
{
public:
	CString ProcName;
	ProcessInfo(char* InProcName);
	
};

class ProcessHandle//Only Have ProcessHandle Object
{
public:
	vector<ProcessInfo*> ProcessInfos;//vec.push_back(new A(123,111,"abcd"));
	void InsertProcessInfo(char* ProcName);
};