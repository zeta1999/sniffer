#ifndef __DSSL_TLS_EXT_H__
#define __DSSL_TLS_EXT_H__


#include <sys/types.h>


u_int8_t tls_generate_keys(void* dssl_sess);
void tls_destroy_session(void* dssl_sess);
u_int8_t tls_decrypt_record(void* dssl_sess, u_char* data, u_int32_t len, 
			    u_int8_t record_type, u_int16_t record_version, u_int8_t is_from_server, 
			    u_char* rslt, u_int32_t rslt_max_len, u_int32_t *rslt_len);


#endif
