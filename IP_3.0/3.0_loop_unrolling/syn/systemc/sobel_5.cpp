#include "sobel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sobel::thread_input2_sum34_fu_13537_p2() {
    input2_sum34_fu_13537_p2 = (!sum6_4_cast_fu_13533_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_4_cast_fu_13533_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum35_fu_13558_p2() {
    input2_sum35_fu_13558_p2 = (!sum8_4_cast_fu_13554_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_4_cast_fu_13554_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum36_fu_13645_p2() {
    input2_sum36_fu_13645_p2 = (!sum10_4_cast_fu_13641_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_4_cast_fu_13641_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum37_fu_13579_p2() {
    input2_sum37_fu_13579_p2 = (!sum12_4_cast_fu_13575_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_4_cast_fu_13575_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum38_fu_13731_p2() {
    input2_sum38_fu_13731_p2 = (!tmp_24_4_fu_13727_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_4_fu_13727_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum39_fu_13753_p2() {
    input2_sum39_fu_13753_p2 = (!tmp_28_4_fu_13749_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_4_fu_13749_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum3_fu_12341_p2() {
    input2_sum3_fu_12341_p2 = (!sum2_1_cast_fu_12337_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_1_cast_fu_12337_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum40_fu_13840_p2() {
    input2_sum40_fu_13840_p2 = (!sum2_5_cast_fu_13836_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_5_cast_fu_13836_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum41_fu_13885_p2() {
    input2_sum41_fu_13885_p2 = (!sum4_5_cast_fu_13881_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_5_cast_fu_13881_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum42_fu_13910_p2() {
    input2_sum42_fu_13910_p2 = (!sum6_5_cast_fu_13906_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_5_cast_fu_13906_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum43_fu_13931_p2() {
    input2_sum43_fu_13931_p2 = (!sum8_5_cast_fu_13927_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_5_cast_fu_13927_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum44_fu_14018_p2() {
    input2_sum44_fu_14018_p2 = (!sum10_5_cast_fu_14014_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_5_cast_fu_14014_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum45_fu_13952_p2() {
    input2_sum45_fu_13952_p2 = (!sum12_5_cast_fu_13948_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_5_cast_fu_13948_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum46_fu_14104_p2() {
    input2_sum46_fu_14104_p2 = (!tmp_24_5_fu_14100_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_5_fu_14100_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum47_fu_14126_p2() {
    input2_sum47_fu_14126_p2 = (!tmp_28_5_fu_14122_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_5_fu_14122_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum48_fu_14220_p2() {
    input2_sum48_fu_14220_p2 = (!sum2_6_cast_fu_14216_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_6_cast_fu_14216_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum49_fu_14241_p2() {
    input2_sum49_fu_14241_p2 = (!sum4_6_cast_fu_14237_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_6_cast_fu_14237_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum4_fu_12384_p2() {
    input2_sum4_fu_12384_p2 = (!sum4_1_cast_fu_12380_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_1_cast_fu_12380_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum50_fu_14263_p2() {
    input2_sum50_fu_14263_p2 = (!sum6_6_cast_fu_14259_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_6_cast_fu_14259_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum51_fu_14285_p2() {
    input2_sum51_fu_14285_p2 = (!sum8_6_cast_fu_14281_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_6_cast_fu_14281_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum52_fu_14306_p2() {
    input2_sum52_fu_14306_p2 = (!sum10_6_cast_fu_14302_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_6_cast_fu_14302_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum53_fu_14328_p2() {
    input2_sum53_fu_14328_p2 = (!sum12_6_cast_fu_14324_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_6_cast_fu_14324_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum54_fu_14350_p2() {
    input2_sum54_fu_14350_p2 = (!tmp_24_6_fu_14346_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_6_fu_14346_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum55_fu_14372_p2() {
    input2_sum55_fu_14372_p2 = (!tmp_28_6_fu_14368_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_6_fu_14368_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum56_fu_14426_p2() {
    input2_sum56_fu_14426_p2 = (!sum2_7_cast_fu_14422_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_7_cast_fu_14422_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum57_fu_14447_p2() {
    input2_sum57_fu_14447_p2 = (!sum4_7_cast_fu_14443_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_7_cast_fu_14443_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum58_fu_14469_p2() {
    input2_sum58_fu_14469_p2 = (!sum6_7_cast_fu_14465_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_7_cast_fu_14465_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum59_fu_14491_p2() {
    input2_sum59_fu_14491_p2 = (!sum8_7_cast_fu_14487_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_7_cast_fu_14487_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum5_fu_11974_p2() {
    input2_sum5_fu_11974_p2 = (!sum4_cast_18_fu_11970_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_cast_18_fu_11970_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum60_fu_14512_p2() {
    input2_sum60_fu_14512_p2 = (!sum10_7_cast_fu_14508_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_7_cast_fu_14508_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum61_fu_14534_p2() {
    input2_sum61_fu_14534_p2 = (!sum12_7_cast_fu_14530_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_7_cast_fu_14530_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum62_fu_14556_p2() {
    input2_sum62_fu_14556_p2 = (!tmp_24_7_fu_14552_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_7_fu_14552_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum63_fu_14578_p2() {
    input2_sum63_fu_14578_p2 = (!tmp_28_7_fu_14574_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_7_fu_14574_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum64_fu_2363_p2() {
    input2_sum64_fu_2363_p2 = (!sum2_cast_mid1_fu_2359_p1.read().is_01() || !input1006_phi_phi_fu_514_p4.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_cast_mid1_fu_2359_p1.read()) + sc_biguint<32>(input1006_phi_phi_fu_514_p4.read()));
}

void sobel::thread_input2_sum65_fu_2414_p2() {
    input2_sum65_fu_2414_p2 = (!sum4_cast_mid1_fu_2410_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_cast_mid1_fu_2410_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum66_fu_2447_p2() {
    input2_sum66_fu_2447_p2 = (!sum6_cast_mid1_fu_2443_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_cast_mid1_fu_2443_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum67_fu_2468_p2() {
    input2_sum67_fu_2468_p2 = (!sum8_cast_mid1_fu_2464_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_cast_mid1_fu_2464_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum68_fu_2528_p2() {
    input2_sum68_fu_2528_p2 = (!sum3_cast_mid1_fu_2524_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum3_cast_mid1_fu_2524_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum69_fu_2489_p2() {
    input2_sum69_fu_2489_p2 = (!sum5_cast_mid1_fu_2485_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum5_cast_mid1_fu_2485_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum6_fu_12005_p2() {
    input2_sum6_fu_12005_p2 = (!sum6_cast_20_fu_12001_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_cast_20_fu_12001_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum70_fu_2591_p2() {
    input2_sum70_fu_2591_p2 = (!tmp_14_mid1_fu_2587_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_14_mid1_fu_2587_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum71_fu_2651_p2() {
    input2_sum71_fu_2651_p2 = (!tmp_21_mid1_fu_2647_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_21_mid1_fu_2647_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum72_fu_2711_p2() {
    input2_sum72_fu_2711_p2 = (!sum2_1_cast_mid1_fu_2707_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_1_cast_mid1_fu_2707_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum73_fu_2544_p2() {
    input2_sum73_fu_2544_p2 = (!sum4_1_cast_mid1_fu_2540_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_1_cast_mid1_fu_2540_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum74_fu_2744_p2() {
    input2_sum74_fu_2744_p2 = (!sum6_1_cast_mid1_fu_2740_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_1_cast_mid1_fu_2740_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum75_fu_2765_p2() {
    input2_sum75_fu_2765_p2 = (!sum8_1_cast_mid1_fu_2761_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_1_cast_mid1_fu_2761_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum76_fu_2857_p2() {
    input2_sum76_fu_2857_p2 = (!sum10_1_cast_mid1_fu_2853_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_1_cast_mid1_fu_2853_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum77_fu_2786_p2() {
    input2_sum77_fu_2786_p2 = (!sum12_1_cast_mid1_fu_2782_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_1_cast_mid1_fu_2782_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum78_fu_2960_p2() {
    input2_sum78_fu_2960_p2 = (!tmp_24_1_mid1_fu_2956_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_1_mid1_fu_2956_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum79_fu_2983_p2() {
    input2_sum79_fu_2983_p2 = (!tmp_28_1_mid1_fu_2979_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_1_mid1_fu_2979_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum7_fu_12026_p2() {
    input2_sum7_fu_12026_p2 = (!sum8_cast_22_fu_12022_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_cast_22_fu_12022_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum80_fu_3063_p2() {
    input2_sum80_fu_3063_p2 = (!sum2_2_cast_mid1_fu_3059_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_2_cast_mid1_fu_3059_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum81_fu_3099_p2() {
    input2_sum81_fu_3099_p2 = (!sum4_2_cast_mid1_fu_3095_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_2_cast_mid1_fu_3095_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum82_fu_3124_p2() {
    input2_sum82_fu_3124_p2 = (!sum6_2_cast_mid1_fu_3120_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_2_cast_mid1_fu_3120_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum83_fu_3145_p2() {
    input2_sum83_fu_3145_p2 = (!sum8_2_cast_mid1_fu_3141_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_2_cast_mid1_fu_3141_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum84_fu_3229_p2() {
    input2_sum84_fu_3229_p2 = (!sum10_2_cast_mid1_fu_3225_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_2_cast_mid1_fu_3225_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum85_fu_3166_p2() {
    input2_sum85_fu_3166_p2 = (!sum12_2_cast_mid1_fu_3162_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_2_cast_mid1_fu_3162_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum86_fu_3358_p2() {
    input2_sum86_fu_3358_p2 = (!tmp_24_2_mid1_fu_3354_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_2_mid1_fu_3354_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum87_fu_3381_p2() {
    input2_sum87_fu_3381_p2 = (!tmp_28_2_mid1_fu_3377_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_2_mid1_fu_3377_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum88_fu_3458_p2() {
    input2_sum88_fu_3458_p2 = (!sum2_3_cast_mid1_fu_3454_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_3_cast_mid1_fu_3454_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum89_fu_2873_p2() {
    input2_sum89_fu_2873_p2 = (!sum4_3_cast_mid1_fu_2869_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_3_cast_mid1_fu_2869_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum8_fu_12123_p2() {
    input2_sum8_fu_12123_p2 = (!sum3_cast_fu_12119_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum3_cast_fu_12119_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum90_fu_3497_p2() {
    input2_sum90_fu_3497_p2 = (!sum6_3_cast_mid1_fu_3493_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_3_cast_mid1_fu_3493_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum91_fu_3518_p2() {
    input2_sum91_fu_3518_p2 = (!sum8_3_cast_mid1_fu_3514_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_3_cast_mid1_fu_3514_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum92_fu_3614_p2() {
    input2_sum92_fu_3614_p2 = (!sum10_3_cast_mid1_fu_3610_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum10_3_cast_mid1_fu_3610_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum93_fu_3539_p2() {
    input2_sum93_fu_3539_p2 = (!sum12_3_cast_mid1_fu_3535_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum12_3_cast_mid1_fu_3535_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum94_fu_3717_p2() {
    input2_sum94_fu_3717_p2 = (!tmp_24_3_mid1_fu_3713_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_24_3_mid1_fu_3713_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum95_fu_3740_p2() {
    input2_sum95_fu_3740_p2 = (!tmp_28_3_mid1_fu_3736_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_28_3_mid1_fu_3736_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum96_fu_3820_p2() {
    input2_sum96_fu_3820_p2 = (!sum2_4_cast_mid1_fu_3816_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_4_cast_mid1_fu_3816_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum97_fu_3856_p2() {
    input2_sum97_fu_3856_p2 = (!sum4_4_cast_mid1_fu_3852_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum4_4_cast_mid1_fu_3852_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum98_fu_3881_p2() {
    input2_sum98_fu_3881_p2 = (!sum6_4_cast_mid1_fu_3877_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum6_4_cast_mid1_fu_3877_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum99_fu_3902_p2() {
    input2_sum99_fu_3902_p2 = (!sum8_4_cast_mid1_fu_3898_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum8_4_cast_mid1_fu_3898_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum9_fu_12047_p2() {
    input2_sum9_fu_12047_p2 = (!sum5_cast_fu_12043_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum5_cast_fu_12043_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_input2_sum_fu_11925_p2() {
    input2_sum_fu_11925_p2 = (!sum2_cast_16_fu_11921_p1.read().is_01() || !input1006_phi_reg_510.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sum2_cast_16_fu_11921_p1.read()) + sc_biguint<32>(input1006_phi_reg_510.read()));
}

void sobel::thread_j_1_fu_2679_p2() {
    j_1_fu_2679_p2 = (!ap_const_lv10_1.is_01() || !j_mid2_fu_2671_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(j_mid2_fu_2671_p3.read()));
}

void sobel::thread_j_mid2_fu_2671_p3() {
    j_mid2_fu_2671_p3 = (!tmp_1_s_reg_375.read()[0].is_01())? sc_lv<10>(): ((tmp_1_s_reg_375.read()[0].to_bool())? j_s_reg_360.read(): j_reg_480.read());
}

void sobel::thread_output4_sum10_fu_3075_p2() {
    output4_sum10_fu_3075_p2 = (!tmp_6_2_mid1_fu_3045_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_2_mid1_fu_3045_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum11_fu_3470_p2() {
    output4_sum11_fu_3470_p2 = (!tmp_6_3_mid1_fu_3440_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_3_mid1_fu_3440_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum12_fu_3832_p2() {
    output4_sum12_fu_3832_p2 = (!tmp_6_4_mid1_fu_3802_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_4_mid1_fu_3802_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum13_fu_4167_p2() {
    output4_sum13_fu_4167_p2 = (!tmp_6_5_mid1_fu_4137_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_5_mid1_fu_4137_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum14_fu_4576_p2() {
    output4_sum14_fu_4576_p2 = (!tmp_6_6_mid1_fu_4546_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_6_mid1_fu_4546_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum15_fu_4937_p2() {
    output4_sum15_fu_4937_p2 = (!tmp_6_7_mid1_fu_4907_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_7_mid1_fu_4907_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum16_fu_5209_p2() {
    output4_sum16_fu_5209_p2 = (!tmp_6_8_fu_5179_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_8_fu_5179_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum17_fu_5593_p2() {
    output4_sum17_fu_5593_p2 = (!tmp_6_9_fu_5563_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_9_fu_5563_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum18_fu_5966_p2() {
    output4_sum18_fu_5966_p2 = (!tmp_6_s_fu_5936_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_s_fu_5936_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum19_fu_6339_p2() {
    output4_sum19_fu_6339_p2 = (!tmp_6_10_fu_6309_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_10_fu_6309_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum1_fu_12353_p2() {
    output4_sum1_fu_12353_p2 = (!tmp_6_1_fu_12323_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_1_fu_12323_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum20_fu_6708_p2() {
    output4_sum20_fu_6708_p2 = (!tmp_6_11_fu_6678_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_11_fu_6678_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum21_fu_7078_p2() {
    output4_sum21_fu_7078_p2 = (!tmp_6_12_fu_7048_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_12_fu_7048_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum22_fu_7458_p2() {
    output4_sum22_fu_7458_p2 = (!tmp_6_13_fu_7428_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_13_fu_7428_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum23_fu_7831_p2() {
    output4_sum23_fu_7831_p2 = (!tmp_6_14_fu_7801_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_14_fu_7801_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum24_fu_8204_p2() {
    output4_sum24_fu_8204_p2 = (!tmp_6_15_fu_8174_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_15_fu_8174_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum25_fu_8574_p2() {
    output4_sum25_fu_8574_p2 = (!tmp_6_16_fu_8544_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_16_fu_8544_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum26_fu_8943_p2() {
    output4_sum26_fu_8943_p2 = (!tmp_6_17_fu_8913_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_17_fu_8913_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum27_fu_9323_p2() {
    output4_sum27_fu_9323_p2 = (!tmp_6_18_fu_9293_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_18_fu_9293_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum28_fu_9693_p2() {
    output4_sum28_fu_9693_p2 = (!tmp_6_19_fu_9663_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_19_fu_9663_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum29_fu_10066_p2() {
    output4_sum29_fu_10066_p2 = (!tmp_6_20_fu_10036_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_20_fu_10036_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum2_fu_12733_p2() {
    output4_sum2_fu_12733_p2 = (!tmp_6_2_fu_12703_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_2_fu_12703_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum30_fu_10435_p2() {
    output4_sum30_fu_10435_p2 = (!tmp_6_21_fu_10405_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_21_fu_10405_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum31_fu_10811_p2() {
    output4_sum31_fu_10811_p2 = (!tmp_6_22_fu_10781_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_22_fu_10781_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum32_fu_11188_p2() {
    output4_sum32_fu_11188_p2 = (!tmp_6_23_fu_11158_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_23_fu_11158_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum33_fu_11649_p2() {
    output4_sum33_fu_11649_p2 = (!tmp_6_24_fu_11619_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_24_fu_11619_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum34_fu_1777_p2() {
    output4_sum34_fu_1777_p2 = (!ap_const_lv32_401.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_401) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum35_fu_2025_p2() {
    output4_sum35_fu_2025_p2 = (!ap_const_lv32_402.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_402) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum36_fu_2162_p2() {
    output4_sum36_fu_2162_p2 = (!ap_const_lv32_403.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_403) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum37_fu_2232_p2() {
    output4_sum37_fu_2232_p2 = (!ap_const_lv32_404.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_404) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum38_fu_2253_p2() {
    output4_sum38_fu_2253_p2 = (!ap_const_lv32_405.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_405) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum39_fu_2274_p2() {
    output4_sum39_fu_2274_p2 = (!ap_const_lv32_406.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_406) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum3_fu_13103_p2() {
    output4_sum3_fu_13103_p2 = (!tmp_6_3_fu_13073_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_3_fu_13073_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum40_fu_2295_p2() {
    output4_sum40_fu_2295_p2 = (!ap_const_lv32_407.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_407) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum41_fu_2316_p2() {
    output4_sum41_fu_2316_p2 = (!ap_const_lv32_408.is_01() || !output_read_reg_15712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_408) + sc_biguint<32>(output_read_reg_15712.read()));
}

void sobel::thread_output4_sum4_fu_13479_p2() {
    output4_sum4_fu_13479_p2 = (!tmp_6_4_fu_13449_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_4_fu_13449_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum5_fu_13852_p2() {
    output4_sum5_fu_13852_p2 = (!tmp_6_5_fu_13822_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_5_fu_13822_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum6_fu_14384_p2() {
    output4_sum6_fu_14384_p2 = (!tmp_6_6_fu_14202_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_6_fu_14202_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum7_fu_14590_p2() {
    output4_sum7_fu_14590_p2 = (!tmp_6_7_fu_14408_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_7_fu_14408_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum8_fu_2426_p2() {
    output4_sum8_fu_2426_p2 = (!tmp_6_mid1_fu_2407_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_mid1_fu_2407_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum9_fu_2723_p2() {
    output4_sum9_fu_2723_p2 = (!tmp_6_1_mid1_fu_2693_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_1_mid1_fu_2693_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_output4_sum_fu_11943_p2() {
    output4_sum_fu_11943_p2 = (!tmp_6_fu_11907_p1.read().is_01() || !output1007_phi_reg_522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_6_fu_11907_p1.read()) + sc_biguint<32>(output1007_phi_reg_522.read()));
}

void sobel::thread_sum10_10_cast_fu_6501_p1() {
    sum10_10_cast_fu_6501_p1 = esl_zext<32,21>(sum10_10_fu_6496_p2.read());
}

void sobel::thread_sum10_10_fu_6496_p2() {
    sum10_10_fu_6496_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_10_cast1_fu_6493_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_10_cast1_fu_6493_p1.read()));
}

void sobel::thread_sum10_11_cast_fu_6874_p1() {
    sum10_11_cast_fu_6874_p1 = esl_zext<32,21>(sum10_11_fu_6869_p2.read());
}

void sobel::thread_sum10_11_fu_6869_p2() {
    sum10_11_fu_6869_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_11_cast1_fu_6866_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_11_cast1_fu_6866_p1.read()));
}

void sobel::thread_sum10_12_cast_fu_7247_p1() {
    sum10_12_cast_fu_7247_p1 = esl_zext<32,21>(sum10_12_fu_7242_p2.read());
}

void sobel::thread_sum10_12_fu_7242_p2() {
    sum10_12_fu_7242_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_12_cast1_fu_7239_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_12_cast1_fu_7239_p1.read()));
}

void sobel::thread_sum10_13_cast_fu_7620_p1() {
    sum10_13_cast_fu_7620_p1 = esl_zext<32,21>(sum10_13_fu_7615_p2.read());
}

void sobel::thread_sum10_13_fu_7615_p2() {
    sum10_13_fu_7615_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_13_cast1_fu_7612_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_13_cast1_fu_7612_p1.read()));
}

void sobel::thread_sum10_14_cast_fu_7993_p1() {
    sum10_14_cast_fu_7993_p1 = esl_zext<32,21>(sum10_14_fu_7988_p2.read());
}

void sobel::thread_sum10_14_fu_7988_p2() {
    sum10_14_fu_7988_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_14_cast1_fu_7985_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_14_cast1_fu_7985_p1.read()));
}

void sobel::thread_sum10_15_cast_fu_8366_p1() {
    sum10_15_cast_fu_8366_p1 = esl_zext<32,21>(sum10_15_fu_8361_p2.read());
}

void sobel::thread_sum10_15_fu_8361_p2() {
    sum10_15_fu_8361_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_15_cast1_fu_8358_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_15_cast1_fu_8358_p1.read()));
}

void sobel::thread_sum10_16_cast_fu_8739_p1() {
    sum10_16_cast_fu_8739_p1 = esl_zext<32,21>(sum10_16_fu_8734_p2.read());
}

void sobel::thread_sum10_16_fu_8734_p2() {
    sum10_16_fu_8734_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_16_cast1_fu_8731_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_16_cast1_fu_8731_p1.read()));
}

void sobel::thread_sum10_17_cast_fu_9112_p1() {
    sum10_17_cast_fu_9112_p1 = esl_zext<32,21>(sum10_17_fu_9107_p2.read());
}

void sobel::thread_sum10_17_fu_9107_p2() {
    sum10_17_fu_9107_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_17_cast1_fu_9104_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_17_cast1_fu_9104_p1.read()));
}

void sobel::thread_sum10_18_cast_fu_9485_p1() {
    sum10_18_cast_fu_9485_p1 = esl_zext<32,21>(sum10_18_fu_9480_p2.read());
}

void sobel::thread_sum10_18_fu_9480_p2() {
    sum10_18_fu_9480_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_18_cast1_fu_9477_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_18_cast1_fu_9477_p1.read()));
}

void sobel::thread_sum10_19_cast_fu_9858_p1() {
    sum10_19_cast_fu_9858_p1 = esl_zext<32,21>(sum10_19_fu_9853_p2.read());
}

void sobel::thread_sum10_19_fu_9853_p2() {
    sum10_19_fu_9853_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_19_cast1_fu_9850_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_19_cast1_fu_9850_p1.read()));
}

void sobel::thread_sum10_1_cast_fu_12522_p1() {
    sum10_1_cast_fu_12522_p1 = esl_zext<32,21>(sum10_1_fu_12517_p2.read());
}

void sobel::thread_sum10_1_cast_mid1_fu_2853_p1() {
    sum10_1_cast_mid1_fu_2853_p1 = esl_zext<32,21>(sum10_1_mid_fu_2845_p3.read());
}

void sobel::thread_sum10_1_fu_12517_p2() {
    sum10_1_fu_12517_p2 = (!tmp_3_1_cast1_fu_12514_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_1_cast1_fu_12514_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_1_mid_fu_2845_p3() {
    sum10_1_mid_fu_2845_p3 = esl_concat<1,20>(ap_const_lv1_0, tmp_107_fu_2840_p2.read());
}

void sobel::thread_sum10_20_cast_fu_10231_p1() {
    sum10_20_cast_fu_10231_p1 = esl_zext<32,21>(sum10_20_fu_10226_p2.read());
}

void sobel::thread_sum10_20_fu_10226_p2() {
    sum10_20_fu_10226_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_20_cast1_fu_10223_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_20_cast1_fu_10223_p1.read()));
}

void sobel::thread_sum10_21_cast_fu_10604_p1() {
    sum10_21_cast_fu_10604_p1 = esl_zext<32,21>(sum10_21_fu_10599_p2.read());
}

void sobel::thread_sum10_21_fu_10599_p2() {
    sum10_21_fu_10599_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_21_cast1_fu_10596_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_21_cast1_fu_10596_p1.read()));
}

void sobel::thread_sum10_22_cast_fu_10977_p1() {
    sum10_22_cast_fu_10977_p1 = esl_zext<32,21>(sum10_22_fu_10972_p2.read());
}

void sobel::thread_sum10_22_fu_10972_p2() {
    sum10_22_fu_10972_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_22_cast1_fu_10969_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_22_cast1_fu_10969_p1.read()));
}

void sobel::thread_sum10_23_cast_fu_11246_p1() {
    sum10_23_cast_fu_11246_p1 = esl_zext<32,21>(sum10_23_fu_11241_p2.read());
}

void sobel::thread_sum10_23_fu_11241_p2() {
    sum10_23_fu_11241_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_23_cast1_fu_11214_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_23_cast1_fu_11214_p1.read()));
}

void sobel::thread_sum10_24_cast_fu_11294_p1() {
    sum10_24_cast_fu_11294_p1 = esl_zext<32,21>(sum10_24_fu_11289_p2.read());
}

void sobel::thread_sum10_24_fu_11289_p2() {
    sum10_24_fu_11289_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_24_cast1_fu_11262_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_24_cast1_fu_11262_p1.read()));
}

void sobel::thread_sum10_2_cast_fu_12895_p1() {
    sum10_2_cast_fu_12895_p1 = esl_zext<32,21>(sum10_2_fu_12890_p2.read());
}

void sobel::thread_sum10_2_cast_mid1_fu_3225_p1() {
    sum10_2_cast_mid1_fu_3225_p1 = esl_zext<32,21>(sum10_2_mid1_fu_3220_p2.read());
}

void sobel::thread_sum10_2_fu_12890_p2() {
    sum10_2_fu_12890_p2 = (!tmp_3_2_cast1_fu_12887_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_2_cast1_fu_12887_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_2_mid1_fu_3220_p2() {
    sum10_2_mid1_fu_3220_p2 = (!ap_const_lv21_3.is_01() || !tmp_15_cast_mid1_reg_16530.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3) + sc_biguint<21>(tmp_15_cast_mid1_reg_16530.read()));
}

void sobel::thread_sum10_3_cast_fu_13268_p1() {
    sum10_3_cast_fu_13268_p1 = esl_zext<32,21>(sum10_3_fu_13263_p2.read());
}

void sobel::thread_sum10_3_cast_mid1_fu_3610_p1() {
    sum10_3_cast_mid1_fu_3610_p1 = esl_zext<32,21>(sum10_3_mid_fu_3602_p3.read());
}

void sobel::thread_sum10_3_fu_13263_p2() {
    sum10_3_fu_13263_p2 = (!tmp_3_3_cast1_fu_13260_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_3_cast1_fu_13260_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_3_mid_fu_3602_p3() {
    sum10_3_mid_fu_3602_p3 = esl_concat<1,20>(ap_const_lv1_0, tmp_108_fu_3597_p2.read());
}

void sobel::thread_sum10_4_cast_fu_13641_p1() {
    sum10_4_cast_fu_13641_p1 = esl_zext<32,21>(sum10_4_fu_13636_p2.read());
}

void sobel::thread_sum10_4_cast_mid1_fu_3246_p1() {
    sum10_4_cast_mid1_fu_3246_p1 = esl_zext<32,21>(sum10_4_mid1_fu_3241_p2.read());
}

void sobel::thread_sum10_4_fu_13636_p2() {
    sum10_4_fu_13636_p2 = (!tmp_3_4_cast1_fu_13633_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_4_cast1_fu_13633_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_4_mid1_fu_3241_p2() {
    sum10_4_mid1_fu_3241_p2 = (!ap_const_lv21_5.is_01() || !tmp_15_cast_mid1_reg_16530.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_5) + sc_biguint<21>(tmp_15_cast_mid1_reg_16530.read()));
}

void sobel::thread_sum10_5_cast_fu_14014_p1() {
    sum10_5_cast_fu_14014_p1 = esl_zext<32,21>(sum10_5_fu_14009_p2.read());
}

void sobel::thread_sum10_5_cast_mid1_fu_4304_p1() {
    sum10_5_cast_mid1_fu_4304_p1 = esl_zext<32,21>(sum10_5_mid_fu_4296_p3.read());
}

void sobel::thread_sum10_5_fu_14009_p2() {
    sum10_5_fu_14009_p2 = (!tmp_3_5_cast1_fu_14006_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_5_cast1_fu_14006_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_5_mid_fu_4296_p3() {
    sum10_5_mid_fu_4296_p3 = esl_concat<1,20>(ap_const_lv1_0, tmp_109_fu_4291_p2.read());
}

void sobel::thread_sum10_6_cast_fu_14302_p1() {
    sum10_6_cast_fu_14302_p1 = esl_zext<32,21>(sum10_6_fu_14297_p2.read());
}

void sobel::thread_sum10_6_cast_mid1_fu_3267_p1() {
    sum10_6_cast_mid1_fu_3267_p1 = esl_zext<32,21>(sum10_6_mid1_fu_3262_p2.read());
}

void sobel::thread_sum10_6_fu_14297_p2() {
    sum10_6_fu_14297_p2 = (!tmp_3_6_cast1_fu_14190_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_6_cast1_fu_14190_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_6_mid1_fu_3262_p2() {
    sum10_6_mid1_fu_3262_p2 = (!ap_const_lv21_7.is_01() || !tmp_15_cast_mid1_reg_16530.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_7) + sc_biguint<21>(tmp_15_cast_mid1_reg_16530.read()));
}

void sobel::thread_sum10_7_cast_fu_14508_p1() {
    sum10_7_cast_fu_14508_p1 = esl_zext<32,21>(sum10_7_fu_14503_p2.read());
}

void sobel::thread_sum10_7_cast_mid1_fu_4370_p1() {
    sum10_7_cast_mid1_fu_4370_p1 = esl_zext<32,21>(sum10_7_mid_fu_4362_p3.read());
}

void sobel::thread_sum10_7_fu_14503_p2() {
    sum10_7_fu_14503_p2 = (!tmp_3_7_cast1_fu_14396_p1.read().is_01() || !tmp_15_cast_reg_19755.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_7_cast1_fu_14396_p1.read()) + sc_biguint<21>(tmp_15_cast_reg_19755.read()));
}

void sobel::thread_sum10_7_mid_fu_4362_p3() {
    sum10_7_mid_fu_4362_p3 = esl_concat<1,20>(ap_const_lv1_0, tmp_110_fu_4357_p2.read());
}

void sobel::thread_sum10_8_cast_fu_5382_p1() {
    sum10_8_cast_fu_5382_p1 = esl_zext<32,21>(sum10_8_fu_5376_p2.read());
}

void sobel::thread_sum10_8_fu_5376_p2() {
    sum10_8_fu_5376_p2 = (!tmp_15_cast_mid2_cas_fu_5370_p1.read().is_01() || !tmp_3_8_cast1_fu_5373_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_fu_5370_p1.read()) + sc_biguint<21>(tmp_3_8_cast1_fu_5373_p1.read()));
}

void sobel::thread_sum10_9_cast_fu_5755_p1() {
    sum10_9_cast_fu_5755_p1 = esl_zext<32,21>(sum10_9_fu_5750_p2.read());
}

void sobel::thread_sum10_9_fu_5750_p2() {
    sum10_9_fu_5750_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_9_cast1_fu_5747_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_9_cast1_fu_5747_p1.read()));
}

void sobel::thread_sum10_cast_fu_6128_p1() {
    sum10_cast_fu_6128_p1 = esl_zext<32,21>(sum10_s_fu_6123_p2.read());
}

void sobel::thread_sum10_s_fu_6123_p2() {
    sum10_s_fu_6123_p2 = (!tmp_15_cast_mid2_cas_reg_17476.read().is_01() || !tmp_3_cast1_fu_6120_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_15_cast_mid2_cas_reg_17476.read()) + sc_biguint<21>(tmp_3_cast1_fu_6120_p1.read()));
}

void sobel::thread_sum12_10_cast_fu_6435_p1() {
    sum12_10_cast_fu_6435_p1 = esl_zext<32,21>(sum12_10_fu_6430_p2.read());
}

void sobel::thread_sum12_10_fu_6430_p2() {
    sum12_10_fu_6430_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_10_cast_reg_17802.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_10_cast_reg_17802.read()));
}

void sobel::thread_sum12_11_cast_fu_6808_p1() {
    sum12_11_cast_fu_6808_p1 = esl_zext<32,21>(sum12_11_fu_6803_p2.read());
}

void sobel::thread_sum12_11_fu_6803_p2() {
    sum12_11_fu_6803_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_11_cast_reg_17916.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_11_cast_reg_17916.read()));
}

void sobel::thread_sum12_12_cast_fu_7177_p1() {
    sum12_12_cast_fu_7177_p1 = esl_zext<32,21>(sum12_12_fu_7172_p2.read());
}

void sobel::thread_sum12_12_fu_7172_p2() {
    sum12_12_fu_7172_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_12_cast_reg_18035.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_12_cast_reg_18035.read()));
}

void sobel::thread_sum12_13_cast_fu_7554_p1() {
    sum12_13_cast_fu_7554_p1 = esl_zext<32,21>(sum12_13_fu_7549_p2.read());
}

void sobel::thread_sum12_13_fu_7549_p2() {
    sum12_13_fu_7549_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_13_cast_reg_18174.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_13_cast_reg_18174.read()));
}

void sobel::thread_sum12_14_cast_fu_7927_p1() {
    sum12_14_cast_fu_7927_p1 = esl_zext<32,21>(sum12_14_fu_7922_p2.read());
}

void sobel::thread_sum12_14_fu_7922_p2() {
    sum12_14_fu_7922_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_14_cast_reg_18298.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_14_cast_reg_18298.read()));
}

void sobel::thread_sum12_15_cast_fu_8300_p1() {
    sum12_15_cast_fu_8300_p1 = esl_zext<32,21>(sum12_15_fu_8295_p2.read());
}

void sobel::thread_sum12_15_fu_8295_p2() {
    sum12_15_fu_8295_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_15_cast_reg_18422.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_15_cast_reg_18422.read()));
}

void sobel::thread_sum12_16_cast_fu_8669_p1() {
    sum12_16_cast_fu_8669_p1 = esl_zext<32,21>(sum12_16_fu_8664_p2.read());
}

void sobel::thread_sum12_16_fu_8664_p2() {
    sum12_16_fu_8664_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_16_cast_reg_18541.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_16_cast_reg_18541.read()));
}

void sobel::thread_sum12_17_cast_fu_9042_p1() {
    sum12_17_cast_fu_9042_p1 = esl_zext<32,21>(sum12_17_fu_9037_p2.read());
}

void sobel::thread_sum12_17_fu_9037_p2() {
    sum12_17_fu_9037_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_17_cast_reg_18655.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_17_cast_reg_18655.read()));
}

void sobel::thread_sum12_18_cast_fu_9419_p1() {
    sum12_18_cast_fu_9419_p1 = esl_zext<32,21>(sum12_18_fu_9414_p2.read());
}

void sobel::thread_sum12_18_fu_9414_p2() {
    sum12_18_fu_9414_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_18_cast_reg_18794.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_18_cast_reg_18794.read()));
}

void sobel::thread_sum12_19_cast_fu_9788_p1() {
    sum12_19_cast_fu_9788_p1 = esl_zext<32,21>(sum12_19_fu_9783_p2.read());
}

void sobel::thread_sum12_19_fu_9783_p2() {
    sum12_19_fu_9783_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_19_cast_reg_18913.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_19_cast_reg_18913.read()));
}

void sobel::thread_sum12_1_cast_fu_12452_p1() {
    sum12_1_cast_fu_12452_p1 = esl_zext<32,21>(sum12_1_fu_12447_p2.read());
}

void sobel::thread_sum12_1_cast_mid1_fu_2782_p1() {
    sum12_1_cast_mid1_fu_2782_p1 = esl_zext<32,21>(sum12_1_mid1_fu_2777_p2.read());
}

void sobel::thread_sum12_1_fu_12447_p2() {
    sum12_1_fu_12447_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_1_cast_reg_19834.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_1_cast_reg_19834.read()));
}

void sobel::thread_sum12_1_mid1_fu_2777_p2() {
    sum12_1_mid1_fu_2777_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_1_cast_mid1_reg_16700.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_1_cast_mid1_reg_16700.read()));
}

void sobel::thread_sum12_20_cast_fu_10161_p1() {
    sum12_20_cast_fu_10161_p1 = esl_zext<32,21>(sum12_20_fu_10156_p2.read());
}

void sobel::thread_sum12_20_fu_10156_p2() {
    sum12_20_fu_10156_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_20_cast_reg_19037.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_20_cast_reg_19037.read()));
}

void sobel::thread_sum12_21_cast_fu_10534_p1() {
    sum12_21_cast_fu_10534_p1 = esl_zext<32,21>(sum12_21_fu_10529_p2.read());
}

void sobel::thread_sum12_21_fu_10529_p2() {
    sum12_21_fu_10529_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_21_cast_reg_19151.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_21_cast_reg_19151.read()));
}

void sobel::thread_sum12_22_cast_fu_10911_p1() {
    sum12_22_cast_fu_10911_p1 = esl_zext<32,21>(sum12_22_fu_10906_p2.read());
}

void sobel::thread_sum12_22_fu_10906_p2() {
    sum12_22_fu_10906_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_22_cast_reg_19280.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_22_cast_reg_19280.read()));
}

void sobel::thread_sum12_23_cast_fu_11361_p1() {
    sum12_23_cast_fu_11361_p1 = esl_zext<32,21>(sum12_23_fu_11356_p2.read());
}

void sobel::thread_sum12_23_fu_11356_p2() {
    sum12_23_fu_11356_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_23_cast_reg_19414.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_23_cast_reg_19414.read()));
}

void sobel::thread_sum12_24_cast_fu_11725_p1() {
    sum12_24_cast_fu_11725_p1 = esl_zext<32,21>(sum12_24_fu_11720_p2.read());
}

void sobel::thread_sum12_24_fu_11720_p2() {
    sum12_24_fu_11720_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_24_cast_reg_19552.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_24_cast_reg_19552.read()));
}

void sobel::thread_sum12_2_cast_fu_12829_p1() {
    sum12_2_cast_fu_12829_p1 = esl_zext<32,21>(sum12_2_fu_12824_p2.read());
}

void sobel::thread_sum12_2_cast_mid1_fu_3162_p1() {
    sum12_2_cast_mid1_fu_3162_p1 = esl_zext<32,21>(sum12_2_mid1_fu_3157_p2.read());
}

void sobel::thread_sum12_2_fu_12824_p2() {
    sum12_2_fu_12824_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_2_cast_reg_19973.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_2_cast_reg_19973.read()));
}

void sobel::thread_sum12_2_mid1_fu_3157_p2() {
    sum12_2_mid1_fu_3157_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_2_cast_mid1_reg_16790.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_2_cast_mid1_reg_16790.read()));
}

void sobel::thread_sum12_3_cast_fu_13198_p1() {
    sum12_3_cast_fu_13198_p1 = esl_zext<32,21>(sum12_3_fu_13193_p2.read());
}

void sobel::thread_sum12_3_cast_mid1_fu_3535_p1() {
    sum12_3_cast_mid1_fu_3535_p1 = esl_zext<32,21>(sum12_3_mid1_fu_3530_p2.read());
}

void sobel::thread_sum12_3_fu_13193_p2() {
    sum12_3_fu_13193_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_3_cast_reg_20092.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_3_cast_reg_20092.read()));
}

void sobel::thread_sum12_3_mid1_fu_3530_p2() {
    sum12_3_mid1_fu_3530_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_3_cast_mid1_reg_16897.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_3_cast_mid1_reg_16897.read()));
}

void sobel::thread_sum12_4_cast_fu_13575_p1() {
    sum12_4_cast_fu_13575_p1 = esl_zext<32,21>(sum12_4_fu_13570_p2.read());
}

void sobel::thread_sum12_4_cast_mid1_fu_3919_p1() {
    sum12_4_cast_mid1_fu_3919_p1 = esl_zext<32,21>(sum12_4_mid1_fu_3914_p2.read());
}

void sobel::thread_sum12_4_fu_13570_p2() {
    sum12_4_fu_13570_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_4_cast_reg_20221.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_4_cast_reg_20221.read()));
}

void sobel::thread_sum12_4_mid1_fu_3914_p2() {
    sum12_4_mid1_fu_3914_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_4_cast_mid1_reg_17002.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_4_cast_mid1_reg_17002.read()));
}

void sobel::thread_sum12_5_cast_fu_13948_p1() {
    sum12_5_cast_fu_13948_p1 = esl_zext<32,21>(sum12_5_fu_13943_p2.read());
}

void sobel::thread_sum12_5_cast_mid1_fu_4233_p1() {
    sum12_5_cast_mid1_fu_4233_p1 = esl_zext<32,21>(sum12_5_mid1_fu_4228_p2.read());
}

void sobel::thread_sum12_5_fu_13943_p2() {
    sum12_5_fu_13943_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_5_cast_reg_20345.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_5_cast_reg_20345.read()));
}

void sobel::thread_sum12_5_mid1_fu_4228_p2() {
    sum12_5_mid1_fu_4228_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_5_cast_mid1_reg_17096.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_5_cast_mid1_reg_17096.read()));
}

void sobel::thread_sum12_6_cast_fu_14324_p1() {
    sum12_6_cast_fu_14324_p1 = esl_zext<32,21>(sum12_6_fu_14318_p2.read());
}

void sobel::thread_sum12_6_cast_mid1_fu_4642_p1() {
    sum12_6_cast_mid1_fu_4642_p1 = esl_zext<32,21>(sum12_6_mid1_fu_4637_p2.read());
}

void sobel::thread_sum12_6_fu_14318_p2() {
    sum12_6_fu_14318_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_6_cast_fu_14206_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_6_cast_fu_14206_p1.read()));
}

void sobel::thread_sum12_6_mid1_fu_4637_p2() {
    sum12_6_mid1_fu_4637_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_6_cast_mid1_reg_17208.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_6_cast_mid1_reg_17208.read()));
}

void sobel::thread_sum12_7_cast_fu_14530_p1() {
    sum12_7_cast_fu_14530_p1 = esl_zext<32,21>(sum12_7_fu_14524_p2.read());
}

void sobel::thread_sum12_7_cast_mid1_fu_5008_p1() {
    sum12_7_cast_mid1_fu_5008_p1 = esl_zext<32,21>(sum12_7_mid1_fu_5003_p2.read());
}

void sobel::thread_sum12_7_fu_14524_p2() {
    sum12_7_fu_14524_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_7_cast_fu_14412_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_7_cast_fu_14412_p1.read()));
}

void sobel::thread_sum12_7_mid1_fu_5003_p2() {
    sum12_7_mid1_fu_5003_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_7_cast_mid1_reg_17313.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_7_cast_mid1_reg_17313.read()));
}

void sobel::thread_sum12_8_cast_fu_5308_p1() {
    sum12_8_cast_fu_5308_p1 = esl_zext<32,21>(sum12_8_fu_5303_p2.read());
}

void sobel::thread_sum12_8_fu_5303_p2() {
    sum12_8_fu_5303_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_8_cast_reg_17394.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_8_cast_reg_17394.read()));
}

void sobel::thread_sum12_9_cast_fu_5689_p1() {
    sum12_9_cast_fu_5689_p1 = esl_zext<32,21>(sum12_9_fu_5684_p2.read());
}

void sobel::thread_sum12_9_fu_5684_p2() {
    sum12_9_fu_5684_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_9_cast_reg_17554.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_9_cast_reg_17554.read()));
}

void sobel::thread_sum12_cast_fu_6062_p1() {
    sum12_cast_fu_6062_p1 = esl_zext<32,21>(sum12_s_fu_6057_p2.read());
}

void sobel::thread_sum12_s_fu_6057_p2() {
    sum12_s_fu_6057_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_cast_reg_17678.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_cast_reg_17678.read()));
}

void sobel::thread_sum1_10_cast_fu_6914_p1() {
    sum1_10_cast_fu_6914_p1 = esl_zext<11,10>(sum1_10_reg_17983.read());
}

void sobel::thread_sum1_10_fu_6854_p2() {
    sum1_10_fu_6854_p2 = (!tmp23_cast_fu_6850_p1.read().is_01() || !tmp_10_10_cast_fu_6836_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp23_cast_fu_6850_p1.read()) + sc_biguint<10>(tmp_10_10_cast_fu_6836_p1.read()));
}

void sobel::thread_sum1_11_cast_fu_7291_p1() {
    sum1_11_cast_fu_7291_p1 = esl_zext<11,10>(sum1_11_reg_18107.read());
}

void sobel::thread_sum1_11_fu_7227_p2() {
    sum1_11_fu_7227_p2 = (!tmp25_cast_fu_7223_p1.read().is_01() || !tmp_10_11_cast_fu_7209_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp25_cast_fu_7223_p1.read()) + sc_biguint<10>(tmp_10_11_cast_fu_7209_p1.read()));
}

void sobel::thread_sum1_12_cast_fu_7664_p1() {
    sum1_12_cast_fu_7664_p1 = esl_zext<11,10>(sum1_12_reg_18231.read());
}

void sobel::thread_sum1_12_fu_7600_p2() {
    sum1_12_fu_7600_p2 = (!tmp27_cast_fu_7596_p1.read().is_01() || !tmp_10_12_cast_fu_7582_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp27_cast_fu_7596_p1.read()) + sc_biguint<10>(tmp_10_12_cast_fu_7582_p1.read()));
}

void sobel::thread_sum1_13_cast_fu_8037_p1() {
    sum1_13_cast_fu_8037_p1 = esl_zext<11,10>(sum1_13_reg_18355.read());
}

void sobel::thread_sum1_13_fu_7973_p2() {
    sum1_13_fu_7973_p2 = (!tmp29_cast_fu_7969_p1.read().is_01() || !tmp_10_13_cast_fu_7955_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp29_cast_fu_7969_p1.read()) + sc_biguint<10>(tmp_10_13_cast_fu_7955_p1.read()));
}

void sobel::thread_sum1_14_cast_fu_8406_p1() {
    sum1_14_cast_fu_8406_p1 = esl_zext<11,10>(sum1_14_reg_18479.read());
}

void sobel::thread_sum1_14_fu_8346_p2() {
    sum1_14_fu_8346_p2 = (!tmp31_cast_fu_8342_p1.read().is_01() || !tmp_10_14_cast_fu_8328_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp31_cast_fu_8342_p1.read()) + sc_biguint<10>(tmp_10_14_cast_fu_8328_p1.read()));
}

void sobel::thread_sum1_15_cast_fu_8779_p1() {
    sum1_15_cast_fu_8779_p1 = esl_zext<11,10>(sum1_15_reg_18603.read());
}

void sobel::thread_sum1_15_fu_8719_p2() {
    sum1_15_fu_8719_p2 = (!tmp33_cast_fu_8715_p1.read().is_01() || !tmp_10_15_cast_fu_8701_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp33_cast_fu_8715_p1.read()) + sc_biguint<10>(tmp_10_15_cast_fu_8701_p1.read()));
}

void sobel::thread_sum1_16_cast_fu_9156_p1() {
    sum1_16_cast_fu_9156_p1 = esl_zext<11,10>(sum1_16_reg_18727.read());
}

void sobel::thread_sum1_16_fu_9092_p2() {
    sum1_16_fu_9092_p2 = (!tmp35_cast_fu_9088_p1.read().is_01() || !tmp_10_16_cast_fu_9074_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp35_cast_fu_9088_p1.read()) + sc_biguint<10>(tmp_10_16_cast_fu_9074_p1.read()));
}

void sobel::thread_sum1_17_cast_fu_9525_p1() {
    sum1_17_cast_fu_9525_p1 = esl_zext<11,10>(sum1_17_reg_18851.read());
}

void sobel::thread_sum1_17_fu_9465_p2() {
    sum1_17_fu_9465_p2 = (!tmp37_cast_fu_9461_p1.read().is_01() || !tmp_10_17_cast_fu_9447_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp37_cast_fu_9461_p1.read()) + sc_biguint<10>(tmp_10_17_cast_fu_9447_p1.read()));
}

void sobel::thread_sum1_18_cast_fu_9898_p1() {
    sum1_18_cast_fu_9898_p1 = esl_zext<11,10>(sum1_18_reg_18975.read());
}

void sobel::thread_sum1_18_fu_9838_p2() {
    sum1_18_fu_9838_p2 = (!tmp39_cast_fu_9834_p1.read().is_01() || !tmp_10_18_cast_fu_9820_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp39_cast_fu_9834_p1.read()) + sc_biguint<10>(tmp_10_18_cast_fu_9820_p1.read()));
}

void sobel::thread_sum1_19_cast_fu_10271_p1() {
    sum1_19_cast_fu_10271_p1 = esl_zext<11,10>(sum1_19_reg_19099.read());
}

void sobel::thread_sum1_19_fu_10211_p2() {
    sum1_19_fu_10211_p2 = (!tmp41_cast_fu_10207_p1.read().is_01() || !tmp_10_19_cast_fu_10193_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp41_cast_fu_10207_p1.read()) + sc_biguint<10>(tmp_10_19_cast_fu_10193_p1.read()));
}

void sobel::thread_sum1_1_cast1_fu_985_p1() {
    sum1_1_cast1_fu_985_p1 = esl_zext<11,10>(sum1_25_reg_15872.read());
}

void sobel::thread_sum1_1_cast_fu_12939_p1() {
    sum1_1_cast_fu_12939_p1 = esl_zext<11,10>(sum1_1_reg_20030.read());
}

void sobel::thread_sum1_1_cast_mid1_fu_3311_p1() {
    sum1_1_cast_mid1_fu_3311_p1 = esl_zext<11,10>(sum1_1_mid1_reg_16842.read());
}

void sobel::thread_sum1_1_fu_12875_p2() {
    sum1_1_fu_12875_p2 = (!tmp_10_1_cast_fu_12857_p1.read().is_01() || !tmp3_cast_fu_12871_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_1_cast_fu_12857_p1.read()) + sc_biguint<10>(tmp3_cast_fu_12871_p1.read()));
}

void sobel::thread_sum1_1_mid1_fu_3208_p2() {
    sum1_1_mid1_fu_3208_p2 = (!tmp_10_1_cast_mid1_fu_3190_p1.read().is_01() || !tmp3_cast_mid1_fu_3204_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_1_cast_mid1_fu_3190_p1.read()) + sc_biguint<10>(tmp3_cast_mid1_fu_3204_p1.read()));
}

void sobel::thread_sum1_20_cast_fu_10648_p1() {
    sum1_20_cast_fu_10648_p1 = esl_zext<11,10>(sum1_20_reg_19223.read());
}

void sobel::thread_sum1_20_fu_10584_p2() {
    sum1_20_fu_10584_p2 = (!tmp43_cast_fu_10580_p1.read().is_01() || !tmp_10_20_cast_fu_10566_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp43_cast_fu_10580_p1.read()) + sc_biguint<10>(tmp_10_20_cast_fu_10566_p1.read()));
}

void sobel::thread_sum1_21_cast_fu_11021_p1() {
    sum1_21_cast_fu_11021_p1 = esl_zext<11,10>(sum1_21_reg_19347.read());
}

void sobel::thread_sum1_21_fu_10957_p2() {
    sum1_21_fu_10957_p2 = (!tmp45_cast_fu_10953_p1.read().is_01() || !tmp_10_21_cast_fu_10939_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp45_cast_fu_10953_p1.read()) + sc_biguint<10>(tmp_10_21_cast_fu_10939_p1.read()));
}

void sobel::thread_sum1_22_cast_fu_11447_p1() {
    sum1_22_cast_fu_11447_p1 = esl_zext<11,10>(sum1_22_reg_19498.read());
}

void sobel::thread_sum1_22_fu_11407_p2() {
    sum1_22_fu_11407_p2 = (!tmp47_cast_fu_11403_p1.read().is_01() || !tmp_10_22_cast_fu_11389_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp47_cast_fu_11403_p1.read()) + sc_biguint<10>(tmp_10_22_cast_fu_11389_p1.read()));
}

void sobel::thread_sum1_23_cast_fu_11811_p1() {
    sum1_23_cast_fu_11811_p1 = esl_zext<11,10>(sum1_23_reg_19613.read());
}

void sobel::thread_sum1_23_fu_11771_p2() {
    sum1_23_fu_11771_p2 = (!tmp49_cast_fu_11767_p1.read().is_01() || !tmp_10_23_cast_fu_11753_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp49_cast_fu_11767_p1.read()) + sc_biguint<10>(tmp_10_23_cast_fu_11753_p1.read()));
}

void sobel::thread_sum1_24_cast_fu_12189_p1() {
    sum1_24_cast_fu_12189_p1 = esl_zext<11,10>(sum1_24_reg_19740.read());
}

void sobel::thread_sum1_24_fu_12089_p2() {
    sum1_24_fu_12089_p2 = (!tmp51_cast_fu_12085_p1.read().is_01() || !tmp_10_24_cast_fu_12071_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_cast_fu_12085_p1.read()) + sc_biguint<10>(tmp_10_24_cast_fu_12071_p1.read()));
}

void sobel::thread_sum1_25_fu_912_p2() {
    sum1_25_fu_912_p2 = (!tmp_10_1_cast1_fu_894_p1.read().is_01() || !tmp3_cast1_fu_908_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_1_cast1_fu_894_p1.read()) + sc_biguint<10>(tmp3_cast1_fu_908_p1.read()));
}

void sobel::thread_sum1_26_fu_1100_p2() {
    sum1_26_fu_1100_p2 = (!tmp_10_2_cast1_fu_1082_p1.read().is_01() || !tmp5_cast1_fu_1096_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_2_cast1_fu_1082_p1.read()) + sc_biguint<10>(tmp5_cast1_fu_1096_p1.read()));
}

void sobel::thread_sum1_27_fu_1288_p2() {
    sum1_27_fu_1288_p2 = (!tmp_10_3_cast1_fu_1270_p1.read().is_01() || !tmp7_cast1_fu_1284_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_3_cast1_fu_1270_p1.read()) + sc_biguint<10>(tmp7_cast1_fu_1284_p1.read()));
}

void sobel::thread_sum1_28_fu_1476_p2() {
    sum1_28_fu_1476_p2 = (!tmp_10_4_cast1_fu_1458_p1.read().is_01() || !tmp9_cast1_fu_1472_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_4_cast1_fu_1458_p1.read()) + sc_biguint<10>(tmp9_cast1_fu_1472_p1.read()));
}

void sobel::thread_sum1_29_fu_1664_p2() {
    sum1_29_fu_1664_p2 = (!tmp_10_5_cast1_fu_1646_p1.read().is_01() || !tmp11_cast1_fu_1660_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_5_cast1_fu_1646_p1.read()) + sc_biguint<10>(tmp11_cast1_fu_1660_p1.read()));
}

void sobel::thread_sum1_2_cast1_fu_1169_p1() {
    sum1_2_cast1_fu_1169_p1 = esl_zext<11,10>(sum1_26_reg_15930.read());
}

void sobel::thread_sum1_2_cast_fu_13308_p1() {
    sum1_2_cast_fu_13308_p1 = esl_zext<11,10>(sum1_2_reg_20154.read());
}

void sobel::thread_sum1_2_cast_mid1_fu_3666_p1() {
    sum1_2_cast_mid1_fu_3666_p1 = esl_zext<11,10>(sum1_2_mid1_reg_16948.read());
}

void sobel::thread_sum1_2_fu_13248_p2() {
    sum1_2_fu_13248_p2 = (!tmp_10_2_cast_fu_13230_p1.read().is_01() || !tmp5_cast_fu_13244_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_2_cast_fu_13230_p1.read()) + sc_biguint<10>(tmp5_cast_fu_13244_p1.read()));
}

void sobel::thread_sum1_2_mid1_fu_3585_p2() {
    sum1_2_mid1_fu_3585_p2 = (!tmp_10_2_cast_mid1_fu_3567_p1.read().is_01() || !tmp5_cast_mid1_fu_3581_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_2_cast_mid1_fu_3567_p1.read()) + sc_biguint<10>(tmp5_cast_mid1_fu_3581_p1.read()));
}

void sobel::thread_sum1_30_fu_1873_p2() {
    sum1_30_fu_1873_p2 = (!tmp_10_6_cast1_fu_1855_p1.read().is_01() || !tmp13_cast1_fu_1869_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_6_cast1_fu_1855_p1.read()) + sc_biguint<10>(tmp13_cast1_fu_1869_p1.read()));
}

void sobel::thread_sum1_31_fu_2082_p2() {
    sum1_31_fu_2082_p2 = (!tmp_10_7_cast1_fu_2064_p1.read().is_01() || !tmp15_cast1_fu_2078_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_7_cast1_fu_2064_p1.read()) + sc_biguint<10>(tmp15_cast1_fu_2078_p1.read()));
}

void sobel::thread_sum1_3_cast1_fu_1357_p1() {
    sum1_3_cast1_fu_1357_p1 = esl_zext<11,10>(sum1_27_reg_15988.read());
}

void sobel::thread_sum1_3_cast_fu_13681_p1() {
    sum1_3_cast_fu_13681_p1 = esl_zext<11,10>(sum1_3_reg_20278.read());
}

void sobel::thread_sum1_3_cast_mid1_fu_4001_p1() {
    sum1_3_cast_mid1_fu_4001_p1 = esl_zext<11,10>(sum1_3_mid1_reg_17054.read());
}

void sobel::thread_sum1_3_fu_13621_p2() {
    sum1_3_fu_13621_p2 = (!tmp_10_3_cast_fu_13603_p1.read().is_01() || !tmp7_cast_fu_13617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_3_cast_fu_13603_p1.read()) + sc_biguint<10>(tmp7_cast_fu_13617_p1.read()));
}

void sobel::thread_sum1_3_mid1_fu_3965_p2() {
    sum1_3_mid1_fu_3965_p2 = (!tmp_10_3_cast_mid1_fu_3947_p1.read().is_01() || !tmp7_cast_mid1_fu_3961_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_3_cast_mid1_fu_3947_p1.read()) + sc_biguint<10>(tmp7_cast_mid1_fu_3961_p1.read()));
}

void sobel::thread_sum1_4_cast1_fu_1545_p1() {
    sum1_4_cast1_fu_1545_p1 = esl_zext<11,10>(sum1_28_reg_16046.read());
}

void sobel::thread_sum1_4_cast_fu_14054_p1() {
    sum1_4_cast_fu_14054_p1 = esl_zext<11,10>(sum1_4_reg_20402.read());
}

void sobel::thread_sum1_4_cast_mid1_fu_4410_p1() {
    sum1_4_cast_mid1_fu_4410_p1 = esl_zext<11,10>(sum1_4_mid1_reg_17142.read());
}

void sobel::thread_sum1_4_fu_13994_p2() {
    sum1_4_fu_13994_p2 = (!tmp_10_4_cast_fu_13976_p1.read().is_01() || !tmp9_cast_fu_13990_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_4_cast_fu_13976_p1.read()) + sc_biguint<10>(tmp9_cast_fu_13990_p1.read()));
}

void sobel::thread_sum1_4_mid1_fu_4279_p2() {
    sum1_4_mid1_fu_4279_p2 = (!tmp_10_4_cast_mid1_fu_4261_p1.read().is_01() || !tmp9_cast_mid1_fu_4275_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_4_cast_mid1_fu_4261_p1.read()) + sc_biguint<10>(tmp9_cast_mid1_fu_4275_p1.read()));
}

void sobel::thread_sum1_5_cast1_fu_1737_p1() {
    sum1_5_cast1_fu_1737_p1 = esl_zext<11,10>(sum1_29_reg_16104.read());
}

void sobel::thread_sum1_5_cast_fu_14689_p1() {
    sum1_5_cast_fu_14689_p1 = esl_zext<11,10>(sum1_5_reg_20599.read());
}

void sobel::thread_sum1_5_cast_mid1_fu_4728_p1() {
    sum1_5_cast_mid1_fu_4728_p1 = esl_zext<11,10>(sum1_5_mid1_reg_17254.read());
}

void sobel::thread_sum1_5_fu_14649_p2() {
    sum1_5_fu_14649_p2 = (!tmp_10_5_cast_fu_14631_p1.read().is_01() || !tmp11_cast_fu_14645_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_5_cast_fu_14631_p1.read()) + sc_biguint<10>(tmp11_cast_fu_14645_p1.read()));
}

void sobel::thread_sum1_5_mid1_fu_4688_p2() {
    sum1_5_mid1_fu_4688_p2 = (!tmp_10_5_cast_mid1_fu_4670_p1.read().is_01() || !tmp11_cast_mid1_fu_4684_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_5_cast_mid1_fu_4670_p1.read()) + sc_biguint<10>(tmp11_cast_mid1_fu_4684_p1.read()));
}

void sobel::thread_sum1_6_cast1_fu_1946_p1() {
    sum1_6_cast1_fu_1946_p1 = esl_zext<11,10>(sum1_30_reg_16182.read());
}

void sobel::thread_sum1_6_cast_fu_14854_p1() {
    sum1_6_cast_fu_14854_p1 = esl_zext<11,10>(sum1_6_reg_20654.read());
}

void sobel::thread_sum1_6_cast_mid1_fu_5098_p1() {
    sum1_6_cast_mid1_fu_5098_p1 = esl_zext<11,10>(sum1_6_mid1_reg_17369.read());
}

void sobel::thread_sum1_6_fu_14814_p2() {
    sum1_6_fu_14814_p2 = (!tmp_10_6_cast_fu_14796_p1.read().is_01() || !tmp13_cast_fu_14810_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_6_cast_fu_14796_p1.read()) + sc_biguint<10>(tmp13_cast_fu_14810_p1.read()));
}

void sobel::thread_sum1_6_mid1_fu_5058_p2() {
    sum1_6_mid1_fu_5058_p2 = (!tmp_10_6_cast_mid1_fu_5040_p1.read().is_01() || !tmp13_cast_mid1_fu_5054_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_6_cast_mid1_fu_5040_p1.read()) + sc_biguint<10>(tmp13_cast_mid1_fu_5054_p1.read()));
}

void sobel::thread_sum1_7_cast1_fu_2118_p1() {
    sum1_7_cast1_fu_2118_p1 = esl_zext<11,10>(sum1_31_reg_16260.read());
}

void sobel::thread_sum1_7_cast_fu_15015_p1() {
    sum1_7_cast_fu_15015_p1 = esl_zext<11,10>(sum1_7_reg_20709.read());
}

void sobel::thread_sum1_7_cast_mid1_fu_5422_p1() {
    sum1_7_cast_mid1_fu_5422_p1 = esl_zext<11,10>(sum1_7_mid1_reg_17466.read());
}

void sobel::thread_sum1_7_fu_14979_p2() {
    sum1_7_fu_14979_p2 = (!tmp_10_7_cast_fu_14961_p1.read().is_01() || !tmp15_cast_fu_14975_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_7_cast_fu_14961_p1.read()) + sc_biguint<10>(tmp15_cast_fu_14975_p1.read()));
}

void sobel::thread_sum1_7_mid1_fu_5358_p2() {
    sum1_7_mid1_fu_5358_p2 = (!tmp_10_7_cast_mid1_fu_5340_p1.read().is_01() || !tmp15_cast_mid1_fu_5354_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_7_cast_mid1_fu_5340_p1.read()) + sc_biguint<10>(tmp15_cast_mid1_fu_5354_p1.read()));
}

void sobel::thread_sum1_8_cast_fu_5799_p1() {
    sum1_8_cast_fu_5799_p1 = esl_zext<11,10>(sum1_8_reg_17611.read());
}

void sobel::thread_sum1_8_fu_5735_p2() {
    sum1_8_fu_5735_p2 = (!tmp17_cast_fu_5731_p1.read().is_01() || !tmp_10_8_cast_fu_5717_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_cast_fu_5731_p1.read()) + sc_biguint<10>(tmp_10_8_cast_fu_5717_p1.read()));
}

void sobel::thread_sum1_9_cast_fu_6172_p1() {
    sum1_9_cast_fu_6172_p1 = esl_zext<11,10>(sum1_9_reg_17735.read());
}

void sobel::thread_sum1_9_fu_6108_p2() {
    sum1_9_fu_6108_p2 = (!tmp19_cast_fu_6104_p1.read().is_01() || !tmp_10_9_cast_fu_6090_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp19_cast_fu_6104_p1.read()) + sc_biguint<10>(tmp_10_9_cast_fu_6090_p1.read()));
}

void sobel::thread_sum1_cast1_fu_793_p1() {
    sum1_cast1_fu_793_p1 = esl_zext<11,10>(sum_reg_15814.read());
}

void sobel::thread_sum1_cast_26_fu_12562_p1() {
    sum1_cast_26_fu_12562_p1 = esl_zext<11,10>(sum1_reg_19906.read());
}

void sobel::thread_sum1_cast_fu_6545_p1() {
    sum1_cast_fu_6545_p1 = esl_zext<11,10>(sum1_s_reg_17859.read());
}

void sobel::thread_sum1_cast_mid1_fu_2909_p1() {
    sum1_cast_mid1_fu_2909_p1 = esl_zext<11,10>(sum1_mid1_reg_16736.read());
}

void sobel::thread_sum1_fu_12502_p2() {
    sum1_fu_12502_p2 = (!tmp_10_cast_19_fu_12484_p1.read().is_01() || !tmp1_cast_fu_12498_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_cast_19_fu_12484_p1.read()) + sc_biguint<10>(tmp1_cast_fu_12498_p1.read()));
}

void sobel::thread_sum1_mid1_fu_2828_p2() {
    sum1_mid1_fu_2828_p2 = (!tmp_10_cast_mid1_fu_2810_p1.read().is_01() || !tmp1_cast_mid1_fu_2824_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_cast_mid1_fu_2810_p1.read()) + sc_biguint<10>(tmp1_cast_mid1_fu_2824_p1.read()));
}

void sobel::thread_sum1_s_fu_6481_p2() {
    sum1_s_fu_6481_p2 = (!tmp21_cast_fu_6477_p1.read().is_01() || !tmp_10_cast_fu_6463_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_cast_fu_6477_p1.read()) + sc_biguint<10>(tmp_10_cast_fu_6463_p1.read()));
}

void sobel::thread_sum2_10_cast_fu_6323_p1() {
    sum2_10_cast_fu_6323_p1 = esl_sext<32,21>(sum2_10_fu_6317_p2.read());
}

void sobel::thread_sum2_10_fu_6317_p2() {
    sum2_10_fu_6317_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_10_cast_fu_6313_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_10_cast_fu_6313_p1.read()));
}

void sobel::thread_sum2_11_cast_fu_6692_p1() {
    sum2_11_cast_fu_6692_p1 = esl_sext<32,21>(sum2_11_fu_6686_p2.read());
}

void sobel::thread_sum2_11_fu_6686_p2() {
    sum2_11_fu_6686_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_11_cast_fu_6682_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_11_cast_fu_6682_p1.read()));
}

void sobel::thread_sum2_12_cast_fu_7062_p1() {
    sum2_12_cast_fu_7062_p1 = esl_sext<32,21>(sum2_12_fu_7056_p2.read());
}

void sobel::thread_sum2_12_fu_7056_p2() {
    sum2_12_fu_7056_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_12_cast_fu_7052_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_12_cast_fu_7052_p1.read()));
}

void sobel::thread_sum2_13_cast_fu_7442_p1() {
    sum2_13_cast_fu_7442_p1 = esl_sext<32,21>(sum2_13_fu_7436_p2.read());
}

void sobel::thread_sum2_13_fu_7436_p2() {
    sum2_13_fu_7436_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_13_cast_fu_7432_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_13_cast_fu_7432_p1.read()));
}

void sobel::thread_sum2_14_cast_fu_7815_p1() {
    sum2_14_cast_fu_7815_p1 = esl_sext<32,21>(sum2_14_fu_7809_p2.read());
}

void sobel::thread_sum2_14_fu_7809_p2() {
    sum2_14_fu_7809_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_14_cast_fu_7805_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_14_cast_fu_7805_p1.read()));
}

void sobel::thread_sum2_15_cast_fu_8188_p1() {
    sum2_15_cast_fu_8188_p1 = esl_sext<32,21>(sum2_15_fu_8182_p2.read());
}

void sobel::thread_sum2_15_fu_8182_p2() {
    sum2_15_fu_8182_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_15_cast_fu_8178_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_15_cast_fu_8178_p1.read()));
}

void sobel::thread_sum2_16_cast_fu_8558_p1() {
    sum2_16_cast_fu_8558_p1 = esl_sext<32,21>(sum2_16_fu_8552_p2.read());
}

void sobel::thread_sum2_16_fu_8552_p2() {
    sum2_16_fu_8552_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_16_cast_fu_8548_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_16_cast_fu_8548_p1.read()));
}

void sobel::thread_sum2_17_cast_fu_8927_p1() {
    sum2_17_cast_fu_8927_p1 = esl_sext<32,21>(sum2_17_fu_8921_p2.read());
}

void sobel::thread_sum2_17_fu_8921_p2() {
    sum2_17_fu_8921_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_17_cast_fu_8917_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_17_cast_fu_8917_p1.read()));
}

void sobel::thread_sum2_18_cast_fu_9307_p1() {
    sum2_18_cast_fu_9307_p1 = esl_sext<32,21>(sum2_18_fu_9301_p2.read());
}

void sobel::thread_sum2_18_fu_9301_p2() {
    sum2_18_fu_9301_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_18_cast_fu_9297_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_18_cast_fu_9297_p1.read()));
}

void sobel::thread_sum2_19_cast_fu_9677_p1() {
    sum2_19_cast_fu_9677_p1 = esl_sext<32,21>(sum2_19_fu_9671_p2.read());
}

void sobel::thread_sum2_19_fu_9671_p2() {
    sum2_19_fu_9671_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_19_cast_fu_9667_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_19_cast_fu_9667_p1.read()));
}

void sobel::thread_sum2_1_cast_fu_12337_p1() {
    sum2_1_cast_fu_12337_p1 = esl_sext<32,21>(sum2_1_fu_12331_p2.read());
}

void sobel::thread_sum2_1_cast_mid1_fu_2707_p1() {
    sum2_1_cast_mid1_fu_2707_p1 = esl_sext<32,21>(sum2_1_mid1_fu_2701_p2.read());
}

void sobel::thread_sum2_1_fu_12331_p2() {
    sum2_1_fu_12331_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_1_cast_fu_12327_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_1_cast_fu_12327_p1.read()));
}

void sobel::thread_sum2_1_mid1_fu_2701_p2() {
    sum2_1_mid1_fu_2701_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_1_cast_mid1_fu_2697_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_1_cast_mid1_fu_2697_p1.read()));
}

void sobel::thread_sum2_20_cast_fu_10050_p1() {
    sum2_20_cast_fu_10050_p1 = esl_sext<32,21>(sum2_20_fu_10044_p2.read());
}

void sobel::thread_sum2_20_fu_10044_p2() {
    sum2_20_fu_10044_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_20_cast_fu_10040_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_20_cast_fu_10040_p1.read()));
}

void sobel::thread_sum2_21_cast_fu_10419_p1() {
    sum2_21_cast_fu_10419_p1 = esl_sext<32,21>(sum2_21_fu_10413_p2.read());
}

void sobel::thread_sum2_21_fu_10413_p2() {
    sum2_21_fu_10413_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_21_cast_fu_10409_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_21_cast_fu_10409_p1.read()));
}

void sobel::thread_sum2_22_cast_fu_10795_p1() {
    sum2_22_cast_fu_10795_p1 = esl_sext<32,21>(sum2_22_fu_10789_p2.read());
}

void sobel::thread_sum2_22_fu_10789_p2() {
    sum2_22_fu_10789_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_22_cast_fu_10785_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_22_cast_fu_10785_p1.read()));
}

void sobel::thread_sum2_23_cast_fu_11172_p1() {
    sum2_23_cast_fu_11172_p1 = esl_sext<32,21>(sum2_23_fu_11166_p2.read());
}

void sobel::thread_sum2_23_fu_11166_p2() {
    sum2_23_fu_11166_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_23_cast_fu_11162_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_23_cast_fu_11162_p1.read()));
}

void sobel::thread_sum2_24_cast_fu_11633_p1() {
    sum2_24_cast_fu_11633_p1 = esl_sext<32,21>(sum2_24_fu_11627_p2.read());
}

void sobel::thread_sum2_24_fu_11627_p2() {
    sum2_24_fu_11627_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_24_cast_fu_11623_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_24_cast_fu_11623_p1.read()));
}

void sobel::thread_sum2_2_cast_fu_12717_p1() {
    sum2_2_cast_fu_12717_p1 = esl_sext<32,21>(sum2_2_fu_12711_p2.read());
}

void sobel::thread_sum2_2_cast_mid1_fu_3059_p1() {
    sum2_2_cast_mid1_fu_3059_p1 = esl_sext<32,21>(sum2_2_mid1_fu_3053_p2.read());
}

void sobel::thread_sum2_2_fu_12711_p2() {
    sum2_2_fu_12711_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_2_cast_fu_12707_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_2_cast_fu_12707_p1.read()));
}

void sobel::thread_sum2_2_mid1_fu_3053_p2() {
    sum2_2_mid1_fu_3053_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_2_cast_mid1_fu_3049_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_2_cast_mid1_fu_3049_p1.read()));
}

void sobel::thread_sum2_3_cast_fu_13087_p1() {
    sum2_3_cast_fu_13087_p1 = esl_sext<32,21>(sum2_3_fu_13081_p2.read());
}

void sobel::thread_sum2_3_cast_mid1_fu_3454_p1() {
    sum2_3_cast_mid1_fu_3454_p1 = esl_sext<32,21>(sum2_3_mid1_fu_3448_p2.read());
}

void sobel::thread_sum2_3_fu_13081_p2() {
    sum2_3_fu_13081_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_3_cast_fu_13077_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_3_cast_fu_13077_p1.read()));
}

void sobel::thread_sum2_3_mid1_fu_3448_p2() {
    sum2_3_mid1_fu_3448_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_3_cast_mid1_fu_3444_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_3_cast_mid1_fu_3444_p1.read()));
}

void sobel::thread_sum2_4_cast_fu_13463_p1() {
    sum2_4_cast_fu_13463_p1 = esl_sext<32,21>(sum2_4_fu_13457_p2.read());
}

void sobel::thread_sum2_4_cast_mid1_fu_3816_p1() {
    sum2_4_cast_mid1_fu_3816_p1 = esl_sext<32,21>(sum2_4_mid1_fu_3810_p2.read());
}

void sobel::thread_sum2_4_fu_13457_p2() {
    sum2_4_fu_13457_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_4_cast_fu_13453_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_4_cast_fu_13453_p1.read()));
}

void sobel::thread_sum2_4_mid1_fu_3810_p2() {
    sum2_4_mid1_fu_3810_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_4_cast_mid1_fu_3806_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_4_cast_mid1_fu_3806_p1.read()));
}

void sobel::thread_sum2_5_cast_fu_13836_p1() {
    sum2_5_cast_fu_13836_p1 = esl_sext<32,21>(sum2_5_fu_13830_p2.read());
}

void sobel::thread_sum2_5_cast_mid1_fu_4151_p1() {
    sum2_5_cast_mid1_fu_4151_p1 = esl_sext<32,21>(sum2_5_mid1_fu_4145_p2.read());
}

void sobel::thread_sum2_5_fu_13830_p2() {
    sum2_5_fu_13830_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_5_cast_fu_13826_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_5_cast_fu_13826_p1.read()));
}

void sobel::thread_sum2_5_mid1_fu_4145_p2() {
    sum2_5_mid1_fu_4145_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_5_cast_mid1_fu_4141_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_5_cast_mid1_fu_4141_p1.read()));
}

void sobel::thread_sum2_6_cast_fu_14216_p1() {
    sum2_6_cast_fu_14216_p1 = esl_sext<32,21>(sum2_6_fu_14210_p2.read());
}

void sobel::thread_sum2_6_cast_mid1_fu_4560_p1() {
    sum2_6_cast_mid1_fu_4560_p1 = esl_sext<32,21>(sum2_6_mid1_fu_4554_p2.read());
}

void sobel::thread_sum2_6_fu_14210_p2() {
    sum2_6_fu_14210_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_6_cast_fu_14206_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_6_cast_fu_14206_p1.read()));
}

void sobel::thread_sum2_6_mid1_fu_4554_p2() {
    sum2_6_mid1_fu_4554_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_6_cast_mid1_fu_4550_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_6_cast_mid1_fu_4550_p1.read()));
}

void sobel::thread_sum2_7_cast_fu_14422_p1() {
    sum2_7_cast_fu_14422_p1 = esl_sext<32,21>(sum2_7_fu_14416_p2.read());
}

void sobel::thread_sum2_7_cast_mid1_fu_4921_p1() {
    sum2_7_cast_mid1_fu_4921_p1 = esl_sext<32,21>(sum2_7_mid1_fu_4915_p2.read());
}

void sobel::thread_sum2_7_fu_14416_p2() {
    sum2_7_fu_14416_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_7_cast_fu_14412_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_7_cast_fu_14412_p1.read()));
}

void sobel::thread_sum2_7_mid1_fu_4915_p2() {
    sum2_7_mid1_fu_4915_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_7_cast_mid1_fu_4911_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_7_cast_mid1_fu_4911_p1.read()));
}

void sobel::thread_sum2_8_cast_fu_5193_p1() {
    sum2_8_cast_fu_5193_p1 = esl_sext<32,21>(sum2_8_fu_5187_p2.read());
}

void sobel::thread_sum2_8_fu_5187_p2() {
    sum2_8_fu_5187_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_8_cast_fu_5183_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_8_cast_fu_5183_p1.read()));
}

void sobel::thread_sum2_9_cast_fu_5577_p1() {
    sum2_9_cast_fu_5577_p1 = esl_sext<32,21>(sum2_9_fu_5571_p2.read());
}

void sobel::thread_sum2_9_fu_5571_p2() {
    sum2_9_fu_5571_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_9_cast_fu_5567_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_9_cast_fu_5567_p1.read()));
}

void sobel::thread_sum2_cast_16_fu_11921_p1() {
    sum2_cast_16_fu_11921_p1 = esl_sext<32,21>(sum2_fu_11915_p2.read());
}

void sobel::thread_sum2_cast_fu_5950_p1() {
    sum2_cast_fu_5950_p1 = esl_sext<32,21>(sum2_s_fu_5944_p2.read());
}

void sobel::thread_sum2_cast_mid1_fu_2359_p1() {
    sum2_cast_mid1_fu_2359_p1 = esl_sext<32,21>(sum2_mid1_fu_2353_p2.read());
}

void sobel::thread_sum2_fu_11915_p2() {
    sum2_fu_11915_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_cast_15_fu_11911_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_cast_15_fu_11911_p1.read()));
}

void sobel::thread_sum2_mid1_fu_2353_p2() {
    sum2_mid1_fu_2353_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_cast_mid1_fu_2349_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_cast_mid1_fu_2349_p1.read()));
}

void sobel::thread_sum2_s_fu_5944_p2() {
    sum2_s_fu_5944_p2 = (!ap_const_lv21_1FFBFF.is_01() || !tmp_6_cast_fu_5940_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFBFF) + sc_biguint<21>(tmp_6_cast_fu_5940_p1.read()));
}

void sobel::thread_sum3_cast_fu_12119_p1() {
    sum3_cast_fu_12119_p1 = esl_zext<32,21>(sum3_fu_12113_p2.read());
}

void sobel::thread_sum3_cast_mid1_fu_2524_p1() {
    sum3_cast_mid1_fu_2524_p1 = esl_zext<32,21>(sum3_mid1_fu_2518_p2.read());
}

void sobel::thread_sum3_fu_12113_p2() {
    sum3_fu_12113_p2 = (!tmp_3_cast1_13_fu_12101_p1.read().is_01() || !tmp_15_cast_fu_12109_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(tmp_3_cast1_13_fu_12101_p1.read()) + sc_biguint<21>(tmp_15_cast_fu_12109_p1.read()));
}

void sobel::thread_sum3_mid1_fu_2518_p2() {
    sum3_mid1_fu_2518_p2 = (!ap_const_lv21_1.is_01() || !tmp_15_cast_mid1_fu_2506_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(tmp_15_cast_mid1_fu_2506_p1.read()));
}

void sobel::thread_sum4_10_cast_fu_6368_p1() {
    sum4_10_cast_fu_6368_p1 = esl_zext<32,20>(sum4_10_fu_6363_p2.read());
}

void sobel::thread_sum4_10_fu_6363_p2() {
    sum4_10_fu_6363_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_10_cast_fu_6360_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_10_cast_fu_6360_p1.read()));
}

void sobel::thread_sum4_11_cast_fu_6735_p1() {
    sum4_11_cast_fu_6735_p1 = esl_zext<32,20>(sum4_11_fu_6730_p2.read());
}

void sobel::thread_sum4_11_fu_6730_p2() {
    sum4_11_fu_6730_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_11_cast_fu_6727_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_11_cast_fu_6727_p1.read()));
}

void sobel::thread_sum4_12_cast_fu_7105_p1() {
    sum4_12_cast_fu_7105_p1 = esl_zext<32,20>(sum4_12_fu_7100_p2.read());
}

void sobel::thread_sum4_12_fu_7100_p2() {
    sum4_12_fu_7100_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_12_cast_fu_7097_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_12_cast_fu_7097_p1.read()));
}

void sobel::thread_sum4_13_cast_fu_7487_p1() {
    sum4_13_cast_fu_7487_p1 = esl_zext<32,20>(sum4_13_fu_7482_p2.read());
}

void sobel::thread_sum4_13_fu_7482_p2() {
    sum4_13_fu_7482_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_13_cast_fu_7479_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_13_cast_fu_7479_p1.read()));
}

void sobel::thread_sum4_14_cast_fu_7860_p1() {
    sum4_14_cast_fu_7860_p1 = esl_zext<32,20>(sum4_14_fu_7855_p2.read());
}

void sobel::thread_sum4_14_fu_7855_p2() {
    sum4_14_fu_7855_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_14_cast_fu_7852_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_14_cast_fu_7852_p1.read()));
}

void sobel::thread_sum4_15_cast_fu_8233_p1() {
    sum4_15_cast_fu_8233_p1 = esl_zext<32,20>(sum4_15_fu_8228_p2.read());
}

void sobel::thread_sum4_15_fu_8228_p2() {
    sum4_15_fu_8228_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_15_cast_fu_8225_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_15_cast_fu_8225_p1.read()));
}

void sobel::thread_sum4_16_cast_fu_8603_p1() {
    sum4_16_cast_fu_8603_p1 = esl_zext<32,20>(sum4_16_fu_8598_p2.read());
}

void sobel::thread_sum4_16_fu_8598_p2() {
    sum4_16_fu_8598_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_16_cast_fu_8595_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_16_cast_fu_8595_p1.read()));
}

void sobel::thread_sum4_17_cast_fu_8970_p1() {
    sum4_17_cast_fu_8970_p1 = esl_zext<32,20>(sum4_17_fu_8965_p2.read());
}

void sobel::thread_sum4_17_fu_8965_p2() {
    sum4_17_fu_8965_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_17_cast_fu_8962_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_17_cast_fu_8962_p1.read()));
}

void sobel::thread_sum4_18_cast_fu_9352_p1() {
    sum4_18_cast_fu_9352_p1 = esl_zext<32,20>(sum4_18_fu_9347_p2.read());
}

void sobel::thread_sum4_18_fu_9347_p2() {
    sum4_18_fu_9347_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_18_cast_fu_9344_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_18_cast_fu_9344_p1.read()));
}

void sobel::thread_sum4_19_cast_fu_9722_p1() {
    sum4_19_cast_fu_9722_p1 = esl_zext<32,20>(sum4_19_fu_9717_p2.read());
}

void sobel::thread_sum4_19_fu_9717_p2() {
    sum4_19_fu_9717_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_19_cast_fu_9714_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_19_cast_fu_9714_p1.read()));
}

void sobel::thread_sum4_1_cast_fu_12380_p1() {
    sum4_1_cast_fu_12380_p1 = esl_zext<32,20>(sum4_1_fu_12375_p2.read());
}

void sobel::thread_sum4_1_cast_mid1_fu_2540_p1() {
    sum4_1_cast_mid1_fu_2540_p1 = esl_zext<32,20>(tmp_4_mid1_fu_2501_p2.read());
}

void sobel::thread_sum4_1_fu_12375_p2() {
    sum4_1_fu_12375_p2 = (!tmp_3_1_cast_fu_12372_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_1_cast_fu_12372_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_20_cast_fu_10095_p1() {
    sum4_20_cast_fu_10095_p1 = esl_zext<32,20>(sum4_20_fu_10090_p2.read());
}

void sobel::thread_sum4_20_fu_10090_p2() {
    sum4_20_fu_10090_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_20_cast_fu_10087_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_20_cast_fu_10087_p1.read()));
}

void sobel::thread_sum4_21_cast_fu_10462_p1() {
    sum4_21_cast_fu_10462_p1 = esl_zext<32,20>(sum4_21_fu_10457_p2.read());
}

void sobel::thread_sum4_21_fu_10457_p2() {
    sum4_21_fu_10457_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_21_cast_fu_10454_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_21_cast_fu_10454_p1.read()));
}

void sobel::thread_sum4_22_cast_fu_10838_p1() {
    sum4_22_cast_fu_10838_p1 = esl_zext<32,20>(sum4_22_fu_10833_p2.read());
}

void sobel::thread_sum4_22_fu_10833_p2() {
    sum4_22_fu_10833_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_22_cast_fu_10830_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_22_cast_fu_10830_p1.read()));
}

void sobel::thread_sum4_23_cast_fu_11225_p1() {
    sum4_23_cast_fu_11225_p1 = esl_zext<32,20>(sum4_23_fu_11220_p2.read());
}

void sobel::thread_sum4_23_fu_11220_p2() {
    sum4_23_fu_11220_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_23_cast_fu_11217_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_23_cast_fu_11217_p1.read()));
}

void sobel::thread_sum4_24_cast_fu_11273_p1() {
    sum4_24_cast_fu_11273_p1 = esl_zext<32,20>(sum4_24_fu_11268_p2.read());
}

void sobel::thread_sum4_24_fu_11268_p2() {
    sum4_24_fu_11268_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_24_cast_fu_11265_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_24_cast_fu_11265_p1.read()));
}

void sobel::thread_sum4_2_cast_fu_12762_p1() {
    sum4_2_cast_fu_12762_p1 = esl_zext<32,20>(sum4_2_fu_12757_p2.read());
}

void sobel::thread_sum4_2_cast_mid1_fu_3095_p1() {
    sum4_2_cast_mid1_fu_3095_p1 = esl_zext<32,20>(sum4_2_mid_fu_3090_p2.read());
}

void sobel::thread_sum4_2_fu_12757_p2() {
    sum4_2_fu_12757_p2 = (!tmp_3_2_cast_fu_12754_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_2_cast_fu_12754_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_2_mid_fu_3090_p2() {
    sum4_2_mid_fu_3090_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_2);
}

void sobel::thread_sum4_3_cast_fu_13132_p1() {
    sum4_3_cast_fu_13132_p1 = esl_zext<32,20>(sum4_3_fu_13127_p2.read());
}

void sobel::thread_sum4_3_cast_mid1_fu_2869_p1() {
    sum4_3_cast_mid1_fu_2869_p1 = esl_zext<32,20>(tmp_107_fu_2840_p2.read());
}

void sobel::thread_sum4_3_fu_13127_p2() {
    sum4_3_fu_13127_p2 = (!tmp_3_3_cast_fu_13124_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_3_cast_fu_13124_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_4_cast_fu_13508_p1() {
    sum4_4_cast_fu_13508_p1 = esl_zext<32,20>(sum4_4_fu_13503_p2.read());
}

void sobel::thread_sum4_4_cast_mid1_fu_3852_p1() {
    sum4_4_cast_mid1_fu_3852_p1 = esl_zext<32,20>(sum4_4_mid_fu_3847_p2.read());
}

void sobel::thread_sum4_4_fu_13503_p2() {
    sum4_4_fu_13503_p2 = (!tmp_3_4_cast_fu_13500_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_4_cast_fu_13500_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_4_mid_fu_3847_p2() {
    sum4_4_mid_fu_3847_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_4);
}

void sobel::thread_sum4_5_cast_fu_13881_p1() {
    sum4_5_cast_fu_13881_p1 = esl_zext<32,20>(sum4_5_fu_13876_p2.read());
}

void sobel::thread_sum4_5_cast_mid1_fu_3626_p1() {
    sum4_5_cast_mid1_fu_3626_p1 = esl_zext<32,20>(tmp_108_fu_3597_p2.read());
}

void sobel::thread_sum4_5_fu_13876_p2() {
    sum4_5_fu_13876_p2 = (!tmp_3_5_cast_fu_13873_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_5_cast_fu_13873_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_6_cast_fu_14237_p1() {
    sum4_6_cast_fu_14237_p1 = esl_zext<32,20>(sum4_6_fu_14232_p2.read());
}

void sobel::thread_sum4_6_cast_mid1_fu_4325_p1() {
    sum4_6_cast_mid1_fu_4325_p1 = esl_zext<32,20>(sum4_6_mid_fu_4320_p2.read());
}

void sobel::thread_sum4_6_fu_14232_p2() {
    sum4_6_fu_14232_p2 = (!tmp_3_6_cast_fu_14193_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_6_cast_fu_14193_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_6_mid_fu_4320_p2() {
    sum4_6_mid_fu_4320_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_6);
}

void sobel::thread_sum4_7_cast_fu_14443_p1() {
    sum4_7_cast_fu_14443_p1 = esl_zext<32,20>(sum4_7_fu_14438_p2.read());
}

void sobel::thread_sum4_7_cast_mid1_fu_4341_p1() {
    sum4_7_cast_mid1_fu_4341_p1 = esl_zext<32,20>(tmp_109_fu_4291_p2.read());
}

void sobel::thread_sum4_7_fu_14438_p2() {
    sum4_7_fu_14438_p2 = (!tmp_3_7_cast_fu_14399_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_7_cast_fu_14399_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_8_cast_fu_5236_p1() {
    sum4_8_cast_fu_5236_p1 = esl_zext<32,20>(sum4_8_fu_5231_p2.read());
}

void sobel::thread_sum4_8_fu_5231_p2() {
    sum4_8_fu_5231_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_8_cast_fu_5228_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_8_cast_fu_5228_p1.read()));
}

void sobel::thread_sum4_9_cast_fu_5622_p1() {
    sum4_9_cast_fu_5622_p1 = esl_zext<32,20>(sum4_9_fu_5617_p2.read());
}

void sobel::thread_sum4_9_fu_5617_p2() {
    sum4_9_fu_5617_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_9_cast_fu_5614_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_9_cast_fu_5614_p1.read()));
}

void sobel::thread_sum4_cast_18_fu_11970_p1() {
    sum4_cast_18_fu_11970_p1 = esl_zext<32,20>(sum4_fu_11965_p2.read());
}

void sobel::thread_sum4_cast_fu_5995_p1() {
    sum4_cast_fu_5995_p1 = esl_zext<32,20>(sum4_s_fu_5990_p2.read());
}

void sobel::thread_sum4_cast_mid1_fu_2410_p1() {
    sum4_cast_mid1_fu_2410_p1 = esl_zext<32,20>(tmp_5_mid1_fu_2399_p3.read());
}

void sobel::thread_sum4_fu_11965_p2() {
    sum4_fu_11965_p2 = (!tmp_3_cast_14_fu_11962_p1.read().is_01() || !tmp_9_reg_19673.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_3_cast_14_fu_11962_p1.read()) + sc_biguint<20>(tmp_9_reg_19673.read()));
}

void sobel::thread_sum4_s_fu_5990_p2() {
    sum4_s_fu_5990_p2 = (!tmp_9_mid2_reg_16593.read().is_01() || !tmp_3_cast_fu_5987_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_9_mid2_reg_16593.read()) + sc_biguint<20>(tmp_3_cast_fu_5987_p1.read()));
}

void sobel::thread_sum5_cast_fu_12043_p1() {
    sum5_cast_fu_12043_p1 = esl_zext<32,21>(sum5_fu_12038_p2.read());
}

void sobel::thread_sum5_cast_mid1_fu_2485_p1() {
    sum5_cast_mid1_fu_2485_p1 = esl_zext<32,21>(sum5_mid1_fu_2480_p2.read());
}

void sobel::thread_sum5_fu_12038_p2() {
    sum5_fu_12038_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_cast_15_reg_19660.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_cast_15_reg_19660.read()));
}

void sobel::thread_sum5_mid1_fu_2480_p2() {
    sum5_mid1_fu_2480_p2 = (!ap_const_lv21_401.is_01() || !tmp_6_cast_mid1_reg_16454.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_401) + sc_biguint<21>(tmp_6_cast_mid1_reg_16454.read()));
}

void sobel::thread_sum5_neg1_fu_730_p2() {
    sum5_neg1_fu_730_p2 = (!tmp_8_cast1_fu_694_p1.read().is_01() || !tmp_12_cast1_fu_710_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_cast1_fu_694_p1.read()) - sc_biguint<9>(tmp_12_cast1_fu_710_p1.read()));
}

void sobel::thread_sum5_neg_10_cast_fu_6939_p1() {
    sum5_neg_10_cast_fu_6939_p1 = esl_sext<10,9>(sum5_neg_10_reg_17988.read());
}

void sobel::thread_sum5_neg_10_fu_6860_p2() {
    sum5_neg_10_fu_6860_p2 = (!tmp_8_10_cast_fu_6824_p1.read().is_01() || !tmp_12_10_cast_fu_6840_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_10_cast_fu_6824_p1.read()) - sc_biguint<9>(tmp_12_10_cast_fu_6840_p1.read()));
}

void sobel::thread_sum5_neg_11_cast_fu_7312_p1() {
    sum5_neg_11_cast_fu_7312_p1 = esl_sext<10,9>(sum5_neg_11_reg_18112.read());
}

void sobel::thread_sum5_neg_11_fu_7233_p2() {
    sum5_neg_11_fu_7233_p2 = (!tmp_8_11_cast_fu_7197_p1.read().is_01() || !tmp_12_11_cast_fu_7213_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_11_cast_fu_7197_p1.read()) - sc_biguint<9>(tmp_12_11_cast_fu_7213_p1.read()));
}

void sobel::thread_sum5_neg_12_cast_fu_7685_p1() {
    sum5_neg_12_cast_fu_7685_p1 = esl_sext<10,9>(sum5_neg_12_reg_18236.read());
}

void sobel::thread_sum5_neg_12_fu_7606_p2() {
    sum5_neg_12_fu_7606_p2 = (!tmp_8_12_cast_fu_7570_p1.read().is_01() || !tmp_12_12_cast_fu_7586_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_12_cast_fu_7570_p1.read()) - sc_biguint<9>(tmp_12_12_cast_fu_7586_p1.read()));
}

void sobel::thread_sum5_neg_13_cast_fu_8058_p1() {
    sum5_neg_13_cast_fu_8058_p1 = esl_sext<10,9>(sum5_neg_13_reg_18360.read());
}

void sobel::thread_sum5_neg_13_fu_7979_p2() {
    sum5_neg_13_fu_7979_p2 = (!tmp_8_13_cast_fu_7943_p1.read().is_01() || !tmp_12_13_cast_fu_7959_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_13_cast_fu_7943_p1.read()) - sc_biguint<9>(tmp_12_13_cast_fu_7959_p1.read()));
}

void sobel::thread_sum5_neg_14_cast_fu_8431_p1() {
    sum5_neg_14_cast_fu_8431_p1 = esl_sext<10,9>(sum5_neg_14_reg_18484.read());
}

void sobel::thread_sum5_neg_14_fu_8352_p2() {
    sum5_neg_14_fu_8352_p2 = (!tmp_8_14_cast_fu_8316_p1.read().is_01() || !tmp_12_14_cast_fu_8332_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_14_cast_fu_8316_p1.read()) - sc_biguint<9>(tmp_12_14_cast_fu_8332_p1.read()));
}

void sobel::thread_sum5_neg_15_cast_fu_8804_p1() {
    sum5_neg_15_cast_fu_8804_p1 = esl_sext<10,9>(sum5_neg_15_reg_18608.read());
}

void sobel::thread_sum5_neg_15_fu_8725_p2() {
    sum5_neg_15_fu_8725_p2 = (!tmp_8_15_cast_fu_8689_p1.read().is_01() || !tmp_12_15_cast_fu_8705_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_15_cast_fu_8689_p1.read()) - sc_biguint<9>(tmp_12_15_cast_fu_8705_p1.read()));
}

void sobel::thread_sum5_neg_16_cast_fu_9177_p1() {
    sum5_neg_16_cast_fu_9177_p1 = esl_sext<10,9>(sum5_neg_16_reg_18732.read());
}

void sobel::thread_sum5_neg_16_fu_9098_p2() {
    sum5_neg_16_fu_9098_p2 = (!tmp_8_16_cast_fu_9062_p1.read().is_01() || !tmp_12_16_cast_fu_9078_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_16_cast_fu_9062_p1.read()) - sc_biguint<9>(tmp_12_16_cast_fu_9078_p1.read()));
}

void sobel::thread_sum5_neg_17_cast_fu_9550_p1() {
    sum5_neg_17_cast_fu_9550_p1 = esl_sext<10,9>(sum5_neg_17_reg_18856.read());
}

void sobel::thread_sum5_neg_17_fu_9471_p2() {
    sum5_neg_17_fu_9471_p2 = (!tmp_8_17_cast_fu_9435_p1.read().is_01() || !tmp_12_17_cast_fu_9451_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_17_cast_fu_9435_p1.read()) - sc_biguint<9>(tmp_12_17_cast_fu_9451_p1.read()));
}

void sobel::thread_sum5_neg_18_cast_fu_9923_p1() {
    sum5_neg_18_cast_fu_9923_p1 = esl_sext<10,9>(sum5_neg_18_reg_18980.read());
}

void sobel::thread_sum5_neg_18_fu_9844_p2() {
    sum5_neg_18_fu_9844_p2 = (!tmp_8_18_cast_fu_9808_p1.read().is_01() || !tmp_12_18_cast_fu_9824_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_18_cast_fu_9808_p1.read()) - sc_biguint<9>(tmp_12_18_cast_fu_9824_p1.read()));
}

void sobel::thread_sum5_neg_19_cast_fu_10296_p1() {
    sum5_neg_19_cast_fu_10296_p1 = esl_sext<10,9>(sum5_neg_19_reg_19104.read());
}

void sobel::thread_sum5_neg_19_fu_10217_p2() {
    sum5_neg_19_fu_10217_p2 = (!tmp_8_19_cast_fu_10181_p1.read().is_01() || !tmp_12_19_cast_fu_10197_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_19_cast_fu_10181_p1.read()) - sc_biguint<9>(tmp_12_19_cast_fu_10197_p1.read()));
}

void sobel::thread_sum5_neg_1_cast1_fu_1006_p1() {
    sum5_neg_1_cast1_fu_1006_p1 = esl_sext<10,9>(sum5_neg_25_reg_15877.read());
}

void sobel::thread_sum5_neg_1_cast_fu_12960_p1() {
    sum5_neg_1_cast_fu_12960_p1 = esl_sext<10,9>(sum5_neg_1_reg_20035.read());
}

void sobel::thread_sum5_neg_1_cast_mid1_fu_3332_p1() {
    sum5_neg_1_cast_mid1_fu_3332_p1 = esl_sext<10,9>(sum5_neg_1_mid1_reg_16847.read());
}

void sobel::thread_sum5_neg_1_fu_12881_p2() {
    sum5_neg_1_fu_12881_p2 = (!tmp_8_1_cast_fu_12845_p1.read().is_01() || !tmp_12_1_cast_fu_12861_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_1_cast_fu_12845_p1.read()) - sc_biguint<9>(tmp_12_1_cast_fu_12861_p1.read()));
}

void sobel::thread_sum5_neg_1_mid1_fu_3214_p2() {
    sum5_neg_1_mid1_fu_3214_p2 = (!tmp_8_1_cast_mid1_fu_3178_p1.read().is_01() || !tmp_12_1_cast_mid1_fu_3194_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_1_cast_mid1_fu_3178_p1.read()) - sc_biguint<9>(tmp_12_1_cast_mid1_fu_3194_p1.read()));
}

void sobel::thread_sum5_neg_20_cast_fu_10669_p1() {
    sum5_neg_20_cast_fu_10669_p1 = esl_sext<10,9>(sum5_neg_20_reg_19228.read());
}

void sobel::thread_sum5_neg_20_fu_10590_p2() {
    sum5_neg_20_fu_10590_p2 = (!tmp_8_20_cast_fu_10554_p1.read().is_01() || !tmp_12_20_cast_fu_10570_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_20_cast_fu_10554_p1.read()) - sc_biguint<9>(tmp_12_20_cast_fu_10570_p1.read()));
}

void sobel::thread_sum5_neg_21_cast_fu_11042_p1() {
    sum5_neg_21_cast_fu_11042_p1 = esl_sext<10,9>(sum5_neg_21_reg_19352.read());
}

void sobel::thread_sum5_neg_21_fu_10963_p2() {
    sum5_neg_21_fu_10963_p2 = (!tmp_8_21_cast_fu_10927_p1.read().is_01() || !tmp_12_21_cast_fu_10943_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_21_cast_fu_10927_p1.read()) - sc_biguint<9>(tmp_12_21_cast_fu_10943_p1.read()));
}

void sobel::thread_sum5_neg_22_cast_fu_11468_p1() {
    sum5_neg_22_cast_fu_11468_p1 = esl_sext<10,9>(sum5_neg_22_reg_19503.read());
}

void sobel::thread_sum5_neg_22_fu_11413_p2() {
    sum5_neg_22_fu_11413_p2 = (!tmp_8_22_cast_fu_11377_p1.read().is_01() || !tmp_12_22_cast_fu_11393_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_22_cast_fu_11377_p1.read()) - sc_biguint<9>(tmp_12_22_cast_fu_11393_p1.read()));
}

void sobel::thread_sum5_neg_23_cast_fu_11832_p1() {
    sum5_neg_23_cast_fu_11832_p1 = esl_sext<10,9>(sum5_neg_23_reg_19618.read());
}

void sobel::thread_sum5_neg_23_fu_11777_p2() {
    sum5_neg_23_fu_11777_p2 = (!tmp_8_23_cast_fu_11741_p1.read().is_01() || !tmp_12_23_cast_fu_11757_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_23_cast_fu_11741_p1.read()) - sc_biguint<9>(tmp_12_23_cast_fu_11757_p1.read()));
}

void sobel::thread_sum5_neg_24_cast_fu_12214_p1() {
    sum5_neg_24_cast_fu_12214_p1 = esl_sext<10,9>(sum5_neg_24_reg_19745.read());
}

void sobel::thread_sum5_neg_24_fu_12095_p2() {
    sum5_neg_24_fu_12095_p2 = (!tmp_8_24_cast_fu_12059_p1.read().is_01() || !tmp_12_24_cast_fu_12075_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_24_cast_fu_12059_p1.read()) - sc_biguint<9>(tmp_12_24_cast_fu_12075_p1.read()));
}

void sobel::thread_sum5_neg_25_fu_918_p2() {
    sum5_neg_25_fu_918_p2 = (!tmp_8_1_cast1_fu_882_p1.read().is_01() || !tmp_12_1_cast1_fu_898_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_1_cast1_fu_882_p1.read()) - sc_biguint<9>(tmp_12_1_cast1_fu_898_p1.read()));
}

void sobel::thread_sum5_neg_26_fu_1106_p2() {
    sum5_neg_26_fu_1106_p2 = (!tmp_8_2_cast1_fu_1070_p1.read().is_01() || !tmp_12_2_cast1_fu_1086_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_2_cast1_fu_1070_p1.read()) - sc_biguint<9>(tmp_12_2_cast1_fu_1086_p1.read()));
}

void sobel::thread_sum5_neg_27_fu_1294_p2() {
    sum5_neg_27_fu_1294_p2 = (!tmp_8_3_cast1_fu_1258_p1.read().is_01() || !tmp_12_3_cast1_fu_1274_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_3_cast1_fu_1258_p1.read()) - sc_biguint<9>(tmp_12_3_cast1_fu_1274_p1.read()));
}

void sobel::thread_sum5_neg_28_fu_1482_p2() {
    sum5_neg_28_fu_1482_p2 = (!tmp_8_4_cast1_fu_1446_p1.read().is_01() || !tmp_12_4_cast1_fu_1462_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_4_cast1_fu_1446_p1.read()) - sc_biguint<9>(tmp_12_4_cast1_fu_1462_p1.read()));
}

void sobel::thread_sum5_neg_29_fu_1670_p2() {
    sum5_neg_29_fu_1670_p2 = (!tmp_8_5_cast1_fu_1634_p1.read().is_01() || !tmp_12_5_cast1_fu_1650_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_5_cast1_fu_1634_p1.read()) - sc_biguint<9>(tmp_12_5_cast1_fu_1650_p1.read()));
}

void sobel::thread_sum5_neg_2_cast1_fu_1194_p1() {
    sum5_neg_2_cast1_fu_1194_p1 = esl_sext<10,9>(sum5_neg_26_reg_15935.read());
}

void sobel::thread_sum5_neg_2_cast_fu_13333_p1() {
    sum5_neg_2_cast_fu_13333_p1 = esl_sext<10,9>(sum5_neg_2_reg_20159.read());
}

void sobel::thread_sum5_neg_2_cast_mid1_fu_3691_p1() {
    sum5_neg_2_cast_mid1_fu_3691_p1 = esl_sext<10,9>(sum5_neg_2_mid1_reg_16953.read());
}

void sobel::thread_sum5_neg_2_fu_13254_p2() {
    sum5_neg_2_fu_13254_p2 = (!tmp_8_2_cast_fu_13218_p1.read().is_01() || !tmp_12_2_cast_fu_13234_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_2_cast_fu_13218_p1.read()) - sc_biguint<9>(tmp_12_2_cast_fu_13234_p1.read()));
}

void sobel::thread_sum5_neg_2_mid1_fu_3591_p2() {
    sum5_neg_2_mid1_fu_3591_p2 = (!tmp_8_2_cast_mid1_fu_3555_p1.read().is_01() || !tmp_12_2_cast_mid1_fu_3571_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_2_cast_mid1_fu_3555_p1.read()) - sc_biguint<9>(tmp_12_2_cast_mid1_fu_3571_p1.read()));
}

void sobel::thread_sum5_neg_30_fu_1879_p2() {
    sum5_neg_30_fu_1879_p2 = (!tmp_8_6_cast1_fu_1843_p1.read().is_01() || !tmp_12_6_cast1_fu_1859_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_6_cast1_fu_1843_p1.read()) - sc_biguint<9>(tmp_12_6_cast1_fu_1859_p1.read()));
}

void sobel::thread_sum5_neg_31_fu_2088_p2() {
    sum5_neg_31_fu_2088_p2 = (!tmp_8_7_cast1_fu_2052_p1.read().is_01() || !tmp_12_7_cast1_fu_2068_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_7_cast1_fu_2052_p1.read()) - sc_biguint<9>(tmp_12_7_cast1_fu_2068_p1.read()));
}

void sobel::thread_sum5_neg_3_cast1_fu_1382_p1() {
    sum5_neg_3_cast1_fu_1382_p1 = esl_sext<10,9>(sum5_neg_27_reg_15993.read());
}

void sobel::thread_sum5_neg_3_cast_fu_13706_p1() {
    sum5_neg_3_cast_fu_13706_p1 = esl_sext<10,9>(sum5_neg_3_reg_20283.read());
}

void sobel::thread_sum5_neg_3_cast_mid1_fu_4026_p1() {
    sum5_neg_3_cast_mid1_fu_4026_p1 = esl_sext<10,9>(sum5_neg_3_mid1_reg_17059.read());
}

void sobel::thread_sum5_neg_3_fu_13627_p2() {
    sum5_neg_3_fu_13627_p2 = (!tmp_8_3_cast_fu_13591_p1.read().is_01() || !tmp_12_3_cast_fu_13607_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_3_cast_fu_13591_p1.read()) - sc_biguint<9>(tmp_12_3_cast_fu_13607_p1.read()));
}

void sobel::thread_sum5_neg_3_mid1_fu_3971_p2() {
    sum5_neg_3_mid1_fu_3971_p2 = (!tmp_8_3_cast_mid1_fu_3935_p1.read().is_01() || !tmp_12_3_cast_mid1_fu_3951_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_3_cast_mid1_fu_3935_p1.read()) - sc_biguint<9>(tmp_12_3_cast_mid1_fu_3951_p1.read()));
}

void sobel::thread_sum5_neg_4_cast1_fu_1570_p1() {
    sum5_neg_4_cast1_fu_1570_p1 = esl_sext<10,9>(sum5_neg_28_reg_16051.read());
}

void sobel::thread_sum5_neg_4_cast_fu_14079_p1() {
    sum5_neg_4_cast_fu_14079_p1 = esl_sext<10,9>(sum5_neg_4_reg_20407.read());
}

void sobel::thread_sum5_neg_4_cast_mid1_fu_4435_p1() {
    sum5_neg_4_cast_mid1_fu_4435_p1 = esl_sext<10,9>(sum5_neg_4_mid1_reg_17147.read());
}

void sobel::thread_sum5_neg_4_fu_14000_p2() {
    sum5_neg_4_fu_14000_p2 = (!tmp_8_4_cast_fu_13964_p1.read().is_01() || !tmp_12_4_cast_fu_13980_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_4_cast_fu_13964_p1.read()) - sc_biguint<9>(tmp_12_4_cast_fu_13980_p1.read()));
}

void sobel::thread_sum5_neg_4_mid1_fu_4285_p2() {
    sum5_neg_4_mid1_fu_4285_p2 = (!tmp_8_4_cast_mid1_fu_4249_p1.read().is_01() || !tmp_12_4_cast_mid1_fu_4265_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_4_cast_mid1_fu_4249_p1.read()) - sc_biguint<9>(tmp_12_4_cast_mid1_fu_4265_p1.read()));
}

void sobel::thread_sum5_neg_5_cast1_fu_1758_p1() {
    sum5_neg_5_cast1_fu_1758_p1 = esl_sext<10,9>(sum5_neg_29_reg_16109.read());
}

void sobel::thread_sum5_neg_5_cast_fu_14710_p1() {
    sum5_neg_5_cast_fu_14710_p1 = esl_sext<10,9>(sum5_neg_5_reg_20604.read());
}

void sobel::thread_sum5_neg_5_cast_mid1_fu_4749_p1() {
    sum5_neg_5_cast_mid1_fu_4749_p1 = esl_sext<10,9>(sum5_neg_5_mid1_reg_17259.read());
}

void sobel::thread_sum5_neg_5_fu_14655_p2() {
    sum5_neg_5_fu_14655_p2 = (!tmp_8_5_cast_fu_14619_p1.read().is_01() || !tmp_12_5_cast_fu_14635_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_5_cast_fu_14619_p1.read()) - sc_biguint<9>(tmp_12_5_cast_fu_14635_p1.read()));
}

void sobel::thread_sum5_neg_5_mid1_fu_4694_p2() {
    sum5_neg_5_mid1_fu_4694_p2 = (!tmp_8_5_cast_mid1_fu_4658_p1.read().is_01() || !tmp_12_5_cast_mid1_fu_4674_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_5_cast_mid1_fu_4658_p1.read()) - sc_biguint<9>(tmp_12_5_cast_mid1_fu_4674_p1.read()));
}

void sobel::thread_sum5_neg_6_cast1_fu_1967_p1() {
    sum5_neg_6_cast1_fu_1967_p1 = esl_sext<10,9>(sum5_neg_30_reg_16187.read());
}

void sobel::thread_sum5_neg_6_cast_fu_14875_p1() {
    sum5_neg_6_cast_fu_14875_p1 = esl_sext<10,9>(sum5_neg_6_reg_20659.read());
}

void sobel::thread_sum5_neg_6_cast_mid1_fu_5119_p1() {
    sum5_neg_6_cast_mid1_fu_5119_p1 = esl_sext<10,9>(sum5_neg_6_mid1_reg_17374.read());
}

void sobel::thread_sum5_neg_6_fu_14820_p2() {
    sum5_neg_6_fu_14820_p2 = (!tmp_8_6_cast_fu_14784_p1.read().is_01() || !tmp_12_6_cast_fu_14800_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_6_cast_fu_14784_p1.read()) - sc_biguint<9>(tmp_12_6_cast_fu_14800_p1.read()));
}

void sobel::thread_sum5_neg_6_mid1_fu_5064_p2() {
    sum5_neg_6_mid1_fu_5064_p2 = (!tmp_8_6_cast_mid1_fu_5028_p1.read().is_01() || !tmp_12_6_cast_mid1_fu_5044_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_6_cast_mid1_fu_5028_p1.read()) - sc_biguint<9>(tmp_12_6_cast_mid1_fu_5044_p1.read()));
}

void sobel::thread_sum5_neg_7_cast1_fu_2143_p1() {
    sum5_neg_7_cast1_fu_2143_p1 = esl_sext<10,9>(sum5_neg_31_reg_16265.read());
}

void sobel::thread_sum5_neg_7_cast_fu_15040_p1() {
    sum5_neg_7_cast_fu_15040_p1 = esl_sext<10,9>(sum5_neg_7_reg_20714.read());
}

void sobel::thread_sum5_neg_7_cast_mid1_fu_5447_p1() {
    sum5_neg_7_cast_mid1_fu_5447_p1 = esl_sext<10,9>(sum5_neg_7_mid1_reg_17471.read());
}

void sobel::thread_sum5_neg_7_fu_14985_p2() {
    sum5_neg_7_fu_14985_p2 = (!tmp_8_7_cast_fu_14949_p1.read().is_01() || !tmp_12_7_cast_fu_14965_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_7_cast_fu_14949_p1.read()) - sc_biguint<9>(tmp_12_7_cast_fu_14965_p1.read()));
}

void sobel::thread_sum5_neg_7_mid1_fu_5364_p2() {
    sum5_neg_7_mid1_fu_5364_p2 = (!tmp_8_7_cast_mid1_fu_5328_p1.read().is_01() || !tmp_12_7_cast_mid1_fu_5344_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_7_cast_mid1_fu_5328_p1.read()) - sc_biguint<9>(tmp_12_7_cast_mid1_fu_5344_p1.read()));
}

void sobel::thread_sum5_neg_8_cast_fu_5820_p1() {
    sum5_neg_8_cast_fu_5820_p1 = esl_sext<10,9>(sum5_neg_8_reg_17616.read());
}

void sobel::thread_sum5_neg_8_fu_5741_p2() {
    sum5_neg_8_fu_5741_p2 = (!tmp_8_8_cast_fu_5705_p1.read().is_01() || !tmp_12_8_cast_fu_5721_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_8_cast_fu_5705_p1.read()) - sc_biguint<9>(tmp_12_8_cast_fu_5721_p1.read()));
}

void sobel::thread_sum5_neg_9_cast_fu_6193_p1() {
    sum5_neg_9_cast_fu_6193_p1 = esl_sext<10,9>(sum5_neg_9_reg_17740.read());
}

void sobel::thread_sum5_neg_9_fu_6114_p2() {
    sum5_neg_9_fu_6114_p2 = (!tmp_8_9_cast_fu_6078_p1.read().is_01() || !tmp_12_9_cast_fu_6094_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_9_cast_fu_6078_p1.read()) - sc_biguint<9>(tmp_12_9_cast_fu_6094_p1.read()));
}

void sobel::thread_sum5_neg_cast1_fu_818_p1() {
    sum5_neg_cast1_fu_818_p1 = esl_sext<10,9>(sum5_neg1_reg_15819.read());
}

void sobel::thread_sum5_neg_cast_29_fu_12587_p1() {
    sum5_neg_cast_29_fu_12587_p1 = esl_sext<10,9>(sum5_neg_reg_19911.read());
}

void sobel::thread_sum5_neg_cast_fu_6566_p1() {
    sum5_neg_cast_fu_6566_p1 = esl_sext<10,9>(sum5_neg_s_reg_17864.read());
}

void sobel::thread_sum5_neg_cast_mid1_fu_2934_p1() {
    sum5_neg_cast_mid1_fu_2934_p1 = esl_sext<10,9>(sum5_neg_mid1_reg_16741.read());
}

void sobel::thread_sum5_neg_fu_12508_p2() {
    sum5_neg_fu_12508_p2 = (!tmp_8_cast_17_fu_12472_p1.read().is_01() || !tmp_12_cast_21_fu_12488_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_cast_17_fu_12472_p1.read()) - sc_biguint<9>(tmp_12_cast_21_fu_12488_p1.read()));
}

void sobel::thread_sum5_neg_mid1_fu_2834_p2() {
    sum5_neg_mid1_fu_2834_p2 = (!tmp_8_cast_mid1_fu_2798_p1.read().is_01() || !tmp_12_cast_mid1_fu_2814_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_cast_mid1_fu_2798_p1.read()) - sc_biguint<9>(tmp_12_cast_mid1_fu_2814_p1.read()));
}

void sobel::thread_sum5_neg_s_fu_6487_p2() {
    sum5_neg_s_fu_6487_p2 = (!tmp_8_cast_fu_6451_p1.read().is_01() || !tmp_12_cast_fu_6467_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_cast_fu_6451_p1.read()) - sc_biguint<9>(tmp_12_cast_fu_6467_p1.read()));
}

void sobel::thread_sum6_10_cast_fu_6393_p1() {
    sum6_10_cast_fu_6393_p1 = esl_zext<32,21>(sum6_10_fu_6388_p2.read());
}

void sobel::thread_sum6_10_fu_6388_p2() {
    sum6_10_fu_6388_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_10_cast_reg_17802.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_10_cast_reg_17802.read()));
}

void sobel::thread_sum6_11_cast_fu_6766_p1() {
    sum6_11_cast_fu_6766_p1 = esl_zext<32,21>(sum6_11_fu_6761_p2.read());
}

void sobel::thread_sum6_11_fu_6761_p2() {
    sum6_11_fu_6761_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_11_cast_reg_17916.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_11_cast_reg_17916.read()));
}

void sobel::thread_sum6_12_cast_fu_7135_p1() {
    sum6_12_cast_fu_7135_p1 = esl_zext<32,21>(sum6_12_fu_7130_p2.read());
}

void sobel::thread_sum6_12_fu_7130_p2() {
    sum6_12_fu_7130_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_12_cast_reg_18035.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_12_cast_reg_18035.read()));
}

void sobel::thread_sum6_13_cast_fu_7512_p1() {
    sum6_13_cast_fu_7512_p1 = esl_zext<32,21>(sum6_13_fu_7507_p2.read());
}

void sobel::thread_sum6_13_fu_7507_p2() {
    sum6_13_fu_7507_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_13_cast_reg_18174.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_13_cast_reg_18174.read()));
}

void sobel::thread_sum6_14_cast_fu_7885_p1() {
    sum6_14_cast_fu_7885_p1 = esl_zext<32,21>(sum6_14_fu_7880_p2.read());
}

void sobel::thread_sum6_14_fu_7880_p2() {
    sum6_14_fu_7880_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_14_cast_reg_18298.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_14_cast_reg_18298.read()));
}

void sobel::thread_sum6_15_cast_fu_8258_p1() {
    sum6_15_cast_fu_8258_p1 = esl_zext<32,21>(sum6_15_fu_8253_p2.read());
}

void sobel::thread_sum6_15_fu_8253_p2() {
    sum6_15_fu_8253_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_15_cast_reg_18422.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_15_cast_reg_18422.read()));
}

void sobel::thread_sum6_16_cast_fu_8627_p1() {
    sum6_16_cast_fu_8627_p1 = esl_zext<32,21>(sum6_16_fu_8622_p2.read());
}

void sobel::thread_sum6_16_fu_8622_p2() {
    sum6_16_fu_8622_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_16_cast_reg_18541.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_16_cast_reg_18541.read()));
}

void sobel::thread_sum6_17_cast_fu_9000_p1() {
    sum6_17_cast_fu_9000_p1 = esl_zext<32,21>(sum6_17_fu_8995_p2.read());
}

void sobel::thread_sum6_17_fu_8995_p2() {
    sum6_17_fu_8995_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_17_cast_reg_18655.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_17_cast_reg_18655.read()));
}

void sobel::thread_sum6_18_cast_fu_9377_p1() {
    sum6_18_cast_fu_9377_p1 = esl_zext<32,21>(sum6_18_fu_9372_p2.read());
}

void sobel::thread_sum6_18_fu_9372_p2() {
    sum6_18_fu_9372_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_18_cast_reg_18794.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_18_cast_reg_18794.read()));
}

void sobel::thread_sum6_19_cast_fu_9746_p1() {
    sum6_19_cast_fu_9746_p1 = esl_zext<32,21>(sum6_19_fu_9741_p2.read());
}

void sobel::thread_sum6_19_fu_9741_p2() {
    sum6_19_fu_9741_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_19_cast_reg_18913.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_19_cast_reg_18913.read()));
}

void sobel::thread_sum6_1_cast_fu_12410_p1() {
    sum6_1_cast_fu_12410_p1 = esl_zext<32,21>(sum6_1_fu_12405_p2.read());
}

void sobel::thread_sum6_1_cast_mid1_fu_2740_p1() {
    sum6_1_cast_mid1_fu_2740_p1 = esl_zext<32,21>(sum6_1_mid1_fu_2735_p2.read());
}

void sobel::thread_sum6_1_fu_12405_p2() {
    sum6_1_fu_12405_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_1_cast_reg_19834.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_1_cast_reg_19834.read()));
}

void sobel::thread_sum6_1_mid1_fu_2735_p2() {
    sum6_1_mid1_fu_2735_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_1_cast_mid1_reg_16700.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_1_cast_mid1_reg_16700.read()));
}

void sobel::thread_sum6_20_cast_fu_10119_p1() {
    sum6_20_cast_fu_10119_p1 = esl_zext<32,21>(sum6_20_fu_10114_p2.read());
}

void sobel::thread_sum6_20_fu_10114_p2() {
    sum6_20_fu_10114_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_20_cast_reg_19037.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_20_cast_reg_19037.read()));
}

void sobel::thread_sum6_21_cast_fu_10492_p1() {
    sum6_21_cast_fu_10492_p1 = esl_zext<32,21>(sum6_21_fu_10487_p2.read());
}

void sobel::thread_sum6_21_fu_10487_p2() {
    sum6_21_fu_10487_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_21_cast_reg_19151.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_21_cast_reg_19151.read()));
}

void sobel::thread_sum6_22_cast_fu_10869_p1() {
    sum6_22_cast_fu_10869_p1 = esl_zext<32,21>(sum6_22_fu_10864_p2.read());
}

void sobel::thread_sum6_22_fu_10864_p2() {
    sum6_22_fu_10864_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_22_cast_reg_19280.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_22_cast_reg_19280.read()));
}

void sobel::thread_sum6_23_cast_fu_11319_p1() {
    sum6_23_cast_fu_11319_p1 = esl_zext<32,21>(sum6_23_fu_11314_p2.read());
}

void sobel::thread_sum6_23_fu_11314_p2() {
    sum6_23_fu_11314_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_23_cast_reg_19414.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_23_cast_reg_19414.read()));
}

void sobel::thread_sum6_24_cast_fu_11683_p1() {
    sum6_24_cast_fu_11683_p1 = esl_zext<32,21>(sum6_24_fu_11678_p2.read());
}

void sobel::thread_sum6_24_fu_11678_p2() {
    sum6_24_fu_11678_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_24_cast_reg_19552.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_24_cast_reg_19552.read()));
}

void sobel::thread_sum6_2_cast_fu_12787_p1() {
    sum6_2_cast_fu_12787_p1 = esl_zext<32,21>(sum6_2_fu_12782_p2.read());
}

void sobel::thread_sum6_2_cast_mid1_fu_3120_p1() {
    sum6_2_cast_mid1_fu_3120_p1 = esl_zext<32,21>(sum6_2_mid1_fu_3115_p2.read());
}

void sobel::thread_sum6_2_fu_12782_p2() {
    sum6_2_fu_12782_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_2_cast_reg_19973.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_2_cast_reg_19973.read()));
}

void sobel::thread_sum6_2_mid1_fu_3115_p2() {
    sum6_2_mid1_fu_3115_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_2_cast_mid1_reg_16790.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_2_cast_mid1_reg_16790.read()));
}

void sobel::thread_sum6_3_cast_fu_13156_p1() {
    sum6_3_cast_fu_13156_p1 = esl_zext<32,21>(sum6_3_fu_13151_p2.read());
}

void sobel::thread_sum6_3_cast_mid1_fu_3493_p1() {
    sum6_3_cast_mid1_fu_3493_p1 = esl_zext<32,21>(sum6_3_mid1_fu_3488_p2.read());
}

void sobel::thread_sum6_3_fu_13151_p2() {
    sum6_3_fu_13151_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_3_cast_reg_20092.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_3_cast_reg_20092.read()));
}

void sobel::thread_sum6_3_mid1_fu_3488_p2() {
    sum6_3_mid1_fu_3488_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_3_cast_mid1_reg_16897.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_3_cast_mid1_reg_16897.read()));
}

void sobel::thread_sum6_4_cast_fu_13533_p1() {
    sum6_4_cast_fu_13533_p1 = esl_zext<32,21>(sum6_4_fu_13528_p2.read());
}

void sobel::thread_sum6_4_cast_mid1_fu_3877_p1() {
    sum6_4_cast_mid1_fu_3877_p1 = esl_zext<32,21>(sum6_4_mid1_fu_3872_p2.read());
}

void sobel::thread_sum6_4_fu_13528_p2() {
    sum6_4_fu_13528_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_4_cast_reg_20221.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_4_cast_reg_20221.read()));
}

void sobel::thread_sum6_4_mid1_fu_3872_p2() {
    sum6_4_mid1_fu_3872_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_4_cast_mid1_reg_17002.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_4_cast_mid1_reg_17002.read()));
}

void sobel::thread_sum6_5_cast_fu_13906_p1() {
    sum6_5_cast_fu_13906_p1 = esl_zext<32,21>(sum6_5_fu_13901_p2.read());
}

void sobel::thread_sum6_5_cast_mid1_fu_4191_p1() {
    sum6_5_cast_mid1_fu_4191_p1 = esl_zext<32,21>(sum6_5_mid1_fu_4186_p2.read());
}

void sobel::thread_sum6_5_fu_13901_p2() {
    sum6_5_fu_13901_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_5_cast_reg_20345.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_5_cast_reg_20345.read()));
}

void sobel::thread_sum6_5_mid1_fu_4186_p2() {
    sum6_5_mid1_fu_4186_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_5_cast_mid1_reg_17096.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_5_cast_mid1_reg_17096.read()));
}

void sobel::thread_sum6_6_cast_fu_14259_p1() {
    sum6_6_cast_fu_14259_p1 = esl_zext<32,21>(sum6_6_fu_14253_p2.read());
}

void sobel::thread_sum6_6_cast_mid1_fu_4600_p1() {
    sum6_6_cast_mid1_fu_4600_p1 = esl_zext<32,21>(sum6_6_mid1_fu_4595_p2.read());
}

void sobel::thread_sum6_6_fu_14253_p2() {
    sum6_6_fu_14253_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_6_cast_fu_14206_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_6_cast_fu_14206_p1.read()));
}

void sobel::thread_sum6_6_mid1_fu_4595_p2() {
    sum6_6_mid1_fu_4595_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_6_cast_mid1_reg_17208.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_6_cast_mid1_reg_17208.read()));
}

void sobel::thread_sum6_7_cast_fu_14465_p1() {
    sum6_7_cast_fu_14465_p1 = esl_zext<32,21>(sum6_7_fu_14459_p2.read());
}

void sobel::thread_sum6_7_cast_mid1_fu_4966_p1() {
    sum6_7_cast_mid1_fu_4966_p1 = esl_zext<32,21>(sum6_7_mid1_fu_4961_p2.read());
}

void sobel::thread_sum6_7_fu_14459_p2() {
    sum6_7_fu_14459_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_7_cast_fu_14412_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_7_cast_fu_14412_p1.read()));
}

void sobel::thread_sum6_7_mid1_fu_4961_p2() {
    sum6_7_mid1_fu_4961_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_7_cast_mid1_reg_17313.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_7_cast_mid1_reg_17313.read()));
}

void sobel::thread_sum6_8_cast_fu_5266_p1() {
    sum6_8_cast_fu_5266_p1 = esl_zext<32,21>(sum6_8_fu_5261_p2.read());
}

void sobel::thread_sum6_8_fu_5261_p2() {
    sum6_8_fu_5261_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_8_cast_reg_17394.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_8_cast_reg_17394.read()));
}

void sobel::thread_sum6_9_cast_fu_5647_p1() {
    sum6_9_cast_fu_5647_p1 = esl_zext<32,21>(sum6_9_fu_5642_p2.read());
}

void sobel::thread_sum6_9_fu_5642_p2() {
    sum6_9_fu_5642_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_9_cast_reg_17554.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_9_cast_reg_17554.read()));
}

void sobel::thread_sum6_cast_20_fu_12001_p1() {
    sum6_cast_20_fu_12001_p1 = esl_zext<32,21>(sum6_fu_11996_p2.read());
}

void sobel::thread_sum6_cast_fu_6020_p1() {
    sum6_cast_fu_6020_p1 = esl_zext<32,21>(sum6_s_fu_6015_p2.read());
}

void sobel::thread_sum6_cast_mid1_fu_2443_p1() {
    sum6_cast_mid1_fu_2443_p1 = esl_zext<32,21>(sum6_mid1_fu_2438_p2.read());
}

void sobel::thread_sum6_fu_11996_p2() {
    sum6_fu_11996_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_cast_15_reg_19660.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_cast_15_reg_19660.read()));
}

void sobel::thread_sum6_mid1_fu_2438_p2() {
    sum6_mid1_fu_2438_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_cast_mid1_reg_16454.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_cast_mid1_reg_16454.read()));
}

void sobel::thread_sum6_neg1_fu_821_p2() {
    sum6_neg1_fu_821_p2 = (!tmp_14_cast1_fu_773_p1.read().is_01() || !sum5_neg_cast1_fu_818_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_cast1_fu_773_p1.read()) + sc_bigint<10>(sum5_neg_cast1_fu_818_p1.read()));
}

void sobel::thread_sum6_neg_10_fu_6942_p2() {
    sum6_neg_10_fu_6942_p2 = (!sum5_neg_10_cast_fu_6939_p1.read().is_01() || !tmp_14_10_cast_fu_6894_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_10_cast_fu_6939_p1.read()) + sc_biguint<10>(tmp_14_10_cast_fu_6894_p1.read()));
}

void sobel::thread_sum6_neg_11_fu_7315_p2() {
    sum6_neg_11_fu_7315_p2 = (!sum5_neg_11_cast_fu_7312_p1.read().is_01() || !tmp_14_11_cast_fu_7267_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_11_cast_fu_7312_p1.read()) + sc_biguint<10>(tmp_14_11_cast_fu_7267_p1.read()));
}

void sobel::thread_sum6_neg_12_fu_7688_p2() {
    sum6_neg_12_fu_7688_p2 = (!sum5_neg_12_cast_fu_7685_p1.read().is_01() || !tmp_14_12_cast_fu_7640_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_12_cast_fu_7685_p1.read()) + sc_biguint<10>(tmp_14_12_cast_fu_7640_p1.read()));
}

void sobel::thread_sum6_neg_13_fu_8061_p2() {
    sum6_neg_13_fu_8061_p2 = (!sum5_neg_13_cast_fu_8058_p1.read().is_01() || !tmp_14_13_cast_fu_8013_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_13_cast_fu_8058_p1.read()) + sc_biguint<10>(tmp_14_13_cast_fu_8013_p1.read()));
}

void sobel::thread_sum6_neg_14_fu_8434_p2() {
    sum6_neg_14_fu_8434_p2 = (!sum5_neg_14_cast_fu_8431_p1.read().is_01() || !tmp_14_14_cast_fu_8386_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_14_cast_fu_8431_p1.read()) + sc_biguint<10>(tmp_14_14_cast_fu_8386_p1.read()));
}

void sobel::thread_sum6_neg_15_fu_8807_p2() {
    sum6_neg_15_fu_8807_p2 = (!sum5_neg_15_cast_fu_8804_p1.read().is_01() || !tmp_14_15_cast_fu_8759_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_15_cast_fu_8804_p1.read()) + sc_biguint<10>(tmp_14_15_cast_fu_8759_p1.read()));
}

void sobel::thread_sum6_neg_16_fu_9180_p2() {
    sum6_neg_16_fu_9180_p2 = (!sum5_neg_16_cast_fu_9177_p1.read().is_01() || !tmp_14_16_cast_fu_9132_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_16_cast_fu_9177_p1.read()) + sc_biguint<10>(tmp_14_16_cast_fu_9132_p1.read()));
}

void sobel::thread_sum6_neg_17_fu_9553_p2() {
    sum6_neg_17_fu_9553_p2 = (!sum5_neg_17_cast_fu_9550_p1.read().is_01() || !tmp_14_17_cast_fu_9505_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_17_cast_fu_9550_p1.read()) + sc_biguint<10>(tmp_14_17_cast_fu_9505_p1.read()));
}

void sobel::thread_sum6_neg_18_fu_9926_p2() {
    sum6_neg_18_fu_9926_p2 = (!sum5_neg_18_cast_fu_9923_p1.read().is_01() || !tmp_14_18_cast_fu_9878_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_18_cast_fu_9923_p1.read()) + sc_biguint<10>(tmp_14_18_cast_fu_9878_p1.read()));
}

void sobel::thread_sum6_neg_19_fu_10299_p2() {
    sum6_neg_19_fu_10299_p2 = (!sum5_neg_19_cast_fu_10296_p1.read().is_01() || !tmp_14_19_cast_fu_10251_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_19_cast_fu_10296_p1.read()) + sc_biguint<10>(tmp_14_19_cast_fu_10251_p1.read()));
}

void sobel::thread_sum6_neg_1_fu_12963_p2() {
    sum6_neg_1_fu_12963_p2 = (!tmp_14_1_cast_fu_12915_p1.read().is_01() || !sum5_neg_1_cast_fu_12960_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_1_cast_fu_12915_p1.read()) + sc_bigint<10>(sum5_neg_1_cast_fu_12960_p1.read()));
}

void sobel::thread_sum6_neg_1_mid1_fu_3335_p2() {
    sum6_neg_1_mid1_fu_3335_p2 = (!tmp_14_1_cast_mid1_fu_3287_p1.read().is_01() || !sum5_neg_1_cast_mid1_fu_3332_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_1_cast_mid1_fu_3287_p1.read()) + sc_bigint<10>(sum5_neg_1_cast_mid1_fu_3332_p1.read()));
}

void sobel::thread_sum6_neg_20_fu_10672_p2() {
    sum6_neg_20_fu_10672_p2 = (!sum5_neg_20_cast_fu_10669_p1.read().is_01() || !tmp_14_20_cast_fu_10624_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_20_cast_fu_10669_p1.read()) + sc_biguint<10>(tmp_14_20_cast_fu_10624_p1.read()));
}

void sobel::thread_sum6_neg_21_fu_11045_p2() {
    sum6_neg_21_fu_11045_p2 = (!sum5_neg_21_cast_fu_11042_p1.read().is_01() || !tmp_14_21_cast_fu_10997_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_21_cast_fu_11042_p1.read()) + sc_biguint<10>(tmp_14_21_cast_fu_10997_p1.read()));
}

void sobel::thread_sum6_neg_22_fu_11471_p2() {
    sum6_neg_22_fu_11471_p2 = (!sum5_neg_22_cast_fu_11468_p1.read().is_01() || !tmp_14_22_cast_fu_11423_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_22_cast_fu_11468_p1.read()) + sc_biguint<10>(tmp_14_22_cast_fu_11423_p1.read()));
}

void sobel::thread_sum6_neg_23_fu_11835_p2() {
    sum6_neg_23_fu_11835_p2 = (!sum5_neg_23_cast_fu_11832_p1.read().is_01() || !tmp_14_23_cast_fu_11787_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_23_cast_fu_11832_p1.read()) + sc_biguint<10>(tmp_14_23_cast_fu_11787_p1.read()));
}

void sobel::thread_sum6_neg_24_fu_12217_p2() {
    sum6_neg_24_fu_12217_p2 = (!sum5_neg_24_cast_fu_12214_p1.read().is_01() || !tmp_14_24_cast_fu_12169_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_24_cast_fu_12214_p1.read()) + sc_biguint<10>(tmp_14_24_cast_fu_12169_p1.read()));
}

void sobel::thread_sum6_neg_25_fu_1009_p2() {
    sum6_neg_25_fu_1009_p2 = (!tmp_14_1_cast1_fu_961_p1.read().is_01() || !sum5_neg_1_cast1_fu_1006_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_1_cast1_fu_961_p1.read()) + sc_bigint<10>(sum5_neg_1_cast1_fu_1006_p1.read()));
}

void sobel::thread_sum6_neg_26_fu_1197_p2() {
    sum6_neg_26_fu_1197_p2 = (!tmp_14_2_cast1_fu_1149_p1.read().is_01() || !sum5_neg_2_cast1_fu_1194_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_2_cast1_fu_1149_p1.read()) + sc_bigint<10>(sum5_neg_2_cast1_fu_1194_p1.read()));
}

void sobel::thread_sum6_neg_27_fu_1385_p2() {
    sum6_neg_27_fu_1385_p2 = (!tmp_14_3_cast1_fu_1337_p1.read().is_01() || !sum5_neg_3_cast1_fu_1382_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_3_cast1_fu_1337_p1.read()) + sc_bigint<10>(sum5_neg_3_cast1_fu_1382_p1.read()));
}

void sobel::thread_sum6_neg_28_fu_1573_p2() {
    sum6_neg_28_fu_1573_p2 = (!tmp_14_4_cast1_fu_1525_p1.read().is_01() || !sum5_neg_4_cast1_fu_1570_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_4_cast1_fu_1525_p1.read()) + sc_bigint<10>(sum5_neg_4_cast1_fu_1570_p1.read()));
}

void sobel::thread_sum6_neg_29_fu_1761_p2() {
    sum6_neg_29_fu_1761_p2 = (!tmp_14_5_cast1_fu_1713_p1.read().is_01() || !sum5_neg_5_cast1_fu_1758_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_5_cast1_fu_1713_p1.read()) + sc_bigint<10>(sum5_neg_5_cast1_fu_1758_p1.read()));
}

void sobel::thread_sum6_neg_2_fu_13336_p2() {
    sum6_neg_2_fu_13336_p2 = (!tmp_14_2_cast_fu_13288_p1.read().is_01() || !sum5_neg_2_cast_fu_13333_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_2_cast_fu_13288_p1.read()) + sc_bigint<10>(sum5_neg_2_cast_fu_13333_p1.read()));
}

void sobel::thread_sum6_neg_2_mid1_fu_3694_p2() {
    sum6_neg_2_mid1_fu_3694_p2 = (!tmp_14_2_cast_mid1_fu_3646_p1.read().is_01() || !sum5_neg_2_cast_mid1_fu_3691_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_2_cast_mid1_fu_3646_p1.read()) + sc_bigint<10>(sum5_neg_2_cast_mid1_fu_3691_p1.read()));
}

void sobel::thread_sum6_neg_30_fu_1970_p2() {
    sum6_neg_30_fu_1970_p2 = (!tmp_14_6_cast1_fu_1922_p1.read().is_01() || !sum5_neg_6_cast1_fu_1967_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_6_cast1_fu_1922_p1.read()) + sc_bigint<10>(sum5_neg_6_cast1_fu_1967_p1.read()));
}

void sobel::thread_sum6_neg_31_fu_2146_p2() {
    sum6_neg_31_fu_2146_p2 = (!tmp_14_7_cast1_fu_2098_p1.read().is_01() || !sum5_neg_7_cast1_fu_2143_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_7_cast1_fu_2098_p1.read()) + sc_bigint<10>(sum5_neg_7_cast1_fu_2143_p1.read()));
}

void sobel::thread_sum6_neg_3_fu_13709_p2() {
    sum6_neg_3_fu_13709_p2 = (!tmp_14_3_cast_fu_13661_p1.read().is_01() || !sum5_neg_3_cast_fu_13706_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_3_cast_fu_13661_p1.read()) + sc_bigint<10>(sum5_neg_3_cast_fu_13706_p1.read()));
}

void sobel::thread_sum6_neg_3_mid1_fu_4029_p2() {
    sum6_neg_3_mid1_fu_4029_p2 = (!tmp_14_3_cast_mid1_fu_3981_p1.read().is_01() || !sum5_neg_3_cast_mid1_fu_4026_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_3_cast_mid1_fu_3981_p1.read()) + sc_bigint<10>(sum5_neg_3_cast_mid1_fu_4026_p1.read()));
}

void sobel::thread_sum6_neg_4_fu_14082_p2() {
    sum6_neg_4_fu_14082_p2 = (!tmp_14_4_cast_fu_14034_p1.read().is_01() || !sum5_neg_4_cast_fu_14079_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_4_cast_fu_14034_p1.read()) + sc_bigint<10>(sum5_neg_4_cast_fu_14079_p1.read()));
}

void sobel::thread_sum6_neg_4_mid1_fu_4438_p2() {
    sum6_neg_4_mid1_fu_4438_p2 = (!tmp_14_4_cast_mid1_fu_4390_p1.read().is_01() || !sum5_neg_4_cast_mid1_fu_4435_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_4_cast_mid1_fu_4390_p1.read()) + sc_bigint<10>(sum5_neg_4_cast_mid1_fu_4435_p1.read()));
}

void sobel::thread_sum6_neg_5_fu_14713_p2() {
    sum6_neg_5_fu_14713_p2 = (!tmp_14_5_cast_fu_14665_p1.read().is_01() || !sum5_neg_5_cast_fu_14710_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_5_cast_fu_14665_p1.read()) + sc_bigint<10>(sum5_neg_5_cast_fu_14710_p1.read()));
}

void sobel::thread_sum6_neg_5_mid1_fu_4752_p2() {
    sum6_neg_5_mid1_fu_4752_p2 = (!tmp_14_5_cast_mid1_fu_4704_p1.read().is_01() || !sum5_neg_5_cast_mid1_fu_4749_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_5_cast_mid1_fu_4704_p1.read()) + sc_bigint<10>(sum5_neg_5_cast_mid1_fu_4749_p1.read()));
}

void sobel::thread_sum6_neg_6_fu_14878_p2() {
    sum6_neg_6_fu_14878_p2 = (!tmp_14_6_cast_fu_14830_p1.read().is_01() || !sum5_neg_6_cast_fu_14875_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_6_cast_fu_14830_p1.read()) + sc_bigint<10>(sum5_neg_6_cast_fu_14875_p1.read()));
}

void sobel::thread_sum6_neg_6_mid1_fu_5122_p2() {
    sum6_neg_6_mid1_fu_5122_p2 = (!tmp_14_6_cast_mid1_fu_5074_p1.read().is_01() || !sum5_neg_6_cast_mid1_fu_5119_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_6_cast_mid1_fu_5074_p1.read()) + sc_bigint<10>(sum5_neg_6_cast_mid1_fu_5119_p1.read()));
}

void sobel::thread_sum6_neg_7_fu_15043_p2() {
    sum6_neg_7_fu_15043_p2 = (!tmp_14_7_cast_fu_14995_p1.read().is_01() || !sum5_neg_7_cast_fu_15040_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_7_cast_fu_14995_p1.read()) + sc_bigint<10>(sum5_neg_7_cast_fu_15040_p1.read()));
}

void sobel::thread_sum6_neg_7_mid1_fu_5450_p2() {
    sum6_neg_7_mid1_fu_5450_p2 = (!tmp_14_7_cast_mid1_fu_5402_p1.read().is_01() || !sum5_neg_7_cast_mid1_fu_5447_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_7_cast_mid1_fu_5402_p1.read()) + sc_bigint<10>(sum5_neg_7_cast_mid1_fu_5447_p1.read()));
}

void sobel::thread_sum6_neg_8_fu_5823_p2() {
    sum6_neg_8_fu_5823_p2 = (!sum5_neg_8_cast_fu_5820_p1.read().is_01() || !tmp_14_8_cast_fu_5775_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_8_cast_fu_5820_p1.read()) + sc_biguint<10>(tmp_14_8_cast_fu_5775_p1.read()));
}

void sobel::thread_sum6_neg_9_fu_6196_p2() {
    sum6_neg_9_fu_6196_p2 = (!sum5_neg_9_cast_fu_6193_p1.read().is_01() || !tmp_14_9_cast_fu_6148_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_9_cast_fu_6193_p1.read()) + sc_biguint<10>(tmp_14_9_cast_fu_6148_p1.read()));
}

void sobel::thread_sum6_neg_fu_12590_p2() {
    sum6_neg_fu_12590_p2 = (!tmp_14_cast_23_fu_12542_p1.read().is_01() || !sum5_neg_cast_29_fu_12587_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_cast_23_fu_12542_p1.read()) + sc_bigint<10>(sum5_neg_cast_29_fu_12587_p1.read()));
}

void sobel::thread_sum6_neg_mid1_fu_2937_p2() {
    sum6_neg_mid1_fu_2937_p2 = (!tmp_14_cast_mid1_fu_2889_p1.read().is_01() || !sum5_neg_cast_mid1_fu_2934_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_14_cast_mid1_fu_2889_p1.read()) + sc_bigint<10>(sum5_neg_cast_mid1_fu_2934_p1.read()));
}

void sobel::thread_sum6_neg_s_fu_6569_p2() {
    sum6_neg_s_fu_6569_p2 = (!sum5_neg_cast_fu_6566_p1.read().is_01() || !tmp_14_cast_fu_6521_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sum5_neg_cast_fu_6566_p1.read()) + sc_biguint<10>(tmp_14_cast_fu_6521_p1.read()));
}

void sobel::thread_sum6_s_fu_6015_p2() {
    sum6_s_fu_6015_p2 = (!ap_const_lv21_3FF.is_01() || !tmp_6_cast_reg_17678.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_3FF) + sc_biguint<21>(tmp_6_cast_reg_17678.read()));
}

void sobel::thread_sum8_10_cast_fu_6414_p1() {
    sum8_10_cast_fu_6414_p1 = esl_sext<32,21>(sum8_10_fu_6409_p2.read());
}

void sobel::thread_sum8_10_fu_6409_p2() {
    sum8_10_fu_6409_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_10_cast_reg_17802.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_10_cast_reg_17802.read()));
}

void sobel::thread_sum8_11_cast_fu_6787_p1() {
    sum8_11_cast_fu_6787_p1 = esl_sext<32,21>(sum8_11_fu_6782_p2.read());
}

void sobel::thread_sum8_11_fu_6782_p2() {
    sum8_11_fu_6782_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_11_cast_reg_17916.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_11_cast_reg_17916.read()));
}

void sobel::thread_sum8_12_cast_fu_7156_p1() {
    sum8_12_cast_fu_7156_p1 = esl_sext<32,21>(sum8_12_fu_7151_p2.read());
}

void sobel::thread_sum8_12_fu_7151_p2() {
    sum8_12_fu_7151_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_12_cast_reg_18035.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_12_cast_reg_18035.read()));
}

void sobel::thread_sum8_13_cast_fu_7533_p1() {
    sum8_13_cast_fu_7533_p1 = esl_sext<32,21>(sum8_13_fu_7528_p2.read());
}

void sobel::thread_sum8_13_fu_7528_p2() {
    sum8_13_fu_7528_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_13_cast_reg_18174.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_13_cast_reg_18174.read()));
}

void sobel::thread_sum8_14_cast_fu_7906_p1() {
    sum8_14_cast_fu_7906_p1 = esl_sext<32,21>(sum8_14_fu_7901_p2.read());
}

void sobel::thread_sum8_14_fu_7901_p2() {
    sum8_14_fu_7901_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_14_cast_reg_18298.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_14_cast_reg_18298.read()));
}

void sobel::thread_sum8_15_cast_fu_8279_p1() {
    sum8_15_cast_fu_8279_p1 = esl_sext<32,21>(sum8_15_fu_8274_p2.read());
}

void sobel::thread_sum8_15_fu_8274_p2() {
    sum8_15_fu_8274_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_15_cast_reg_18422.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_15_cast_reg_18422.read()));
}

void sobel::thread_sum8_16_cast_fu_8648_p1() {
    sum8_16_cast_fu_8648_p1 = esl_sext<32,21>(sum8_16_fu_8643_p2.read());
}

void sobel::thread_sum8_16_fu_8643_p2() {
    sum8_16_fu_8643_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_16_cast_reg_18541.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_16_cast_reg_18541.read()));
}

void sobel::thread_sum8_17_cast_fu_9021_p1() {
    sum8_17_cast_fu_9021_p1 = esl_sext<32,21>(sum8_17_fu_9016_p2.read());
}

void sobel::thread_sum8_17_fu_9016_p2() {
    sum8_17_fu_9016_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_17_cast_reg_18655.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_17_cast_reg_18655.read()));
}

void sobel::thread_sum8_18_cast_fu_9398_p1() {
    sum8_18_cast_fu_9398_p1 = esl_sext<32,21>(sum8_18_fu_9393_p2.read());
}

void sobel::thread_sum8_18_fu_9393_p2() {
    sum8_18_fu_9393_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_18_cast_reg_18794.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_18_cast_reg_18794.read()));
}

void sobel::thread_sum8_19_cast_fu_9767_p1() {
    sum8_19_cast_fu_9767_p1 = esl_sext<32,21>(sum8_19_fu_9762_p2.read());
}

void sobel::thread_sum8_19_fu_9762_p2() {
    sum8_19_fu_9762_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_19_cast_reg_18913.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_19_cast_reg_18913.read()));
}

void sobel::thread_sum8_1_cast_fu_12431_p1() {
    sum8_1_cast_fu_12431_p1 = esl_sext<32,21>(sum8_1_fu_12426_p2.read());
}

void sobel::thread_sum8_1_cast_mid1_fu_2761_p1() {
    sum8_1_cast_mid1_fu_2761_p1 = esl_sext<32,21>(sum8_1_mid1_fu_2756_p2.read());
}

void sobel::thread_sum8_1_fu_12426_p2() {
    sum8_1_fu_12426_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_1_cast_reg_19834.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_1_cast_reg_19834.read()));
}

void sobel::thread_sum8_1_mid1_fu_2756_p2() {
    sum8_1_mid1_fu_2756_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_1_cast_mid1_reg_16700.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_1_cast_mid1_reg_16700.read()));
}

void sobel::thread_sum8_20_cast_fu_10140_p1() {
    sum8_20_cast_fu_10140_p1 = esl_sext<32,21>(sum8_20_fu_10135_p2.read());
}

void sobel::thread_sum8_20_fu_10135_p2() {
    sum8_20_fu_10135_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_20_cast_reg_19037.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_20_cast_reg_19037.read()));
}

void sobel::thread_sum8_21_cast_fu_10513_p1() {
    sum8_21_cast_fu_10513_p1 = esl_sext<32,21>(sum8_21_fu_10508_p2.read());
}

void sobel::thread_sum8_21_fu_10508_p2() {
    sum8_21_fu_10508_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_21_cast_reg_19151.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_21_cast_reg_19151.read()));
}

void sobel::thread_sum8_22_cast_fu_10890_p1() {
    sum8_22_cast_fu_10890_p1 = esl_sext<32,21>(sum8_22_fu_10885_p2.read());
}

void sobel::thread_sum8_22_fu_10885_p2() {
    sum8_22_fu_10885_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_22_cast_reg_19280.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_22_cast_reg_19280.read()));
}

void sobel::thread_sum8_23_cast_fu_11340_p1() {
    sum8_23_cast_fu_11340_p1 = esl_sext<32,21>(sum8_23_fu_11335_p2.read());
}

void sobel::thread_sum8_23_fu_11335_p2() {
    sum8_23_fu_11335_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_23_cast_reg_19414.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_23_cast_reg_19414.read()));
}

void sobel::thread_sum8_24_cast_fu_11704_p1() {
    sum8_24_cast_fu_11704_p1 = esl_sext<32,21>(sum8_24_fu_11699_p2.read());
}

void sobel::thread_sum8_24_fu_11699_p2() {
    sum8_24_fu_11699_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_24_cast_reg_19552.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_24_cast_reg_19552.read()));
}

void sobel::thread_sum8_2_cast_fu_12808_p1() {
    sum8_2_cast_fu_12808_p1 = esl_sext<32,21>(sum8_2_fu_12803_p2.read());
}

void sobel::thread_sum8_2_cast_mid1_fu_3141_p1() {
    sum8_2_cast_mid1_fu_3141_p1 = esl_sext<32,21>(sum8_2_mid1_fu_3136_p2.read());
}

void sobel::thread_sum8_2_fu_12803_p2() {
    sum8_2_fu_12803_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_2_cast_reg_19973.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_2_cast_reg_19973.read()));
}

void sobel::thread_sum8_2_mid1_fu_3136_p2() {
    sum8_2_mid1_fu_3136_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_2_cast_mid1_reg_16790.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_2_cast_mid1_reg_16790.read()));
}

void sobel::thread_sum8_3_cast_fu_13177_p1() {
    sum8_3_cast_fu_13177_p1 = esl_sext<32,21>(sum8_3_fu_13172_p2.read());
}

void sobel::thread_sum8_3_cast_mid1_fu_3514_p1() {
    sum8_3_cast_mid1_fu_3514_p1 = esl_sext<32,21>(sum8_3_mid1_fu_3509_p2.read());
}

void sobel::thread_sum8_3_fu_13172_p2() {
    sum8_3_fu_13172_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_3_cast_reg_20092.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_3_cast_reg_20092.read()));
}

void sobel::thread_sum8_3_mid1_fu_3509_p2() {
    sum8_3_mid1_fu_3509_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_3_cast_mid1_reg_16897.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_3_cast_mid1_reg_16897.read()));
}

void sobel::thread_sum8_4_cast_fu_13554_p1() {
    sum8_4_cast_fu_13554_p1 = esl_sext<32,21>(sum8_4_fu_13549_p2.read());
}

void sobel::thread_sum8_4_cast_mid1_fu_3898_p1() {
    sum8_4_cast_mid1_fu_3898_p1 = esl_sext<32,21>(sum8_4_mid1_fu_3893_p2.read());
}

void sobel::thread_sum8_4_fu_13549_p2() {
    sum8_4_fu_13549_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_4_cast_reg_20221.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_4_cast_reg_20221.read()));
}

void sobel::thread_sum8_4_mid1_fu_3893_p2() {
    sum8_4_mid1_fu_3893_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_4_cast_mid1_reg_17002.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_4_cast_mid1_reg_17002.read()));
}

void sobel::thread_sum8_5_cast_fu_13927_p1() {
    sum8_5_cast_fu_13927_p1 = esl_sext<32,21>(sum8_5_fu_13922_p2.read());
}

void sobel::thread_sum8_5_cast_mid1_fu_4212_p1() {
    sum8_5_cast_mid1_fu_4212_p1 = esl_sext<32,21>(sum8_5_mid1_fu_4207_p2.read());
}

void sobel::thread_sum8_5_fu_13922_p2() {
    sum8_5_fu_13922_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_5_cast_reg_20345.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_5_cast_reg_20345.read()));
}

void sobel::thread_sum8_5_mid1_fu_4207_p2() {
    sum8_5_mid1_fu_4207_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_5_cast_mid1_reg_17096.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_5_cast_mid1_reg_17096.read()));
}

void sobel::thread_sum8_6_cast_fu_14281_p1() {
    sum8_6_cast_fu_14281_p1 = esl_sext<32,21>(sum8_6_fu_14275_p2.read());
}

void sobel::thread_sum8_6_cast_mid1_fu_4621_p1() {
    sum8_6_cast_mid1_fu_4621_p1 = esl_sext<32,21>(sum8_6_mid1_fu_4616_p2.read());
}

void sobel::thread_sum8_6_fu_14275_p2() {
    sum8_6_fu_14275_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_6_cast_fu_14206_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_6_cast_fu_14206_p1.read()));
}

void sobel::thread_sum8_6_mid1_fu_4616_p2() {
    sum8_6_mid1_fu_4616_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_6_cast_mid1_reg_17208.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_6_cast_mid1_reg_17208.read()));
}

void sobel::thread_sum8_7_cast_fu_14487_p1() {
    sum8_7_cast_fu_14487_p1 = esl_sext<32,21>(sum8_7_fu_14481_p2.read());
}

void sobel::thread_sum8_7_cast_mid1_fu_4987_p1() {
    sum8_7_cast_mid1_fu_4987_p1 = esl_sext<32,21>(sum8_7_mid1_fu_4982_p2.read());
}

void sobel::thread_sum8_7_fu_14481_p2() {
    sum8_7_fu_14481_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_7_cast_fu_14412_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_7_cast_fu_14412_p1.read()));
}

void sobel::thread_sum8_7_mid1_fu_4982_p2() {
    sum8_7_mid1_fu_4982_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_7_cast_mid1_reg_17313.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_7_cast_mid1_reg_17313.read()));
}

void sobel::thread_sum8_8_cast_fu_5287_p1() {
    sum8_8_cast_fu_5287_p1 = esl_sext<32,21>(sum8_8_fu_5282_p2.read());
}

void sobel::thread_sum8_8_fu_5282_p2() {
    sum8_8_fu_5282_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_8_cast_reg_17394.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_8_cast_reg_17394.read()));
}

void sobel::thread_sum8_9_cast_fu_5668_p1() {
    sum8_9_cast_fu_5668_p1 = esl_sext<32,21>(sum8_9_fu_5663_p2.read());
}

void sobel::thread_sum8_9_fu_5663_p2() {
    sum8_9_fu_5663_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_9_cast_reg_17554.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_9_cast_reg_17554.read()));
}

void sobel::thread_sum8_cast_22_fu_12022_p1() {
    sum8_cast_22_fu_12022_p1 = esl_sext<32,21>(sum8_fu_12017_p2.read());
}

void sobel::thread_sum8_cast_fu_6041_p1() {
    sum8_cast_fu_6041_p1 = esl_sext<32,21>(sum8_s_fu_6036_p2.read());
}

void sobel::thread_sum8_cast_mid1_fu_2464_p1() {
    sum8_cast_mid1_fu_2464_p1 = esl_sext<32,21>(sum8_mid1_fu_2459_p2.read());
}

void sobel::thread_sum8_fu_12017_p2() {
    sum8_fu_12017_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_cast_15_reg_19660.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_cast_15_reg_19660.read()));
}

void sobel::thread_sum8_mid1_fu_2459_p2() {
    sum8_mid1_fu_2459_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_cast_mid1_reg_16454.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_cast_mid1_reg_16454.read()));
}

void sobel::thread_sum8_s_fu_6036_p2() {
    sum8_s_fu_6036_p2 = (!ap_const_lv21_1FFC01.is_01() || !tmp_6_cast_reg_17678.read().is_01())? sc_lv<21>(): (sc_bigint<21>(ap_const_lv21_1FFC01) + sc_biguint<21>(tmp_6_cast_reg_17678.read()));
}

void sobel::thread_sum_fu_724_p2() {
    sum_fu_724_p2 = (!tmp_10_cast1_fu_706_p1.read().is_01() || !tmp1_cast1_fu_720_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_10_cast1_fu_706_p1.read()) + sc_biguint<10>(tmp1_cast1_fu_720_p1.read()));
}

void sobel::thread_tmp10_cast1_fu_1560_p1() {
    tmp10_cast1_fu_1560_p1 = esl_zext<11,10>(tmp143_fu_1554_p2.read());
}

void sobel::thread_tmp10_cast_fu_14069_p1() {
    tmp10_cast_fu_14069_p1 = esl_zext<11,10>(tmp_fu_14063_p2.read());
}

void sobel::thread_tmp10_cast_mid1_fu_4425_p1() {
    tmp10_cast_mid1_fu_4425_p1 = esl_zext<11,10>(tmp10_mid1_fu_4419_p2.read());
}

void sobel::thread_tmp10_fu_14639_p2() {
    tmp10_fu_14639_p2 = (!tmp_12_5_cast_fu_14635_p1.read().is_01() || !tmp_8_5_cast_fu_14619_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_5_cast_fu_14635_p1.read()) + sc_biguint<9>(tmp_8_5_cast_fu_14619_p1.read()));
}

void sobel::thread_tmp10_mid1_fu_4419_p2() {
    tmp10_mid1_fu_4419_p2 = (!tmp_20_4_cast_mid1_fu_4406_p1.read().is_01() || !tmp_18_4_cast_mid1_fu_4402_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_4_cast_mid1_fu_4406_p1.read()) + sc_biguint<10>(tmp_18_4_cast_mid1_fu_4402_p1.read()));
}

void sobel::thread_tmp11_cast1_fu_1660_p1() {
    tmp11_cast1_fu_1660_p1 = esl_zext<10,9>(tmp146_fu_1654_p2.read());
}

void sobel::thread_tmp11_cast_fu_14645_p1() {
    tmp11_cast_fu_14645_p1 = esl_zext<10,9>(tmp10_fu_14639_p2.read());
}

void sobel::thread_tmp11_cast_mid1_fu_4684_p1() {
    tmp11_cast_mid1_fu_4684_p1 = esl_zext<10,9>(tmp11_mid1_fu_4678_p2.read());
}

void sobel::thread_tmp11_fu_14698_p2() {
    tmp11_fu_14698_p2 = (!tmp_20_5_fu_14681_p1.read().is_01() || !tmp_21_5_fu_14692_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_5_fu_14681_p1.read()) + sc_biguint<11>(tmp_21_5_fu_14692_p2.read()));
}

void sobel::thread_tmp11_mid1_fu_4678_p2() {
    tmp11_mid1_fu_4678_p2 = (!tmp_12_5_cast_mid1_fu_4674_p1.read().is_01() || !tmp_8_5_cast_mid1_fu_4658_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_5_cast_mid1_fu_4674_p1.read()) + sc_biguint<9>(tmp_8_5_cast_mid1_fu_4658_p1.read()));
}

void sobel::thread_tmp12_fu_14804_p2() {
    tmp12_fu_14804_p2 = (!tmp_12_6_cast_fu_14800_p1.read().is_01() || !tmp_8_6_cast_fu_14784_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_6_cast_fu_14800_p1.read()) + sc_biguint<9>(tmp_8_6_cast_fu_14784_p1.read()));
}

void sobel::thread_tmp12_mid1_fu_4737_p2() {
    tmp12_mid1_fu_4737_p2 = (!tmp_20_5_mid1_fu_4720_p1.read().is_01() || !tmp_21_5_mid1_fu_4731_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_5_mid1_fu_4720_p1.read()) + sc_biguint<11>(tmp_21_5_mid1_fu_4731_p2.read()));
}

void sobel::thread_tmp130_fu_902_p2() {
    tmp130_fu_902_p2 = (!tmp_12_1_cast1_fu_898_p1.read().is_01() || !tmp_8_1_cast1_fu_882_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_1_cast1_fu_898_p1.read()) + sc_biguint<9>(tmp_8_1_cast1_fu_882_p1.read()));
}

void sobel::thread_tmp131_fu_994_p2() {
    tmp131_fu_994_p2 = (!tmp_20_14_fu_977_p1.read().is_01() || !tmp_21_25_fu_988_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_14_fu_977_p1.read()) + sc_biguint<11>(tmp_21_25_fu_988_p2.read()));
}

void sobel::thread_tmp134_fu_1090_p2() {
    tmp134_fu_1090_p2 = (!tmp_12_2_cast1_fu_1086_p1.read().is_01() || !tmp_8_2_cast1_fu_1070_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_2_cast1_fu_1086_p1.read()) + sc_biguint<9>(tmp_8_2_cast1_fu_1070_p1.read()));
}

void sobel::thread_tmp135_fu_1178_p2() {
    tmp135_fu_1178_p2 = (!tmp_20_2_cast1_fu_1165_p1.read().is_01() || !tmp_18_2_cast1_fu_1161_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_2_cast1_fu_1165_p1.read()) + sc_biguint<10>(tmp_18_2_cast1_fu_1161_p1.read()));
}

void sobel::thread_tmp138_fu_1278_p2() {
    tmp138_fu_1278_p2 = (!tmp_12_3_cast1_fu_1274_p1.read().is_01() || !tmp_8_3_cast1_fu_1258_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_3_cast1_fu_1274_p1.read()) + sc_biguint<9>(tmp_8_3_cast1_fu_1258_p1.read()));
}

void sobel::thread_tmp139_fu_1366_p2() {
    tmp139_fu_1366_p2 = (!tmp_20_3_cast1_fu_1353_p1.read().is_01() || !tmp_18_3_cast1_fu_1349_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_3_cast1_fu_1353_p1.read()) + sc_biguint<10>(tmp_18_3_cast1_fu_1349_p1.read()));
}

void sobel::thread_tmp13_cast1_fu_1869_p1() {
    tmp13_cast1_fu_1869_p1 = esl_zext<10,9>(tmp150_fu_1863_p2.read());
}

void sobel::thread_tmp13_cast_fu_14810_p1() {
    tmp13_cast_fu_14810_p1 = esl_zext<10,9>(tmp12_fu_14804_p2.read());
}

void sobel::thread_tmp13_cast_mid1_fu_5054_p1() {
    tmp13_cast_mid1_fu_5054_p1 = esl_zext<10,9>(tmp13_mid1_fu_5048_p2.read());
}

void sobel::thread_tmp13_fu_14863_p2() {
    tmp13_fu_14863_p2 = (!tmp_20_6_fu_14846_p1.read().is_01() || !tmp_21_6_fu_14857_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_6_fu_14846_p1.read()) + sc_biguint<11>(tmp_21_6_fu_14857_p2.read()));
}

void sobel::thread_tmp13_mid1_fu_5048_p2() {
    tmp13_mid1_fu_5048_p2 = (!tmp_12_6_cast_mid1_fu_5044_p1.read().is_01() || !tmp_8_6_cast_mid1_fu_5028_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_6_cast_mid1_fu_5044_p1.read()) + sc_biguint<9>(tmp_8_6_cast_mid1_fu_5028_p1.read()));
}

void sobel::thread_tmp142_fu_1466_p2() {
    tmp142_fu_1466_p2 = (!tmp_12_4_cast1_fu_1462_p1.read().is_01() || !tmp_8_4_cast1_fu_1446_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_4_cast1_fu_1462_p1.read()) + sc_biguint<9>(tmp_8_4_cast1_fu_1446_p1.read()));
}

void sobel::thread_tmp143_fu_1554_p2() {
    tmp143_fu_1554_p2 = (!tmp_20_4_cast1_fu_1541_p1.read().is_01() || !tmp_18_4_cast1_fu_1537_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_4_cast1_fu_1541_p1.read()) + sc_biguint<10>(tmp_18_4_cast1_fu_1537_p1.read()));
}

void sobel::thread_tmp146_fu_1654_p2() {
    tmp146_fu_1654_p2 = (!tmp_12_5_cast1_fu_1650_p1.read().is_01() || !tmp_8_5_cast1_fu_1634_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_5_cast1_fu_1650_p1.read()) + sc_biguint<9>(tmp_8_5_cast1_fu_1634_p1.read()));
}

void sobel::thread_tmp147_fu_1746_p2() {
    tmp147_fu_1746_p2 = (!tmp_20_15_fu_1729_p1.read().is_01() || !tmp_21_29_fu_1740_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_15_fu_1729_p1.read()) + sc_biguint<11>(tmp_21_29_fu_1740_p2.read()));
}

void sobel::thread_tmp14_fu_14969_p2() {
    tmp14_fu_14969_p2 = (!tmp_12_7_cast_fu_14965_p1.read().is_01() || !tmp_8_7_cast_fu_14949_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_7_cast_fu_14965_p1.read()) + sc_biguint<9>(tmp_8_7_cast_fu_14949_p1.read()));
}

void sobel::thread_tmp14_mid1_fu_5107_p2() {
    tmp14_mid1_fu_5107_p2 = (!tmp_20_6_mid1_fu_5090_p1.read().is_01() || !tmp_21_6_mid1_fu_5101_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_6_mid1_fu_5090_p1.read()) + sc_biguint<11>(tmp_21_6_mid1_fu_5101_p2.read()));
}

void sobel::thread_tmp150_fu_1863_p2() {
    tmp150_fu_1863_p2 = (!tmp_12_6_cast1_fu_1859_p1.read().is_01() || !tmp_8_6_cast1_fu_1843_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_6_cast1_fu_1859_p1.read()) + sc_biguint<9>(tmp_8_6_cast1_fu_1843_p1.read()));
}

void sobel::thread_tmp151_fu_1955_p2() {
    tmp151_fu_1955_p2 = (!tmp_20_16_fu_1938_p1.read().is_01() || !tmp_21_30_fu_1949_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_16_fu_1938_p1.read()) + sc_biguint<11>(tmp_21_30_fu_1949_p2.read()));
}

void sobel::thread_tmp154_fu_2072_p2() {
    tmp154_fu_2072_p2 = (!tmp_12_7_cast1_fu_2068_p1.read().is_01() || !tmp_8_7_cast1_fu_2052_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_7_cast1_fu_2068_p1.read()) + sc_biguint<9>(tmp_8_7_cast1_fu_2052_p1.read()));
}

void sobel::thread_tmp155_fu_2127_p2() {
    tmp155_fu_2127_p2 = (!tmp_20_7_cast1_fu_2114_p1.read().is_01() || !tmp_18_7_cast1_fu_2110_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_7_cast1_fu_2114_p1.read()) + sc_biguint<10>(tmp_18_7_cast1_fu_2110_p1.read()));
}

void sobel::thread_tmp15_cast1_fu_2078_p1() {
    tmp15_cast1_fu_2078_p1 = esl_zext<10,9>(tmp154_fu_2072_p2.read());
}

void sobel::thread_tmp15_cast_fu_14975_p1() {
    tmp15_cast_fu_14975_p1 = esl_zext<10,9>(tmp14_fu_14969_p2.read());
}

void sobel::thread_tmp15_cast_mid1_fu_5354_p1() {
    tmp15_cast_mid1_fu_5354_p1 = esl_zext<10,9>(tmp15_mid1_fu_5348_p2.read());
}

void sobel::thread_tmp15_fu_15024_p2() {
    tmp15_fu_15024_p2 = (!tmp_20_7_cast_fu_15011_p1.read().is_01() || !tmp_18_7_cast_fu_15007_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_7_cast_fu_15011_p1.read()) + sc_biguint<10>(tmp_18_7_cast_fu_15007_p1.read()));
}

void sobel::thread_tmp15_mid1_fu_5348_p2() {
    tmp15_mid1_fu_5348_p2 = (!tmp_12_7_cast_mid1_fu_5344_p1.read().is_01() || !tmp_8_7_cast_mid1_fu_5328_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_7_cast_mid1_fu_5344_p1.read()) + sc_biguint<9>(tmp_8_7_cast_mid1_fu_5328_p1.read()));
}

void sobel::thread_tmp16_cast1_fu_2133_p1() {
    tmp16_cast1_fu_2133_p1 = esl_zext<11,10>(tmp155_fu_2127_p2.read());
}

void sobel::thread_tmp16_cast_fu_15030_p1() {
    tmp16_cast_fu_15030_p1 = esl_zext<11,10>(tmp15_fu_15024_p2.read());
}

void sobel::thread_tmp16_cast_mid1_fu_5437_p1() {
    tmp16_cast_mid1_fu_5437_p1 = esl_zext<11,10>(tmp16_mid1_fu_5431_p2.read());
}

void sobel::thread_tmp16_fu_714_p2() {
    tmp16_fu_714_p2 = (!tmp_12_cast1_fu_710_p1.read().is_01() || !tmp_8_cast1_fu_694_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_cast1_fu_710_p1.read()) + sc_biguint<9>(tmp_8_cast1_fu_694_p1.read()));
}

void sobel::thread_tmp16_mid1_fu_5431_p2() {
    tmp16_mid1_fu_5431_p2 = (!tmp_20_7_cast_mid1_fu_5418_p1.read().is_01() || !tmp_18_7_cast_mid1_fu_5414_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_7_cast_mid1_fu_5418_p1.read()) + sc_biguint<10>(tmp_18_7_cast_mid1_fu_5414_p1.read()));
}

void sobel::thread_tmp17_cast_fu_5731_p1() {
    tmp17_cast_fu_5731_p1 = esl_zext<10,9>(tmp17_fu_5725_p2.read());
}

void sobel::thread_tmp17_fu_5725_p2() {
    tmp17_fu_5725_p2 = (!tmp_8_8_cast_fu_5705_p1.read().is_01() || !tmp_12_8_cast_fu_5721_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_8_cast_fu_5705_p1.read()) + sc_biguint<9>(tmp_12_8_cast_fu_5721_p1.read()));
}

void sobel::thread_tmp18_fu_5808_p2() {
    tmp18_fu_5808_p2 = (!tmp_21_8_fu_5802_p2.read().is_01() || !tmp_20_8_fu_5791_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_8_fu_5802_p2.read()) + sc_biguint<11>(tmp_20_8_fu_5791_p1.read()));
}

void sobel::thread_tmp19_cast_fu_6104_p1() {
    tmp19_cast_fu_6104_p1 = esl_zext<10,9>(tmp19_fu_6098_p2.read());
}

void sobel::thread_tmp19_fu_6098_p2() {
    tmp19_fu_6098_p2 = (!tmp_8_9_cast_fu_6078_p1.read().is_01() || !tmp_12_9_cast_fu_6094_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_9_cast_fu_6078_p1.read()) + sc_biguint<9>(tmp_12_9_cast_fu_6094_p1.read()));
}

void sobel::thread_tmp1_cast1_fu_720_p1() {
    tmp1_cast1_fu_720_p1 = esl_zext<10,9>(tmp16_fu_714_p2.read());
}

void sobel::thread_tmp1_cast_fu_12498_p1() {
    tmp1_cast_fu_12498_p1 = esl_zext<10,9>(tmp1_fu_12492_p2.read());
}

void sobel::thread_tmp1_cast_mid1_fu_2824_p1() {
    tmp1_cast_mid1_fu_2824_p1 = esl_zext<10,9>(tmp1_mid1_fu_2818_p2.read());
}

void sobel::thread_tmp1_fu_12492_p2() {
    tmp1_fu_12492_p2 = (!tmp_12_cast_21_fu_12488_p1.read().is_01() || !tmp_8_cast_17_fu_12472_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_cast_21_fu_12488_p1.read()) + sc_biguint<9>(tmp_8_cast_17_fu_12472_p1.read()));
}

void sobel::thread_tmp1_mid1_fu_2818_p2() {
    tmp1_mid1_fu_2818_p2 = (!tmp_12_cast_mid1_fu_2814_p1.read().is_01() || !tmp_8_cast_mid1_fu_2798_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_cast_mid1_fu_2814_p1.read()) + sc_biguint<9>(tmp_8_cast_mid1_fu_2798_p1.read()));
}

void sobel::thread_tmp20_fu_6181_p2() {
    tmp20_fu_6181_p2 = (!tmp_21_9_fu_6175_p2.read().is_01() || !tmp_20_9_fu_6164_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_9_fu_6175_p2.read()) + sc_biguint<11>(tmp_20_9_fu_6164_p1.read()));
}

void sobel::thread_tmp21_cast_fu_6477_p1() {
    tmp21_cast_fu_6477_p1 = esl_zext<10,9>(tmp21_fu_6471_p2.read());
}

void sobel::thread_tmp21_fu_6471_p2() {
    tmp21_fu_6471_p2 = (!tmp_8_cast_fu_6451_p1.read().is_01() || !tmp_12_cast_fu_6467_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_cast_fu_6451_p1.read()) + sc_biguint<9>(tmp_12_cast_fu_6467_p1.read()));
}

void sobel::thread_tmp22_fu_6554_p2() {
    tmp22_fu_6554_p2 = (!tmp_21_s_fu_6548_p2.read().is_01() || !tmp_20_s_fu_6537_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_s_fu_6548_p2.read()) + sc_biguint<11>(tmp_20_s_fu_6537_p1.read()));
}

void sobel::thread_tmp23_cast_fu_6850_p1() {
    tmp23_cast_fu_6850_p1 = esl_zext<10,9>(tmp23_fu_6844_p2.read());
}

void sobel::thread_tmp23_fu_6844_p2() {
    tmp23_fu_6844_p2 = (!tmp_8_10_cast_fu_6824_p1.read().is_01() || !tmp_12_10_cast_fu_6840_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_10_cast_fu_6824_p1.read()) + sc_biguint<9>(tmp_12_10_cast_fu_6840_p1.read()));
}

void sobel::thread_tmp24_cast_fu_6929_p1() {
    tmp24_cast_fu_6929_p1 = esl_zext<11,10>(tmp24_fu_6923_p2.read());
}

void sobel::thread_tmp24_fu_6923_p2() {
    tmp24_fu_6923_p2 = (!tmp_18_10_cast_fu_6906_p1.read().is_01() || !tmp_20_10_cast_fu_6910_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_10_cast_fu_6906_p1.read()) + sc_biguint<10>(tmp_20_10_cast_fu_6910_p1.read()));
}

void sobel::thread_tmp25_cast_fu_7223_p1() {
    tmp25_cast_fu_7223_p1 = esl_zext<10,9>(tmp25_fu_7217_p2.read());
}

void sobel::thread_tmp25_fu_7217_p2() {
    tmp25_fu_7217_p2 = (!tmp_8_11_cast_fu_7197_p1.read().is_01() || !tmp_12_11_cast_fu_7213_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_11_cast_fu_7197_p1.read()) + sc_biguint<9>(tmp_12_11_cast_fu_7213_p1.read()));
}

void sobel::thread_tmp26_fu_7300_p2() {
    tmp26_fu_7300_p2 = (!tmp_21_11_fu_7294_p2.read().is_01() || !tmp_20_2_fu_7283_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_11_fu_7294_p2.read()) + sc_biguint<11>(tmp_20_2_fu_7283_p1.read()));
}

void sobel::thread_tmp27_cast_fu_7596_p1() {
    tmp27_cast_fu_7596_p1 = esl_zext<10,9>(tmp27_fu_7590_p2.read());
}

void sobel::thread_tmp27_fu_7590_p2() {
    tmp27_fu_7590_p2 = (!tmp_8_12_cast_fu_7570_p1.read().is_01() || !tmp_12_12_cast_fu_7586_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_12_cast_fu_7570_p1.read()) + sc_biguint<9>(tmp_12_12_cast_fu_7586_p1.read()));
}

void sobel::thread_tmp28_fu_7673_p2() {
    tmp28_fu_7673_p2 = (!tmp_21_12_fu_7667_p2.read().is_01() || !tmp_20_3_fu_7656_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_12_fu_7667_p2.read()) + sc_biguint<11>(tmp_20_3_fu_7656_p1.read()));
}

void sobel::thread_tmp29_cast_fu_7969_p1() {
    tmp29_cast_fu_7969_p1 = esl_zext<10,9>(tmp29_fu_7963_p2.read());
}

void sobel::thread_tmp29_fu_7963_p2() {
    tmp29_fu_7963_p2 = (!tmp_8_13_cast_fu_7943_p1.read().is_01() || !tmp_12_13_cast_fu_7959_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_13_cast_fu_7943_p1.read()) + sc_biguint<9>(tmp_12_13_cast_fu_7959_p1.read()));
}

void sobel::thread_tmp2_cast1_fu_808_p1() {
    tmp2_cast1_fu_808_p1 = esl_zext<11,10>(tmp53_fu_802_p2.read());
}

void sobel::thread_tmp2_cast_fu_12577_p1() {
    tmp2_cast_fu_12577_p1 = esl_zext<11,10>(tmp2_fu_12571_p2.read());
}

void sobel::thread_tmp2_cast_mid1_fu_2924_p1() {
    tmp2_cast_mid1_fu_2924_p1 = esl_zext<11,10>(tmp2_mid1_fu_2918_p2.read());
}

void sobel::thread_tmp2_fu_12571_p2() {
    tmp2_fu_12571_p2 = (!tmp_20_cast_25_fu_12558_p1.read().is_01() || !tmp_18_cast_24_fu_12554_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_cast_25_fu_12558_p1.read()) + sc_biguint<10>(tmp_18_cast_24_fu_12554_p1.read()));
}

void sobel::thread_tmp2_mid1_fu_2918_p2() {
    tmp2_mid1_fu_2918_p2 = (!tmp_20_cast_mid1_fu_2905_p1.read().is_01() || !tmp_18_cast_mid1_fu_2901_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_cast_mid1_fu_2905_p1.read()) + sc_biguint<10>(tmp_18_cast_mid1_fu_2901_p1.read()));
}

void sobel::thread_tmp30_fu_8046_p2() {
    tmp30_fu_8046_p2 = (!tmp_21_13_fu_8040_p2.read().is_01() || !tmp_20_4_fu_8029_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_13_fu_8040_p2.read()) + sc_biguint<11>(tmp_20_4_fu_8029_p1.read()));
}

void sobel::thread_tmp31_cast_fu_8342_p1() {
    tmp31_cast_fu_8342_p1 = esl_zext<10,9>(tmp31_fu_8336_p2.read());
}

void sobel::thread_tmp31_fu_8336_p2() {
    tmp31_fu_8336_p2 = (!tmp_8_14_cast_fu_8316_p1.read().is_01() || !tmp_12_14_cast_fu_8332_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_14_cast_fu_8316_p1.read()) + sc_biguint<9>(tmp_12_14_cast_fu_8332_p1.read()));
}

void sobel::thread_tmp32_cast_fu_8421_p1() {
    tmp32_cast_fu_8421_p1 = esl_zext<11,10>(tmp32_fu_8415_p2.read());
}

void sobel::thread_tmp32_fu_8415_p2() {
    tmp32_fu_8415_p2 = (!tmp_18_14_cast_fu_8398_p1.read().is_01() || !tmp_20_14_cast_fu_8402_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_14_cast_fu_8398_p1.read()) + sc_biguint<10>(tmp_20_14_cast_fu_8402_p1.read()));
}

void sobel::thread_tmp33_cast_fu_8715_p1() {
    tmp33_cast_fu_8715_p1 = esl_zext<10,9>(tmp33_fu_8709_p2.read());
}

void sobel::thread_tmp33_fu_8709_p2() {
    tmp33_fu_8709_p2 = (!tmp_8_15_cast_fu_8689_p1.read().is_01() || !tmp_12_15_cast_fu_8705_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_15_cast_fu_8689_p1.read()) + sc_biguint<9>(tmp_12_15_cast_fu_8705_p1.read()));
}

void sobel::thread_tmp34_cast_fu_8794_p1() {
    tmp34_cast_fu_8794_p1 = esl_zext<11,10>(tmp34_fu_8788_p2.read());
}

void sobel::thread_tmp34_fu_8788_p2() {
    tmp34_fu_8788_p2 = (!tmp_18_15_cast_fu_8771_p1.read().is_01() || !tmp_20_15_cast_fu_8775_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_15_cast_fu_8771_p1.read()) + sc_biguint<10>(tmp_20_15_cast_fu_8775_p1.read()));
}

void sobel::thread_tmp35_cast_fu_9088_p1() {
    tmp35_cast_fu_9088_p1 = esl_zext<10,9>(tmp35_fu_9082_p2.read());
}

void sobel::thread_tmp35_fu_9082_p2() {
    tmp35_fu_9082_p2 = (!tmp_8_16_cast_fu_9062_p1.read().is_01() || !tmp_12_16_cast_fu_9078_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_16_cast_fu_9062_p1.read()) + sc_biguint<9>(tmp_12_16_cast_fu_9078_p1.read()));
}

void sobel::thread_tmp36_fu_9165_p2() {
    tmp36_fu_9165_p2 = (!tmp_21_16_fu_9159_p2.read().is_01() || !tmp_20_7_fu_9148_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_16_fu_9159_p2.read()) + sc_biguint<11>(tmp_20_7_fu_9148_p1.read()));
}

void sobel::thread_tmp37_cast_fu_9461_p1() {
    tmp37_cast_fu_9461_p1 = esl_zext<10,9>(tmp37_fu_9455_p2.read());
}

void sobel::thread_tmp37_fu_9455_p2() {
    tmp37_fu_9455_p2 = (!tmp_8_17_cast_fu_9435_p1.read().is_01() || !tmp_12_17_cast_fu_9451_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_17_cast_fu_9435_p1.read()) + sc_biguint<9>(tmp_12_17_cast_fu_9451_p1.read()));
}

void sobel::thread_tmp38_cast_fu_9540_p1() {
    tmp38_cast_fu_9540_p1 = esl_zext<11,10>(tmp38_fu_9534_p2.read());
}

void sobel::thread_tmp38_fu_9534_p2() {
    tmp38_fu_9534_p2 = (!tmp_18_17_cast_fu_9517_p1.read().is_01() || !tmp_20_17_cast_fu_9521_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_17_cast_fu_9517_p1.read()) + sc_biguint<10>(tmp_20_17_cast_fu_9521_p1.read()));
}

void sobel::thread_tmp39_cast_fu_9834_p1() {
    tmp39_cast_fu_9834_p1 = esl_zext<10,9>(tmp39_fu_9828_p2.read());
}

void sobel::thread_tmp39_fu_9828_p2() {
    tmp39_fu_9828_p2 = (!tmp_8_18_cast_fu_9808_p1.read().is_01() || !tmp_12_18_cast_fu_9824_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_18_cast_fu_9808_p1.read()) + sc_biguint<9>(tmp_12_18_cast_fu_9824_p1.read()));
}

void sobel::thread_tmp3_cast1_fu_908_p1() {
    tmp3_cast1_fu_908_p1 = esl_zext<10,9>(tmp130_fu_902_p2.read());
}

void sobel::thread_tmp3_cast_fu_12871_p1() {
    tmp3_cast_fu_12871_p1 = esl_zext<10,9>(tmp3_fu_12865_p2.read());
}

void sobel::thread_tmp3_cast_mid1_fu_3204_p1() {
    tmp3_cast_mid1_fu_3204_p1 = esl_zext<10,9>(tmp3_mid1_fu_3198_p2.read());
}

void sobel::thread_tmp3_fu_12865_p2() {
    tmp3_fu_12865_p2 = (!tmp_12_1_cast_fu_12861_p1.read().is_01() || !tmp_8_1_cast_fu_12845_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_1_cast_fu_12861_p1.read()) + sc_biguint<9>(tmp_8_1_cast_fu_12845_p1.read()));
}

void sobel::thread_tmp3_mid1_fu_3198_p2() {
    tmp3_mid1_fu_3198_p2 = (!tmp_12_1_cast_mid1_fu_3194_p1.read().is_01() || !tmp_8_1_cast_mid1_fu_3178_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_1_cast_mid1_fu_3194_p1.read()) + sc_biguint<9>(tmp_8_1_cast_mid1_fu_3178_p1.read()));
}

void sobel::thread_tmp40_cast_fu_9913_p1() {
    tmp40_cast_fu_9913_p1 = esl_zext<11,10>(tmp40_fu_9907_p2.read());
}

void sobel::thread_tmp40_fu_9907_p2() {
    tmp40_fu_9907_p2 = (!tmp_18_18_cast_fu_9890_p1.read().is_01() || !tmp_20_18_cast_fu_9894_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_18_cast_fu_9890_p1.read()) + sc_biguint<10>(tmp_20_18_cast_fu_9894_p1.read()));
}

void sobel::thread_tmp41_cast_fu_10207_p1() {
    tmp41_cast_fu_10207_p1 = esl_zext<10,9>(tmp41_fu_10201_p2.read());
}

void sobel::thread_tmp41_fu_10201_p2() {
    tmp41_fu_10201_p2 = (!tmp_8_19_cast_fu_10181_p1.read().is_01() || !tmp_12_19_cast_fu_10197_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_19_cast_fu_10181_p1.read()) + sc_biguint<9>(tmp_12_19_cast_fu_10197_p1.read()));
}

void sobel::thread_tmp42_cast_fu_10286_p1() {
    tmp42_cast_fu_10286_p1 = esl_zext<11,10>(tmp42_fu_10280_p2.read());
}

void sobel::thread_tmp42_fu_10280_p2() {
    tmp42_fu_10280_p2 = (!tmp_18_19_cast_fu_10263_p1.read().is_01() || !tmp_20_19_cast_fu_10267_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_19_cast_fu_10263_p1.read()) + sc_biguint<10>(tmp_20_19_cast_fu_10267_p1.read()));
}

void sobel::thread_tmp43_cast_fu_10580_p1() {
    tmp43_cast_fu_10580_p1 = esl_zext<10,9>(tmp43_fu_10574_p2.read());
}

void sobel::thread_tmp43_fu_10574_p2() {
    tmp43_fu_10574_p2 = (!tmp_8_20_cast_fu_10554_p1.read().is_01() || !tmp_12_20_cast_fu_10570_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_20_cast_fu_10554_p1.read()) + sc_biguint<9>(tmp_12_20_cast_fu_10570_p1.read()));
}

void sobel::thread_tmp44_fu_10657_p2() {
    tmp44_fu_10657_p2 = (!tmp_21_20_fu_10651_p2.read().is_01() || !tmp_20_10_fu_10640_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_20_fu_10651_p2.read()) + sc_biguint<11>(tmp_20_10_fu_10640_p1.read()));
}

void sobel::thread_tmp45_cast_fu_10953_p1() {
    tmp45_cast_fu_10953_p1 = esl_zext<10,9>(tmp45_fu_10947_p2.read());
}

void sobel::thread_tmp45_fu_10947_p2() {
    tmp45_fu_10947_p2 = (!tmp_8_21_cast_fu_10927_p1.read().is_01() || !tmp_12_21_cast_fu_10943_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_21_cast_fu_10927_p1.read()) + sc_biguint<9>(tmp_12_21_cast_fu_10943_p1.read()));
}

void sobel::thread_tmp46_fu_11030_p2() {
    tmp46_fu_11030_p2 = (!tmp_21_21_fu_11024_p2.read().is_01() || !tmp_20_11_fu_11013_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_21_fu_11024_p2.read()) + sc_biguint<11>(tmp_20_11_fu_11013_p1.read()));
}

void sobel::thread_tmp47_cast_fu_11403_p1() {
    tmp47_cast_fu_11403_p1 = esl_zext<10,9>(tmp47_fu_11397_p2.read());
}

void sobel::thread_tmp47_fu_11397_p2() {
    tmp47_fu_11397_p2 = (!tmp_8_22_cast_fu_11377_p1.read().is_01() || !tmp_12_22_cast_fu_11393_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_22_cast_fu_11377_p1.read()) + sc_biguint<9>(tmp_12_22_cast_fu_11393_p1.read()));
}

void sobel::thread_tmp48_fu_11456_p2() {
    tmp48_fu_11456_p2 = (!tmp_21_22_fu_11450_p2.read().is_01() || !tmp_20_12_fu_11439_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_22_fu_11450_p2.read()) + sc_biguint<11>(tmp_20_12_fu_11439_p1.read()));
}

void sobel::thread_tmp49_cast_fu_11767_p1() {
    tmp49_cast_fu_11767_p1 = esl_zext<10,9>(tmp49_fu_11761_p2.read());
}

void sobel::thread_tmp49_fu_11761_p2() {
    tmp49_fu_11761_p2 = (!tmp_8_23_cast_fu_11741_p1.read().is_01() || !tmp_12_23_cast_fu_11757_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_23_cast_fu_11741_p1.read()) + sc_biguint<9>(tmp_12_23_cast_fu_11757_p1.read()));
}

void sobel::thread_tmp4_fu_12948_p2() {
    tmp4_fu_12948_p2 = (!tmp_20_1_fu_12931_p1.read().is_01() || !tmp_21_1_fu_12942_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_1_fu_12931_p1.read()) + sc_biguint<11>(tmp_21_1_fu_12942_p2.read()));
}

void sobel::thread_tmp4_mid1_fu_3320_p2() {
    tmp4_mid1_fu_3320_p2 = (!tmp_20_1_mid1_fu_3303_p1.read().is_01() || !tmp_21_1_mid1_fu_3314_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_20_1_mid1_fu_3303_p1.read()) + sc_biguint<11>(tmp_21_1_mid1_fu_3314_p2.read()));
}

void sobel::thread_tmp50_fu_11820_p2() {
    tmp50_fu_11820_p2 = (!tmp_21_23_fu_11814_p2.read().is_01() || !tmp_20_13_fu_11803_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_21_23_fu_11814_p2.read()) + sc_biguint<11>(tmp_20_13_fu_11803_p1.read()));
}

void sobel::thread_tmp51_cast_fu_12085_p1() {
    tmp51_cast_fu_12085_p1 = esl_zext<10,9>(tmp51_fu_12079_p2.read());
}

void sobel::thread_tmp51_fu_12079_p2() {
    tmp51_fu_12079_p2 = (!tmp_8_24_cast_fu_12059_p1.read().is_01() || !tmp_12_24_cast_fu_12075_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_8_24_cast_fu_12059_p1.read()) + sc_biguint<9>(tmp_12_24_cast_fu_12075_p1.read()));
}

void sobel::thread_tmp52_cast_fu_12204_p1() {
    tmp52_cast_fu_12204_p1 = esl_zext<11,10>(tmp52_fu_12198_p2.read());
}

void sobel::thread_tmp52_fu_12198_p2() {
    tmp52_fu_12198_p2 = (!tmp_18_24_cast_fu_12181_p1.read().is_01() || !tmp_20_24_cast_fu_12185_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_24_cast_fu_12181_p1.read()) + sc_biguint<10>(tmp_20_24_cast_fu_12185_p1.read()));
}

void sobel::thread_tmp53_fu_802_p2() {
    tmp53_fu_802_p2 = (!tmp_20_cast1_fu_789_p1.read().is_01() || !tmp_18_cast1_fu_785_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_cast1_fu_789_p1.read()) + sc_biguint<10>(tmp_18_cast1_fu_785_p1.read()));
}

void sobel::thread_tmp5_cast1_fu_1096_p1() {
    tmp5_cast1_fu_1096_p1 = esl_zext<10,9>(tmp134_fu_1090_p2.read());
}

void sobel::thread_tmp5_cast_fu_13244_p1() {
    tmp5_cast_fu_13244_p1 = esl_zext<10,9>(tmp5_fu_13238_p2.read());
}

void sobel::thread_tmp5_cast_mid1_fu_3581_p1() {
    tmp5_cast_mid1_fu_3581_p1 = esl_zext<10,9>(tmp5_mid1_fu_3575_p2.read());
}

void sobel::thread_tmp5_fu_13238_p2() {
    tmp5_fu_13238_p2 = (!tmp_12_2_cast_fu_13234_p1.read().is_01() || !tmp_8_2_cast_fu_13218_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_2_cast_fu_13234_p1.read()) + sc_biguint<9>(tmp_8_2_cast_fu_13218_p1.read()));
}

void sobel::thread_tmp5_mid1_fu_3575_p2() {
    tmp5_mid1_fu_3575_p2 = (!tmp_12_2_cast_mid1_fu_3571_p1.read().is_01() || !tmp_8_2_cast_mid1_fu_3555_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_2_cast_mid1_fu_3571_p1.read()) + sc_biguint<9>(tmp_8_2_cast_mid1_fu_3555_p1.read()));
}

void sobel::thread_tmp6_cast1_fu_1184_p1() {
    tmp6_cast1_fu_1184_p1 = esl_zext<11,10>(tmp135_fu_1178_p2.read());
}

void sobel::thread_tmp6_cast_fu_13323_p1() {
    tmp6_cast_fu_13323_p1 = esl_zext<11,10>(tmp6_fu_13317_p2.read());
}

void sobel::thread_tmp6_cast_mid1_fu_3681_p1() {
    tmp6_cast_mid1_fu_3681_p1 = esl_zext<11,10>(tmp6_mid1_fu_3675_p2.read());
}

void sobel::thread_tmp6_fu_13317_p2() {
    tmp6_fu_13317_p2 = (!tmp_20_2_cast_fu_13304_p1.read().is_01() || !tmp_18_2_cast_fu_13300_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_2_cast_fu_13304_p1.read()) + sc_biguint<10>(tmp_18_2_cast_fu_13300_p1.read()));
}

void sobel::thread_tmp6_mid1_fu_3675_p2() {
    tmp6_mid1_fu_3675_p2 = (!tmp_20_2_cast_mid1_fu_3662_p1.read().is_01() || !tmp_18_2_cast_mid1_fu_3658_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_2_cast_mid1_fu_3662_p1.read()) + sc_biguint<10>(tmp_18_2_cast_mid1_fu_3658_p1.read()));
}

void sobel::thread_tmp7_cast1_fu_1284_p1() {
    tmp7_cast1_fu_1284_p1 = esl_zext<10,9>(tmp138_fu_1278_p2.read());
}

void sobel::thread_tmp7_cast_fu_13617_p1() {
    tmp7_cast_fu_13617_p1 = esl_zext<10,9>(tmp7_fu_13611_p2.read());
}

void sobel::thread_tmp7_cast_mid1_fu_3961_p1() {
    tmp7_cast_mid1_fu_3961_p1 = esl_zext<10,9>(tmp7_mid1_fu_3955_p2.read());
}

void sobel::thread_tmp7_fu_13611_p2() {
    tmp7_fu_13611_p2 = (!tmp_12_3_cast_fu_13607_p1.read().is_01() || !tmp_8_3_cast_fu_13591_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_3_cast_fu_13607_p1.read()) + sc_biguint<9>(tmp_8_3_cast_fu_13591_p1.read()));
}

void sobel::thread_tmp7_mid1_fu_3955_p2() {
    tmp7_mid1_fu_3955_p2 = (!tmp_12_3_cast_mid1_fu_3951_p1.read().is_01() || !tmp_8_3_cast_mid1_fu_3935_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_3_cast_mid1_fu_3951_p1.read()) + sc_biguint<9>(tmp_8_3_cast_mid1_fu_3935_p1.read()));
}

void sobel::thread_tmp8_cast1_fu_1372_p1() {
    tmp8_cast1_fu_1372_p1 = esl_zext<11,10>(tmp139_fu_1366_p2.read());
}

void sobel::thread_tmp8_cast_fu_13696_p1() {
    tmp8_cast_fu_13696_p1 = esl_zext<11,10>(tmp8_fu_13690_p2.read());
}

void sobel::thread_tmp8_cast_mid1_fu_4016_p1() {
    tmp8_cast_mid1_fu_4016_p1 = esl_zext<11,10>(tmp8_mid1_fu_4010_p2.read());
}

void sobel::thread_tmp8_fu_13690_p2() {
    tmp8_fu_13690_p2 = (!tmp_20_3_cast_fu_13677_p1.read().is_01() || !tmp_18_3_cast_fu_13673_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_3_cast_fu_13677_p1.read()) + sc_biguint<10>(tmp_18_3_cast_fu_13673_p1.read()));
}

void sobel::thread_tmp8_mid1_fu_4010_p2() {
    tmp8_mid1_fu_4010_p2 = (!tmp_20_3_cast_mid1_fu_3997_p1.read().is_01() || !tmp_18_3_cast_mid1_fu_3993_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_20_3_cast_mid1_fu_3997_p1.read()) + sc_biguint<10>(tmp_18_3_cast_mid1_fu_3993_p1.read()));
}

void sobel::thread_tmp9_cast1_fu_1472_p1() {
    tmp9_cast1_fu_1472_p1 = esl_zext<10,9>(tmp142_fu_1466_p2.read());
}

void sobel::thread_tmp9_cast_fu_13990_p1() {
    tmp9_cast_fu_13990_p1 = esl_zext<10,9>(tmp9_fu_13984_p2.read());
}

void sobel::thread_tmp9_cast_mid1_fu_4275_p1() {
    tmp9_cast_mid1_fu_4275_p1 = esl_zext<10,9>(tmp9_mid1_fu_4269_p2.read());
}

void sobel::thread_tmp9_fu_13984_p2() {
    tmp9_fu_13984_p2 = (!tmp_12_4_cast_fu_13980_p1.read().is_01() || !tmp_8_4_cast_fu_13964_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_4_cast_fu_13980_p1.read()) + sc_biguint<9>(tmp_8_4_cast_fu_13964_p1.read()));
}

void sobel::thread_tmp9_mid1_fu_4269_p2() {
    tmp9_mid1_fu_4269_p2 = (!tmp_12_4_cast_mid1_fu_4265_p1.read().is_01() || !tmp_8_4_cast_mid1_fu_4249_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_12_4_cast_mid1_fu_4265_p1.read()) + sc_biguint<9>(tmp_8_4_cast_mid1_fu_4249_p1.read()));
}

void sobel::thread_tmp_100_fu_10706_p3() {
    tmp_100_fu_10706_p3 = esl_concat<10,10>(tmp_18_mid2_reg_16626.read(), i_1_20_reg_19137.read());
}

void sobel::thread_tmp_101_fu_11057_p3() {
    tmp_101_fu_11057_p3 = esl_concat<10,10>(tmp_11_mid2_reg_16565.read(), i_1_21_reg_19261.read());
}

void sobel::thread_tmp_102_fu_11079_p3() {
    tmp_102_fu_11079_p3 = esl_concat<10,10>(tmp_18_mid2_reg_16626.read(), i_1_21_reg_19261.read());
}

void sobel::thread_tmp_103_fu_11483_p3() {
    tmp_103_fu_11483_p3 = esl_concat<10,10>(tmp_11_mid2_reg_16565.read(), i_1_22_reg_19385.read());
}

void sobel::thread_tmp_104_fu_11505_p3() {
    tmp_104_fu_11505_p3 = esl_concat<10,10>(tmp_18_mid2_reg_16626.read(), i_1_22_reg_19385.read());
}

void sobel::thread_tmp_105_fu_11527_p3() {
    tmp_105_fu_11527_p3 = esl_concat<10,10>(tmp_11_mid2_reg_16565.read(), i_1_23_reg_19432.read());
}

void sobel::thread_tmp_106_fu_11549_p3() {
    tmp_106_fu_11549_p3 = esl_concat<10,10>(tmp_18_mid2_reg_16626.read(), i_1_23_reg_19432.read());
}

void sobel::thread_tmp_107_fu_2840_p2() {
    tmp_107_fu_2840_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_3);
}

void sobel::thread_tmp_108_fu_3597_p2() {
    tmp_108_fu_3597_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_5);
}

void sobel::thread_tmp_109_fu_4291_p2() {
    tmp_109_fu_4291_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_7);
}

void sobel::thread_tmp_10_10_cast_fu_6836_p1() {
    tmp_10_10_cast_fu_6836_p1 = esl_zext<10,9>(tmp_10_10_fu_6828_p3.read());
}

void sobel::thread_tmp_10_10_fu_6828_p3() {
    tmp_10_10_fu_6828_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_11_cast_fu_7209_p1() {
    tmp_10_11_cast_fu_7209_p1 = esl_zext<10,9>(tmp_10_11_fu_7201_p3.read());
}

void sobel::thread_tmp_10_11_fu_7201_p3() {
    tmp_10_11_fu_7201_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_12_cast_fu_7582_p1() {
    tmp_10_12_cast_fu_7582_p1 = esl_zext<10,9>(tmp_10_12_fu_7574_p3.read());
}

void sobel::thread_tmp_10_12_fu_7574_p3() {
    tmp_10_12_fu_7574_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_13_cast_fu_7955_p1() {
    tmp_10_13_cast_fu_7955_p1 = esl_zext<10,9>(tmp_10_13_fu_7947_p3.read());
}

void sobel::thread_tmp_10_13_fu_7947_p3() {
    tmp_10_13_fu_7947_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_14_cast_fu_8328_p1() {
    tmp_10_14_cast_fu_8328_p1 = esl_zext<10,9>(tmp_10_14_fu_8320_p3.read());
}

void sobel::thread_tmp_10_14_fu_8320_p3() {
    tmp_10_14_fu_8320_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_15_cast_fu_8701_p1() {
    tmp_10_15_cast_fu_8701_p1 = esl_zext<10,9>(tmp_10_15_fu_8693_p3.read());
}

void sobel::thread_tmp_10_15_fu_8693_p3() {
    tmp_10_15_fu_8693_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_16_cast_fu_9074_p1() {
    tmp_10_16_cast_fu_9074_p1 = esl_zext<10,9>(tmp_10_16_fu_9066_p3.read());
}

void sobel::thread_tmp_10_16_fu_9066_p3() {
    tmp_10_16_fu_9066_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_17_cast_fu_9447_p1() {
    tmp_10_17_cast_fu_9447_p1 = esl_zext<10,9>(tmp_10_17_fu_9439_p3.read());
}

void sobel::thread_tmp_10_17_fu_9439_p3() {
    tmp_10_17_fu_9439_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_18_cast_fu_9820_p1() {
    tmp_10_18_cast_fu_9820_p1 = esl_zext<10,9>(tmp_10_18_fu_9812_p3.read());
}

void sobel::thread_tmp_10_18_fu_9812_p3() {
    tmp_10_18_fu_9812_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_19_cast_fu_10193_p1() {
    tmp_10_19_cast_fu_10193_p1 = esl_zext<10,9>(tmp_10_19_fu_10185_p3.read());
}

void sobel::thread_tmp_10_19_fu_10185_p3() {
    tmp_10_19_fu_10185_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_1_cast1_fu_894_p1() {
    tmp_10_1_cast1_fu_894_p1 = esl_zext<10,9>(tmp_10_25_fu_886_p3.read());
}

void sobel::thread_tmp_10_1_cast_fu_12857_p1() {
    tmp_10_1_cast_fu_12857_p1 = esl_zext<10,9>(tmp_10_1_fu_12849_p3.read());
}

void sobel::thread_tmp_10_1_cast_mid1_fu_3190_p1() {
    tmp_10_1_cast_mid1_fu_3190_p1 = esl_zext<10,9>(tmp_10_1_mid1_fu_3182_p3.read());
}

void sobel::thread_tmp_10_1_fu_12849_p3() {
    tmp_10_1_fu_12849_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_1_mid1_fu_3182_p3() {
    tmp_10_1_mid1_fu_3182_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_20_cast_fu_10566_p1() {
    tmp_10_20_cast_fu_10566_p1 = esl_zext<10,9>(tmp_10_20_fu_10558_p3.read());
}

void sobel::thread_tmp_10_20_fu_10558_p3() {
    tmp_10_20_fu_10558_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_21_cast_fu_10939_p1() {
    tmp_10_21_cast_fu_10939_p1 = esl_zext<10,9>(tmp_10_21_fu_10931_p3.read());
}

void sobel::thread_tmp_10_21_fu_10931_p3() {
    tmp_10_21_fu_10931_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_22_cast_fu_11389_p1() {
    tmp_10_22_cast_fu_11389_p1 = esl_zext<10,9>(tmp_10_22_fu_11381_p3.read());
}

void sobel::thread_tmp_10_22_fu_11381_p3() {
    tmp_10_22_fu_11381_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_23_cast_fu_11753_p1() {
    tmp_10_23_cast_fu_11753_p1 = esl_zext<10,9>(tmp_10_23_fu_11745_p3.read());
}

void sobel::thread_tmp_10_23_fu_11745_p3() {
    tmp_10_23_fu_11745_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_24_cast_fu_12071_p1() {
    tmp_10_24_cast_fu_12071_p1 = esl_zext<10,9>(tmp_10_24_fu_12063_p3.read());
}

void sobel::thread_tmp_10_24_fu_12063_p3() {
    tmp_10_24_fu_12063_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_25_fu_886_p3() {
    tmp_10_25_fu_886_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_26_fu_1074_p3() {
    tmp_10_26_fu_1074_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_27_fu_1262_p3() {
    tmp_10_27_fu_1262_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_28_fu_1450_p3() {
    tmp_10_28_fu_1450_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_29_fu_1638_p3() {
    tmp_10_29_fu_1638_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_2_cast1_fu_1082_p1() {
    tmp_10_2_cast1_fu_1082_p1 = esl_zext<10,9>(tmp_10_26_fu_1074_p3.read());
}

void sobel::thread_tmp_10_2_cast_fu_13230_p1() {
    tmp_10_2_cast_fu_13230_p1 = esl_zext<10,9>(tmp_10_2_fu_13222_p3.read());
}

void sobel::thread_tmp_10_2_cast_mid1_fu_3567_p1() {
    tmp_10_2_cast_mid1_fu_3567_p1 = esl_zext<10,9>(tmp_10_2_mid1_fu_3559_p3.read());
}

void sobel::thread_tmp_10_2_fu_13222_p3() {
    tmp_10_2_fu_13222_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_2_mid1_fu_3559_p3() {
    tmp_10_2_mid1_fu_3559_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_30_fu_1847_p3() {
    tmp_10_30_fu_1847_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_31_fu_2056_p3() {
    tmp_10_31_fu_2056_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_3_cast1_fu_1270_p1() {
    tmp_10_3_cast1_fu_1270_p1 = esl_zext<10,9>(tmp_10_27_fu_1262_p3.read());
}

void sobel::thread_tmp_10_3_cast_fu_13603_p1() {
    tmp_10_3_cast_fu_13603_p1 = esl_zext<10,9>(tmp_10_3_fu_13595_p3.read());
}

void sobel::thread_tmp_10_3_cast_mid1_fu_3947_p1() {
    tmp_10_3_cast_mid1_fu_3947_p1 = esl_zext<10,9>(tmp_10_3_mid1_fu_3939_p3.read());
}

void sobel::thread_tmp_10_3_fu_13595_p3() {
    tmp_10_3_fu_13595_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_3_mid1_fu_3939_p3() {
    tmp_10_3_mid1_fu_3939_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_4_cast1_fu_1458_p1() {
    tmp_10_4_cast1_fu_1458_p1 = esl_zext<10,9>(tmp_10_28_fu_1450_p3.read());
}

void sobel::thread_tmp_10_4_cast_fu_13976_p1() {
    tmp_10_4_cast_fu_13976_p1 = esl_zext<10,9>(tmp_10_4_fu_13968_p3.read());
}

void sobel::thread_tmp_10_4_cast_mid1_fu_4261_p1() {
    tmp_10_4_cast_mid1_fu_4261_p1 = esl_zext<10,9>(tmp_10_4_mid1_fu_4253_p3.read());
}

void sobel::thread_tmp_10_4_fu_13968_p3() {
    tmp_10_4_fu_13968_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_4_mid1_fu_4253_p3() {
    tmp_10_4_mid1_fu_4253_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_5_cast1_fu_1646_p1() {
    tmp_10_5_cast1_fu_1646_p1 = esl_zext<10,9>(tmp_10_29_fu_1638_p3.read());
}

void sobel::thread_tmp_10_5_cast_fu_14631_p1() {
    tmp_10_5_cast_fu_14631_p1 = esl_zext<10,9>(tmp_10_5_fu_14623_p3.read());
}

void sobel::thread_tmp_10_5_cast_mid1_fu_4670_p1() {
    tmp_10_5_cast_mid1_fu_4670_p1 = esl_zext<10,9>(tmp_10_5_mid1_fu_4662_p3.read());
}

void sobel::thread_tmp_10_5_fu_14623_p3() {
    tmp_10_5_fu_14623_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_5_mid1_fu_4662_p3() {
    tmp_10_5_mid1_fu_4662_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_6_cast1_fu_1855_p1() {
    tmp_10_6_cast1_fu_1855_p1 = esl_zext<10,9>(tmp_10_30_fu_1847_p3.read());
}

void sobel::thread_tmp_10_6_cast_fu_14796_p1() {
    tmp_10_6_cast_fu_14796_p1 = esl_zext<10,9>(tmp_10_6_fu_14788_p3.read());
}

void sobel::thread_tmp_10_6_cast_mid1_fu_5040_p1() {
    tmp_10_6_cast_mid1_fu_5040_p1 = esl_zext<10,9>(tmp_10_6_mid1_fu_5032_p3.read());
}

void sobel::thread_tmp_10_6_fu_14788_p3() {
    tmp_10_6_fu_14788_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_6_mid1_fu_5032_p3() {
    tmp_10_6_mid1_fu_5032_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_7_cast1_fu_2064_p1() {
    tmp_10_7_cast1_fu_2064_p1 = esl_zext<10,9>(tmp_10_31_fu_2056_p3.read());
}

void sobel::thread_tmp_10_7_cast_fu_14961_p1() {
    tmp_10_7_cast_fu_14961_p1 = esl_zext<10,9>(tmp_10_7_fu_14953_p3.read());
}

void sobel::thread_tmp_10_7_cast_mid1_fu_5340_p1() {
    tmp_10_7_cast_mid1_fu_5340_p1 = esl_zext<10,9>(tmp_10_7_mid1_fu_5332_p3.read());
}

void sobel::thread_tmp_10_7_fu_14953_p3() {
    tmp_10_7_fu_14953_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_7_mid1_fu_5332_p3() {
    tmp_10_7_mid1_fu_5332_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_8_cast_fu_5717_p1() {
    tmp_10_8_cast_fu_5717_p1 = esl_zext<10,9>(tmp_10_8_fu_5709_p3.read());
}

void sobel::thread_tmp_10_8_fu_5709_p3() {
    tmp_10_8_fu_5709_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_9_cast_fu_6090_p1() {
    tmp_10_9_cast_fu_6090_p1 = esl_zext<10,9>(tmp_10_9_fu_6082_p3.read());
}

void sobel::thread_tmp_10_9_fu_6082_p3() {
    tmp_10_9_fu_6082_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_10_cast1_fu_706_p1() {
    tmp_10_cast1_fu_706_p1 = esl_zext<10,9>(tmp_112_fu_698_p3.read());
}

void sobel::thread_tmp_10_cast_19_fu_12484_p1() {
    tmp_10_cast_19_fu_12484_p1 = esl_zext<10,9>(tmp_s_fu_12476_p3.read());
}

void sobel::thread_tmp_10_cast_fu_6463_p1() {
    tmp_10_cast_fu_6463_p1 = esl_zext<10,9>(tmp_10_s_fu_6455_p3.read());
}

void sobel::thread_tmp_10_cast_mid1_fu_2810_p1() {
    tmp_10_cast_mid1_fu_2810_p1 = esl_zext<10,9>(tmp_mid1_fu_2802_p3.read());
}

void sobel::thread_tmp_10_fu_12135_p2() {
    tmp_10_fu_12135_p2 = (!ap_const_lv20_400.is_01() || !tmp_5_reg_19653.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_400) + sc_biguint<20>(tmp_5_reg_19653.read()));
}

void sobel::thread_tmp_10_mid1_fu_2556_p2() {
    tmp_10_mid1_fu_2556_p2 = (!ap_const_lv20_400.is_01() || !tmp_5_mid1_reg_16486.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_400) + sc_biguint<20>(tmp_5_mid1_reg_16486.read()));
}

void sobel::thread_tmp_10_s_fu_6455_p3() {
    tmp_10_s_fu_6455_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_110_fu_4357_p2() {
    tmp_110_fu_4357_p2 = (tmp_5_mid1_reg_16486.read() | ap_const_lv20_9);
}

void sobel::thread_tmp_112_fu_698_p3() {
    tmp_112_fu_698_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_113_fu_769_p1() {
    tmp_113_fu_769_p1 = esl_zext<11,8>(reg_563.read());
}

void sobel::thread_tmp_114_fu_777_p3() {
    tmp_114_fu_777_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_115_fu_796_p2() {
    tmp_115_fu_796_p2 = (!tmp_113_fu_769_p1.read().is_01() || !sum1_cast1_fu_793_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_113_fu_769_p1.read()) - sc_biguint<11>(sum1_cast1_fu_793_p1.read()));
}

void sobel::thread_tmp_116_fu_833_p3() {
    tmp_116_fu_833_p3 = esl_concat<8,1>(reg_563.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_117_fu_845_p3() {
    tmp_117_fu_845_p3 = esl_concat<8,1>(reg_567.read(), ap_const_lv1_0);
}

void sobel::thread_tmp_118_fu_827_p2() {
    tmp_118_fu_827_p2 = (!sum6_neg1_fu_821_p2.read().is_01() || !tmp_20_cast1_fu_789_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(sum6_neg1_fu_821_p2.read()) - sc_biguint<10>(tmp_20_cast1_fu_789_p1.read()));
}

void sobel::thread_tmp_119_fu_860_p2() {
    tmp_119_fu_860_p2 = (!tmp_31_cast1_fu_857_p1.read().is_01() || !tmp_26_cast1_fu_841_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_31_cast1_fu_857_p1.read()) - sc_biguint<11>(tmp_26_cast1_fu_841_p1.read()));
}

void sobel::thread_tmp_11_mid1_fu_2561_p4() {
    tmp_11_mid1_fu_2561_p4 = tmp_10_mid1_fu_2556_p2.read().range(19, 10);
}

void sobel::thread_tmp_11_mid2_fu_2571_p3() {
    tmp_11_mid2_fu_2571_p3 = (!tmp_1_s_reg_375.read()[0].is_01())? sc_lv<10>(): ((tmp_1_s_reg_375.read()[0].to_bool())? tmp_11_mid1_fu_2561_p4.read(): tmp_33_reg_420.read());
}

void sobel::thread_tmp_120_fu_872_p1() {
    tmp_120_fu_872_p1 = esl_sext<20,11>(convulution_horizont_40_reg_15842.read());
}

void sobel::thread_tmp_121_fu_15166_p0() {
    tmp_121_fu_15166_p0 =  (sc_lv<11>) (tmp_120_fu_872_p1.read());
}

void sobel::thread_tmp_121_fu_15166_p1() {
    tmp_121_fu_15166_p1 =  (sc_lv<11>) (tmp_120_fu_872_p1.read());
}

void sobel::thread_tmp_122_fu_875_p1() {
    tmp_122_fu_875_p1 = esl_sext<20,11>(convulution_vertical_40_reg_15852.read());
}

void sobel::thread_tmp_124_fu_878_p1() {
    tmp_124_fu_878_p1 = esl_zext<32,20>(p1_reg_15862.read());
}

void sobel::thread_tmp_129_fu_1773_p1() {
    tmp_129_fu_1773_p1 = grp_p_hls_fptoui_double_s_fu_534_ap_return.read().range(8-1, 0);
}

void sobel::thread_tmp_12_10_cast_fu_6840_p1() {
    tmp_12_10_cast_fu_6840_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_11_cast_fu_7213_p1() {
    tmp_12_11_cast_fu_7213_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_12_cast_fu_7586_p1() {
    tmp_12_12_cast_fu_7586_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_13_cast_fu_7959_p1() {
    tmp_12_13_cast_fu_7959_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_14_cast_fu_8332_p1() {
    tmp_12_14_cast_fu_8332_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_15_cast_fu_8705_p1() {
    tmp_12_15_cast_fu_8705_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_16_cast_fu_9078_p1() {
    tmp_12_16_cast_fu_9078_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_17_cast_fu_9451_p1() {
    tmp_12_17_cast_fu_9451_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_18_cast_fu_9824_p1() {
    tmp_12_18_cast_fu_9824_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_19_cast_fu_10197_p1() {
    tmp_12_19_cast_fu_10197_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_1_cast1_fu_898_p1() {
    tmp_12_1_cast1_fu_898_p1 = esl_zext<9,8>(reg_571.read());
}

void sobel::thread_tmp_12_1_cast_fu_12861_p1() {
    tmp_12_1_cast_fu_12861_p1 = esl_zext<9,8>(reg_571.read());
}

}

