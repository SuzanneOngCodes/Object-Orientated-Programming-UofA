#include <iostream>
#include <string>
#include <vector>
#include "Task.h"
#include "HighPriority.h"
#include "MediumPriority.h"
#include "LowPriority.h"
#include "User.h"
#include "RewardsMaster.h"

using namespace std;

//https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c

//Function to validate input.
int validateInput() {
	//Request input.
	int input;
	cin >> input;
	//While input is invalid.
	while (!cin >> input) {
		cin.clear(); //Clear input stream.
		cin.ignore (100, '\n'); //Discard previous input.
		cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.
		//cout << "\nInvalid input! Enter a valid option." << endl; //Print error message.
	}
	return input;
}

//Function to get list.
vector<Task*>* getList(User* owner, int input) {
	vector<Task*>* list; //Initialise variable for list vector.
	cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.

	//Switch statement for lists.
	switch (input) {
		case 1:
			cout << "\n_____________TO-DO LIST_____________\n";
			//Get To-Do list.
			list = owner->ToDoList();
			break;
		case 2:
			cout << "\n___________IN-PROGRESS LIST_________\n";
			//Get In-Progress list.
			list = owner->InProgressList();
			break;
		case 3:
			cout << "\n____________COMPLETE LIST___________\n";
			//Get Complete list.
			list = owner->CompleteList();
			break;
	}
	return list;
}

//Function to print titles of tasks in list and return bool value to determine if vector is empty.
bool printTitles(vector<Task*>* list) {
	//Initialise variable for input and bool variable for emptyvector.
	int input;
	bool emptyVector;

	//If list is empty.
	if (list->empty()) {
		cout << "No tasks to list.\n" << endl;
		emptyVector = 1;
		cout << "***Press any key and hit ENTER to return to main menu***" << endl;
		cin.clear(); //Clear input stream.
		cin >> input;
	}
	else {
		//Loop to print titles of tasks in list.
		for (int i = 0; i < list->size(); i++) {
			emptyVector = 0;
	 		cout << i+1 << " - "<< list->at(i)->getTitle() << " (Priority: " << list->at(i)->getPriority() << ")" << endl;
	 	}
	}
	return emptyVector;
}

//Function for applying reward to user for completing a task.
void applyReward(User* owner, RewardsMaster* giftmaster, vector<Task*>* toNewVector) {
	int day;
	int month;
	int year;
	int difference;
	int reward;
	int input;

	//Request input for date task completed.
	cout << "\nEnter the date the task is completed.\n";
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;

	giftmaster->setDateTaskCompleted(year,month,day); //Function to take in date task completed.

	//Request input for due date of task.
	cout << "\nEnter the date the task was supposed to be due.\n";
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;

	giftmaster->setDateTaskDue(year,month,day); //Function to take in date task was due.

	difference = giftmaster->difference_in_time(); //Function to determine how soon task was completed.
	reward = (toNewVector->back())->setReward(difference); // Determine reward based on how soon task was completed.
	owner->addCoins(reward); //Add reward of coins.
	cout << "\nWell done on completing the task! You have received a reward of " << reward << " coins!" << endl;
	cout << "\n***Press any key to return to main menu.***\n\n";
	cin >> input;	

	return;
}

//Function for task selection and task options.
void selectTask(User* owner, RewardsMaster* giftmaster, vector<Task*>* returnedVector) {
	int input;
	int position;
	vector<Task*>* toNewVector = nullptr;

	cout << "\nSelect a task: ";

	position = validateInput();	//Function for input validation.

	//Request input again if invalid input entered.
	while (position < 1 || position > (returnedVector->size())) {
		cout << "\nInvalid input! Enter a valid option.\nSelect a task: "; //Print error message.
		position = validateInput();
	}

	//Increment position for display and selection purposes.
	position = position - 1;
	cout << "Position: " << position << endl;

	//Display task options.
	cout << "\033[2J\033[1;1H";	//Special character combination to clear the screen.
	cout << "\n_____________TASK OPTIONS___________\n";
	cout << "\nChoose from the following options: \n" << "1 - View task\n" << "2 - delete task\n" << "3 - move task\n" << endl;
	cout << "Selection: ";
	input = validateInput(); //Function for input validation.
	
	//Request input again if invalid input entered.
	while (input < 1 || input > 3) {
		cout << "\033[2J\033[1;1H";	//Special character combination to clear the screen.
		cout << "\n_____________TASK OPTIONS___________\n";
		cout << "\nChoose from the following options: \n" << "1 - View task\n" << "2 - delete task\n" << "3 - move task\n" << endl;
		cout << "\nInvalid input! Enter a valid option.\nSelection: "; //Print error message.
		input = validateInput();
	}

	cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.

	//Switch statement for selected task options.
	switch (input) {
		case 1:
			//View task.
			cout << "\n_____________TASK DETAILS___________\n";
			cout << "Title: " << returnedVector->at(position)->getTitle() << endl;
			cout << "Description: " << returnedVector->at(position)->getDescription() << endl;
			cout << "Priority: " << returnedVector->at(position)->getPriority() << endl;
			cout << "\n***Press any key and hit ENTER to return to main menu***" << endl;
			cin.clear(); //Clear input stream.
			cin >> input;
			break;
		case 2:
			//Delete task.
			owner->deleteTask (returnedVector, position);
			cout << "\nTask deleted!\n";
			cout << "\n***Press any key and hit ENTER to return to main menu***" << endl;
			cin.clear(); //Clear input stream.
			cin >> input;
			break;
		case 3: 
			//Move task.
			cout << "\n_____________MOVING TASK____________\n";
			cout << "Where would you like to move the task to?\n" << "1 - To Do List\n" << "2 - In-Progress List\n" << "3 - Complete List\n"; 
			cout << "\nSelection: ";
			input = validateInput(); //Function for input validation.

			//Request input again if invalid input entered.
			while (input < 1 || input > 3) {
				cout << "\nInvalid input! Enter a valid option.\nSelection: "; //Print error message.
				input = validateInput();
			}

			//Switch statement to select new list to move task to.
			switch (input) {
				case 1:
					toNewVector = owner->ToDoList();
					owner->moveTask(returnedVector, toNewVector, position); //Call function to move task.
					break;
				case 2:
					toNewVector = owner->InProgressList();
					owner->moveTask(returnedVector, toNewVector, position); //Call function to move task.
					break;
				case 3:
					toNewVector = owner->CompleteList();
					owner->moveTask(returnedVector, toNewVector, position); //Call function to move task.
					applyReward(owner, giftmaster, toNewVector); //Function to apply reward to user.
					break;
			}
	}
	return;
}

//Function to create task.
void createTask(User* owner) {
	int input;
	string tempTitle;
	string tempDescription;

	cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.
		
	//Menu for creating task.
	cout << "\n___________TASK CREATION____________\n";
	cout << "\nHow important is the task? Choose priority:\n" << "1 - High\n2 - Medium\n3 - Low\n" << endl;
	cout << "***Press any other key to return to main menu.***\n\n" << "Selection: ";
	cin >> input;
	cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.

	//Switch statement for creating task.
	switch (input) {
		case 1:
			cout << "\n_____CREATING HIGH PRIORITY TASK_____\n";
			cin.clear(); //Clear input stream.
			cin.ignore (100, '\n'); //Discard previous input.

			//Prompt user for task details.
			cout << "\nAdd task title: ";
			getline (cin, tempTitle);
			cout << "Add task description: ";
			getline (cin, tempDescription);

			//Add new task.
			owner->addTask(1, tempTitle, tempDescription);
			break;
		case 2:
			cout << "\n____CREATING MEDIUM PRIORITY TASK____\n";
			cin.clear(); //Clear input stream.
			cin.ignore (100, '\n'); //Discard previous input.

			//Prompt user for task details.
			cout << "\nAdd task title: ";
			getline (cin, tempTitle);
			cout << "Add task description: ";
			getline (cin, tempDescription);

			//Add new task.						
			owner->addTask(2, tempTitle, tempDescription);
			break;
		case 3:
			cout << "\n______CREATING LOW PRIORITY TASK______\n";
			cin.clear(); //Clear input stream.
			cin.ignore (100, '\n'); //Discard previous input.

			//Prompt user for task details.
			cout << "\nAdd task title: ";
			getline (cin, tempTitle);
			cout << "Add task description: ";
			getline (cin, tempDescription);

			//Add new task.						
			owner->addTask(3, tempTitle, tempDescription);
			break;
		default:
			break;
	}
	return;
}

//Function to edit user name.
void editUser(User* owner) {
	string tempName;
	cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.

	//Menu for changing user details.
	cout << "\n________EDITING USER DETAILS________\n";
	cout << "Enter new name: ";
	cin.clear(); //Clear input stream.
	cin.ignore (100, '\n'); //Discard previous input.
	getline (cin, tempName);
	owner->setName(tempName);

	return;
}

//Function to view rewards.
void viewRewards(User* owner) {
	int input;
	cout << "\033[2J\033[1;1H";	//Special character combination to clear the screen.

	//Display coins.
	cout << "\n__________VIEWING REWARDS___________\n";
	cout << "You have " << owner->getCoins() << " coins.\n" << endl;
	cout << "***Press any key and hit ENTER to return to main menu***" << endl;
	cin.clear(); //Clear input stream.
	cin >> input;

	return;
}

//Function to redeem rewards.
void redeemRewards(User* owner, RewardsMaster* giftmaster) {
	int input;
	int redemption;
	vector<string> rewardsList;
	cout << "\033[2J\033[1;1H";	//Special character combination to clear the screen.

	cout << "\n_________REDEEMING REWARDS__________\n";
	rewardsList = giftmaster->getRewardsList(); //Call function from rewardsmaster for rewards list.

	//Print list of rewards options.
	cout << "Which reward would you like to redeem?\n" << endl; 
	for (int i = 0; i < rewardsList.size(); i++) {
	 		cout << i+1 << " - "<< rewardsList.at(i) << endl;
	 	}

	cout << "\nSelection: ";
	input = validateInput(); //Function for input validation.

	//Request input again if invalid input entered.
	while (input < 1 || input > 7) {
		cout << "\nInvalid input! Enter a valid option.\nSelection: "; //Print error message.
		input = validateInput();
	}

	//Request input from user for choice of reward.

	switch (input) {
		case 1:
			redemption = 5;
			break;
		case 2:
			redemption = 10;
			break;
		case 3:
			redemption = 20;
			break;
		case 4:
			redemption = 40;
			break;
		case 5:
			redemption = 50;
			break;
		case 6:
			redemption = 80;
			break;
		case 7:
			redemption = 500;
			break;
	}
	owner->removeCoins(redemption); //Function to remove coins from user.		

	cout << "\n***Press any key and hit ENTER to return to main menu***" << endl;
	cin.clear(); //Clear input stream.
	cin >> input;

	return;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main program.
int main (void)
{
	//Initialise variables.
	string tempName;
	int input;
	vector<Task*>* returnedVector = nullptr;
	bool mainMenu = 1;
	bool emptyVector = 1;

	cout << "\033[2J\033[1;1H"; //Special character combination to clear the screen.
	
	//Request name input.
	cout << "\n*****WELCOME TO YOUR ORGANISER!*****\n\n";
	cout << "Enter your name: ";
	getline (cin, tempName);

	//Create new User and RewardsMaster.
	User* owner = new User(tempName);
	RewardsMaster* giftmaster = new RewardsMaster();

	//Keep looping through program until user chooses to quit.
	while (mainMenu==1) {
		cout << "\033[2J\033[1;1H";	//Special character combination to clear the screen.
		cin.clear(); //Clear input stream.

		//Main menu options.
		cout << "\n_____________MAIN MENU______________\n";
		cout << "What would you like to do today, " << owner->getName() << "?" << endl;
		cout << "1 - View To-Do list\n" << "2 - View In-Progress list\n" <<	"3 - View Complete list\n" 
			 << "4 - Create a task\n" << "5 - Edit user details\n" << "6 - View rewards\n" 
			 << "7 - Redeem rewards\n" << endl;
		cout << "***Press 9 to quit.***\n\n" << "Selection: ";

		input = validateInput(); //Function for input validation.

		//If user chooses to view any of the lists.
		if ((input==1) || (input==2) || (input==3)) {
			returnedVector = getList(owner, input); //Function to get list.
			emptyVector = printTitles(returnedVector); //Function to print titles of tasks in list.
			cin.clear(); //Clear input stream.
			cin.ignore (100, '\n'); //Discard previous input.

    		//If vector is not empty, allow task selection.
    		if (!emptyVector) {
				selectTask(owner, giftmaster, returnedVector); //Function for task selection and task options.
			}
		}
		//If user chooses to create a task.
		else if (input==4) {
			createTask(owner); //Function to create task.
		}
		//If user chooses to edit user details.
		else if (input==5) {
			editUser(owner); //Function to edit user name.
		}
		//If user chooses to view rewards.
		else if (input==6) {
			viewRewards(owner); //Function to view rewards.
		}
		//If user chooses to redeem rewards.
		else if (input==7) {
			redeemRewards(owner, giftmaster); //Function to redeem rewards.
		}
		//If user chooses to quit program.
		else if (input==9) {
			//Exit program.
			cout << "\nExiting program..." << endl;
			mainMenu = 0;
			break;
		}
	}

	//Free memory.
	delete owner;
	delete giftmaster;

	return 0;
}