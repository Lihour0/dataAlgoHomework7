#include <vector>
#include <cassert>
#include <iostream>
#include <string>
#include <algorithm>

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
class CustomerType : public PersonType {
    private:
        std::string cusid;

    public:
        CustomerType();
        CustomerType(std::string cusid = "", std::string firstname = "", std::string lastname = "", std::string gender = "", std::string birthdate = "", std::string birthplace = "", std::string address = "", std::string tel = "", std::string ssn = "") : PersonType(ssn, firstname, lastname, gender, birthdate, birthplace, address, tel), cusid(cusid) {}

        void setCusid(std::string cusid) {
            this->cusid = cusid;
        }

        std::string getCusid() const {
            return cusid;
        }

        void getInformation() const {
            PersonType::getInformation();
            std::cout << "Customer ID: " << cusid << std::endl;
        }
};
class CustomerListType {
    private:
        std::vector<CustomerType> customers;

    public:
        CustomerListType() {}
        CustomerListType(const std::vector<CustomerType>& customers) : customers(customers) {}

        void addItem(const CustomerType& customer) {
            customers.push_back(customer);
        }

        void deleteItem(const std::string& cusid) {
            customers.erase(std::remove_if(customers.begin(), customers.end(), [&](const CustomerType &customer) {
                return customer.getCusid() == cusid;
            }), customers.end());
        }

        void updateItem(const std::string& cusid, const CustomerType& updatedCustomer) {
            auto it = std::find_if(customers.begin(), customers.end(), [&](const CustomerType &customer) {
                return customer.getCusid() == cusid;
            });
            if (it != customers.end()) {
                *it = updatedCustomer;
            }
        }

        CustomerType* searchItem(const std::string& cusid) {
            auto it = std::find_if(customers.begin(), customers.end(), [&](const CustomerType &customer) {
                return customer.getCusid() == cusid;
            });
            if (it != customers.end()) {
                return &(*it);
            } else {
                return nullptr;
            }
        }

        void listInformation() const {
            for (const auto& customer : customers) {
                customer.getInformation();
                std::cout << std::endl;
            }
        }
};

int main(){
      CustomerType customer1("123", "John", "Doe");
    CustomerType customer2("456", "Jane", "Doe");
    CustomerType customer3("789", "Bob", "Smith");

    // create a CustomerListType object and add the customers to it
    CustomerListType customerList;
    customerList.addItem(customer1);
    customerList.addItem(customer2);
    customerList.addItem(customer3);


};


