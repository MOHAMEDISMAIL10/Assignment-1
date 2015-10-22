# Assignment-1
Name: Mohamed Ismail Mohamed Hafez
id:33808
section: 2

Answer to 

Question 1:What is class?

A class is a user-defined type provided to represent
a concept in the code of a program.It combines data reprsentation
and methods for manipulating that data into one neat package.

Question 2:How does a class accomplish abstraction, encapsulation, and data hiding?

An Abstraction denotes the essential characteristics of an object that distinguish it from all kinds of objects and thus provide
crisply defined conceptual boundaries, relative to the perspective of the viewer.

Encapsulation is the process of compartmentalizing the elements of an abstraction that constitute it's structure and behavior,
encapsulation serves to separate the contractual interface of an abstraction and it's implementation.

Data hiding means that data is concealed within a
class so that it cannot be accessed mistakenly by functions outside the class. The primary
mechanism for hiding data is to put it in a class and make it private. Private data or functions
can only be accessed from within the class. Public data or functions, on the other hand, are
accessible from outside the class.

Through the concept of only previewing the methods that the user would interact from outside, through 
public region.
 any mehtods or data types defined in the public section, it would be accessed from outside the 
class , while in private
 it will only be accessed from within the class, by this concept, you hide specific data 
types from the user , 
to elimnate chance that he would change it, and you abstract and encapsulate by just viewing to the user 
what 
he only needs to interact with , either data types or methods.

Question 3: What is the relationship between an object and a class?

An object is an instance of a class

Question 4:In what way, aside from being functions, are class function members different from class 
data members?

the data within a class is private and the functions are public. This is a result of the
way classes are used. The data is hidden so it will be safe from accidental manipulation, while
the functions that operate on the data are public so they can be accessed from outside the class and the data
members can be accessed by the class member functions.

Question 5:  answered inside the class of example 1

Question 6:When are class constructors called? When are class destructors called?

A constructor is a member function that is executed automatically whenever an object is created.
A destructor has the same name as the constructor (which is the same as the class name) but is preceded by
a tilde. It is called automatically when an object is destroyed.

Question 7: answered inside the class of example 1

Question 8:What is a default constructor? What is the advantage of having one?

A default constructor is a constructor that is used to create an object when you don't provide explicit intialization values.
Because the programmer may forget to initialize the object after creating
it. It’s more reliable and convenient, especially when there are a great many objects of a given
class, to cause each object to initialize itself when it’s created.


Question 10:what is this and *this?

The this pointer is available to class methods. It points to the object used to invoke the method.
Thus, this is the address of the object, and *this represents the object itself.




