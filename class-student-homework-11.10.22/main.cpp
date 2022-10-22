#include <iostream>
#include "header.h"

int main()
{
    Student Kevin;
    Kevin.setName("Kevin");
    Kevin.setSurename("McCallister");
    Kevin.setBirthday("17.03.1941");
    Kevin.setStudentClass(2);
    Kevin.setGroup('A');
     
    std::cout << Kevin.getName() << "\t" << Kevin.getSurename() << "\t" << Kevin.getBirthday() << "\t" << Kevin.getStudentClass() << "\t" << Kevin.getGroup() << "\t";

}
