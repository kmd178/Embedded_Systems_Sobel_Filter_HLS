#include "sobel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sobel::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_INPUT_BUNDLE_AWVALID\" :  \"" << m_axi_INPUT_BUNDLE_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWREADY\" :  \"" << m_axi_INPUT_BUNDLE_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWADDR\" :  \"" << m_axi_INPUT_BUNDLE_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWID\" :  \"" << m_axi_INPUT_BUNDLE_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWLEN\" :  \"" << m_axi_INPUT_BUNDLE_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWSIZE\" :  \"" << m_axi_INPUT_BUNDLE_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWBURST\" :  \"" << m_axi_INPUT_BUNDLE_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWLOCK\" :  \"" << m_axi_INPUT_BUNDLE_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWCACHE\" :  \"" << m_axi_INPUT_BUNDLE_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWPROT\" :  \"" << m_axi_INPUT_BUNDLE_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWQOS\" :  \"" << m_axi_INPUT_BUNDLE_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWREGION\" :  \"" << m_axi_INPUT_BUNDLE_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_AWUSER\" :  \"" << m_axi_INPUT_BUNDLE_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WVALID\" :  \"" << m_axi_INPUT_BUNDLE_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WREADY\" :  \"" << m_axi_INPUT_BUNDLE_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WDATA\" :  \"" << m_axi_INPUT_BUNDLE_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WSTRB\" :  \"" << m_axi_INPUT_BUNDLE_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WLAST\" :  \"" << m_axi_INPUT_BUNDLE_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WID\" :  \"" << m_axi_INPUT_BUNDLE_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_WUSER\" :  \"" << m_axi_INPUT_BUNDLE_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARVALID\" :  \"" << m_axi_INPUT_BUNDLE_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARREADY\" :  \"" << m_axi_INPUT_BUNDLE_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARADDR\" :  \"" << m_axi_INPUT_BUNDLE_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARID\" :  \"" << m_axi_INPUT_BUNDLE_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARLEN\" :  \"" << m_axi_INPUT_BUNDLE_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARSIZE\" :  \"" << m_axi_INPUT_BUNDLE_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARBURST\" :  \"" << m_axi_INPUT_BUNDLE_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARLOCK\" :  \"" << m_axi_INPUT_BUNDLE_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARCACHE\" :  \"" << m_axi_INPUT_BUNDLE_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARPROT\" :  \"" << m_axi_INPUT_BUNDLE_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARQOS\" :  \"" << m_axi_INPUT_BUNDLE_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARREGION\" :  \"" << m_axi_INPUT_BUNDLE_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_ARUSER\" :  \"" << m_axi_INPUT_BUNDLE_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RVALID\" :  \"" << m_axi_INPUT_BUNDLE_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RREADY\" :  \"" << m_axi_INPUT_BUNDLE_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RDATA\" :  \"" << m_axi_INPUT_BUNDLE_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RLAST\" :  \"" << m_axi_INPUT_BUNDLE_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RID\" :  \"" << m_axi_INPUT_BUNDLE_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RUSER\" :  \"" << m_axi_INPUT_BUNDLE_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_RRESP\" :  \"" << m_axi_INPUT_BUNDLE_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_BVALID\" :  \"" << m_axi_INPUT_BUNDLE_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_BREADY\" :  \"" << m_axi_INPUT_BUNDLE_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_BRESP\" :  \"" << m_axi_INPUT_BUNDLE_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_BID\" :  \"" << m_axi_INPUT_BUNDLE_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_INPUT_BUNDLE_BUSER\" :  \"" << m_axi_INPUT_BUNDLE_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWVALID\" :  \"" << m_axi_OUTPUT_BUNDLE_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWREADY\" :  \"" << m_axi_OUTPUT_BUNDLE_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWADDR\" :  \"" << m_axi_OUTPUT_BUNDLE_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWID\" :  \"" << m_axi_OUTPUT_BUNDLE_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWLEN\" :  \"" << m_axi_OUTPUT_BUNDLE_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWSIZE\" :  \"" << m_axi_OUTPUT_BUNDLE_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWBURST\" :  \"" << m_axi_OUTPUT_BUNDLE_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWLOCK\" :  \"" << m_axi_OUTPUT_BUNDLE_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWCACHE\" :  \"" << m_axi_OUTPUT_BUNDLE_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWPROT\" :  \"" << m_axi_OUTPUT_BUNDLE_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWQOS\" :  \"" << m_axi_OUTPUT_BUNDLE_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWREGION\" :  \"" << m_axi_OUTPUT_BUNDLE_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_AWUSER\" :  \"" << m_axi_OUTPUT_BUNDLE_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WVALID\" :  \"" << m_axi_OUTPUT_BUNDLE_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WREADY\" :  \"" << m_axi_OUTPUT_BUNDLE_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WDATA\" :  \"" << m_axi_OUTPUT_BUNDLE_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WSTRB\" :  \"" << m_axi_OUTPUT_BUNDLE_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WLAST\" :  \"" << m_axi_OUTPUT_BUNDLE_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WID\" :  \"" << m_axi_OUTPUT_BUNDLE_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_WUSER\" :  \"" << m_axi_OUTPUT_BUNDLE_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARVALID\" :  \"" << m_axi_OUTPUT_BUNDLE_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARREADY\" :  \"" << m_axi_OUTPUT_BUNDLE_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARADDR\" :  \"" << m_axi_OUTPUT_BUNDLE_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARID\" :  \"" << m_axi_OUTPUT_BUNDLE_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARLEN\" :  \"" << m_axi_OUTPUT_BUNDLE_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARSIZE\" :  \"" << m_axi_OUTPUT_BUNDLE_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARBURST\" :  \"" << m_axi_OUTPUT_BUNDLE_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARLOCK\" :  \"" << m_axi_OUTPUT_BUNDLE_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARCACHE\" :  \"" << m_axi_OUTPUT_BUNDLE_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARPROT\" :  \"" << m_axi_OUTPUT_BUNDLE_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARQOS\" :  \"" << m_axi_OUTPUT_BUNDLE_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARREGION\" :  \"" << m_axi_OUTPUT_BUNDLE_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_ARUSER\" :  \"" << m_axi_OUTPUT_BUNDLE_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RVALID\" :  \"" << m_axi_OUTPUT_BUNDLE_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RREADY\" :  \"" << m_axi_OUTPUT_BUNDLE_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RDATA\" :  \"" << m_axi_OUTPUT_BUNDLE_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RLAST\" :  \"" << m_axi_OUTPUT_BUNDLE_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RID\" :  \"" << m_axi_OUTPUT_BUNDLE_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RUSER\" :  \"" << m_axi_OUTPUT_BUNDLE_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_RRESP\" :  \"" << m_axi_OUTPUT_BUNDLE_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_BVALID\" :  \"" << m_axi_OUTPUT_BUNDLE_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_BREADY\" :  \"" << m_axi_OUTPUT_BUNDLE_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_BRESP\" :  \"" << m_axi_OUTPUT_BUNDLE_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_BID\" :  \"" << m_axi_OUTPUT_BUNDLE_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_OUTPUT_BUNDLE_BUSER\" :  \"" << m_axi_OUTPUT_BUNDLE_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

