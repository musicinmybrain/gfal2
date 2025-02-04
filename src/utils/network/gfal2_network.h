/*
 * Copyright (c) CERN 2022
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <glib.h>

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * Given a DNS alias, resolve the list of underlying addresses and select one at random.
 */
char* gfal2_resolve_dns_to_hostname(const char* dnshost);

#ifdef __cplusplus
}
#endif
