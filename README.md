# EXPERIMENT-11

## Aim :
To study and implement Classes and Objects

## Software :
Vs code

## Theory :
### classes :
A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.<br>A C++ class is like a blueprint for an object.
It defines a data structure by combining data (attributes) and methods (functions) that operate on the data. A class is defined using the class keyword followed by the class name and a block of code that includes its attributes and methods

**For Example:** Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

- A Class is a user-defined data type that has data members and member functions.<br>
- Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behaviour of the objects in a Class.<br>
- In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.

### objects :
An object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.<br>
An instance of a class. It represents a specific realization of the class, holding actual values for the attributes defined by the class.An object is created by instantiating the class. This involves calling the class as if it were a function.

### Keywords in classes and objects :
### 1. class 
Defines a new class type
### 2. Public 
Specifies that members following this keyword are accessible from outside the class
### 3. Private 
Specifies that members following this keyword are accessible only within the class itself
### 4. Protected
Specifies that members following this keyword are accessible within the class and its derived classes, but not from outside.
### 5. Virtual 
Specifies that a member function can be overridden in derived classes. This is crucial for polymorphism.
### 6. Const
Specifies that a member function does not modify the state of the object. It can be applied to methods and variables
### 7. New
Pointer to the current object instance within a member function
### 8. Friend
Allows a function or another class to access private and protected members of the class
### 9. Override
Indicates that a member function is overriding a virtual function in a base class. This keyword helps catch errors if the function signature doesn’t match.
### 10. Static 
Specifies that a member belongs to the class rather than any instance of the class. Static members are shared among all instances

### Access Specifiers Comparison

Access specifiers determine the visibility and accessibility of class members (attributes and methods).

| Access Specifier | Definition                                      | Visibility                       | Example Usage     |
|------------------|-------------------------------------------------|---------------------------------|--------------------|
| **Public**       | Members are accessible from outside the class. | Unrestricted access.             | `self.attribute1` |
| **Private**      | Members are accessible only within the class.  | Restricted access (prefix with `__`). | `self.__attribute1` |
| **Protected**    | Members are accessible within the class and subclasses. | Limited access (prefix with `_`). | `self._attribute1` |

### Global and Local Variables
****Global Variables****:

Global variables are declared outside of functions or blocks, usually at the top of a program or in a separate file. They are accessible from any part of the program and retain their value throughout the program's lifetime. While useful for shared data, their widespread accessibility can lead to unintended side effects and make debugging more challenging, particularly in large programs. They are commonly used for values needed across multiple parts of the program
- **Declaration**: Outside of any function or block
- **Scope**: Entire program.
- **Usage**: Values that need to be accessed and modified by multiple parts of the program.
- **Lifetime**: Retain their value throughout the lifetime of the program

****Local Variables****:

Local variables are declared within a specific block of code, such as a function or loop. They are only accessible within that block and are released from memory when the block exits. Local variables can have the same name as those in other blocks without causing conflicts, as their scope is confined to their respective block. They are typically used for temporary storage or context-specific data.
- **Declaration**: Typically within functions or specific blocks
- **Scope**: Limited to the function or block where they are declared.
- **Usage**: Temporary storage, specific to a block of code
- **Lifetime**: Created when the block is entered and destroyed when it exits
  
## Codes :
### 1.*Car Details*
```
//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Car{
    public:
    string make = "BMW";
    string model = "M4";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;
}
```
### 2.*Class By Function*
```
//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "Winning Speaech";
    string genre = "Punjabji";
    string country = "India";
    int year = 2024;
    

    void displayInfo(){
cout<< "Band details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Genre: "<< genre<<endl;
 cout <<"Origin: "<< country<<endl;
 cout <<"Established: "<<year<<endl;
    }
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    }
```

### 3.*Area Of Rectangle*
```
//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(8.0, 3.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}
```

### 4.*User Class*
```
//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
```

## Outputs :
### 1.*Car Details*
![Screenshot 2024-10-07 232849](https://github.com/user-attachments/assets/0b085871-7bf2-41a2-a432-3f5cf1f1d15e)

### 2.*Class By Function*
![Screenshot 2024-10-07 232934](https://github.com/user-attachments/assets/df524236-b003-439c-97bb-18038c4c78bc)

### 3.*Area Of Rectangles*
![Screenshot 2024-10-07 233005](https://github.com/user-attachments/assets/3a20964c-d56a-4fdd-a9c2-451a36714734)

### 4.*User Class*
![Screenshot 2024-10-07 233258](https://github.com/user-attachments/assets/fb1c1f66-f08d-4c17-a78c-c55ff2d4499b)

## Conclusion :
- **Classes** define the structure and behaviors of objects. They encapsulate data and methods into a single unit.
- **Objects** are instances of classes and hold specific data values.
- **Access Specifiers** (Public, Private, Protected) control how and where class members can be accessed and modified.
- **Global Variables** are accessible throughout the entire program, while **Local Variables** are restricted to the function or block where they are defined.
