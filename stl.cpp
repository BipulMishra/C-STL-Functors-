// STANDARD TEMPLATE LIBRARY (STL)

// STL PROVIDES A SET OF PROG. TOOLS TO IMPLEMENT ALGORITHMS AND DATA STRUCTURE LIKE
// VECTORS, LISTS, QUEUES, ETC 

//  C++ STL MAJORLY HAVE 3 COMPONENTS
//  - CONTAINERS 
//  - ITEREATORS 
//  - ALGORITHMS

// ## CONTAINERS 
// A CONTAINER IS AN OBJECT THAT STORES A COLLECTION OF OBJECTS OF A SPECIFIC TYPE .

// TYPES OF STL CONTAINER IN C++
// - SEQUENTIAL CONTAINERS
// - ASSOCIATIVE CONTAINERS 
// - UNORDERED ASSOCIATIVE CONTAINERS 

// SEQUENTIAL CONTAINERS IN C++
// SEQUENTIAL CONATINERS ALLOW US TO STORE ELEMENTS IN SEQUENTIAL ORDER.

// TYPES OF SEQUENTIAL CONTAINERS 
// - ARRAY
// - VECTOR 
// - DEQUE
// - LIST
// - FORWARD LIST

// VECTOR 
// e.g.
// #include <iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     // initialise a vector of int type 
//     vector<int> numbers= {1,100,10,70,100};

//     // print the vectors
//     cout << "Numbers are :";
//     for(auto &num :numbers){
//         cout << num << " ," ;
//     }
//     return 0 ;
// }

// C++ std ::array

// #include <array>
// // declaration of std :: array
// std ::array<T,N> array_name;

// T- TYPE OF ELEMENTS TO BE  STORED
// N- NUMBERS OF ELEMENTS IN THE ARRAY

// std::array<int,5> numbers;

// //intitialization of std::array
// METHOD1
// initializer list

// std::array<int,5> numbers = {1,2,3,4,5};

// METHOD 2
// uniform intialization

// std::array<int, 5> numbers{10,20,30,40,50};

// e.g. c++ std:: array

// #include<iostream>
// #include<array>
// using namespace std ;
// int main(){
//     array<int , 5> numbers{1,2,3,4,5};
//     cout << "The elements are :" << endl;

//     for(const int num: numbers ){
//         cout << num << " " ;
//     }
// }

//Accessing the elements of std:: array
// array of 5 integers 
// std::array<int , 5> n= {1,2,3,4,5};
// std::cout <<n[0]
// std::cout <<n[1]

// // anothers way of accesing 
// std::array<int , 5> n= {1,2,3,4,5,---};
// std::cout << n.at(0)
// std::cout << n.at(1)

// NOTE : accesing elements using [] doesn't check for outof the 
// bound error .
// an out of the bond error occurs when a program tries to acces the 
// data outside the allowed range .
// for example we have an array of 5 elemets and we try accesing the 
// 10th elements that's an out of the bound error . 

// Modifying the elements of std::array

// std::array<int,5> marks={50,67,88,98,34};

// // modify the 3rd elements using []
// marks[2] = 76;
// // modify the first elemnts using at 
// n.at(0) = 1;

// Example: Modify and access the array elements 

// #include <iostream>
// #include <array>
// using namespace std ;
// int main(){
//     array<int,5> numbers={1,2,3,4,5};

//     // accesing using the [] operator 
//     cout << "First Elements:" << numbers[0] <<endl;
//     // accesing using the at method
//       cout << "Second Elements:" << numbers.at(1) <<endl;

//       // modify the elements at index 0
//       numbers[0] = 8;

//       cout << "Modifying first elements: " << numbers[0] << endl;
      
//       // modify the elemnts at index 1
//       numbers.at(1) = 90 ;

//       cout << "Modifying second elemnts :" << numbers[1] << endl;

// }

// Check if the array is empty 
// empty()
// n.empty() ---returns true when the array is empty 
// and false otherwise.

// // Get the Number of elements in the array
// n.size() --->> returns the size of the array 

// e.g. Using the empty and size method with std::array

// #include <iostream>
// #include <array>
// using namespace std ;
// int main(){
//     array <int , 5> numbers={1,2,3,4,5};
//     cout << "The size of the array is : "
//     << numbers.size() << endl;
//     if(numbers.empty()){
//         cout << "The array is empty" ;
//     }else{
//         cout << "The array is not empty" ;
//     }
// }

// Fill std::array with same value

// #include<iostream>
// #include<array>
// using namespace std ;
// int main(){
//     array<int , 5> a;
//     // Fill the arrays with 0s
//     a.fill(0);
//     cout << "The elements are :" ;
//     for(const int elt :a){
//         cout <<elt << " " ;
//     }
// }  

// e.g. using std:: array with STL Algorithms
// #include <iostream>
// #include<array>
// #include<numeric>
// #include<algorithm>
// using namespace std ;
// int main(){
//     array<int,5> age={45,23,66,87,21};
     
//     // sorting
//     sort(age.begin() , age.end());
//     cout << "The sorted array is :" ;
//     for(const int elt:age){
//         cout << elt << " ";
//     }
//     cout << endl ;
//     // searching
//     // checking whether the number 5 exists or not
//     auto found = find(age.begin(), age.end() , 5);
//     if(found !=age.end()) cout << "5 was found" << endl;
//     else cout << "5 was not found " << endl ;

//     // Summing 
//     int sum = accumulate (age.begin() , age.end() ,0);
//     cout << "The sum of the elements of array is : " << sum;



// }

// ---------------------------------------------------------------------------------

// C++ vectors 
// -------------
// in c++ vectors is used to store elements of same data types.
// However , unlike arrays , the size of the vector can grow dynamically.

// vector header file 
// #include <vector>

// c++ vector declaration 
// std:: vector<T> vector_name;

// T----> the type prameter <T> specifies the type of the vector . it can 
// be any primitive data type such as int, char, float , etc .

// vector<int> num;

// we have not specified the size of the vector during the declataion . this is because
// the size of the vector can grow dynamically.

// vector  initialization
// -----------
// Method1
// vector<int> vector1={1,2,3,4,5};

// or

// vector<int> vector2{1,2,3,4,5};

// Method2

// vector<int> vector3(5,12);  ==  vector<int> vector3 {12,12,12,12,12};

// e.g. vector initialization
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int> vector1={1,2,3,4,5};
    
//     vector<int> vector2{6,7,8,9,10};

//     vector<int> vector3(5,12);

//     cout<< "vector1 = " ;

//     // ranged for loop
//     for( int i : vector1){
//         cout<< i<< " " << endl ;
//     }
//     cout << "vector2 = " ;
//     for(  int  i : vector2){
//         cout<< i<< " " << endl ;
//     }
//     cout << "vector3 = " ;
//      for(  int  i : vector3){
//         cout<< i<< " " << endl ;
//     }
//     return 0 ;

// }

// Basic vector operations 
// ---------------------
// - Add elements 
// - Access elements
// - Change elements
// - Remove elements

// Adding elements to a vector
// push_back()

// e.g.
// #include<iostream>
// #include <vector>
// using namespace std ;
// int main(){
//     vector<int> num {1,2,3,4,5};
//     cout << "Initial Vector :" ;
//     for (int i : num){
//         cout << i<< " ";
//     }
//     // adding the integers 6 and 7 to the vector
//     num.push_back(6);
//     num.push_back(7);

//     cout << "\nUpdated Vector : " ;
//     for(int i : num){
//         cout << i << " " ;

//     }
//     return 0 ;
// }

// Note : we can also use the insert() and emplace() functions to add elements to a vector 

// Access elements to a vector 
// at() , [] 

// e . g.
// #include <iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector <int> num {1,2,3,4,5};
//     cout << "Elements at index 0: " << num.at(0) <<endl;
//     cout << "Elements at index 3: " << num.at(3) <<endl;
// }

// Change vector elements 
// at()
//e.g.
// #include <iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector <int> num {1,2,3,4,5};
//     cout << "Initial Vector :" ;
//     for(int i : num){
//         cout << i << " " ;
//     }
//     num.at(1) = 9 ;
//     num.at(4) = 7 ;
//     cout << "\nUpdated Vector: ";
//     for(int i : num){
//         cout << i << " " ;
//     }
//     return 0 ;
// }

// Deleting elements from vectors
// pop_back()

// e.g.
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int> prime_numbers {2, 3,4,5};

//     // initial vector 
//     cout << "Initial vectors: " ;
//     for(int i :prime_numbers){
//         cout << i << " " ;
//     }
//     // remove the last elements 
//     prime_numbers.pop_back() ;

//     // final vector 
//     cout << "\n Updated vector : " ;
//     for (int i : prime_numbers){
//         cout << i << " " ;

//     }
//     return 0 ;
// }
 
// Vector Functions
// =================
// size() -->> return the numbers of the elements present
// in the vector

// clear() -->> removes all the elements of the vector

// front() --->> return the first element of the vector

// back() -->> return the last element of the vector 

// empty () -->> return 1(true) if the vector is empty

// capacity() -->> check the overall size of the vector

// C++ Vector iterators
// ----------------------
// vector iterators are used to point to the memory address of the 
// vector elements. in some ways , they act like
// pointers in c++.

// syntax
// ----------
// vector<T> :: iterator iteratorName;

// // iterator for int vector
// vector<int> :: iterator iter1;

// // iterator for double vector
// vector<double> :: iterator iter2;

// Initialize vector Iterator

// we can initialize vector iterator using the begin() & end()  function .

// 1. begin() function
// vector<int> num = {1,2,3, -----};
// vector<int> ::iterator iter ;

// // iter points to num[0]
// iter = num.begin();

// 2.end() function

// // iter points to the last elements
// iter = num.end() -1 ;

// e.g. c++ vector iterators
// #include <iostream>
// #include <vector>
// using namespace std ;
// int main(){
//     vector<int> num{1,2,3,4,5};

//     // declare iterator
//     vector<int>:: iterator iter;

//     // initialize the iterator with the first elements
//     iter = num.begin();
//     // print the vector element
//     cout << "num[0] = " << *iter << endl;
//     // iterator points to the 3rd element
//     iter = num.begin() +2 ;
//     cout << "num[2] = " << *iter <<endl ;
//     // iterator points to the last elements 
//     iter= num.end() -1 ;
//     cout << "num[4] = " << *iter;
//     return 0;


// }

// e.g. Iterate through vector using iterators
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int> num{1,2,3,4,5};
//     vector<int> :: iterator iter;
//     for(iter = num.begin() ; iter!=num.end(); ++iter){
//         cout << *iter << " " ;
//     }
//     return 0;

// }


// C++  List
// It is a STL Container that stores elements randomly in unrelated locations .
// To maintain sequential ordering , every list elements include two links:
// - one that points to the previous elements 
// - that points to the next elements 

// Create the STL List               
// #include<list>
// std:: list<Type> list_name = {value1, value2, ...};

// // create a list of inetger type 
// std::list<int> numbers={1,2,3,4,5};
// // create a list of character type 
// std:: list<char> vowels = {'a' ,'e' ,'i' ,'o' , 'u'};
// std:: list<char> vowels  {'a' ,'e' ,'i' ,'o' , 'u'};

// e.g.
// #include<iostream>
// #include<list>
// using namespace std ;
// int main(){
//     // create the list
//     list<int> numbers {1,2,3,4};
//     // display the elements of the list
//     cout << "List Elements: ";
//     for (int number : numbers){
//         cout << number << " " ;
//     }
//     return 0 ;
// }

// Basic operations on list 
// =========================
// 1.Add elements
// 2.Access elements
// 3.Remove elements

// Add elements to a list in C++
// ==============================
// - push_front --->> inserts an element to the beginning of the  list       
// - push_back ---->> adds an elements to the end of the list   

             
// Access Elements 
// ==================
// - front() ----->> returns the first elements of the list   
// - back() ------->> returns the last elements of the list      

// Delete List Elements   
// ====================
// - pop_front() -------> removes the elements at the beginning of the list  
// - pop_back()  -------> removes the elements at the end of the list   


// Other List Functions in C++ 
// ===========================
// reverse()  ------> reverse the order of the elements

// sort() ------> sorts the list elements in a particular order.

// unique()  ------> removes consecutive duplicate elements  6

// empty()  

// size()   

// merge()  -------->> merge two sorted list   

// C++ Forward List   
// ==================
// Forward list is a sequence container ordered in a strict linear sequence , where you can add or remove 
// elements anywhere in the sequence with constant time efficiency.

// Elements in a forward list store information about their next element's location.  
// Thus they are more efficient in inserting , moving , and extracting elements compared to containers like 
// array, vector , etc .

// However , direct random acess is not supported in a forward list .  
// ==========================

// Create a Forward List   
// ======================
// #include<forward_list>

// std ::forward_list<data_type> forward_list_name = {value1, value2, value3,...};

// for e.g.
// // create a integer forward list 
// std:: forward_list<int> integer_fwd_list = {1,2,3,4,5};

// // create a string forward list
// std:: forward_list<string> string_fwd_list = {"Ram" , "shyam"};

// Forward List Methods
// ====================
// front()  

// push_front() ----------> add an elements to the start of the list  .

// insert_after() ---------> add an element at the position right after the given position.  

// assign() ------>> assign new contents to the list by replacing the current contents.  

// pop_front()  --------->> remove the element at the front .  

// remove() ----------->> remove elements with specific values   . 

// clear () 

// C++ Queue
// =============
// It provides the functionality of a queue data struct.

// The queue data structure follows the FIFO(First In First Out) principle where elements that are 
// added first will be removed .

// Create C++ STL Queue
// ====================
// #include <queue>

// for creatin queue :
// queue<type> q ;

// queue<int> integer_queue ;
// queue<string> string_queue;

// ==========================

// C++ queue Methods 
// =================
// push() 

// pop()

// front()

// back()

// size()

// empty ()

// ======================

// C++ Deque
// ===========

// It is a sequential container that provides the functionality of a double-ended queue data structure.  

// In queue , elements are added from the rear and removed from the front . However ,
// in a deque , we can insert and remove elements from both front and rear .
// ======================

// Create C++ STL Deque 
// =====================
// #include <deque>

// deque<type> dq ;

// deque<int> dq_integer ;
// deque<string> dq_string ;

// ===================

// C++ Deque Methods
// =================
// push_back()

// push_front()  

// pop_back()   

// pop_front()

// back() 

// at() 
 
// size() 

// empty()  
// ======================

// C++ Stack 
// ============
// It provides the functionality of a stack data structure in c++ .

// The stack data structutre follows the LIFO (Last In First Out) Principle . That is , the element added last will be 
// removed first .
// =============

// Create a Stack 
// ==============
// #include<stack>
// stack<type> st ;

// // create a stack of integer
// stack<int> integer_stack ;
// stack<string> string_stack ;

// Stack Method 
// =================

// push() 

// pop()

// top()

// size() 

// empty()

// Note : unlike vector or other conatiners , we cannot use a ranged for loop to iterate through a stack .
// This is because the STL stack is an STL Container Adapter , which provides restrictive access to 
// make it behave like a standard stack data structure .
// ===========================================================================================================


// C++ Map
// ========
// Maps are containers that holds pairs of data .

// These pairs , known as key -value pairs , have unique key , while the associated values 
// don't have to be unique .    

// key            value 
// 1---------->> Bipul
// 2----------->> Bipul 
// 3 ----------->> Rahul 

// The elements in a map are internally sorted by their keys  .


// #include <map>

// std :: map<key_type , value_type > map_name = {{key1 , value1} , {key2 , value 2} ,...};

// // Create a map with integer keys and string values 
// std::map<int , string> student={{1,"Bipul"},{2 , "Mouni"}, {3,"Rahul"}};

// Map Methods 
// ============
// insert()  ----> adds anelement(key,value) to the map .

// erase()   ----->remove an element or range of elements from the map . 

// clear()   ----> removes all the elements from the map .

// find()  ----> searches the map for the given key .

// size() --->. return the number of elements in the map .

// empty() ---> returns true if the map is empty .


// []/ insert()   
// we can also use the insert() function alongside the make_pair() function to insert elements 
// into the map .


// C++ Maps e.g.
// #include<iostream>
// #include<map>
// using namespace std ;
// int main(){
//     map<int, string>student ;
//     //use [] operator to add elements 
//     student[1] = "Jack";
//     student[2] ="abcde";

//     //use insert() method to add elements 

//     student.insert(make_pair(3, "Bipul")) ;
//     student.insert(make_pair(4, "Mouni")) ;

//     student[5] = "Mithili" ;
//     student[5] = "Mithi" ;

//     for(int i =1 ; i<=student.size(); ++i){
//         cout << "student[" <<i << "]:" <<student[i] << endl;
//     }
//     cout<< student[3] ;
//     return 0;


// }


// e.g.
// #include<iostream>
// #include<map>
// using namespace std ;
// int main(){
//     //create a map named student
//     map<int , string> student {{1,"Bipul"},{2,"Mounika"}, {3,"Rahul"} ,
//     {4,"Mithi"}, {5, "Maithili"}};

//     // create map iterator 
//     map<int , string> ::iterator itr ;

//     cout << "Initial Values : " << endl ;
//     for(itr = student.begin(); itr!=student.end(); ++itr){
//         cout << itr->second << "," ;
//     }
//     cout <<endl ;
//     itr = student.begin();
//     student.erase(itr) ;
//     student.erase(4);

//     cout << "\nFinal Values:" << endl;
//     for(itr = student.begin() ; itr !=student.end() ; ++itr){
//         cout << itr->second <<" ," ;
//     }
//     return 0 ;
// } 

// Delete a range of elements 
// ============================
// my_map.erase(itr_first , itr_last);


// C++ set    
// =======
// It is a STL container that store unique elements of the same type in a sorted manner .

// As the value of every element in a set is unique , the value itself acts 
// as the key for identifying the elements .

// ==============

// Set properties 
// ==============
// 1.Unique Elements : No two elements in a set can be equal .

// 2. immutable : we can add or remove elements from a set, but we can't chaneg the values of 
// existing elements .

// 3. sorted order

// 4.Associative : Elements of a set are refrenced using their key , not by their position
// in the container .

// This is unlike arrays , where elements are acccessed using indexes.

// ========================
// #include<set>
// std:: set<data_type>set_name = {key1 , key2 , key3 ,....};
// set<int> my_set1 = {5,3,4,6,...};

// #include<iostream>
// #include<set>
// using namespace std ;
// int main(){
//     set<int> my_set= {5,3,8,1,3};
//     for(int val : my_set){
//         cout << val << " " ;
//     }
//     return 0 ;
// }

// FUNCTOR IN C++
// ===============
// A C++ functor (function object) is a class or structure objects that can be 
// called like a function .

// It overloads the function-call operator () and allows us to use an object
// like a function.
// ====================

// // create a functor in c++
// class Greet{
//     public:
//     void operator()(){
//         // function body 
//     }
// }

// Note : To set public() access specifier while overloading the () operator 
// for the class , since by default the members of a class are private .


// e.g. 
// #include<iostream>
// using namespace std ;
// class Greet{
//     public:
//     // overload function parenthesis 
//     void operator()(){
//          cout << "Hello World !" << endl ;
//     }


// };
// int main(){
//     Greet greet;
//     greet();
//     greet. operator()();
//     return 0 ; 

// }

// e.g. Functor with return type and parameter 
// #include<iostream>
// using namespace std ;
// class Add{
//     public :
//     int operator()(int a , int b){
//         return a+b ;
//     }
// };

// int main(){
//     Add add ;
    
//     int sum = add(100,73);
//     cout << "100 + 73 = "<< sum ;
//     return 0 ;
// }

//  C++ Predefined Functors
//  ========================
//  #include<functional>

//  1 . Arithmetic Functors 
//  plus
//  minus    
//  multiplies      
//  divides           
//  modulus  
//  negate  

//  2 Relational Functor 
//  equal_to 
//  not_equal_to   
//  greater   
//  greater_equal    
//  less    
//  less_equal     

//  3. Logical functor 
//  logical_and  
//  logical_or 
//  logical_not        

//  4. Bitwise Functors    
//  bit_and    
// bit_or  
// bit_xor    


