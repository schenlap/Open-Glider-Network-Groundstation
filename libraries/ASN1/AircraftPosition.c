/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AircraftModul"
 * 	found in "ogn.asn1"
 * 	`asn1c -fnative-types`
 */

#include "AircraftPosition.h"

static asn_TYPE_member_t asn_MBR_AircraftPosition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, callsign),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"callsign"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, timestamp),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timestamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, lat),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, lon),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, alt),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, type),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, stealth),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stealth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, notrack),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notrack"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, course),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"course"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, heading),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AircraftPosition, spped),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spped"
		},
};
static const ber_tlv_tag_t asn_DEF_AircraftPosition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AircraftPosition_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 6, 0, 1 }, /* stealth */
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 7, -1, 0 }, /* notrack */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 8 }, /* callsign */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 7 }, /* timestamp */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 6 }, /* lat */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 5 }, /* lon */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -4, 4 }, /* alt */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -5, 3 }, /* type */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 8, -6, 2 }, /* course */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 9, -7, 1 }, /* heading */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 10, -8, 0 } /* spped */
};
static asn_SEQUENCE_specifics_t asn_SPC_AircraftPosition_specs_1 = {
	sizeof(struct AircraftPosition),
	offsetof(struct AircraftPosition, _asn_ctx),
	asn_MAP_AircraftPosition_tag2el_1,
	11,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AircraftPosition = {
	"AircraftPosition",
	"AircraftPosition",
	&asn_OP_SEQUENCE,
	asn_DEF_AircraftPosition_tags_1,
	sizeof(asn_DEF_AircraftPosition_tags_1)
		/sizeof(asn_DEF_AircraftPosition_tags_1[0]), /* 1 */
	asn_DEF_AircraftPosition_tags_1,	/* Same as above */
	sizeof(asn_DEF_AircraftPosition_tags_1)
		/sizeof(asn_DEF_AircraftPosition_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AircraftPosition_1,
	11,	/* Elements count */
	&asn_SPC_AircraftPosition_specs_1	/* Additional specs */
};

