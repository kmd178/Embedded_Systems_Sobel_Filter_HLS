set C_TypeInfoList {{ 
"sobel" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"input": [[], {"array": [ {"scalar": "unsigned char"}, [1048576]]}] }, {"output": [[], {"array": [ {"scalar": "unsigned char"}, [1048576]]}] }],[],""]
}}
set moduleName sobel
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {sobel}
set C_modelType { void 0 }
set C_modelArgList {
	{ INPUT_BUNDLE int 8 regular {axi_master 0}  }
	{ OUTPUT_BUNDLE int 8 regular {axi_master 1}  }
	{ input_r int 32 regular {axi_slave 0}  }
	{ output_r int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "INPUT_BUNDLE", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "input_r","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 1048575,"step" : 1}]}]}]} , 
 	{ "Name" : "OUTPUT_BUNDLE", "interface" : "axi_master", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "output","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "output_r","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 1048575,"step" : 1}]}]}]} , 
 	{ "Name" : "input_r", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "output_r", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} ]}
# RTL Port declarations: 
set portNum 110
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_INPUT_BUNDLE_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_BUNDLE_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_INPUT_BUNDLE_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_INPUT_BUNDLE_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_INPUT_BUNDLE_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_OUTPUT_BUNDLE_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_OUTPUT_BUNDLE_BUSER sc_in sc_lv 1 signal 1 } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"sobel","role":"start","value":"0","valid_bit":"0"},{"name":"sobel","role":"continue","value":"0","valid_bit":"4"},{"name":"sobel","role":"auto_start","value":"0","valid_bit":"7"},{"name":"input_r","role":"data","value":"16"},{"name":"output_r","role":"data","value":"24"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"sobel","role":"start","value":"0","valid_bit":"0"},{"name":"sobel","role":"done","value":"0","valid_bit":"1"},{"name":"sobel","role":"idle","value":"0","valid_bit":"2"},{"name":"sobel","role":"ready","value":"0","valid_bit":"3"},{"name":"sobel","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWVALID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWREADY" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWADDR" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWLEN" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWBURST" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWPROT" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWQOS" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWREGION" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "AWUSER" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WVALID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WREADY" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WDATA" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WSTRB" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WLAST" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "WUSER" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARVALID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARREADY" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARADDR" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARLEN" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARBURST" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARPROT" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARQOS" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARREGION" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "ARUSER" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RVALID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RREADY" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RDATA" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RLAST" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RUSER" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "RRESP" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "BVALID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "BREADY" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "BRESP" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "BID" }} , 
 	{ "name": "m_axi_INPUT_BUNDLE_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_BUNDLE", "role": "BUSER" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWVALID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWREADY" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWADDR" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWLEN" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWBURST" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWPROT" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWQOS" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWREGION" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "AWUSER" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WVALID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WREADY" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WDATA" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WSTRB" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WLAST" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "WUSER" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARVALID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARREADY" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARADDR" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARLEN" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARBURST" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARPROT" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARQOS" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARREGION" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "ARUSER" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RVALID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RREADY" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RDATA" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RLAST" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RUSER" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "RRESP" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "BVALID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "BREADY" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "BRESP" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "BID" }} , 
 	{ "name": "m_axi_OUTPUT_BUNDLE_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_BUNDLE", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "sobel",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "INPUT_BUNDLE", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "INPUT_BUNDLE_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "INPUT_BUNDLE_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "OUTPUT_BUNDLE", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "OUTPUT_BUNDLE_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "OUTPUT_BUNDLE_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "OUTPUT_BUNDLE_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "input_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_INPUT_BUNDLE_m_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_OUTPUT_BUNDLE_m_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_sitodp_32s_bkb_U0", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_dsqrt_64ns_cud_U1", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_mul_mul_11sdEe_U2", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sobel_mac_muladd_eOg_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	sobel {
		INPUT_BUNDLE {Type I LastRead 18 FirstWrite -1}
		OUTPUT_BUNDLE {Type O LastRead 68 FirstWrite 63}
		input_r {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "69982473", "Max" : "69982473"}
	, {"Name" : "Interval", "Min" : "69982474", "Max" : "69982474"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	INPUT_BUNDLE { m_axi {  { m_axi_INPUT_BUNDLE_AWVALID VALID 1 1 }  { m_axi_INPUT_BUNDLE_AWREADY READY 0 1 }  { m_axi_INPUT_BUNDLE_AWADDR ADDR 1 32 }  { m_axi_INPUT_BUNDLE_AWID ID 1 1 }  { m_axi_INPUT_BUNDLE_AWLEN LEN 1 8 }  { m_axi_INPUT_BUNDLE_AWSIZE SIZE 1 3 }  { m_axi_INPUT_BUNDLE_AWBURST BURST 1 2 }  { m_axi_INPUT_BUNDLE_AWLOCK LOCK 1 2 }  { m_axi_INPUT_BUNDLE_AWCACHE CACHE 1 4 }  { m_axi_INPUT_BUNDLE_AWPROT PROT 1 3 }  { m_axi_INPUT_BUNDLE_AWQOS QOS 1 4 }  { m_axi_INPUT_BUNDLE_AWREGION REGION 1 4 }  { m_axi_INPUT_BUNDLE_AWUSER USER 1 1 }  { m_axi_INPUT_BUNDLE_WVALID VALID 1 1 }  { m_axi_INPUT_BUNDLE_WREADY READY 0 1 }  { m_axi_INPUT_BUNDLE_WDATA DATA 1 32 }  { m_axi_INPUT_BUNDLE_WSTRB STRB 1 4 }  { m_axi_INPUT_BUNDLE_WLAST LAST 1 1 }  { m_axi_INPUT_BUNDLE_WID ID 1 1 }  { m_axi_INPUT_BUNDLE_WUSER USER 1 1 }  { m_axi_INPUT_BUNDLE_ARVALID VALID 1 1 }  { m_axi_INPUT_BUNDLE_ARREADY READY 0 1 }  { m_axi_INPUT_BUNDLE_ARADDR ADDR 1 32 }  { m_axi_INPUT_BUNDLE_ARID ID 1 1 }  { m_axi_INPUT_BUNDLE_ARLEN LEN 1 8 }  { m_axi_INPUT_BUNDLE_ARSIZE SIZE 1 3 }  { m_axi_INPUT_BUNDLE_ARBURST BURST 1 2 }  { m_axi_INPUT_BUNDLE_ARLOCK LOCK 1 2 }  { m_axi_INPUT_BUNDLE_ARCACHE CACHE 1 4 }  { m_axi_INPUT_BUNDLE_ARPROT PROT 1 3 }  { m_axi_INPUT_BUNDLE_ARQOS QOS 1 4 }  { m_axi_INPUT_BUNDLE_ARREGION REGION 1 4 }  { m_axi_INPUT_BUNDLE_ARUSER USER 1 1 }  { m_axi_INPUT_BUNDLE_RVALID VALID 0 1 }  { m_axi_INPUT_BUNDLE_RREADY READY 1 1 }  { m_axi_INPUT_BUNDLE_RDATA DATA 0 32 }  { m_axi_INPUT_BUNDLE_RLAST LAST 0 1 }  { m_axi_INPUT_BUNDLE_RID ID 0 1 }  { m_axi_INPUT_BUNDLE_RUSER USER 0 1 }  { m_axi_INPUT_BUNDLE_RRESP RESP 0 2 }  { m_axi_INPUT_BUNDLE_BVALID VALID 0 1 }  { m_axi_INPUT_BUNDLE_BREADY READY 1 1 }  { m_axi_INPUT_BUNDLE_BRESP RESP 0 2 }  { m_axi_INPUT_BUNDLE_BID ID 0 1 }  { m_axi_INPUT_BUNDLE_BUSER USER 0 1 } } }
	OUTPUT_BUNDLE { m_axi {  { m_axi_OUTPUT_BUNDLE_AWVALID VALID 1 1 }  { m_axi_OUTPUT_BUNDLE_AWREADY READY 0 1 }  { m_axi_OUTPUT_BUNDLE_AWADDR ADDR 1 32 }  { m_axi_OUTPUT_BUNDLE_AWID ID 1 1 }  { m_axi_OUTPUT_BUNDLE_AWLEN LEN 1 8 }  { m_axi_OUTPUT_BUNDLE_AWSIZE SIZE 1 3 }  { m_axi_OUTPUT_BUNDLE_AWBURST BURST 1 2 }  { m_axi_OUTPUT_BUNDLE_AWLOCK LOCK 1 2 }  { m_axi_OUTPUT_BUNDLE_AWCACHE CACHE 1 4 }  { m_axi_OUTPUT_BUNDLE_AWPROT PROT 1 3 }  { m_axi_OUTPUT_BUNDLE_AWQOS QOS 1 4 }  { m_axi_OUTPUT_BUNDLE_AWREGION REGION 1 4 }  { m_axi_OUTPUT_BUNDLE_AWUSER USER 1 1 }  { m_axi_OUTPUT_BUNDLE_WVALID VALID 1 1 }  { m_axi_OUTPUT_BUNDLE_WREADY READY 0 1 }  { m_axi_OUTPUT_BUNDLE_WDATA DATA 1 32 }  { m_axi_OUTPUT_BUNDLE_WSTRB STRB 1 4 }  { m_axi_OUTPUT_BUNDLE_WLAST LAST 1 1 }  { m_axi_OUTPUT_BUNDLE_WID ID 1 1 }  { m_axi_OUTPUT_BUNDLE_WUSER USER 1 1 }  { m_axi_OUTPUT_BUNDLE_ARVALID VALID 1 1 }  { m_axi_OUTPUT_BUNDLE_ARREADY READY 0 1 }  { m_axi_OUTPUT_BUNDLE_ARADDR ADDR 1 32 }  { m_axi_OUTPUT_BUNDLE_ARID ID 1 1 }  { m_axi_OUTPUT_BUNDLE_ARLEN LEN 1 8 }  { m_axi_OUTPUT_BUNDLE_ARSIZE SIZE 1 3 }  { m_axi_OUTPUT_BUNDLE_ARBURST BURST 1 2 }  { m_axi_OUTPUT_BUNDLE_ARLOCK LOCK 1 2 }  { m_axi_OUTPUT_BUNDLE_ARCACHE CACHE 1 4 }  { m_axi_OUTPUT_BUNDLE_ARPROT PROT 1 3 }  { m_axi_OUTPUT_BUNDLE_ARQOS QOS 1 4 }  { m_axi_OUTPUT_BUNDLE_ARREGION REGION 1 4 }  { m_axi_OUTPUT_BUNDLE_ARUSER USER 1 1 }  { m_axi_OUTPUT_BUNDLE_RVALID VALID 0 1 }  { m_axi_OUTPUT_BUNDLE_RREADY READY 1 1 }  { m_axi_OUTPUT_BUNDLE_RDATA DATA 0 32 }  { m_axi_OUTPUT_BUNDLE_RLAST LAST 0 1 }  { m_axi_OUTPUT_BUNDLE_RID ID 0 1 }  { m_axi_OUTPUT_BUNDLE_RUSER USER 0 1 }  { m_axi_OUTPUT_BUNDLE_RRESP RESP 0 2 }  { m_axi_OUTPUT_BUNDLE_BVALID VALID 0 1 }  { m_axi_OUTPUT_BUNDLE_BREADY READY 1 1 }  { m_axi_OUTPUT_BUNDLE_BRESP RESP 0 2 }  { m_axi_OUTPUT_BUNDLE_BID ID 0 1 }  { m_axi_OUTPUT_BUNDLE_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ INPUT_BUNDLE { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ OUTPUT_BUNDLE { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ INPUT_BUNDLE 1 }
	{ OUTPUT_BUNDLE 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ INPUT_BUNDLE 1 }
	{ OUTPUT_BUNDLE 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
