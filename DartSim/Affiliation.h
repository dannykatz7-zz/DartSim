#pragma once
class Affiliation
{
public:
	Affiliation();
	~Affiliation();
	string getName();
	vector<string> getMembers();
	void setName(string);
	void setMembers(vector<string>);
private:
	string name;
	vector<string> members;
};

