#pragma once
#include <iostream>
#include <string>
#include <exception>
class Worker
{
public:
	Worker();
	friend std::ostream& operator<< (std::ostream& out, Worker& object);
	friend std::istream& operator>> (std::istream& in, Worker& object);
	Worker(std::string& full_name, std::string& post, int& year_of_admission);
	~Worker();
	Worker(Worker& copy);
	Worker& operator =(Worker& copy);
	std::string GetFullName();
	int GetYearOfAdmission();
private:
	std::string full_name_;
	std::string post_;
	int year_of_admission_;
};
