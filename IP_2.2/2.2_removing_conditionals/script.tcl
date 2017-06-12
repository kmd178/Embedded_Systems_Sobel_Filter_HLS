############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project IP_2.2
set_top sobel
add_files IP_2.2_removing_conditional.c
add_files IP_2.2_removing_conditional.c
add_files -tb golden.grey
add_files -tb input.grey
add_files -tb testbench.c
add_files -tb golden.grey
add_files -tb input.grey
add_files -tb testbench.c
open_solution "2.2_removing_conditionals"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./IP_2.2/2.2_removing_conditionals/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -flow syn -rtl verilog -format ip_catalog
