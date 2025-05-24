`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg

module user_font_rom #(
  parameter int unsigned ROM_SIZE_BYTES  = 1140, // 95 chars * 12 bytes/char
  parameter int          ADDR_LOCAL_WIDTH = 12,  // To decode local address offset
  parameter int          ROM_ADDR_BITS   = $clog2(ROM_SIZE_BYTES)
) (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o
);



localparam logic [7:0] FONT_DATA [0:1139] = '{
    // Char ' ' (ASCII 32), Offset 0x000 (Bytes 0-11)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '!' (ASCII 33), Offset 0x00C (Bytes 12-23)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h3F, 8'h40, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '"' (ASCII 34), Offset 0x018 (Bytes 24-35)
    8'h00, 8'h00, 8'h30, 8'h00, 8'h40, 8'h00, 8'h30, 8'h00, 8'h40, 8'h00, 8'h00, 8'h00,
    // Char '#' (ASCII 35), Offset 0x024 (Bytes 36-47)
    8'h09, 8'h00, 8'h0B, 8'hC0, 8'h3D, 8'h00, 8'h0B, 8'hC0, 8'h3D, 8'h00, 8'h09, 8'h00,
    // Char '$' (ASCII 36), Offset 0x030 (Bytes 48-59)
    8'h18, 8'hC0, 8'h24, 8'h40, 8'h7F, 8'hE0, 8'h22, 8'h40, 8'h31, 8'h80, 8'h00, 8'h00,
    // Char '%' (ASCII 37), Offset 0x03C (Bytes 60-71)
    8'h18, 8'h00, 8'h24, 8'hC0, 8'h1B, 8'h00, 8'h0D, 8'h80, 8'h32, 8'h40, 8'h01, 8'h80,
    // Char '&' (ASCII 38), Offset 0x048 (Bytes 72-83)
    8'h03, 8'h80, 8'h1C, 8'h40, 8'h27, 8'h40, 8'h1C, 8'h80, 8'h07, 8'h40, 8'h00, 8'h40,
    // Char ''' (ASCII 39), Offset 0x054 (Bytes 84-95)
    8'h10, 8'h00, 8'h60, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '(' (ASCII 40), Offset 0x060 (Bytes 96-107)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h1F, 8'h80, 8'h20, 8'h40, 8'h40, 8'h20,
    // Char ')' (ASCII 41), Offset 0x06C (Bytes 108-119)
    8'h00, 8'h00, 8'h40, 8'h20, 8'h20, 8'h40, 8'h1F, 8'h80, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '*' (ASCII 42), Offset 0x078 (Bytes 120-131)
    8'h09, 8'h00, 8'h06, 8'h00, 8'h1F, 8'h80, 8'h06, 8'h00, 8'h09, 8'h00, 8'h00, 8'h00,
    // Char '+' (ASCII 43), Offset 0x084 (Bytes 132-143)
    8'h04, 8'h00, 8'h04, 8'h00, 8'h3F, 8'h80, 8'h04, 8'h00, 8'h04, 8'h00, 8'h00, 8'h00,
    // Char ',' (ASCII 44), Offset 0x090 (Bytes 144-155)
    8'h00, 8'h10, 8'h00, 8'h60, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '-' (ASCII 45), Offset 0x09C (Bytes 156-167)
    8'h04, 8'h00, 8'h04, 8'h00, 8'h04, 8'h00, 8'h04, 8'h00, 8'h04, 8'h00, 8'h00, 8'h00,
    // Char '.' (ASCII 46), Offset 0x0A8 (Bytes 168-179)
    8'h00, 8'h00, 8'h00, 8'h40, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '/' (ASCII 47), Offset 0x0B4 (Bytes 180-191)
    8'h00, 8'h20, 8'h01, 8'hC0, 8'h06, 8'h00, 8'h38, 8'h00, 8'h40, 8'h00, 8'h00, 8'h00,
    // Char '0' (ASCII 48), Offset 0x0C0 (Bytes 192-203)
    8'h1F, 8'h80, 8'h20, 8'h40, 8'h20, 8'h40, 8'h20, 8'h40, 8'h1F, 8'h80, 8'h00, 8'h00,
    // Char '1' (ASCII 49), Offset 0x0CC (Bytes 204-215)
    8'h00, 8'h00, 8'h10, 8'h40, 8'h3F, 8'hC0, 8'h00, 8'h40, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '2' (ASCII 50), Offset 0x0D8 (Bytes 216-227)
    8'h18, 8'hC0, 8'h21, 8'h40, 8'h22, 8'h40, 8'h24, 8'h40, 8'h18, 8'h40, 8'h00, 8'h00,
    // Char '3' (ASCII 51), Offset 0x0E4 (Bytes 228-239)
    8'h10, 8'h80, 8'h20, 8'h40, 8'h24, 8'h40, 8'h24, 8'h40, 8'h1B, 8'h80, 8'h00, 8'h00,
    // Char '4' (ASCII 52), Offset 0x0F0 (Bytes 240-251)
    8'h02, 8'h00, 8'h0D, 8'h00, 8'h11, 8'h00, 8'h3F, 8'hC0, 8'h01, 8'h40, 8'h00, 8'h00,
    // Char '5' (ASCII 53), Offset 0x0FC (Bytes 252-263)
    8'h3C, 8'h80, 8'h24, 8'h40, 8'h24, 8'h40, 8'h24, 8'h40, 8'h23, 8'h80, 8'h00, 8'h00,
    // Char '6' (ASCII 54), Offset 0x108 (Bytes 264-275)
    8'h1F, 8'h80, 8'h24, 8'h40, 8'h24, 8'h40, 8'h34, 8'h40, 8'h03, 8'h80, 8'h00, 8'h00,
    // Char '7' (ASCII 55), Offset 0x114 (Bytes 276-287)
    8'h30, 8'h00, 8'h20, 8'h00, 8'h27, 8'hC0, 8'h38, 8'h00, 8'h20, 8'h00, 8'h00, 8'h00,
    // Char '8' (ASCII 56), Offset 0x120 (Bytes 288-299)
    8'h1B, 8'h80, 8'h24, 8'h40, 8'h24, 8'h40, 8'h24, 8'h40, 8'h1B, 8'h80, 8'h00, 8'h00,
    // Char '9' (ASCII 57), Offset 0x12C (Bytes 300-311)
    8'h1C, 8'h00, 8'h22, 8'hC0, 8'h22, 8'h40, 8'h22, 8'h40, 8'h1F, 8'h80, 8'h00, 8'h00,
    // Char ':' (ASCII 58), Offset 0x138 (Bytes 312-323)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h08, 8'h40, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char ';' (ASCII 59), Offset 0x144 (Bytes 324-335)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h04, 8'h60, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '<' (ASCII 60), Offset 0x150 (Bytes 336-347)
    8'h00, 8'h00, 8'h04, 8'h00, 8'h0A, 8'h00, 8'h11, 8'h00, 8'h20, 8'h80, 8'h40, 8'h40,
    // Char '=' (ASCII 61), Offset 0x15C (Bytes 348-359)
    8'h09, 8'h00, 8'h09, 8'h00, 8'h09, 8'h00, 8'h09, 8'h00, 8'h09, 8'h00, 8'h00, 8'h00,
    // Char '>' (ASCII 62), Offset 0x168 (Bytes 360-371)
    8'h00, 8'h00, 8'h40, 8'h40, 8'h20, 8'h80, 8'h11, 8'h00, 8'h0A, 8'h00, 8'h04, 8'h00,
    // Char '?' (ASCII 63), Offset 0x174 (Bytes 372-383)
    8'h18, 8'h00, 8'h20, 8'h00, 8'h23, 8'h40, 8'h24, 8'h00, 8'h18, 8'h00, 8'h00, 8'h00,
    // Char '@' (ASCII 64), Offset 0x180 (Bytes 384-395)
    8'h1F, 8'h80, 8'h20, 8'h40, 8'h27, 8'h40, 8'h29, 8'h40, 8'h1F, 8'h40, 8'h00, 8'h00,
    // Char 'A' (ASCII 65), Offset 0x18C (Bytes 396-407)
    8'h00, 8'h40, 8'h07, 8'hC0, 8'h39, 8'h00, 8'h0F, 8'h00, 8'h01, 8'hC0, 8'h00, 8'h40,
    // Char 'B' (ASCII 66), Offset 0x198 (Bytes 408-419)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h24, 8'h40, 8'h24, 8'h40, 8'h1B, 8'h80, 8'h00, 8'h00,
    // Char 'C' (ASCII 67), Offset 0x1A4 (Bytes 420-431)
    8'h1F, 8'h80, 8'h20, 8'h40, 8'h20, 8'h40, 8'h20, 8'h40, 8'h30, 8'h80, 8'h00, 8'h00,
    // Char 'D' (ASCII 68), Offset 0x1B0 (Bytes 432-443)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h20, 8'h40, 8'h20, 8'h40, 8'h1F, 8'h80, 8'h00, 8'h00,
    // Char 'E' (ASCII 69), Offset 0x1BC (Bytes 444-455)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h24, 8'h40, 8'h2E, 8'h40, 8'h30, 8'hC0, 8'h00, 8'h00,
    // Char 'F' (ASCII 70), Offset 0x1C8 (Bytes 456-467)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h24, 8'h40, 8'h2E, 8'h00, 8'h30, 8'h00, 8'h00, 8'h00,
    // Char 'G' (ASCII 71), Offset 0x1D4 (Bytes 468-479)
    8'h0F, 8'h00, 8'h10, 8'h80, 8'h20, 8'h40, 8'h22, 8'h40, 8'h33, 8'h80, 8'h02, 8'h00,
    // Char 'H' (ASCII 72), Offset 0x1E0 (Bytes 480-491)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h04, 8'h00, 8'h04, 8'h00, 8'h3F, 8'hC0, 8'h20, 8'h40,
    // Char 'I' (ASCII 73), Offset 0x1EC (Bytes 492-503)
    8'h20, 8'h40, 8'h20, 8'h40, 8'h3F, 8'hC0, 8'h20, 8'h40, 8'h20, 8'h40, 8'h00, 8'h00,
    // Char 'J' (ASCII 74), Offset 0x1F8 (Bytes 504-515)
    8'h00, 8'h60, 8'h20, 8'h20, 8'h20, 8'h20, 8'h3F, 8'hC0, 8'h20, 8'h00, 8'h20, 8'h00,
    // Char 'K' (ASCII 75), Offset 0x204 (Bytes 516-527)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h24, 8'h40, 8'h0B, 8'h00, 8'h30, 8'hC0, 8'h20, 8'h40,
    // Char 'L' (ASCII 76), Offset 0x210 (Bytes 528-539)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h20, 8'h40, 8'h00, 8'h40, 8'h00, 8'h40, 8'h00, 8'hC0,
    // Char 'M' (ASCII 77), Offset 0x21C (Bytes 540-551)
    8'h3F, 8'hC0, 8'h3C, 8'h00, 8'h03, 8'hC0, 8'h3C, 8'h00, 8'h3F, 8'hC0, 8'h00, 8'h00,
    // Char 'N' (ASCII 78), Offset 0x228 (Bytes 552-563)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h0C, 8'h40, 8'h23, 8'h00, 8'h3F, 8'hC0, 8'h20, 8'h00,
    // Char 'O' (ASCII 79), Offset 0x234 (Bytes 564-575)
    8'h1F, 8'h80, 8'h20, 8'h40, 8'h20, 8'h40, 8'h20, 8'h40, 8'h1F, 8'h80, 8'h00, 8'h00,
    // Char 'P' (ASCII 80), Offset 0x240 (Bytes 576-587)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h24, 8'h40, 8'h24, 8'h00, 8'h18, 8'h00, 8'h00, 8'h00,
    // Char 'Q' (ASCII 81), Offset 0x24C (Bytes 588-599)
    8'h1F, 8'h80, 8'h21, 8'h40, 8'h21, 8'h40, 8'h20, 8'hE0, 8'h1F, 8'hA0, 8'h00, 8'h00,
    // Char 'R' (ASCII 82), Offset 0x258 (Bytes 600-611)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h24, 8'h40, 8'h26, 8'h00, 8'h19, 8'hC0, 8'h00, 8'h40,
    // Char 'S' (ASCII 83), Offset 0x264 (Bytes 612-623)
    8'h18, 8'hC0, 8'h24, 8'h40, 8'h24, 8'h40, 8'h22, 8'h40, 8'h31, 8'h80, 8'h00, 8'h00,
    // Char 'T' (ASCII 84), Offset 0x270 (Bytes 624-635)
    8'h30, 8'h00, 8'h20, 8'h40, 8'h3F, 8'hC0, 8'h20, 8'h40, 8'h30, 8'h00, 8'h00, 8'h00,
    // Char 'U' (ASCII 85), Offset 0x27C (Bytes 636-647)
    8'h20, 8'h00, 8'h3F, 8'h80, 8'h00, 8'h40, 8'h00, 8'h40, 8'h3F, 8'h80, 8'h20, 8'h00,
    // Char 'V' (ASCII 86), Offset 0x288 (Bytes 648-659)
    8'h20, 8'h00, 8'h3E, 8'h00, 8'h01, 8'hC0, 8'h07, 8'h00, 8'h38, 8'h00, 8'h20, 8'h00,
    // Char 'W' (ASCII 87), Offset 0x294 (Bytes 660-671)
    8'h38, 8'h00, 8'h07, 8'hC0, 8'h3C, 8'h00, 8'h07, 8'hC0, 8'h38, 8'h00, 8'h00, 8'h00,
    // Char 'X' (ASCII 88), Offset 0x2A0 (Bytes 672-683)
    8'h20, 8'h40, 8'h39, 8'hC0, 8'h06, 8'h00, 8'h39, 8'hC0, 8'h20, 8'h40, 8'h00, 8'h00,
    // Char 'Y' (ASCII 89), Offset 0x2AC (Bytes 684-695)
    8'h20, 8'h00, 8'h38, 8'h40, 8'h07, 8'hC0, 8'h38, 8'h40, 8'h20, 8'h00, 8'h00, 8'h00,
    // Char 'Z' (ASCII 90), Offset 0x2B8 (Bytes 696-707)
    8'h30, 8'h40, 8'h21, 8'hC0, 8'h26, 8'h40, 8'h38, 8'h40, 8'h20, 8'hC0, 8'h00, 8'h00,
    // Char '[' (ASCII 91), Offset 0x2C4 (Bytes 708-719)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h7F, 8'hE0, 8'h40, 8'h20, 8'h40, 8'h20, 8'h00, 8'h00,
    // Char '\' (ASCII 92), Offset 0x2D0 (Bytes 720-731)
    8'h00, 8'h00, 8'h70, 8'h00, 8'h0C, 8'h00, 8'h03, 8'h80, 8'h00, 8'h40, 8'h00, 8'h00,
    // Char ']' (ASCII 93), Offset 0x2DC (Bytes 732-743)
    8'h00, 8'h00, 8'h40, 8'h20, 8'h40, 8'h20, 8'h7F, 8'hE0, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '^' (ASCII 94), Offset 0x2E8 (Bytes 744-755)
    8'h00, 8'h00, 8'h20, 8'h00, 8'h40, 8'h00, 8'h20, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '_' (ASCII 95), Offset 0x2F4 (Bytes 756-767)
    8'h00, 8'h10, 8'h00, 8'h10, 8'h00, 8'h10, 8'h00, 8'h10, 8'h00, 8'h10, 8'h00, 8'h10,
    // Char '`' (ASCII 96), Offset 0x300 (Bytes 768-779)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h40, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char 'a' (ASCII 97), Offset 0x30C (Bytes 780-791)
    8'h00, 8'h00, 8'h02, 8'h80, 8'h05, 8'h40, 8'h05, 8'h40, 8'h03, 8'hC0, 8'h00, 8'h40,
    // Char 'b' (ASCII 98), Offset 0x318 (Bytes 792-803)
    8'h20, 8'h00, 8'h3F, 8'hC0, 8'h04, 8'h40, 8'h04, 8'h40, 8'h03, 8'h80, 8'h00, 8'h00,
    // Char 'c' (ASCII 99), Offset 0x324 (Bytes 804-815)
    8'h00, 8'h00, 8'h03, 8'h80, 8'h04, 8'h40, 8'h04, 8'h40, 8'h06, 8'h40, 8'h00, 8'h00,
    // Char 'd' (ASCII 100), Offset 0x330 (Bytes 816-827)
    8'h00, 8'h00, 8'h03, 8'h80, 8'h04, 8'h40, 8'h24, 8'h40, 8'h3F, 8'hC0, 8'h00, 8'h40,
    // Char 'e' (ASCII 101), Offset 0x33C (Bytes 828-839)
    8'h00, 8'h00, 8'h03, 8'h80, 8'h05, 8'h40, 8'h05, 8'h40, 8'h03, 8'h40, 8'h00, 8'h00,
    // Char 'f' (ASCII 102), Offset 0x348 (Bytes 840-851)
    8'h00, 8'h00, 8'h04, 8'h40, 8'h1F, 8'hC0, 8'h24, 8'h40, 8'h24, 8'h40, 8'h20, 8'h00,
    // Char 'g' (ASCII 103), Offset 0x354 (Bytes 852-863)
    8'h00, 8'h00, 8'h02, 8'hE0, 8'h05, 8'h50, 8'h05, 8'h50, 8'h06, 8'h50, 8'h04, 8'h20,
    // Char 'h' (ASCII 104), Offset 0x360 (Bytes 864-875)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h04, 8'h40, 8'h04, 8'h00, 8'h03, 8'hC0, 8'h00, 8'h40,
    // Char 'i' (ASCII 105), Offset 0x36C (Bytes 876-887)
    8'h00, 8'h00, 8'h04, 8'h40, 8'h27, 8'hC0, 8'h00, 8'h40, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char 'j' (ASCII 106), Offset 0x378 (Bytes 888-899)
    8'h00, 8'h10, 8'h00, 8'h10, 8'h04, 8'h10, 8'h27, 8'hE0, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char 'k' (ASCII 107), Offset 0x384 (Bytes 900-911)
    8'h20, 8'h40, 8'h3F, 8'hC0, 8'h01, 8'h40, 8'h07, 8'h00, 8'h04, 8'hC0, 8'h04, 8'h40,
    // Char 'l' (ASCII 108), Offset 0x390 (Bytes 912-923)
    8'h20, 8'h40, 8'h20, 8'h40, 8'h3F, 8'hC0, 8'h00, 8'h40, 8'h00, 8'h40, 8'h00, 8'h00,
    // Char 'm' (ASCII 109), Offset 0x39C (Bytes 924-935)
    8'h07, 8'hC0, 8'h04, 8'h00, 8'h07, 8'hC0, 8'h04, 8'h00, 8'h03, 8'hC0, 8'h00, 8'h00,
    // Char 'n' (ASCII 110), Offset 0x3A8 (Bytes 936-947)
    8'h04, 8'h40, 8'h07, 8'hC0, 8'h04, 8'h40, 8'h04, 8'h00, 8'h03, 8'hC0, 8'h00, 8'h40,
    // Char 'o' (ASCII 111), Offset 0x3B4 (Bytes 948-959)
    8'h00, 8'h00, 8'h03, 8'h80, 8'h04, 8'h40, 8'h04, 8'h40, 8'h03, 8'h80, 8'h00, 8'h00,
    // Char 'p' (ASCII 112), Offset 0x3C0 (Bytes 960-971)
    8'h04, 8'h10, 8'h07, 8'hF0, 8'h04, 8'h50, 8'h04, 8'h40, 8'h03, 8'h80, 8'h00, 8'h00,
    // Char 'q' (ASCII 113), Offset 0x3CC (Bytes 972-983)
    8'h00, 8'h00, 8'h03, 8'h80, 8'h04, 8'h40, 8'h04, 8'h50, 8'h07, 8'hF0, 8'h00, 8'h10,
    // Char 'r' (ASCII 114), Offset 0x3D8 (Bytes 984-995)
    8'h04, 8'h40, 8'h07, 8'hC0, 8'h02, 8'h40, 8'h04, 8'h00, 8'h04, 8'h00, 8'h00, 8'h00,
    // Char 's' (ASCII 115), Offset 0x3E4 (Bytes 996-1007)
    8'h00, 8'h00, 8'h06, 8'h40, 8'h05, 8'h40, 8'h05, 8'h40, 8'h04, 8'hC0, 8'h00, 8'h00,
    // Char 't' (ASCII 116), Offset 0x3F0 (Bytes 1008-1019)
    8'h00, 8'h00, 8'h04, 8'h00, 8'h1F, 8'h80, 8'h04, 8'h40, 8'h00, 8'h40, 8'h00, 8'h00,
    // Char 'u' (ASCII 117), Offset 0x3FC (Bytes 1020-1031)
    8'h04, 8'h00, 8'h07, 8'h80, 8'h00, 8'h40, 8'h04, 8'h40, 8'h07, 8'hC0, 8'h00, 8'h40,
    // Char 'v' (ASCII 118), Offset 0x408 (Bytes 1032-1043)
    8'h04, 8'h00, 8'h07, 8'h00, 8'h04, 8'hC0, 8'h01, 8'h80, 8'h06, 8'h00, 8'h04, 8'h00,
    // Char 'w' (ASCII 119), Offset 0x414 (Bytes 1044-1055)
    8'h06, 8'h00, 8'h01, 8'hC0, 8'h07, 8'h00, 8'h01, 8'hC0, 8'h06, 8'h00, 8'h00, 8'h00,
    // Char 'x' (ASCII 120), Offset 0x420 (Bytes 1056-1067)
    8'h04, 8'h40, 8'h06, 8'hC0, 8'h01, 8'h00, 8'h06, 8'hC0, 8'h04, 8'h40, 8'h00, 8'h00,
    // Char 'y' (ASCII 121), Offset 0x42C (Bytes 1068-1079)
    8'h04, 8'h10, 8'h07, 8'h10, 8'h04, 8'hE0, 8'h01, 8'h80, 8'h06, 8'h00, 8'h04, 8'h00,
    // Char 'z' (ASCII 122), Offset 0x438 (Bytes 1080-1091)
    8'h00, 8'h00, 8'h04, 8'h40, 8'h05, 8'hC0, 8'h06, 8'h40, 8'h04, 8'h40, 8'h00, 8'h00,
    // Char '{' (ASCII 123), Offset 0x444 (Bytes 1092-1103)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h04, 8'h00, 8'h7B, 8'hE0, 8'h40, 8'h20, 8'h00, 8'h00,
    // Char '|' (ASCII 124), Offset 0x450 (Bytes 1104-1115)
    8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00, 8'hFF, 8'hF0, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '}' (ASCII 125), Offset 0x45C (Bytes 1116-1127)
    8'h00, 8'h00, 8'h40, 8'h20, 8'h7B, 8'hE0, 8'h04, 8'h00, 8'h00, 8'h00, 8'h00, 8'h00,
    // Char '~' (ASCII 126), Offset 0x468 (Bytes 1128-1139)
    8'h40, 8'h00, 8'h80, 8'h00, 8'h40, 8'h00, 8'h20, 8'h00, 8'h20, 8'h00, 8'h40, 8'h00
};


  logic        req_latch_q;
  logic        we_latch_q;
  logic [ADDR_LOCAL_WIDTH-1:0] addr_offset_latch_q;
  logic [SbrObiCfg.IdWidth-1:0] id_latch_q;

  assign obi_rsp_o.gnt = obi_req_i.req;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q         <= 1'b0;
      we_latch_q          <= 1'b0;
      addr_offset_latch_q <= '0;
      id_latch_q          <= '0;
    end else begin
      if (obi_req_i.req && obi_rsp_o.gnt) begin
        req_latch_q         <= obi_req_i.req;
        we_latch_q          <= obi_req_i.a.we;
        addr_offset_latch_q <= obi_req_i.a.addr[ADDR_LOCAL_WIDTH-1:0];
        id_latch_q          <= obi_req_i.a.aid;
      end else if (!obi_req_i.req) begin
        req_latch_q <= 1'b0;
      end
    end
  end

  assign obi_rsp_o.rvalid = req_latch_q;
  assign obi_rsp_o.r.rid  = id_latch_q;

  logic addr_in_bounds_latch;
  // Index for the FONT_DATA array uses ROM_ADDR_BITS
  logic [ROM_ADDR_BITS-1:0] rom_byte_index;
  assign rom_byte_index = addr_offset_latch_q[ROM_ADDR_BITS-1:0];
  assign addr_in_bounds_latch = (rom_byte_index < ROM_SIZE_BYTES);

  assign obi_rsp_o.r.err  = req_latch_q && (we_latch_q || (!we_latch_q && !addr_in_bounds_latch));

  always_comb begin
    obi_rsp_o.r.rdata = 32'h0;
    if (req_latch_q && !we_latch_q && addr_in_bounds_latch) begin // valid read
      obi_rsp_o.r.rdata = {{(SbrObiCfg.DataWidth-8){1'b0}}, FONT_DATA[rom_byte_index]};
    end
    obi_rsp_o.r.r_optional = 1'b0;
  end

endmodule



