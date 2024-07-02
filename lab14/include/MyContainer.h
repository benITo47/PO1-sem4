#ifndef MYCONTAINER_H
#define MYCONTAINER_H

#include <iostream> 
#include <vector>

template<typename T> 
class MyContainer
{   
    public: 

    MyContainer() = default; 

    ///@brief Adds element into Container;
    void add(T element)
    {
        _contents.push_back(element);
    }

    
    ///@brief If index is valid - it removes the element at that position from the container
    void remove(int index)
    {
        if(_contents.begin() + index < _contents.end())
        {
            _contents.erase(_contents.begin() + index);
        }
    }

    ///@brief Returns Size of the container (Number of currently stored elements);
    int size()
    {   
        _contents.shrink_to_fit();
        return _contents.size();
    }

    ///@brief If index is valid, returns the element stored at that index. If index is not valid it returns freshly constructed object using types deafult constructor T();
    T get(int index)
    {
        if(index < _contents.size() && index >= 0 )
        {
            return _contents[index];
        }
        else
        {
            return T(); 
        }
    }

    ///@brief Console Prints the contents of the container;
    void print()
    {
        for(T& element: _contents)
        {
            if constexpr (std::is_pointer<T>::value)
            {
                std::cout << *element << " ";
            }
            else
            {
                std::cout << element << " ";
            }
        }
        std::cout<< std::endl;
    }

    ///@brief Returns stored vector<T> 
    std::vector<T> getContentsVector(){return _contents;}

    
    ///@brief overloaded operator << for using with ostream
friend std::ostream& operator<<(std::ostream& os, MyContainer object)
    {
        for(auto& elem : object.getContentsVector())
        {
            if constexpr (std::is_pointer<T>::value)
            {
                os << *elem << " "; 
            }
            else
            {
                os << elem << " "; 
            }
        }
        return os; 
    }

    private:

    ///@brief Actual data is stored in this vector;
    std::vector<T> _contents; 

};

#endif