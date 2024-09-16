#include <pgmspace.h>
 
#define SECRET
#define ESP01 0
#define NODE01 1
#define THINGNAME "ESP8266-thing"
 
int8_t TIME_ZONE = 7; 
 
const char AWS_IOT_ENDPOINT[] = "a1kbd3hpw00ukd-ats.iot.ap-southeast-1.amazonaws.com";
 
 
// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";

// Device Certificate
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)KEY";

// Device Private Key
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
)KEY";