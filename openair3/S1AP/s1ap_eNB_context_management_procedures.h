/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef S1AP_ENB_CONTEXT_MANAGEMENT_PROCEDURES_H_
#define S1AP_ENB_CONTEXT_MANAGEMENT_PROCEDURES_H_


int s1ap_ue_context_release_complete(instance_t instance,
                                     s1ap_ue_release_complete_t *ue_release_complete_p);

int s1ap_ue_context_release_req(instance_t instance,
                                s1ap_ue_release_req_t *ue_release_req_p);

#endif /* S1AP_ENB_CONTEXT_MANAGEMENT_PROCEDURES_H_ */
