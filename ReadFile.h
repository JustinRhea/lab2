#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile{
   private:
      ifstream input_file;
      bool _eof;
      bool closed;
   public:
      ReadFile(const char* file_name);
      ~ReadFile();
      String* readLine();
      bool eof();
      void close();
};

/*
struct ReadFile
{
   ifstream input_file;
   bool _eof;
   bool closed;
};

ReadFile* createReadFile(const char* file_name);
void destroyReadFile(ReadFile* rf);
String* readLine(ReadFile* rf);
bool eof(ReadFile* rf);
void close(ReadFile* rf);
*/
#endif
