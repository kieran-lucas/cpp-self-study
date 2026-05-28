#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Person {
private:
    string name;
    int age;
    vector<string> hobbies;

public:
    Person(string n, int a) : name(n), age(a) {}
    
    void addHobby(string hobby) {
        hobbies.push_back(hobby);
    }
    
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Hobbies: ";
        for (const auto& hobby : hobbies) {
            cout << hobby << ", ";
        }
        cout << endl;
    }
    
    string getName() const { return name; }
    int getAge() const { return age; }
};

class Calculator {
public:
    static double add(double a, double b) { return a + b; }
    static double subtract(double a, double b) { return a - b; }
    static double multiply(double a, double b) { return a * b; }
    static double divide(double a, double b) { 
        if (b == 0) throw runtime_error("Division by zero!");
        return a / b; 
    }
    static double power(double base, double exp) { return pow(base, exp); }
};

void greetUser(const Person& person) {
    cout << "Hello, " << person.getName() << "!" << endl;
    cout << "Welcome to this complex C++ program!" << endl;
}

vector<int> generateFibonacci(int n) {
    vector<int> fib;
    if (n >= 1) fib.push_back(0);
    if (n >= 2) fib.push_back(1);
    
    for (int i = 2; i < n; i++) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    return fib;
}

bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    cout << "=== Complex C++ Program ===" << endl << endl;
    
    // Create a person object
    Person person("Kieran", 25);
    person.addHobby("Programming");
    person.addHobby("Reading");
    person.addHobby("Gaming");
    
    // Greet the user
    greetUser(person);
    cout << endl;
    
    // Display person info
    person.displayInfo();
    cout << endl;
    
    // Calculator demonstrations
    cout << "=== Calculator Demo ===" << endl;
    double a = 10.5, b = 3.2;
    cout << a << " + " << b << " = " << Calculator::add(a, b) << endl;
    cout << a << " - " << b << " = " << Calculator::subtract(a, b) << endl;
    cout << a << " * " << b << " = " << Calculator::multiply(a, b) << endl;
    cout << a << " / " << b << " = " << Calculator::divide(a, b) << endl;
    cout << a << " ^ 2 = " << Calculator::power(a, 2) << endl;
    cout << endl;
    
    // Fibonacci sequence
    cout << "=== Fibonacci Sequence (first 10) ===" << endl;
    vector<int> fib = generateFibonacci(10);
    for (int num : fib) {
        cout << num << " ";
    }
    cout << endl << endl;
    
    // Palindrome checker
    cout << "=== Palindrome Checker ===" << endl;
    vector<string> words = {"racecar", "hello", "level", "world", "madam"};
    for (const string& word : words) {
        cout << word << " is " << (isPalindrome(word) ? "a palindrome" : "not a palindrome") << endl;
    }
    cout << endl;
    
    // Lambda function example
    cout << "=== Lambda Function Demo ===" << endl;
    auto square = [](int x) { return x * x; };
    auto cube = [](int x) { return x * x * x; };
    
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Squares: ";
    for (int num : numbers) {
        cout << square(num) << " ";
    }
    cout << endl;
    
    cout << "Cubes: ";
    for (int num : numbers) {
        cout << cube(num) << " ";
    }
    cout << endl << endl;
    
    cout << "=== Program Complete ===" << endl;
    return 0;
}

