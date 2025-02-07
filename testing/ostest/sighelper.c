/****************************************************************************
 * apps/testing/ostest/sighelper.c
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdbool.h>
#include <signal.h>

#include "ostest.h"

/****************************************************************************
 * Public Functions
 ****************************************************************************/

bool sigset_isequal(FAR const sigset_t *left, FAR const sigset_t *right)
{
  int ndx;

  /* Check if all elements of the set are the same */

  for (ndx = 0; ndx < _SIGSET_NELEM; ndx++)
    {
      if (right->_elem[ndx] != left->_elem[ndx])
        {
          return false;
        }
    }

  return true;
}
