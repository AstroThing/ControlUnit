#include <string.h>

#define OPCODE_SIZE 5
#define ALU_FUNCT_SIZE 3

//SIGNALS
const unsigned short opcode[OPCODE_SIZE] = { 31, 29, 27, 25, 23 };
const unsigned short reg_write = 38;
const unsigned short is_move = 40;
const unsigned short is_mem_access = 42;
const unsigned short is_imm = 44;
const unsigned short alu_function[ALU_FUNCT_SIZE] = { 37, 35, 33 };
const unsigned short flags_write = 46;
const unsigned short dm_write_enable = 48;
const unsigned short is_jz = 50;
const unsigned short is_jnz = 52;
const unsigned short is_jl = 49;
const unsigned short is_jg = 51;
const unsigned short is_jump = 53;

void setBits(const unsigned short port[], const size_t data_size, const unsigned char data);
const unsigned char readData(const unsigned short port[], const size_t data_size);
unsigned char getOpcode(char* token);
void printSignals();
void clearPorts();

void setup() {
  Serial.begin(9600);
   
  for(int i = 0; i < OPCODE_SIZE; i++) {
    pinMode(opcode[i], OUTPUT);
    digitalWrite(opcode[i], LOW);
  }

  for(int i = 0; i < ALU_FUNCT_SIZE; i++) {
    pinMode(alu_function[i], INPUT);
  }
  
  pinMode(reg_write, INPUT);
  pinMode(is_move, INPUT);
  pinMode(is_mem_access, INPUT);
  pinMode(is_imm, INPUT);
  pinMode(flags_write, INPUT);
  pinMode(dm_write_enable, INPUT);
  pinMode(is_jz, INPUT);
  pinMode(is_jnz, INPUT);
  pinMode(is_jl, INPUT);
  pinMode(is_jg, INPUT);
  pinMode(is_jump, INPUT);
}
void loop() {
  if(Serial.available()) {

    String str = Serial.readString();
    char* token = strtok((char*)(str.c_str()), " ");
    Serial.println("Instruction: " + String(token));
    
    unsigned char _opcode = getOpcode(token);
    Serial.println("Operation Code: " + String((unsigned short)_opcode));
    setBits(opcode, OPCODE_SIZE, _opcode);
    delay(100);
    printSignals();
  }
}

unsigned char getOpcode(char* token)
{
    if(!strcmp(token, "add"))
      return 1;
    else if(!strcmp(token, "sub"))
      return 2;
    else if(!strcmp(token, "or"))
      return 3;
    else if(!strcmp(token, "and"))
      return 4;
    else if(!strcmp(token, "xor"))
      return 5;
    else if(!strcmp(token, "mov"))
      return 6;
    else if(!strcmp(token, "lw"))
      return 7;
    else if(!strcmp(token, "sw"))
      return 8;
    else if(!strcmp(token, "li"))
      return 9;
    else if(!strcmp(token, "addi"))
      return 10;
    else if(!strcmp(token, "subi"))
      return 11;
    else if(!strcmp(token, "cmp"))
      return 12;
    else if(!strcmp(token, "jz"))
      return 13;
    else if(!strcmp(token, "jnz"))
      return 14;
    else if(!strcmp(token, "jg"))
      return 15;
    else if(!strcmp(token, "jl"))
      return 16;
    else if(!strcmp(token, "jump"))
      return 17;
    return 0;
}

void printSignals()
{
    Serial.println("=============== SIGNALS ===============");
    Serial.println("RegWrite: " + String((unsigned short)readData(&reg_write,1)));
    Serial.println("IsMove: " + String((unsigned short) readData(&is_move,1)));
    Serial.println("IsMemAccess: " + String((unsigned short) readData(&is_mem_access,1)));
    Serial.println("IsImm: " + String((unsigned short) readData(&is_imm,1)));
    Serial.println("ALU_Function: " + String((unsigned short) readData(alu_function,3)));
    Serial.println("WriteFlag: " + String((unsigned short) readData(&flags_write,1)));
    Serial.println("DM_Write_Enable: " + String((unsigned short) readData(&dm_write_enable,1)));
    Serial.println("IsJz: " + String((unsigned short) readData(&is_jz,1)));
    Serial.println("IsJnz: " + String((unsigned short) readData(&is_jnz,1)));
    Serial.println("IsJl: " + String((unsigned short) readData(&is_jl,1)));
    Serial.println("IsJg: " + String((unsigned short) readData(&is_jg,1)));
    Serial.println("IsJump: " + String((unsigned short) readData(&is_jump,1)) + "\n");
}

void setBits(const unsigned short port[], const size_t data_size, const unsigned char data) {
  for(int i = 0; i < data_size; i++) {
    if(data & (1 << i))
      digitalWrite(port[i], HIGH);
    else
      digitalWrite(port[i], LOW);
  }
}

const unsigned char readData(const unsigned short port[], const size_t data_size) {
  unsigned char data = 0;
  
  for(int i = 0; i < data_size; i++)
    data |= (digitalRead(port[i]) << i);
    
  return data;
}
