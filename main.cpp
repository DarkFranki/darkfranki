#include <iostream>
#include <string>
using namespace std;
/* The Hello World project is a time-honored tradition in computer programming. It is a simple exercise that gets you started when learning something new. Let�s get started with GitHub!

You�ll learn how to:

Create and use a repository
Start and manage a new branch
Make changes to a file and push them to GitHub as commits
Open and merge a pull request */

int main()
 {
 	int arr[5] = {3,5,7,6,9};  
 	
 	int command;
 	
 	int value;
 	int indx;
 	
 	setlocale(0, "");
 	
 	
 	while (true)			
{
	cout << "0 - âûõîä 1 - âûâîä 2 - çàïèñü(íå áîëåå 5 ýë) 3 - ñîðò" << endl <<  "Ââåäèòå êîììàíäó:";
	cin>>command;
	system("cls");
	
	switch (command)
	{
		case 1:
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl<<endl;
		break;
			
		case 2:
			cout<<"Ââåäèòå íîìåð ýëåìåíòà äëÿ çàïèñè è åãî çíà÷åíèå:";
			cin>>indx>>value;
			
			arr[indx] = value;
			system("cls");
		break;
		
		case 3:
		
		break;	
		
		case 0:
			return 0;
		break;
		
	}
}
 	
	return 0;
 }
