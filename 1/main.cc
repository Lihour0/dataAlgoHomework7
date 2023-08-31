#include <iostream>
#include <string>
#include "main.h"

PersonType::PersonType() {}

PersonType::PersonType(std::string ssn, std::string firstname, std::string lastname, std::string gender, std::string birthdate, std::string birthplace, std::string address, std::string tel) : ssn(ssn), firstname(firstname), lastname(lastname), gender(gender), birthdate(birthdate), birthplace(birthplace), address(address), tel(tel) {}

void PersonType::setSSN(std::string ssn)  {
  this->ssn = ssn;
}

void PersonType::setFirstname(std::string firstname) {
  this->firstname = firstname;
}

void PersonType::setLastname(std::string lastname) {
  this->lastname = lastname;
}

void PersonType::setGender(std::string gender) {
  this->gender = gender;
}

void PersonType::setBirthdate(std::string birthdate) {
  this->birthdate = birthdate;
}

void PersonType::setBirthplace(std::string birthplace) {
  this->birthplace = birthplace;
}

void PersonType::setAddress(std::string address) {
  this->address = address;
}

void PersonType::setTel(std::string tel) {
  this->tel = tel;
}

std::string PersonType::getSSN() const {
  return ssn;
}

std::string PersonType::getFirstname() const {
  return firstname;
}

std::string PersonType::getLastname() const {
  return lastname;
}
std::string PersonType::getGender() const {
  return gender;
}

std::string PersonType::getTel() const {
  return tel;
}
std::string PersonType::getAddress() const {
  return address;
}
std::string PersonType::getBirthdate() const {
  return birthdate;
}
std::string PersonType::getBirthplace() const {
  return birthplace;
}

void PersonType::getInformation() const {
     std::cout << "SSN: " << ssn << std::endl;
    std::cout << "First Name: " << firstname << std::endl;
    std::cout << "Last Name: " << lastname << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Birthdate: " << birthdate << std::endl;
    std::cout << "Birthplace: " << birthplace << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Tel: " << tel << std::endl;
};


int main(){


};

