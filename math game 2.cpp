#include <iostream>
#include <random>
#include <ctime>
using namespace std;

    int Q_NO = 1;
    int Correct = 0;
    int Wrong = 0;
    bool ask [10]= {true, true, true, true, true, true, true, true, true, true };


    void display_random_question();
    void display();
    void question(string question , string a , string b , string c , string d , char correctA);
    void result();
int main()
{
    

    return 0;
}

    void display(){

    system("cls");
    cout << "Question No:" << Q_NO << "\t\tCorrect Answer:" << Correct << "\t\tWrong Answer:" << Wrong << endl << endl;        
    display_random_question();



    }

    void display_random_question()
    {
        srand(time(0));
        bool is_question_remaining = false;
        for(int i=0; i<10; i++)
        {
            if (ask [i])
            {
                is_question_remaining = true;
                break;

            }      
        }
        while ( is_question_remaining)
        {
            int no = rand()%10;
            if(ask[no]){
                ask[no] = false;
                switch (no)
                {
                case 0 :
                    question("AWhich is greater than 4?" , "5" , "-5" , "-1/2", "-25" , 'A');
                    break;
                 case 1 :
                    question("BCombine terms: 12a + 26b - 4b - 16a?" , "4a + 22b" , "-28a + 30b" , "-4a + 22b", "28a + 30b" , 'C');
                    break;
                 case 2 :
                    question("CWhat is |-26|?" , "-26" , "26" , "0", "1" , 'B');
                    break;
                 case 3 :
                    question("DFactor: 5x2 - 15x - 20?" , "-1" , "-2" , "1", "2" , 'A');
                    break;  
                 case 4 :
                    question("EFactor: 3y(x - 3) -2(x - 3)" , "(x - 3)(x - 3)" , "(x - 3)2" , "(x - 3)(3y - 2)", "3y(x - 3)" , 'C');
                    break;  
                 case 5 :
                    question("FSolve for x: 2x - y = (3/4)x + 6?" , "(y + 6)/5" , "4(y + 6)/5" , "(y + 6)", "4(y - 6)/5" , 'B');
                    break;  
                 case 6 :
                    question("GFind the value of 3 + 2 � (8 - 3)?" , "25" , "13" , "17", "24" , 'D');
                    break;
                 case 7 :
                    question("HWhat is the symbol of pi" , "�" , "p" , "O", "8" , 'B');
                    break; 
                 case 8 :
                    question("I20 is divisible by?" , "1" , "3" , "7", "None of these" , 'A');
                    break;
                 case 9 :
                    question("JHow much is 190 - 87 + 16?" , "103" , "261" , "87", "119" , 'D');
                    break;
                
                    
                }
            }
        }
        
        result();




                    
    }
    void result()
    {
        system("cls");
        cout << "Total question = " << Q_NO-1 << endl;
        cout << "Correct answer = " << Correct << endl;
        cout << "Wrong answer =  "  << Wrong << endl;
        if(Correct > Wrong)
            cout << "Result = Pass" << endl;
        else if(Wrong > Correct)
            cout << "Result = Fail" << endl;
        else
            cout << "Result = Tie" << endl;




    }
    void question(string question, string a, string b, string c, string d, char correctA)
    {
        cout << question << endl;
        cout << "A.\t" << a << endl;
        cout << "B\t" << b << endl;
        cout << "C\t" << c << endl;
        cout << "D\t" << d << endl;
        char answer;
        cin >> answer;
        if (answer == correctA)
        Correct++;
        else
        Wrong++;
        Q_NO++;
        display();





    }
