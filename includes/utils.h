
#ifndef UTILS_H_
#define UTILS_H_
#include <vector>
void sortData( const SORT_ORDER mySortOrder, std::vector<process> myProccess)  
;
process getNext(std::vector <process> myProcess);
int getSize(std::vector<process> myProcess) ;
int handleMissingData(std::vector <process> myProcess) ;
#endif