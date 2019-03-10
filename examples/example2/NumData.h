#pragma once

//#include <nodes/NodeData.h>
#include <nodes/NodeDataModel>
#include "templateData.h"

using QtNodes::PortType;
using QtNodes::PortIndex;
using QtNodes::NodeData;
using QtNodes::NodeDataType;
using QtNodes::NodeDataModel;
using QtNodes::NodeValidationState;


REGISTER_DATA_TYPE(int, IntData);
//REGISTER_PARSE_TYPE(int);
//typedef MyData<int> IntData;
//class IntData : public NodeData
//{
//public:

//    IntData(){}

//    IntData(int a)
//    {
//        value=a;
//    }


//    NodeDataType
//    type() const override
//    {
//        //       id      name
//        return {"IntData", "Int"};
//    }

//    int data() const {return value;}

//private:
//    int value;
//};
REGISTER_DATA_TYPE(bool, BoolData);
//class BoolData : public NodeData
//{
//public:

//    BoolData(){}

//    BoolData(bool a)
//    {
//        value=a;
//    }


//    NodeDataType
//    type() const override
//    {
//        //       id      name
//        return {"BoolData", "Bool"};
//    }

//    bool data() const {return value;}

//private:
//    bool value;
//};
using std::string;

REGISTER_DATA_TYPE(string, StringData);


//class StringData : public NodeData
//{
//public:

//    StringData(){}

//    StringData(std::string a)
//    {
//        value=a;
//    }


//    NodeDataType
//    type() const override
//    {
//        //       id      name
//        return {"StringData", "String"};
//    }

//    std::string data() const {return value;}

//private:
//    std::string value;
//};
