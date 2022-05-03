#pragma once

#include "Keyboard.h"
#include "Mouse.h"

#include "key_config.h"
#include "keymap.h"

const int row_count = MATRIX_ROWS;
const int col_count = MATRIX_COLS;

int row_pins[MATRIX_ROWS] = MATRIX_ROWS_PINS;
int col_pins[MATRIX_COLS] = MATRIX_COLS_PINS;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < row_count; i++)
    pinMode(row_pins[i], OUTPUT);
  for (int i = 0; i < col_count; i++)
    pinMode(col_pins[i], INPUT_PULLUP);
}

void set_all_rows_to_high(){
 for (int i = 0; i < row_count; i++)
  digitalWrite(row_pins[i], HIGH);
}

void loop() {
  for (int i = 0; i < row_count; i++) {
   set_all_rows_to_high();
   digitalWrite(row_pins[i], LOW);
    for (int j = 0; j < col_count; j++) {
      Serial.print(digitalRead(col_pins[j]));
    }
    Serial.println();
  }
  delay(100);
}
