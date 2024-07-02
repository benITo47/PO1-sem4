#ifndef ALGERBAIC_STRUCTURE
#define ALGERBAIC_STRUCTURE

#include<algorithm> 
#include<cmath> 

template<typename T>
class AlgebraicStructure
{   
    public:
    virtual void add() = 0; 
    virtual void multiply() = 0;
};


template<typename T> 
class Matrix: public AlgebraicStructure<Matrix<T>> 
{
    public: 
    std::vector<std::vector<T>> content;

    Matrix(int row, int col)
    {
        for(int i = 0; i < row; i++)
        {
            content.emplace_back();
            for(int j = 0; j < col; j++)
            {
                content[i].emplace_back();
            }
        }
    }

    Matrix(std::vector<std::vector<T>> vec):content(vec){}
    void setContent(std::vector<std::vector<T>> vec){content = vec;}
    void add() override{}
    void multiply() override{}

    void applyLambda(std::function<void(T& elem)> function)
    {
        for(auto& elem: content)
        {
            std::for_each(elem.begin(), elem.end(), function);
        }
    }

    Matrix<T> operator+(Matrix<T> other)
    {
        int row = content.size(); 
        int col = content[0].size();

        Matrix result(row,col);  

        
            for(int i = 0; i < row; i++ )
            {
                for(int j=0; j < col; j++)
                {
                    result.content[i][j] = content[i][j] + other.content[i][j];
                }
            }
        return result;
    }

    void print()
    {
        int row = content.size(); 
        int col = content[0].size();

        for(int i =0; i < col; i++)
        {
            for(int j =0; j<row; j++)
            {
                std::cout << content[i][j] << " ";
            }
            std::cout << std::endl; 
        }
        std::cout << std::endl; 
    }
};

template<typename T> 
class Polynomial: public AlgebraicStructure<Polynomial<T>> 
{
    public:
    std::vector<T> content;
    void add() override{}
    void multiply() override{}


    Polynomial(std::vector<T> list): content(list){}


    Polynomial<T> operator+(Polynomial<T> other)
    {   
        auto min = std::min(content.size(), other.content.size());
        std::vector<T> result(min);
        for(int i = 0; i <min; i++)
        {
            result[i] = content[i] + other.content[i];
        }
        return Polynomial(result);
    }

    void print()
    {
        for(auto& elem: content)
        {
            std::cout << elem << " "; 
        }
        std::cout<<std::endl;
    }


    T evaluate(T x)
    {
        int polynomialPower = content.size() -1 ;
        T result{};
        for(int i = 0; i < content.size(); i++)
        {
            result += content[i] * pow(x,polynomialPower--);
        }
        return result;
    }
};

template<typename T> 
class Vector: public AlgebraicStructure<Vector<T>> 
{   
     public: 
    std::vector<T> content; 
   
    
    Vector(int size):content(std::vector<T>(5)){}
    Vector(std::vector<T> vec):content(vec){}
    void applyLambda(std::function<void(T& elem)> function)
    {
        std::for_each(content.begin(), content.end(), function);
    }

    void add() override{}
    void multiply() override{}

    Vector<T> operator+(Vector<T> other)
    {   
        std::vector<T> result; 
        for(auto& elem: content)
        {
            result.push_back(elem);
        }
        for(auto& elem: other.content)
        {
            result.push_back(elem);
        }
        return Vector<T>(result);
    }

    void print()
    {
        for(auto& elem: content)
        {
            std::cout << elem << " "; 
        }
        std::cout<<std::endl;
    }
};
#endif 