#pragma once

#include <nodes/NodeData>

using QtNodes::NodeData;
using QtNodes::NodeDataType;

template<typename T>
struct TypeParseTraits
{
    static const char* name(){return typeid(T).name();}
};

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
        return {typeid(T).name(), TypeParseTraits<T>::name()};
    }

    T data() const {return m_value;}

    T m_value;
};

#define REGISTER_TYPE_NAME(T, NAME) \
    template <> struct TypeParseTraits<T> \
    { static const char* name(){return #NAME;} };

#define REGISTER_NODEDATA(XData, X, NAME) \
    REGISTER_TYPE_NAME(X, NAME); \
    typedef MyData<X> XData;




\

