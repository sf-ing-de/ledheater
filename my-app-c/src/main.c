/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mgos.h"
#include "mgos_net.h"
#include "mgos_rpc.h"
#include "mgos_pwm.h"

static void rpc_cb_pwm_setcolor(struct mg_rpc_request_info *ri, void *cb_arg, struct mg_rpc_frame_info *fi, struct mg_str args) {
  //LOG(LL_INFO, ("PWM Handler started: %lf", *((double*)cb_arg)));
  LOG(LL_INFO, ("PWM Color Handler started"));
  int red = 0, green = 0, blue = 0;
  //LOG(LL_INFO, ("PWM Handler started"));
  char tmp = json_scanf(args.p, args.len, ri->args_fmt, &red, &green, &blue);
  LOG(LL_INFO, ("tmp: %d", tmp));

  if (tmp == 3) {
    mgos_pwm_set(12, 250, (float)red / 255);
    mgos_pwm_set(15, 250, (float)green / 255);
    mgos_pwm_set(4, 250, (float)blue / 255);
    mg_rpc_send_responsef(ri, "Red: %d, Green: %d, Blue: %d", red, green, blue);
  } else {
    mg_rpc_send_errorf(ri, -1, "Bad request. Expected: {\"Red\":N1,\"Green\":N2,\"Blue\":N3}");
  }
  (void) cb_arg;
  (void) fi;
}

static void rpc_cb_pwm_setdc(struct mg_rpc_request_info *ri, void *cb_arg, struct mg_rpc_frame_info *fi, struct mg_str args) {
  //LOG(LL_INFO, ("PWM Handler started: %lf", *((double*)cb_arg)));
  LOG(LL_INFO, ("PWM Dutycycle Handler started"));
  char pin = 0;
  int freq = 0;
  float dc = 0;
  //LOG(LL_INFO, ("PWM Handler started"));
  char tmp = json_scanf(args.p, args.len, ri->args_fmt, &pin, &dc, &freq);
  LOG(LL_INFO, ("tmp: %d", tmp));

  if (tmp == 3) {
    mgos_pwm_set(pin, freq, dc);
    mg_rpc_send_responsef(ri, "Pin: %d, Duty: %.2lf, Frequency: %d", pin, dc, freq);
  } else {
    mg_rpc_send_errorf(ri, -1, "Bad request. Expected: {\"Pin\":N1,\"Duty\":N2,\"Frequency\":N3}");
  }
  (void) cb_arg;
  (void) fi;
}
static void rpc_cb_pwm_setlx(struct mg_rpc_request_info *ri, void *cb_arg, struct mg_rpc_frame_info *fi, struct mg_str args) {
  //LOG(LL_INFO, ("PWM Handler started: %lf", *((double*)cb_arg)));
  LOG(LL_INFO, ("PWM Lux Handler started"));
  char lx = 0;
  //LOG(LL_INFO, ("PWM Handler started"));
  char tmp = json_scanf(args.p, args.len, ri->args_fmt, &lx);
  LOG(LL_INFO, ("tmp: %d", tmp));

  if (tmp == 1) {
    mgos_pwm_set(0, 250, (float)lx / 255);
    mg_rpc_send_responsef(ri, "lx: %d", lx);
  } else {
    mg_rpc_send_errorf(ri, -1, "Bad request. Expected: {\"lx\":N1}");
  }
  (void) cb_arg;
  (void) fi;
}

static void rpc_cb_pwm_setfan(struct mg_rpc_request_info *ri, void *cb_arg, struct mg_rpc_frame_info *fi, struct mg_str args) {
  //LOG(LL_INFO, ("PWM Handler started: %lf", *((double*)cb_arg)));
  LOG(LL_INFO, ("PWM Fan Handler started"));
  char fan = 0;
  //LOG(LL_INFO, ("PWM Handler started"));
  char tmp = json_scanf(args.p, args.len, ri->args_fmt, &fan);
  LOG(LL_INFO, ("tmp: %d", tmp));

  if (tmp == 1) {
    mgos_pwm_set(5, 250, (float)fan / 255);
    mg_rpc_send_responsef(ri, "Fan: %d", fan);
  } else {
    mg_rpc_send_errorf(ri, -1, "Bad request. Expected: {\"Fan\":N1}");
  }
  (void) cb_arg;
  (void) fi;
}

static void rpc_cb_pwm_settemp(struct mg_rpc_request_info *ri, void *cb_arg, struct mg_rpc_frame_info *fi, struct mg_str args) {
  //LOG(LL_INFO, ("PWM Handler started: %lf", *((double*)cb_arg)));
  LOG(LL_INFO, ("PWM Temperatur Handler started"));
  char temp = 0;
  //LOG(LL_INFO, ("PWM Handler started"));
  char tmp = json_scanf(args.p, args.len, ri->args_fmt, &temp);
  LOG(LL_INFO, ("tmp: %d", tmp));

  if (tmp == 1) {
    mgos_pwm_set(13, 250, (float)temp / 255);
    mg_rpc_send_responsef(ri, "Temp: %d", temp);
  } else {
    mg_rpc_send_errorf(ri, -1, "Bad request. Expected: {\"Temp\":N1}");
  }
  (void) cb_arg;
  (void) fi;
}

enum mgos_app_init_result mgos_app_init(void) {
  LOG(LL_INFO, ("Init started"));
  //void mg_rpc_add_handler(struct mg_rpc *c, const char *method, const char *args_fmt, mg_handler_cb_t cb, void *cb_arg);
  mg_rpc_add_handler(mgos_rpc_get_global(), "PWM.SetDC", "{Pin: %d, Duty: %f, Frequency: %d}", rpc_cb_pwm_setdc, NULL);
  mg_rpc_add_handler(mgos_rpc_get_global(), "PWM.SetColor", "{Red: %d, Green: %d, Blue: %d}", rpc_cb_pwm_setcolor, NULL);
  mg_rpc_add_handler(mgos_rpc_get_global(), "PWM.SetLx", "{lx: %d}", rpc_cb_pwm_setlx, NULL);
  mg_rpc_add_handler(mgos_rpc_get_global(), "PWM.SetFan", "{Fan: %d}", rpc_cb_pwm_setfan, NULL);
  mg_rpc_add_handler(mgos_rpc_get_global(), "PWM.SetTemp", "{Temp: %d}", rpc_cb_pwm_settemp, NULL);
  return MGOS_APP_INIT_SUCCESS;
}
