//Завдання 3

#include <iostream>
#include <list>
#include <string>
#include <vector>


class Animal 
{
    public:
        std::string type;
        std::string name;
};

class Zoo 
{
    public:
        std::vector<std::string> animal_list;
        void Add(std::string type, std::string name)
        {
            animal_list.insert(animal_list.end(),name+'\t'+type);
        }
        void Sub()
        {
            if(animal_list.size())
            animal_list.pop_back();
        }
        void Watch()
        {
            for (int i = 0; i < animal_list.size(); ++i)
            {
                std::cout<<animal_list[i]<<std::endl;
            }
        }

};
int main()
{
    Zoo List_of_animals;
    Animal new_animal;
    
    int choice;
    std::string new_name, new_type;
    while (true)
    {
       
        std::cout << "1.Add animal\n2.Delete last added animal\n3.Watch animal list\nOther number.Exit.\nChoice:";
        std::cin >> choice;
        if (choice == 1)
        {
            std::cin >> new_animal.name >> new_animal.type;
            List_of_animals.Add(new_animal.name, new_animal.type);
        }
        else if (choice == 2)
        {
            List_of_animals.Sub();
        }
        else if (choice == 3)
        {
            List_of_animals.Watch();
        }
        else break;
    }
    
}

