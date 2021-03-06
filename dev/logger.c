
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "Zend/zend_operators.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_interfaces.h"

#include "kernel/main.h"
#include "kernel/memory.h"

#include "kernel/fcall.h"
#include "kernel/object.h"

/**
 * Phalcon\Logger
 *
 * Phalcon\Logger is a component whose purpose is to create logs using
 * different backends via adapters, generating options, formats and filters
 * also implementing transactions.
 *
 *
 */

/**
  * Sends/Writes a debug message to the log
  *
  * @param string $message
  * @param ing $type
  */
PHP_METHOD(Phalcon_Logger, debug){

	zval *message = NULL;
	zval *t0 = NULL;

	PHALCON_MM_GROW();
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &message) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL_MM(t0);
	phalcon_get_class_constant(t0, phalcon_logger_ce, SL("DEBUG") TSRMLS_CC);
	PHALCON_CALL_METHOD_PARAMS_2_NORETURN(this_ptr, "log", message, t0, PH_NO_CHECK);
	
	PHALCON_MM_RESTORE();
}

/**
  * Sends/Writes an error message to the log
  *
  * @param string $message
  * @param ing $type
  */
PHP_METHOD(Phalcon_Logger, error){

	zval *message = NULL;
	zval *t0 = NULL;

	PHALCON_MM_GROW();
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &message) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL_MM(t0);
	phalcon_get_class_constant(t0, phalcon_logger_ce, SL("ERROR") TSRMLS_CC);
	PHALCON_CALL_METHOD_PARAMS_2_NORETURN(this_ptr, "log", message, t0, PH_NO_CHECK);
	
	PHALCON_MM_RESTORE();
}

/**
  * Sends/Writes an info message to the log
  *
  * @param string $message
  * @param ing $type
  */
PHP_METHOD(Phalcon_Logger, info){

	zval *message = NULL;
	zval *t0 = NULL;

	PHALCON_MM_GROW();
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &message) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL_MM(t0);
	phalcon_get_class_constant(t0, phalcon_logger_ce, SL("INFO") TSRMLS_CC);
	PHALCON_CALL_METHOD_PARAMS_2_NORETURN(this_ptr, "log", message, t0, PH_NO_CHECK);
	
	PHALCON_MM_RESTORE();
}

/**
  * Sends/Writes a notice message to the log
  *
  * @param string $message
  * @param ing $type
  */
PHP_METHOD(Phalcon_Logger, notice){

	zval *message = NULL;
	zval *t0 = NULL;

	PHALCON_MM_GROW();
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &message) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL_MM(t0);
	phalcon_get_class_constant(t0, phalcon_logger_ce, SL("NOTICE") TSRMLS_CC);
	PHALCON_CALL_METHOD_PARAMS_2_NORETURN(this_ptr, "log", message, t0, PH_NO_CHECK);
	
	PHALCON_MM_RESTORE();
}

/**
  * Sends/Writes a warning message to the log
  *
  * @param string $message
  * @param ing $type
  */
PHP_METHOD(Phalcon_Logger, warning){

	zval *message = NULL;
	zval *t0 = NULL;

	PHALCON_MM_GROW();
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &message) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL_MM(t0);
	phalcon_get_class_constant(t0, phalcon_logger_ce, SL("WARNING") TSRMLS_CC);
	PHALCON_CALL_METHOD_PARAMS_2_NORETURN(this_ptr, "log", message, t0, PH_NO_CHECK);
	
	PHALCON_MM_RESTORE();
}

/**
  * Sends/Writes an alert message to the log
  *
  * @param string $message
  * @param ing $type
  */
PHP_METHOD(Phalcon_Logger, alert){

	zval *message = NULL;
	zval *t0 = NULL;

	PHALCON_MM_GROW();
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &message) == FAILURE) {
		PHALCON_MM_RESTORE();
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL_MM(t0);
	phalcon_get_class_constant(t0, phalcon_logger_ce, SL("ALERT") TSRMLS_CC);
	PHALCON_CALL_METHOD_PARAMS_2_NORETURN(this_ptr, "log", message, t0, PH_NO_CHECK);
	
	PHALCON_MM_RESTORE();
}

