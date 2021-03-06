#define PROTOCOL_TEMINATE 0xF0
#define PROTOCOL_FRAME_START 0xFF

// Define ECU commands
#define ECU_COMMAND_READ_REGISTER 0x5A
#define ECU_COMMAND_SELF_DIAG 0xD1
#define ECU_COMMAND_CLEAR_CODES 0xC1
#define ECU_COMMAND_ECU_INFO 0xD0
#define ECU_COMMAND_TERM 0xF0
#define ECU_COMMAND_STOP_STREAM 0x3

// Define single register locations
#define ECU_REGISTER_COOLANT_TEMP 0x08
#define ECU_REGISTER_LEFT_O2 0x9
#define ECU_REGISTER_RIGHT_O2 0xA
#define ECU_REGISTER_VEHICLE_SPEED 0x0B
#define ECU_REGISTER_BATTERY_VOLTAGE 0x0C
#define ECU_REGISTER_THROTTLE_POSITION_SENSOR 0x0D
#define ECU_REGISTER_DIGITAL_BIT_REGISTER 0x13
#define ECU_REGISTER_IGNITION_TIMING 0x16
#define ECU_REGISTER_AAC_VALVE 0x17
#define ECU_REGISTER_AF_ALPHA 0x1A
#define ECU_REGISTER_DIGITAL_CONTROL_REGISTER_E 0x1E
#define ECU_REGISTER_DIGITAL_CONTROL_REGISTER_F 0x1F

// Define two register locations
#define ECU_REGISTER_TACH_MSB 0x00
#define ECU_REGISTER_TACH_LSB 0x01
#define ECU_REGISTER_LEFT_MAF_MSB 0x04
#define ECU_REGISTER_LEFT_MAF_LSB 0x05
#define ECU_REGISTER_RIGHT_MAF_MSB 0x06
#define ECU_REGISTER_RIGHT_MAF_LSB 0x07
#define ECU_REGISTER_INJECTION_TIME_MSB 0x14
#define ECU_REGISTER_INJECTION_TIME_LSB 0x15

// Define our null register location
#define ECU_REGISTER_NULL 0xFF