#pragma once
#include <string>

class PersonType {
private:
    std::string ssn;
    std::string firstname;
    std::string lastname;
    std::string gender;
    std::string birthdate;
    std::string birthplace;
    std::string address;
    std::string tel;

public:
    PersonType();
    PersonType(std::string ssn, std::string firstname, std::string lastname, std::string gender, std::string birthdate, std::string birthplace, std::string address, std::string tel);

    void setSSN(std::string ssn);
    void setFirstname(std::string firstname);
    void setLastname(std::string lastname);
    void setGender(std::string gender);
    void setBirthdate(std::string birthdate);
    void setBirthplace(std::string birthplace);
    void setAddress(std::string address);
    void setTel(std::string tel);

    std::string getSSN() const;
    std::string getFirstname() const;
    std::string getLastname() const;
    std::string getGender() const;
    std::string getBirthdate() const;
    std::string getBirthplace() const;
    std::string getAddress() const;
    std::string getTel() const;

    void getInformation() const;
};


