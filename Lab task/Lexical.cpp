#include <iostream>
using namespace std;

int main (){

    int i, temp;
    string statement;


    cout << "Enter the statement:";

    //cin >> statement;
    getline (cin, statement);

    cout << "The entered statement was:" << statement << endl;

    if (statement[0] == '0' || statement[0] == '1' || statement[0] == '2'|| statement[0] == '3'|| statement[0] == '4'|| statement[0] == '5'|| statement[0] == '6'|| statement[0] == '7'|| statement[0] == '8'|| statement[0] == '9')
	    {
	        //print that there is a lexical error here
	    cout<<"Error"<<endl;
	    //write a return 0 statement
	    return 0;
	    }

    else{
	    //print statement[0]
	    cout<<statement[0];
        }

    for (i = 1; i < statement.length (); i++){
		if (statement[i] == '='){
			// write a break statement here
			break;
		}
        else{
		//print statement[i]
		cout<<statement[i];
        }
	}
    //print new line here
    cout<<endl;
    //print =, you may use the value of i to print =
    //print statement[i]
    cout<< statement[i]<<endl;




    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' || statement[temp + 1] == '2' ||statement[temp + 1] == '3' ||statement[temp + 1] == '4' ||statement[temp + 1] == '5' ||statement[temp + 1] == '6' ||statement[temp + 1] == '7' ||statement[temp + 1] == '8' ||statement[temp + 1] == '9')
        {

         //print that there is a lexical error here
        cout<<"Lexical Error"<<endl;
        //write a return 0 statement
        return 0;
        }
	else{
	    //print statement[temp+1]
	    cout<<statement[temp+1];
	}


 for (i = temp+2; i < statement.length (); i++){
		if (statement[i] == '+'){
			// write a break statement here
			break;
		}
        else{
		//print statement[i]
		cout<<statement[i];
        }
	}
	//print new line here
    cout<< endl;
    //print =, you may use the value of i to print =
    //print statement[i]
    cout<< statement[i]<<endl;




       temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' || statement[temp + 1] == '2' ||statement[temp + 1] == '3' ||statement[temp + 1] == '4' ||statement[temp + 1] == '5' ||statement[temp + 1] == '6' ||statement[temp + 1] == '7' ||statement[temp + 1] == '8' ||statement[temp + 1] == '9')
        {

         //print that there is a lexical error here
        cout<<"Error"<<endl;
        //write a return 0 statement
        return 0;
        }
	else{
	    //print statement[temp+1]
	    cout<<statement[temp+1];
	}


 for (i = temp+2; i < statement.length (); i++){
		if (statement[i] == ';'){
			// write a break statement here
			break;
		}
        else{
		//print statement[i]
		cout<<statement[i];
        }
	}
	//print new line here
    cout<<endl;
    //print =, you may use the value of i to print =
    //print statement[i]
    cout<< statement[i]<<endl;
    return 0;
}
