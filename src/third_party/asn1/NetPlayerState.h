/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_NetPlayerState_H_
#define	_NetPlayerState_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum NetPlayerState {
		NetPlayerState_playerStateNormal	= 0,
		   NetPlayerState_playerStateSessionInactive	= 1,
		     NetPlayerState_playerStateNoMoney	= 2
	}
	             e_NetPlayerState;

	/* NetPlayerState */
	typedef long	 NetPlayerState_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_NetPlayerState;
	asn_struct_free_f NetPlayerState_free;
	asn_struct_print_f NetPlayerState_print;
	asn_constr_check_f NetPlayerState_constraint;
	ber_type_decoder_f NetPlayerState_decode_ber;
	der_type_encoder_f NetPlayerState_encode_der;
	xer_type_decoder_f NetPlayerState_decode_xer;
	xer_type_encoder_f NetPlayerState_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NetPlayerState_H_ */
#include <asn_internal.h>