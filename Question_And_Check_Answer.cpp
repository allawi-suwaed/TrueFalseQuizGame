#include<iostream>
#include<string>
using namespace std;

// Function to read answer from user, ensuring it's either "True" or "False"
string Read_Answer_form_user(string Message)
{
    string Answer_from_user;
    do
    {
        // Prompt the user to answer the question with "True" or "False" only
        cout<<"Please Answer The Question True Or False Only : "<<endl;
        cout<<Message<<endl;
        cin>>Answer_from_user;
    }while( Answer_from_user != "True" && Answer_from_user != "False" );  
    // Repeat until valid input is provided

    return Answer_from_user;  
    // Return the user's valid answer
}

// Function to print whether the user's answer is correct or incorrect
void Print_Correct_Incorrect_Answer(string Answer_by_user,string Correct_Answer,int Question_Number)
{
    // Check if the user's answer matches the correct answer
    if(Answer_by_user == Correct_Answer)
    {
        cout<<"Question "<<Question_Number<<": Correct Answer "<<endl;    
        // Print "Correct Answer" if answers match
    }
    else
    {
        // Print "Incorrect Answer" and display the correct answer
        cout<<"Question "<<Question_Number<<": Incorrect Answer and "<<Correct_Answer<<" is a correct answer"<<endl;
    }  
}

int main()
{
    string Answer_By_User[3];  
    // Array to store user's answers
    
    // Array of questions to ask the user
    string Questios[3]={"Programming Languages is tools?",
                        "Can you write loop in code using if statment?",
                        "Command cin using to print on screen?"};
    
    // Array of correct answers for each question
    string Correct_Answer[3]={"True","False","False"};

    // Loop through each question, get the user's answer and store it in Answer_By_User array
    for(int i = 0; i <= 2 ;i++)
    {
        Answer_By_User[i]+=Read_Answer_form_user(Questios[i]);  
        // Call function to get user's answer
    }

    // Loop through the user's answers and check them against the correct answers
    for(int j = 0; j <= 2 ;j++)
    {
        Print_Correct_Incorrect_Answer(Answer_By_User[j],Correct_Answer[j],j+1);  
        // Call function to print result
    }
    
    return 0;
}
