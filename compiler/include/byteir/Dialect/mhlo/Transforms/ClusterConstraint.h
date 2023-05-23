//===- ClusterConstraint.h ------------------------------------*--- C++ -*-===//
//
// Copyright 2022 ByteDance Ltd. and/or its affiliates. All rights reserved.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//===----------------------------------------------------------------------===//

#ifndef BYTEIR_DIALECT_MHLO_TRANSFORMS_CLUSTER_CONSTRAINT_H
#define BYTEIR_DIALECT_MHLO_TRANSFORMS_CLUSTER_CONSTRAINT_H

#include "mlir/Pass/Pass.h"

namespace mlir {
namespace func {
class FuncOp;
} // namespace func

void populateClusterConstraintPattern(RewritePatternSet &patterns);

std::unique_ptr<OperationPass<func::FuncOp>> createClusterConstraintPass();

} // namespace mlir

#endif // BYTEIR_DIALECT_MHLO_TRANSFORMS_CLUSTER_CONSTRAINT_H