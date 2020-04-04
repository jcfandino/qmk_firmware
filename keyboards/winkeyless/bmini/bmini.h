/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef BMINI_H
#define BMINI_H

#include "quantum.h"

#define LAYOUT( \
  K05, K15, K25, K35, K45, K55, K65, K75, K85, K95, KA5, KB5, KC5, KD5, KE5, KE0, \
  K04, K14, K24, K34, K44, K54, K64, K74, K84, K94, KA4, KB4, KC4, KE4,      KD0, \
  K03, K13, K23, K33, K43, K53, K63, K73, K83, K93, KA3, KB3, KC3, KD3,      KE3, \
  K02, K12, K22, K32, K42, K52, K62, K72, K82, K92, KA2, KB2,      KD2,      KE2, \
  K01, K21, K31, K41, K51, K61, K71, K81, K91, KA1, KB1,           KC1, KD1, KE1, \
  K00, K10, K20,           K50,                          K60, K80, K90, KA0, KB0  \
){ \
  { K00,   K10,   K20,   KC_NO, KC_NO, K50,   K60,   KC_NO, K80,   K90,   KA0,   KB0,   KC_NO, KD0,   KE0   }, \
  { K01,   KC_NO, K21,   K31,   K41,   K51,   K61,   K71,   K81,   K91,   KA1,   KB1,   KC1,   KD1,   KE1   }, \
  { K02,   K12,   K22,   K32,   K42,   K52,   K62,   K72,   K82,   K92,   KA2,   KB2,   KC_NO, KD2,   KE2   }, \
  { K03,   K13,   K23,   K33,   K43,   K53,   K63,   K73,   K83,   K93,   KA3,   KB3,   KC3,   KD3,   KE3   }, \
  { K04,   K14,   K24,   K34,   K44,   K54,   K64,   K74,   K84,   K94,   KA4,   KB4,   KC4,   KC_NO, KE4   }, \
  { K05,   K15,   K25,   K35,   K45,   K55,   K65,   K75,   K85,   K95,   KA5,   KB5,   KC5,   KD5,   KE5   }  \
}

#endif
