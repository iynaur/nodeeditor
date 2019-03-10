#pragma once

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

#include <nodes/NodeDataModel>
#include "templateData.h"

using QtNodes::NodeData;
using QtNodes::NodeDataType;
typedef pcl::PointXYZ PointT;
template <> struct TypeParseTraits<pcl::PointCloud<PointT>::Ptr>
{ static const char* name(){return "cloud";} };

typedef MyData<pcl::PointCloud<PointT>::Ptr> PointCloudData;

//class PointCloudData : public NodeData
//{
//public:

//  PointCloudData() {}

//  PointCloudData(pcl::PointCloud<PointT>::Ptr cloud_ptr_)
//    : cloud_ptr(cloud_ptr_)
//  {}

//  NodeDataType
//  type() const override
//  {
//    //       id      name
//    return {"point_cloud", "PointCloud"};
//  }

//  pcl::PointCloud<PointT>::Ptr
//  data() const { return cloud_ptr; }

//private:

//  pcl::PointCloud<PointT>::Ptr cloud_ptr;
//};
