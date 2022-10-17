#include <iostream>
#include <string>

class Person {
public:
/*~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    void setAge(int age) {
        _age = age;
    }
    int getAge() {
        return _age;
    }
 /*~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    void setName(std::string name) {
        _name = name;
    }
    std::string getName() {
        return _name;
    }
/*~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    void setSkill(std::string skill) {
        _skill = skill;
    }
    std::string getSkill() {
        return _name;
    }
/*~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    void setWeight(double weight) {
        _weight = weight;
    }
    double getWeight() {
        return _weight;
    }
/*~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    void setHeight(double height) {
        _height = height;
    }
    double getHeight(){
        return _height;
    }
/*~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Person() {};
    Person(int age, std::string name, std::string skill, double weight, double height) {
        _age = age;
        _name = name;
        _skill = skill;
        _weight = weight;
        _height = height;

        std::cout << "Age: " << _age << "\tName: " << _name << "\tSkill: " << _skill << "\tWeight: " << _weight << "\tHeight: " << _height << "\t" << std::endl;
         
    }
private:
    int _age;
    std::string _name;
    std::string _skill;
    double _weight;
    double _height;

};

class Cat{
public:
    Cat(){};
    Cat(char color, int age, std::string breed, std::string name) {
        _color = color;
        _age = age;
        _breed = breed;
        _name = name;

        std::cout << "Color: " << _color << "\tAge: " << _age << " monthes\t" << "Breed: " << _breed << "\tName: " << _name << "\t" << std::endl;
    }
private:
    char _color;
    int _age;
    std::string _breed;
    std::string _name;

};

class Dog{
public:
    Dog() {};
    Dog(char color, int age, std::string breed, std::string name) {
        _color = color;
        _age = age;
        _breed = breed;
        _name = name;

        std::cout << "Color: " << _color << "\tAge: " << _age << " monthes\t" << "Breed: " << _breed << "\tName: " << _name << "\t" << std::endl;
    }
private:
    char _color;
    int _age;
    std::string _breed;
    std::string _name;

}; 

class Car{
public:
    Car(std::string mark, int wheelsize, char color, std::string type, float weight, float maxspeed) {
        _mark = mark;
        _wheelsize = wheelsize;
        _color = color;
        _type = type;
        _weight = weight;
        _maxspeed = maxspeed;


        std::cout << "Mark: " << _mark << "\tWheel size: " << _wheelsize << "\tColor: " << _color << "\tType: " << _type << "\tWeight: " << _weight << "\tMax speed: " << _maxspeed << std::endl;
    }
private:
    std::string _mark;
    int _wheelsize;
    char _color;
    std::string _type;
    float _weight;
    float _maxspeed;
};

int main()
{
    /*Person Man;
    Man.setAge(28);
    std::cout << Man.getAge() << std::endl;*/

    Person John(23, "John", "Cooking", 77.9, 182.2);
    Cat James('b', 72, "black super cat", "James");
    Dog Barker('y', 69, "black very big dog", "Barker");
    Car AudiQ6("Audi", 2, 'g', "Middle", 160.2, 232.9);

    return 0;
}
