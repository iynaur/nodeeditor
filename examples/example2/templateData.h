#pragma once

#include <nodes/NodeData.h>

using QtNodes::NodeData;
using QtNodes::NodeDataType;

template<typename T>
struct TypeParseTraits
{
    static const char* name(){return typeid(T).name();}
};

#define REGISTER_PARSE_TYPE(X) template <> struct TypeParseTraits<X> \
{ static const char* name(){return #X;} };

template <typename T>
class MyData : public NodeData
{
public:
    MyData(){}
    MyData(T value)
    {
        m_value = value;
    }

    NodeDataType
    type() const override
    {
        return {TypeParseTraits<T>::name(), TypeParseTraits<T>::name()};
    }

    T data() const {return m_value;}

    T m_value;
};

#define REGISTER_DATA_TYPE(X, XData) REGISTER_PARSE_TYPE(X); typedef MyData<X> XData;




\

