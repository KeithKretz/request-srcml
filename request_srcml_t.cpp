/*
  @file request_srcml_t.cpp

  Test program for request_srcml()
*/

#include "request_srcml.hpp"
#include <cassert>

int main() {

	// all filenames and languages empty
    {
    	srcml_request request = { "", "", "", ""};
    	assert(request_filename(request) == "");
    	assert(request_language(request, "") == "");
    }
	//test1 for local-file name
    {
    	srcml_request request = { "", "mytest.cpp", "", ""};
    	assert(request_filename(request) == "mytest.cpp");
    	assert(request_language(request, "") == "");
    }
	//test2 for entry-file name if local on disk
    {
    	srcml_request request = { "", "file.zip", "mytest.cpp", ""};
    	assert(request_filename(request) == "mytest.cpp");
    	assert(request_language(request, "") == "");
    }
    return 0;
}
