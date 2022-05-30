#include <iostream>
using namespace std;

char stvorec[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();

//táto časť vysvetľuje voľby hráčov

int main()
{
    int hrac = 1, i, choice;

    char mark;
    do
    {
        board();
        hrac = (hrac % 2) ? 1 : 2;

        cout << "Hrac " << hrac << ", zvol cislo pola:  ";
        cin >> choice;

        mark = (hrac == 1) ? 'X' : 'O';

        if (choice == 1 && stvorec[1] == '1')

            stvorec[1] = mark;
        else if (choice == 2 && stvorec[2] == '2')

            stvorec[2] = mark;
        else if (choice == 3 && stvorec[3] == '3')

            stvorec[3] = mark;
        else if (choice == 4 && stvorec[4] == '4')

            stvorec[4] = mark;
        else if (choice == 5 && stvorec[5] == '5')

            stvorec[5] = mark;
        else if (choice == 6 && stvorec[6] == '6')

            stvorec[6] = mark;
        else if (choice == 7 && stvorec[7] == '7')

            stvorec[7] = mark;
        else if (choice == 8 && stvorec[8] == '8')

            stvorec[8] = mark;
        else if (choice == 9 && stvorec[9] == '9')

            stvorec[9] = mark;
        else
        {
            cout << "Neplatny pokus, stlac ENTER a skus to znova";

            hrac--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();

        hrac++;
    } while (i == -1);
    board();
    if (i == 1)

        cout << "==>\aHrac " << --hrac << " vyhral! ";
    else
        cout << "==>\aRemiza!";

    cin.ignore();
    cin.get();
    return 0;
}

//táto časť vysvetľuje všetky výherné možnosti (iba výherné kombinácie)

int checkwin()
{
    if (stvorec[1] == stvorec[2] && stvorec[2] == stvorec[3])

        return 1;
    else if (stvorec[4] == stvorec[5] && stvorec[5] == stvorec[6])

        return 1;
    else if (stvorec[7] == stvorec[8] && stvorec[8] == stvorec[9])

        return 1;
    else if (stvorec[1] == stvorec[4] && stvorec[4] == stvorec[7])

        return 1;
    else if (stvorec[2] == stvorec[5] && stvorec[5] == stvorec[8])

        return 1;
    else if (stvorec[3] == stvorec[6] && stvorec[6] == stvorec[9])

        return 1;
    else if (stvorec[1] == stvorec[5] && stvorec[5] == stvorec[9])

        return 1;
    else if (stvorec[3] == stvorec[5] && stvorec[5] == stvorec[7])

        return 1;
    else if (stvorec[1] != '1' && stvorec[2] != '2' && stvorec[3] != '3'
        && stvorec[4] != '4' && stvorec[5] != '5' && stvorec[6] != '6'
        && stvorec[7] != '7' && stvorec[8] != '8' && stvorec[9] != '9')

        return 0;
    else
        return -1;
}

// táto časť kodu slúži na vytvorenie mriežky, do ktorej sa kreslia pokusy hráčov

void board()
{
    system("cls");
    cout << "\n\n\t ZABAVNE PISKVORKY\n\n";

    cout << "Hrac 1 (X)  -  Hrac 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << stvorec[1] << "  |  " << stvorec[2] << "  |  " << stvorec[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << stvorec[4] << "  |  " << stvorec[5] << "  |  " << stvorec[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << stvorec[7] << "  |  " << stvorec[8] << "  |  " << stvorec[9] << endl;

    cout << "     |     |     " << endl << endl;
}