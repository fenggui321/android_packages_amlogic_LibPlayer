#ifndef FF_CONFIGS_H__
#define FF_CONFIGS_H__

#define MAX_CONFIG 128
#define CONFIG_PATH_MAX    32
#define CONFIG_VALUE_MAX   92
#define CONFIG_VALUE_OFF   (CONFIG_PATH_MAX+4)
#ifdef  __cplusplus
extern "C" {
#endif

    int am_config_init(void);
    int am_getconfig(const char * path, char *val, const char * def);
    int am_setconfig(const char * path, const char *val);
    int am_setconfig_float(const char * path, float value);
    int am_getconfig_float(const char * path, float *value);
    int am_dumpallconfigs(void);
#ifdef  __cplusplus
}
#endif
#endif
