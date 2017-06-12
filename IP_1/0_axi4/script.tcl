############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project IP_1
set_top sobel
add_files IP_1st_restructure.c
add_files -tb golden.grey
add_files -tb input.grey
add_files -tb testbench.c
open_solution "0_axi4"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./IP_1/0_axi4/directives.tcl"
csim_design -clean -O
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -description "Axi4 communication protocol constraints, default C code synthesis" -display_name "0_axi4"
