//Завдання 5

#include <iostream>
#include <vector>

class Human
{
public:
    std::string name;
    int years_old;
    void change_name()
    {
        std::cout << "Enter new name:" << std::endl;
        std::cin >> name;
    }
};

class Student : public Human
{
public:
    std::string VNZ;
    std::vector<int> list_of_scores;
    void new_score()
    {
        int score;
        std::cout << "Enter new score:";
        std::cin >> score;
        list_of_scores.insert(list_of_scores.end(),score);
    }

    void avg_score()
    {
        if (list_of_scores.size())
        {
            float avg = 0;
            for (int i = 0; i < list_of_scores.size(); ++i)
            {
                avg += list_of_scores[i];
            }
            avg /= list_of_scores.size();
            std::cout<<"Averange score:"<<avg<<std::endl;
        }
        else
        {
            std::cout << "No scores"<<std::endl;
        }
        
    }
    void watch()
    {
        std::cout << name << std::endl << years_old << std::endl << VNZ<<std::endl;

        for (int i = 0; i < list_of_scores.size(); ++i)
        {
            std::cout << list_of_scores[i] << std::endl;
        }
    }
};

int main()
{
    Student Artem;

    Artem.change_name();

    std::cout << "Enter VNZ:" << std::endl;
    std::cin >> Artem.VNZ;

    std::cout << "Enter years:" << std::endl;
    std::cin >> Artem.years_old;

    while (true)
    {
        std::cout << "1.Add new score:\n2.Averange score:\n3.Change name\n4.Watch all info\nOther number.Exit\nChoice:";
        int choice;
        bool exit = 0;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            Artem.new_score();
            break;
        case 2:
            Artem.avg_score();
            break;
        case 3:
            Artem.change_name();
            break;
        case 4:
            Artem.watch();
            break;
        default:
            exit = 1;
        }
        std::cout << std::endl;
        if (exit)
            break;
    }
    return 0;
}


