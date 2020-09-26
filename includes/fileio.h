#ifndef FILEIO_H_
#define FILEIO_H_
#include <string>
#include <vector>
int loadData(const std::string filename, std::vector<process> process) ; 
int saveData(const std::string filename, std::vector<process> process) ;

#endif