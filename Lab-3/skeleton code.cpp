#include <iostream>
using namespace std;

int main (){

    int i, temp;
    int variable_counter = 1;
    string statement;


    cout << "Enter the statement:";

    //cin >> statement;
    getline (cin, statement);

    cout << "The entered statement was:" << statement << endl;

    if (statment[0] == '0' || statment[0] == '1' || ...)
	    //print that there is a lexical error here
	    //write a return 0 statement

    else
	    //print <id,
	    //print variable_counter
	    //print >

    for (i = 1; i < statement.length (); i++){
		if (statement[i] == '='){
			// write a break statement here
		}


	}

    //print <=>




    temp = i;

    if (statment[temp + 1] == '0' || statment[temp + 1] == '1' || ...)
        //print that there is a lexical error here
        //write a return 0 statement
	else
	    //increment variable_counter
	    //print <id,
	    //print variable_counter>

	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == '+'){
			// write a break statement here
		}


    }

    //print <+>


    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' || ...)
	    //print that there is a lexical error here
	    //write a return 0 statement
	else
	    //increment variable_counter
	    //print <id,
	    //print variable_counter>

	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == ';'){
			// write a break statement here
		  }


    }

  //print <;>


  return 0;
}

