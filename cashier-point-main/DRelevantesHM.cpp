#include "DRelevantesHM.hpp"



DRelevantesHM::DRelevantesHM() {}

DRelevantesHM::DRelevantesHM(string losDepositos, string losRetiros)
{
	depositos = losDepositos;
	retiros = losRetiros;
	
}

string DRelevantesHM::getDepositos()
{
	return depositos;
}

string DRelevantesHM::getRetiros()
{
	return retiros;
}	

