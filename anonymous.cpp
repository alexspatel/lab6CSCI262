#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int how_many(vector<string> headlines, vector<string> messages);

int main()
{
	vector<string> headlines;
	headlines.push_back("Earthquake in San Francisco ");
	headlines.push_back("Burglary at musuem in Sweden ");
	headlines.push_back(" Poverty ");
	
	vector<string> messages;
	messages.push_back("Give me my money back ");
	messages.push_back(" I am the best coder ");
	messages.push_back(" TOPCODER ");


	how_many(headlines, messages);

	system("pause");

	return 0;
}

int how_many(vector<string> headlines, vector<string> messages)
{
	int message = 0;

	map<char,int> head;
	map<char,int>::iterator it; // iterator for chars
	int count = 0;

	// Put headlines into a map of chars and ints
	for( int i = 0; i < headlines.size(); i++ )
	{
		string lines = headlines[i];
		for( int j = 0; j < lines.length(); j++ )
		{
			it = head.find(lines[j]);
			if( it != head.end() ) // if letter already in headlines
			{
				count++;
			}
			cout << "insert: " << lines[j] << endl;
			head.insert(pair<char,int>(lines[j], count + 1) );
		}		
	}

	for( int i = 0; i < messages.size(); i++ )
	{
		string mes = messages[i];
		int j = 0;
		for( int j = 0; j < mes.length(); j++ )
		{
			it = head.find(mes[j]);
			if( it != head.end() )
			{
				cout << "found: " << mes[j] << endl;
				j++;
			}
			else	break;
		}
	}
	

	



	return message;
}
