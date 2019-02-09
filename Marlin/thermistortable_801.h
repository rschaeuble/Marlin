/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Calibrated temperature table for heatbed.
const short temptable_801[][2] PROGMEM = {
  { OV(306), 107 }, // configured: 140, interpolated
  { OV(341), 104 }, // configured: 135, interpolated
  { OV(376), 101 }, // configured: 130, interpolated
  { OV(411),  98 }, // configured: 125, measured
  { OV(445),  95 }, // configured: 120, measured
  { OV(480),  93 }, // configured: 115, measured
  { OV(516),  89 }, // configured: 110, measured
  { OV(553),  86 }, // configured: 105, measured
  { OV(591),  82 }, // configured: 100, measured
  { OV(628),  79 }, // configured: 95, measured
  { OV(665),  76 }, // configured: 90, measured
  { OV(702),  72 }, // configured: 85, measured
  { OV(737),  69 }, // configured: 80, measured
  { OV(770),  65 }, // configured: 75, measured
  { OV(800),  61 }, // configured: 70, measured
  { OV(829),  57 }, // configured: 65, measured
  { OV(857),  53 }, // configured: 60, measured
  { OV(880),  49 }, // configured: 55, measured
  { OV(903),  45 }, // configured: 50, measured
  { OV(922),  42 }, // configured: 45, measured
  { OV(939),  38 }, // configured: 40, measured
  { OV(950),  34 }, // configured: 36, measured
  { OV(966),  30 }, // configured: 30, measured
  { OV(976),  26 }, // configured: 25, measured
  { OV(983),  21 }, // configured: 23, measured

// original values
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
