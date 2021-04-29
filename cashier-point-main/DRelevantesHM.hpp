#ifndef DRELEVANTESHM_HPP
#define DRELEVANTESHM_HPP
#include <string>


using namespace std;
class DRelevantesHM
{
	private:
		string depositos;
		string retiros;
		
	public:

	    DRelevantesHM();
        DRelevantesHM(string losDepositos, string losRetiros);
		string getDepositos();
		string getRetiros();
		
};

#endif