//===----------------------------------------------------------------------===//
//
//                         PelotonDB
//
// merge_join_node.h
//
// Identification: src/backend/planner/merge_join_node.h
//
// Copyright (c) 2015, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include <memory>
#include <string>
#include <vector>

#include "backend/common/types.h"
#include "backend/expression/abstract_expression.h"
#include "backend/planner/project_info.h"
#include "backend/planner/abstract_join_node.h"

namespace peloton {
namespace planner {

class MergeJoinNode : public AbstractJoinPlanNode {
 public:
  MergeJoinNode(const MergeJoinNode &) = delete;
  MergeJoinNode &operator=(const MergeJoinNode &) = delete;
  MergeJoinNode(MergeJoinNode &&) = delete;
  MergeJoinNode &operator=(MergeJoinNode &&) = delete;

  MergeJoinNode(expression::AbstractExpression *predicate,
                const ProjectInfo *proj_info)
      : AbstractJoinPlanNode(JOIN_TYPE_INVALID, predicate,
                             proj_info) {  // FIXME
    // Nothing to see here...
  }

  inline PlanNodeType GetPlanNodeType() const {
    return PLAN_NODE_TYPE_MERGEJOIN;
  }

  inline std::string GetInfo() const { return "MergeJoin"; }

 private:
  // There is nothing special that we need here
};

}  // namespace planner
}  // namespace peloton
