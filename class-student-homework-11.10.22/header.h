#pragma once
class Student {
public:
    /*~~~~~~~~~~~~~~Name~~~~~~~~~~~~~~~~~*/
    void setName(std::string name) {
        _name = name;
    }

    std::string getName() {
        return _name;
    }
    /*~~~~~~~~~~~~~~Surename~~~~~~~~~~~~~~~~~*/
    void setSurename(std::string surename) {
        _surename = surename;
    }

    std::string getSurename() {
        return _surename;
    }
    /*~~~~~~~~~~~~~~Birthday~~~~~~~~~~~~~~~~~*/
    void setBirthday(std::string birthday) {
        _birthday = birthday;
    }

    std::string getBirthday() {
        return _birthday;
    }
    /*~~~~~~~~~~~~~~StudentClass~~~~~~~~~~~~~~~~~*/
    void setStudentClass(int studentClass) {
        _studentClass = studentClass;
    }

    int getStudentClass() {
        return _studentClass;
    }
    /*~~~~~~~~~~~~~~Group~~~~~~~~~~~~~~~~~*/
    void setGroup(char group) {
        _group = group;
    }

    char getGroup() {
        return _group;
    }

private:
    std::string _name;
    std::string _surename;
    std::string _birthday;
    int _studentClass;
    char _group;

};
