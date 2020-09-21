#include <iostream>
#include <string>
using namespace std;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// procekt v0.2   90
// proverka v 0.2 
=======
// procekt v0.2   
>>>>>>> f9284a68d0b806cc51da034817016f7846e9c127
=======
// procekt v0.2  
>>>>>>> parent of e26d3f5... v0.2
=======
// procekt v0.2
>>>>>>> parent of 511dcf7... v0.1
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
