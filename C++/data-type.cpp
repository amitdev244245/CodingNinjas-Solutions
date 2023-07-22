// Problem Name: Data Type
// Problem Level: Easy

// #include <iostream>
// using namespace std;

int dataTypes(string type)
{
    if (type == "Integer" || type == "Float")
    {
        return 4;
    }
    else if (type == "Long" || type == "Double")
    {
        return 8;
    }
    return 1;
}