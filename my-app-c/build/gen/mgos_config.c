/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/2.7.1/apps/my-app-c/esp8266/build_contexts/build_ctx_966624955/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp8266/src/esp_sys_config.yaml /fwbuild-volumes/2.7.1/apps/my-app-c/esp8266/build_contexts/build_ctx_966624955/build/gen/mos_conf_schema.yml
 */

#include <stddef.h>
#include "mgos_config.h"

const struct mgos_conf_entry mgos_config_schema_[145] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 144},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 8},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "filter", .offset = offsetof(struct mgos_config, debug.filter)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 2},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "password", .offset = offsetof(struct mgos_config, device.password)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 13},
  {.type = CONF_TYPE_OBJECT, .key = "mount", .offset = offsetof(struct mgos_config, sys.mount), .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
  {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
  {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
  {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
  {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "http", .offset = offsetof(struct mgos_config, http), .num_desc = 10},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
  {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
  {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
  {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 19},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "ws", .offset = offsetof(struct mgos_config, rpc.ws), .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
  {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, rpc.ws.ssl_client_cert_file)},
  {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 3},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
  {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 60},
  {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 15},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
  {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
  {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
  {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
  {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
  {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
  {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
  {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
  {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
  {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
  {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
  {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Getters {{{ */
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
int         mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
const char *mgos_config_get_debug_filter(struct mgos_config *cfg) {
  return cfg->debug.filter;
}
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}
const char *mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
const char *mgos_config_get_device_password(struct mgos_config *cfg) {
  return cfg->device.password;
}
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg) {
  return &cfg->sys.mount;
}
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg) {
  return cfg->sys.mount.path;
}
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_type;
}
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_opts;
}
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_type;
}
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_opts;
}
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
const char *mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}
int         mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
int         mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
int         mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
const struct mgos_config_http *mgos_config_get_http(struct mgos_config *cfg) {
  return &cfg->http;
}
int         mgos_config_get_http_enable(struct mgos_config *cfg) {
  return cfg->http.enable;
}
const char *mgos_config_get_http_listen_addr(struct mgos_config *cfg) {
  return cfg->http.listen_addr;
}
const char *mgos_config_get_http_document_root(struct mgos_config *cfg) {
  return cfg->http.document_root;
}
const char *mgos_config_get_http_ssl_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_cert;
}
const char *mgos_config_get_http_ssl_key(struct mgos_config *cfg) {
  return cfg->http.ssl_key;
}
const char *mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_ca_cert;
}
const char *mgos_config_get_http_upload_acl(struct mgos_config *cfg) {
  return cfg->http.upload_acl;
}
const char *mgos_config_get_http_hidden_files(struct mgos_config *cfg) {
  return cfg->http.hidden_files;
}
const char *mgos_config_get_http_auth_domain(struct mgos_config *cfg) {
  return cfg->http.auth_domain;
}
const char *mgos_config_get_http_auth_file(struct mgos_config *cfg) {
  return cfg->http.auth_file;
}
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}
int         mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
const struct mgos_config_rpc_ws *mgos_config_get_rpc_ws(struct mgos_config *cfg) {
  return &cfg->rpc.ws;
}
int         mgos_config_get_rpc_ws_enable(struct mgos_config *cfg) {
  return cfg->rpc.ws.enable;
}
const char *mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg) {
  return cfg->rpc.ws.server_address;
}
int         mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_min;
}
int         mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_max;
}
const char *mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_server_name;
}
const char *mgos_config_get_rpc_ws_ssl_ca_file(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_ca_file;
}
const char *mgos_config_get_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_client_cert_file;
}
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg) {
  return &cfg->rpc.uart;
}
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg) {
  return cfg->rpc.uart.uart_no;
}
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg) {
  return cfg->rpc.uart.baud_rate;
}
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg) {
  return cfg->rpc.uart.fc_type;
}
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg) {
  return &cfg->wifi;
}
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg) {
  return &cfg->wifi.ap;
}
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg) {
  return cfg->wifi.ap.enable;
}
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg) {
  return cfg->wifi.ap.ssid;
}
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg) {
  return cfg->wifi.ap.pass;
}
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg) {
  return cfg->wifi.ap.hidden;
}
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg) {
  return cfg->wifi.ap.channel;
}
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg) {
  return cfg->wifi.ap.max_connections;
}
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg) {
  return cfg->wifi.ap.ip;
}
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg) {
  return cfg->wifi.ap.netmask;
}
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg) {
  return cfg->wifi.ap.gw;
}
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_start;
}
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_end;
}
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg) {
  return cfg->wifi.ap.trigger_on_gpio;
}
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg) {
  return cfg->wifi.ap.disable_after;
}
const char *mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg) {
  return cfg->wifi.ap.hostname;
}
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg) {
  return cfg->wifi.ap.keep_enabled;
}
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg) {
  return &cfg->wifi.sta;
}
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta.enable;
}
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta.ssid;
}
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta.pass;
}
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg) {
  return cfg->wifi.sta.user;
}
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta.anon_identity;
}
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.cert;
}
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg) {
  return cfg->wifi.sta.key;
}
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.ca_cert;
}
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta.ip;
}
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta.netmask;
}
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta.gw;
}
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta.nameserver;
}
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta.dhcp_hostname;
}
const struct mgos_config_wifi_sta1 *mgos_config_get_wifi_sta1(struct mgos_config *cfg) {
  return &cfg->wifi.sta1;
}
int         mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta1.enable;
}
const char *mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ssid;
}
const char *mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta1.pass;
}
const char *mgos_config_get_wifi_sta1_user(struct mgos_config *cfg) {
  return cfg->wifi.sta1.user;
}
const char *mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta1.anon_identity;
}
const char *mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.cert;
}
const char *mgos_config_get_wifi_sta1_key(struct mgos_config *cfg) {
  return cfg->wifi.sta1.key;
}
const char *mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ca_cert;
}
const char *mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ip;
}
const char *mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta1.netmask;
}
const char *mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta1.gw;
}
const char *mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta1.nameserver;
}
const char *mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta1.dhcp_hostname;
}
const struct mgos_config_wifi_sta2 *mgos_config_get_wifi_sta2(struct mgos_config *cfg) {
  return &cfg->wifi.sta2;
}
int         mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta2.enable;
}
const char *mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ssid;
}
const char *mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta2.pass;
}
const char *mgos_config_get_wifi_sta2_user(struct mgos_config *cfg) {
  return cfg->wifi.sta2.user;
}
const char *mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta2.anon_identity;
}
const char *mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.cert;
}
const char *mgos_config_get_wifi_sta2_key(struct mgos_config *cfg) {
  return cfg->wifi.sta2.key;
}
const char *mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ca_cert;
}
const char *mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ip;
}
const char *mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta2.netmask;
}
const char *mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta2.gw;
}
const char *mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta2.nameserver;
}
const char *mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta2.dhcp_hostname;
}
int         mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg) {
  return cfg->wifi.sta_cfg_idx;
}
int         mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg) {
  return cfg->wifi.sta_connect_timeout;
}
const struct mgos_config_board *mgos_config_get_board(struct mgos_config *cfg) {
  return &cfg->board;
}
const struct mgos_config_board_led1 *mgos_config_get_board_led1(struct mgos_config *cfg) {
  return &cfg->board.led1;
}
int         mgos_config_get_board_led1_pin(struct mgos_config *cfg) {
  return cfg->board.led1.pin;
}
int         mgos_config_get_board_led1_active_high(struct mgos_config *cfg) {
  return cfg->board.led1.active_high;
}
const struct mgos_config_board_led2 *mgos_config_get_board_led2(struct mgos_config *cfg) {
  return &cfg->board.led2;
}
int         mgos_config_get_board_led2_pin(struct mgos_config *cfg) {
  return cfg->board.led2.pin;
}
int         mgos_config_get_board_led2_active_high(struct mgos_config *cfg) {
  return cfg->board.led2.active_high;
}
const struct mgos_config_board_led3 *mgos_config_get_board_led3(struct mgos_config *cfg) {
  return &cfg->board.led3;
}
int         mgos_config_get_board_led3_pin(struct mgos_config *cfg) {
  return cfg->board.led3.pin;
}
int         mgos_config_get_board_led3_active_high(struct mgos_config *cfg) {
  return cfg->board.led3.active_high;
}
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(struct mgos_config *cfg) {
  return &cfg->board.btn1;
}
int         mgos_config_get_board_btn1_pin(struct mgos_config *cfg) {
  return cfg->board.btn1.pin;
}
int         mgos_config_get_board_btn1_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn1.pull_up;
}
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(struct mgos_config *cfg) {
  return &cfg->board.btn2;
}
int         mgos_config_get_board_btn2_pin(struct mgos_config *cfg) {
  return cfg->board.btn2.pin;
}
int         mgos_config_get_board_btn2_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn2.pull_up;
}
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(struct mgos_config *cfg) {
  return &cfg->board.btn3;
}
int         mgos_config_get_board_btn3_pin(struct mgos_config *cfg) {
  return cfg->board.btn3.pin;
}
int         mgos_config_get_board_btn3_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn3.pull_up;
}
/* }}} */

/* Setters {{{ */
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, val);
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val) {
  cfg->debug.level = val;
}
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.filter, val);
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stdout_uart = val;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stderr_uart = val;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val) {
  cfg->debug.factory_reset_gpio = val;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, val);
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val) {
  cfg->debug.mbedtls_level = val;
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.id, val);
}
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.password, val);
}
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.path, val);
}
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_type, val);
}
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_opts, val);
}
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_type, val);
}
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_opts, val);
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.tz_spec, val);
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val) {
  cfg->sys.wdt_timeout = val;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, val);
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.enable = val;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.i2c_addr = val;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.ecdh_slots_mask = val;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->conf_acl, val);
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val) {
  cfg->i2c.enable = val;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val) {
  cfg->i2c.freq = val;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val) {
  cfg->i2c.debug = val;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.sda_gpio = val;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.scl_gpio = val;
}
void mgos_config_set_http_enable(struct mgos_config *cfg, int         val) {
  cfg->http.enable = val;
}
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.listen_addr, val);
}
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.document_root, val);
}
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_cert, val);
}
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_key, val);
}
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_ca_cert, val);
}
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.upload_acl, val);
}
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.hidden_files, val);
}
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.auth_domain, val);
}
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.auth_file, val);
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.enable = val;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_frame_size = val;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_queue_length = val;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val) {
  cfg->rpc.default_out_channel_idle_close_timeout = val;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.acl_file, val);
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, val);
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_file, val);
}
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.enable = val;
}
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.server_address, val);
}
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.reconnect_interval_min = val;
}
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int         val) {
  cfg->rpc.ws.reconnect_interval_max = val;
}
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, val);
}
void mgos_config_set_rpc_ws_ssl_ca_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_file, val);
}
void mgos_config_set_rpc_ws_ssl_client_cert_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_client_cert_file, val);
}
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.uart_no = val;
}
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.baud_rate = val;
}
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.fc_type = val;
}
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.enable = val;
}
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.ssid, val);
}
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.pass, val);
}
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.hidden = val;
}
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.channel = val;
}
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.max_connections = val;
}
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.ip, val);
}
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.netmask, val);
}
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.gw, val);
}
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, val);
}
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, val);
}
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.trigger_on_gpio = val;
}
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.disable_after = val;
}
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.hostname, val);
}
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.keep_enabled = val;
}
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta.enable = val;
}
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ssid, val);
}
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.pass, val);
}
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.user, val);
}
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.anon_identity, val);
}
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.cert, val);
}
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.key, val);
}
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ca_cert, val);
}
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ip, val);
}
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.netmask, val);
}
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.gw, val);
}
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.nameserver, val);
}
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, val);
}
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta1.enable = val;
}
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.ssid, val);
}
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.pass, val);
}
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.user, val);
}
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, val);
}
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.cert, val);
}
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.key, val);
}
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, val);
}
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.ip, val);
}
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.netmask, val);
}
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.gw, val);
}
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.nameserver, val);
}
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, val);
}
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta2.enable = val;
}
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.ssid, val);
}
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.pass, val);
}
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.user, val);
}
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, val);
}
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.cert, val);
}
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.key, val);
}
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, val);
}
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.ip, val);
}
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.netmask, val);
}
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.gw, val);
}
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.nameserver, val);
}
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, val);
}
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta_cfg_idx = val;
}
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta_connect_timeout = val;
}
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int         val) {
  cfg->board.led1.pin = val;
}
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int         val) {
  cfg->board.led1.active_high = val;
}
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int         val) {
  cfg->board.led2.pin = val;
}
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int         val) {
  cfg->board.led2.active_high = val;
}
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int         val) {
  cfg->board.led3.pin = val;
}
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int         val) {
  cfg->board.led3.active_high = val;
}
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int         val) {
  cfg->board.btn1.pin = val;
}
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int         val) {
  cfg->board.btn1.pull_up = val;
}
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int         val) {
  cfg->board.btn2.pin = val;
}
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int         val) {
  cfg->board.btn2.pull_up = val;
}
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int         val) {
  cfg->board.btn3.pin = val;
}
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int         val) {
  cfg->board.btn3.pull_up = val;
}
/* }}} */
