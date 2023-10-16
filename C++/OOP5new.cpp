// OOP5new.cpp - Objects


#include <iostream>
#include<list>
using namespace std;


class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
};

int main()
{
	YouTubeChannel ytChannel;
	ytChannel.Name = "CodeBeauty";
	ytChannel.OwnerName = "Saldina";
	ytChannel.SubscribersCount = 1800;
	ytChannel.PublishedVideoTitles = { "C++ 1", "HTML video", "C++ 2" };

	cout << endl << "Name: " << ytChannel.Name;
	cout << endl << "Owner Name: " << ytChannel.OwnerName;
	cout << endl << "Subscribe Count: " << ytChannel.SubscribersCount << endl;
	cout << "Videos: " << endl;
	cout << endl;
	for (string videoTitle : ytChannel.PublishedVideoTitles) {
		cout << videoTitle << endl;
	}

}

