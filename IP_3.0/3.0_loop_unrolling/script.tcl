############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project IP_3.0
set_top sobel
add_files IP_3.0_unrolling_and_pipelining.c
add_files -tb golden.grey
add_files -tb input.grey
add_files -tb testbench.c
open_solution "3.0_loop_unrolling"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
source "./IP_3.0/3.0_loop_unrolling/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
