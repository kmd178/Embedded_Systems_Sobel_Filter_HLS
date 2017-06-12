############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project IP_2.1
set_top sobel
add_files IP_2.1_arbitrary_precision.c
add_files -tb testbench.c
add_files -tb input.grey
add_files -tb golden.grey
open_solution "2.1_arbitrary_precision"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./IP_2.1/2.1_arbitrary_precision/directives.tcl"
csim_design -clean -O
csynth_design
cosim_design
export_design -format ip_catalog
