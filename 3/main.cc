#include <iostream>
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
  PersonType(std::string ssn = "", std::string firstname = "", std::string lastname = "", std::string gender = "", std::string birthdate = "", std::string birthplace = "", std::string address = "", std::string tel = "") : ssn(ssn), firstname(firstname), lastname(lastname), gender(gender), birthdate(birthdate), birthplace(birthplace), address(address), tel(tel) {}

  void setSSN(std::string ssn) {
    this->ssn = ssn;
  }

  void setFirstname(std::string firstname) {
    this->firstname = firstname;
  }

  void setLastname(std::string lastname) {
    this->lastname = lastname;
  }

  void setGender(std::string gender) {
    this->gender = gender;
  }

  void setBirthdate(std::string birthdate) {
    this->birthdate = birthdate;
  }

  void setBirthplace(std::string birthplace) {
    this->birthplace = birthplace;
  }

  void setAddress(std::string address) {
    this->address = address;
  }

  void setTel(std::string tel) {
    this->tel = tel;
  }

  std::string getSSN() const {
    return ssn;
  }

  std::string getFirstname() const {
    return firstname;
  }

  std::string getLastname() const {
    return lastname;
  }

  std::string getGender() const {
    return gender;
  }

  std::string getBirthdate() const {
    return birthdate;
  }

  std::string getBirthplace() const {
    return birthplace;
  }

  std::string getAddress() const {
    return address;
  }

  std::string getTel() const {
    return tel;
  }
  void getInformation() const {
    std::cout << "SSN: " << ssn << std::endl;
    std::cout << "First Name: " << firstname << std::endl;
    std::cout << "Last Name: " << lastname << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Birthdate: " << birthdate << std::endl;
    std::cout << "Birthplace: " << birthplace << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Tel: " << tel << std::endl;
  }
};

class EmployeeType : public PersonType {
private:
  std::string empid;
  std::string pos;
  double salary;
  double bonus;

public:
  EmployeeType(std::string ssn = "", std::string firstname = "", std::string lastname = "", std::string gender = "", std::string birthdate = "", std::string birthplace = "", std::string address = "", std::string tel = "", std::string empid = "", std::string pos = "", double salary = 0.0, double bonus = 0.0) : PersonType(ssn, firstname, lastname, gender, birthdate, birthplace, address, tel), empid(empid), pos(pos), salary(salary), bonus(bonus) {}

  void setEmpid(std::string empid) {
    this->empid = empid;
  }

  void setPos(std::string pos) {
    this->pos = pos;
  }

  void setSalary(double salary) {
    this->salary = salary;
  }

  void setBonus(double bonus) {
    this->bonus = bonus;
  }

  std::string getEmpid() const {
    return empid;
  }

  std::string getPos() const {
    return pos;
  }

  double getSalary() const {
    return salary;
  }

  double getBonus() const {
    return bonus;
  }

  void listInformation() const {
    PersonType::getInformation();
    std::cout << "Employee ID: " << empid << std::endl;
    std::cout << "Position: " << pos << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Bonus: " << bonus << std::endl;
  }
};

