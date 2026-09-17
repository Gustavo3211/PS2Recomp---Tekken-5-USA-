#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202E60
// Address: 0x202e60 - 0x2058e8
void sub_00202E60_0x202e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202E60_0x202e60");
#endif

    switch (ctx->pc) {
        case 0x203ec4u: goto label_203ec4;
        case 0x203edcu: goto label_203edc;
        case 0x204648u: goto label_204648;
        case 0x204654u: goto label_204654;
        case 0x204838u: goto label_204838;
        case 0x20485cu: goto label_20485c;
        case 0x20486cu: goto label_20486c;
        case 0x2048acu: goto label_2048ac;
        case 0x204940u: goto label_204940;
        case 0x204950u: goto label_204950;
        case 0x204960u: goto label_204960;
        case 0x204970u: goto label_204970;
        case 0x204980u: goto label_204980;
        case 0x2049acu: goto label_2049ac;
        case 0x204a18u: goto label_204a18;
        case 0x204ac8u: goto label_204ac8;
        case 0x204b98u: goto label_204b98;
        case 0x204be8u: goto label_204be8;
        case 0x204bf8u: goto label_204bf8;
        case 0x204c60u: goto label_204c60;
        case 0x204c78u: goto label_204c78;
        case 0x204cc0u: goto label_204cc0;
        case 0x204cd0u: goto label_204cd0;
        case 0x204db8u: goto label_204db8;
        case 0x204df8u: goto label_204df8;
        case 0x204e08u: goto label_204e08;
        case 0x204e10u: goto label_204e10;
        case 0x204e54u: goto label_204e54;
        case 0x204ed4u: goto label_204ed4;
        case 0x204ee4u: goto label_204ee4;
        case 0x204f18u: goto label_204f18;
        case 0x204f24u: goto label_204f24;
        case 0x204f74u: goto label_204f74;
        case 0x204f8cu: goto label_204f8c;
        case 0x204fa4u: goto label_204fa4;
        case 0x204fbcu: goto label_204fbc;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fecu: goto label_204fec;
        case 0x20502cu: goto label_20502c;
        case 0x205034u: goto label_205034;
        case 0x205098u: goto label_205098;
        case 0x2050c8u: goto label_2050c8;
        case 0x205100u: goto label_205100;
        case 0x205130u: goto label_205130;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053f8u: goto label_2053f8;
        case 0x205414u: goto label_205414;
        case 0x205430u: goto label_205430;
        case 0x20544cu: goto label_20544c;
        case 0x205468u: goto label_205468;
        case 0x205478u: goto label_205478;
        case 0x205870u: goto label_205870;
        case 0x2058acu: goto label_2058ac;
        default: break;
    }

    ctx->pc = 0x202e60u;

    // 0x202e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202e64: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x202e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202e6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x202e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x202e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x202e74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x202e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202e7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x202e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x202e80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202e84: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x202e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x202e88: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x202e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x202e8c: 0x948a0000  lhu         $t2, 0x0($a0)
    ctx->pc = 0x202e8cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202e90: 0x31438000  andi        $v1, $t2, 0x8000
    ctx->pc = 0x202e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32768);
    // 0x202e94: 0x14600a8a  bnez        $v1, . + 4 + (0xA8A << 2)
    ctx->pc = 0x202E94u;
    {
        const bool branch_taken_0x202e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E94u;
        // 0x202e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e94) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x202E9Cu;
    // 0x202e9c: 0x94900002  lhu         $s0, 0x2($a0)
    ctx->pc = 0x202e9cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x202ea0: 0x2d420141  sltiu       $v0, $t2, 0x141
    ctx->pc = 0x202ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x202ea4: 0x4490a800  mtc1        $s0, $f21
    ctx->pc = 0x202ea4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x202ea8: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x202ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x202eac: 0x10400a84  beqz        $v0, . + 4 + (0xA84 << 2)
    ctx->pc = 0x202EACu;
    {
        const bool branch_taken_0x202eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EACu;
        // 0x202eb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202eac) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x202EB4u;
    // 0x202eb4: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x202eb8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x202eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x202ebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202ec0: 0x8c633d70  lw          $v1, 0x3D70($v1)
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15728)));
    // 0x202ec4: 0x600008  jr          $v1
    ctx->pc = 0x202EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202ED0u: goto label_202ed0;
            case 0x202EE0u: goto label_202ee0;
            case 0x203200u: goto label_203200;
            case 0x203530u: goto label_203530;
            case 0x203860u: goto label_203860;
            case 0x203B90u: goto label_203b90;
            case 0x203EC0u: goto label_203ec0;
            case 0x203ED8u: goto label_203ed8;
            case 0x203EF0u: goto label_203ef0;
            case 0x203F00u: goto label_203f00;
            case 0x203F20u: goto label_203f20;
            case 0x203F28u: goto label_203f28;
            case 0x203F48u: goto label_203f48;
            case 0x203F68u: goto label_203f68;
            case 0x203F70u: goto label_203f70;
            case 0x203F78u: goto label_203f78;
            case 0x203F90u: goto label_203f90;
            case 0x203FA0u: goto label_203fa0;
            case 0x203FC0u: goto label_203fc0;
            case 0x203FE0u: goto label_203fe0;
            case 0x203FF0u: goto label_203ff0;
            case 0x204000u: goto label_204000;
            case 0x204010u: goto label_204010;
            case 0x204020u: goto label_204020;
            case 0x204030u: goto label_204030;
            case 0x204058u: goto label_204058;
            case 0x204080u: goto label_204080;
            case 0x204090u: goto label_204090;
            case 0x2040A0u: goto label_2040a0;
            case 0x2040B0u: goto label_2040b0;
            case 0x2040C0u: goto label_2040c0;
            case 0x2040C8u: goto label_2040c8;
            case 0x2040D8u: goto label_2040d8;
            case 0x2040E8u: goto label_2040e8;
            case 0x2040F8u: goto label_2040f8;
            case 0x204108u: goto label_204108;
            case 0x204128u: goto label_204128;
            case 0x204138u: goto label_204138;
            case 0x204158u: goto label_204158;
            case 0x204168u: goto label_204168;
            case 0x204170u: goto label_204170;
            case 0x204178u: goto label_204178;
            case 0x204180u: goto label_204180;
            case 0x204190u: goto label_204190;
            case 0x204198u: goto label_204198;
            case 0x2041A8u: goto label_2041a8;
            case 0x2041B0u: goto label_2041b0;
            case 0x2041E8u: goto label_2041e8;
            case 0x204200u: goto label_204200;
            case 0x204218u: goto label_204218;
            case 0x204228u: goto label_204228;
            case 0x204248u: goto label_204248;
            case 0x204270u: goto label_204270;
            case 0x204290u: goto label_204290;
            case 0x2042C8u: goto label_2042c8;
            case 0x2042E0u: goto label_2042e0;
            case 0x2042F8u: goto label_2042f8;
            case 0x204308u: goto label_204308;
            case 0x204310u: goto label_204310;
            case 0x204320u: goto label_204320;
            case 0x204330u: goto label_204330;
            case 0x204338u: goto label_204338;
            case 0x204348u: goto label_204348;
            case 0x204358u: goto label_204358;
            case 0x204370u: goto label_204370;
            case 0x204380u: goto label_204380;
            case 0x204398u: goto label_204398;
            case 0x2043B8u: goto label_2043b8;
            case 0x2043F8u: goto label_2043f8;
            case 0x204448u: goto label_204448;
            case 0x204458u: goto label_204458;
            case 0x204470u: goto label_204470;
            case 0x2044A0u: goto label_2044a0;
            case 0x2044C0u: goto label_2044c0;
            case 0x2044D8u: goto label_2044d8;
            case 0x2044F0u: goto label_2044f0;
            case 0x204508u: goto label_204508;
            case 0x204528u: goto label_204528;
            case 0x204550u: goto label_204550;
            case 0x204560u: goto label_204560;
            case 0x204580u: goto label_204580;
            case 0x204590u: goto label_204590;
            case 0x2045A0u: goto label_2045a0;
            case 0x2045B8u: goto label_2045b8;
            case 0x2045D0u: goto label_2045d0;
            case 0x2045E8u: goto label_2045e8;
            case 0x204600u: goto label_204600;
            case 0x204610u: goto label_204610;
            case 0x204620u: goto label_204620;
            case 0x204680u: goto label_204680;
            case 0x2046B8u: goto label_2046b8;
            case 0x204710u: goto label_204710;
            case 0x204740u: goto label_204740;
            case 0x2047B8u: goto label_2047b8;
            case 0x2047E8u: goto label_2047e8;
            case 0x2047F0u: goto label_2047f0;
            case 0x2047F8u: goto label_2047f8;
            case 0x204800u: goto label_204800;
            case 0x204808u: goto label_204808;
            case 0x2048C8u: goto label_2048c8;
            case 0x2048D0u: goto label_2048d0;
            case 0x204900u: goto label_204900;
            case 0x204930u: goto label_204930;
            case 0x204938u: goto label_204938;
            case 0x204948u: goto label_204948;
            case 0x204958u: goto label_204958;
            case 0x204968u: goto label_204968;
            case 0x204990u: goto label_204990;
            case 0x2049B8u: goto label_2049b8;
            case 0x2049D8u: goto label_2049d8;
            case 0x2049E0u: goto label_2049e0;
            case 0x2049F0u: goto label_2049f0;
            case 0x204A18u: goto label_204a18;
            case 0x204A20u: goto label_204a20;
            case 0x204A30u: goto label_204a30;
            case 0x204A40u: goto label_204a40;
            case 0x204A68u: goto label_204a68;
            case 0x204A88u: goto label_204a88;
            case 0x204AB0u: goto label_204ab0;
            case 0x204AC0u: goto label_204ac0;
            case 0x204AD8u: goto label_204ad8;
            case 0x204AF8u: goto label_204af8;
            case 0x204B00u: goto label_204b00;
            case 0x204B20u: goto label_204b20;
            case 0x204B28u: goto label_204b28;
            case 0x204B30u: goto label_204b30;
            case 0x204B38u: goto label_204b38;
            case 0x204B58u: goto label_204b58;
            case 0x204B60u: goto label_204b60;
            case 0x204B90u: goto label_204b90;
            case 0x204BB8u: goto label_204bb8;
            case 0x204BC8u: goto label_204bc8;
            case 0x204BE0u: goto label_204be0;
            case 0x204BF0u: goto label_204bf0;
            case 0x204C00u: goto label_204c00;
            case 0x204C28u: goto label_204c28;
            case 0x204C58u: goto label_204c58;
            case 0x204C68u: goto label_204c68;
            case 0x204C70u: goto label_204c70;
            case 0x204C88u: goto label_204c88;
            case 0x204C98u: goto label_204c98;
            case 0x204CA8u: goto label_204ca8;
            case 0x204CB8u: goto label_204cb8;
            case 0x204CC8u: goto label_204cc8;
            case 0x204CE0u: goto label_204ce0;
            case 0x204CF8u: goto label_204cf8;
            case 0x204D18u: goto label_204d18;
            case 0x204D78u: goto label_204d78;
            case 0x204D88u: goto label_204d88;
            case 0x204D98u: goto label_204d98;
            case 0x204DA8u: goto label_204da8;
            case 0x204DC0u: goto label_204dc0;
            case 0x204DC8u: goto label_204dc8;
            case 0x204E78u: goto label_204e78;
            case 0x204E80u: goto label_204e80;
            case 0x204E88u: goto label_204e88;
            case 0x204E90u: goto label_204e90;
            case 0x204E98u: goto label_204e98;
            case 0x204EA0u: goto label_204ea0;
            case 0x204F68u: goto label_204f68;
            case 0x204F80u: goto label_204f80;
            case 0x204F98u: goto label_204f98;
            case 0x204FB0u: goto label_204fb0;
            case 0x204FC8u: goto label_204fc8;
            case 0x204FE0u: goto label_204fe0;
            case 0x204FF8u: goto label_204ff8;
            case 0x205088u: goto label_205088;
            case 0x2050B8u: goto label_2050b8;
            case 0x2050E8u: goto label_2050e8;
            case 0x2050F0u: goto label_2050f0;
            case 0x205158u: goto label_205158;
            case 0x205170u: goto label_205170;
            case 0x205188u: goto label_205188;
            case 0x2051A0u: goto label_2051a0;
            case 0x2051B8u: goto label_2051b8;
            case 0x2051D0u: goto label_2051d0;
            case 0x2051E8u: goto label_2051e8;
            case 0x2051F0u: goto label_2051f0;
            case 0x2051F8u: goto label_2051f8;
            case 0x205200u: goto label_205200;
            case 0x205208u: goto label_205208;
            case 0x205210u: goto label_205210;
            case 0x205218u: goto label_205218;
            case 0x205220u: goto label_205220;
            case 0x205228u: goto label_205228;
            case 0x205230u: goto label_205230;
            case 0x205238u: goto label_205238;
            case 0x205240u: goto label_205240;
            case 0x205248u: goto label_205248;
            case 0x205250u: goto label_205250;
            case 0x205258u: goto label_205258;
            case 0x205260u: goto label_205260;
            case 0x205268u: goto label_205268;
            case 0x205270u: goto label_205270;
            case 0x205278u: goto label_205278;
            case 0x205280u: goto label_205280;
            case 0x205288u: goto label_205288;
            case 0x205290u: goto label_205290;
            case 0x205298u: goto label_205298;
            case 0x2052A0u: goto label_2052a0;
            case 0x2052A8u: goto label_2052a8;
            case 0x2052B0u: goto label_2052b0;
            case 0x2052B8u: goto label_2052b8;
            case 0x2052C0u: goto label_2052c0;
            case 0x2052C8u: goto label_2052c8;
            case 0x2052D0u: goto label_2052d0;
            case 0x2052E0u: goto label_2052e0;
            case 0x2052E8u: goto label_2052e8;
            case 0x2052F0u: goto label_2052f0;
            case 0x2052F8u: goto label_2052f8;
            case 0x205300u: goto label_205300;
            case 0x205308u: goto label_205308;
            case 0x205318u: goto label_205318;
            case 0x205320u: goto label_205320;
            case 0x205328u: goto label_205328;
            case 0x205330u: goto label_205330;
            case 0x205338u: goto label_205338;
            case 0x205340u: goto label_205340;
            case 0x205348u: goto label_205348;
            case 0x205360u: goto label_205360;
            case 0x205378u: goto label_205378;
            case 0x205390u: goto label_205390;
            case 0x2053C8u: goto label_2053c8;
            case 0x205410u: goto label_205410;
            case 0x205448u: goto label_205448;
            case 0x205490u: goto label_205490;
            case 0x2054C8u: goto label_2054c8;
            case 0x205500u: goto label_205500;
            case 0x205510u: goto label_205510;
            case 0x205520u: goto label_205520;
            case 0x205570u: goto label_205570;
            case 0x205598u: goto label_205598;
            case 0x2055C0u: goto label_2055c0;
            case 0x2055D0u: goto label_2055d0;
            case 0x2055F8u: goto label_2055f8;
            case 0x205620u: goto label_205620;
            case 0x205628u: goto label_205628;
            case 0x205640u: goto label_205640;
            case 0x205648u: goto label_205648;
            case 0x205660u: goto label_205660;
            case 0x205668u: goto label_205668;
            case 0x205680u: goto label_205680;
            case 0x2056B8u: goto label_2056b8;
            case 0x2056E0u: goto label_2056e0;
            case 0x205708u: goto label_205708;
            case 0x205720u: goto label_205720;
            case 0x205758u: goto label_205758;
            case 0x205790u: goto label_205790;
            case 0x2057C8u: goto label_2057c8;
            case 0x205800u: goto label_205800;
            case 0x205860u: goto label_205860;
            case 0x205878u: goto label_205878;
            case 0x205898u: goto label_205898;
            case 0x2058B8u: goto label_2058b8;
            case 0x2058BCu: goto label_2058bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202EC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x202ECCu;
    // 0x202ecc: 0x0  nop
    ctx->pc = 0x202eccu;
    // NOP
label_202ed0:
    // 0x202ed0: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x202ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x202ed4: 0x10000a79  b           . + 4 + (0xA79 << 2)
    ctx->pc = 0x202ED4u;
    {
        const bool branch_taken_0x202ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202ED4u;
        // 0x202ed8: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ed4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x202EDCu;
    // 0x202edc: 0x0  nop
    ctx->pc = 0x202edcu;
    // NOP
label_202ee0:
    // 0x202ee0: 0x94eb003c  lhu         $t3, 0x3C($a3)
    ctx->pc = 0x202ee0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x202ee4: 0x264c0002  addiu       $t4, $s2, 0x2
    ctx->pc = 0x202ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x202ee8: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x202ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x202eec: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x202ef0: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x202ef4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x202ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x202ef8: 0x248301d0  addiu       $v1, $a0, 0x1D0
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x202efc: 0x844801c0  lh          $t0, 0x1C0($v0)
    ctx->pc = 0x202efcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x202f00: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x202f04: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x202f08: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x202f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x202f0c: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x202f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202f10: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x202f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202f14: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202F14u;
    {
        const bool branch_taken_0x202f14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F14u;
        // 0x202f18: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f14) {
            ctx->pc = 0x202F38u;
            goto label_202f38;
        }
    }
    ctx->pc = 0x202F1Cu;
    // 0x202f1c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x202f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x202f20: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x202f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x202f24: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202F24u;
    {
        const bool branch_taken_0x202f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x202F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F24u;
        // 0x202f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f24) {
            ctx->pc = 0x202F3Cu;
            goto label_202f3c;
        }
    }
    ctx->pc = 0x202F2Cu;
    // 0x202f2c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x202f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x202f30: 0x50820002  beql        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202F30u;
    {
        const bool branch_taken_0x202f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x202f30) {
            ctx->pc = 0x202F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202F30u;
            // 0x202f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202F3Cu;
            goto label_202f3c;
        }
    }
    ctx->pc = 0x202F38u;
label_202f38:
    // 0x202f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202f3c:
    // 0x202f3c: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x202F3Cu;
    {
        const bool branch_taken_0x202f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202f3c) {
            ctx->pc = 0x2031E8u;
            goto label_2031e8;
        }
    }
    ctx->pc = 0x202F44u;
    // 0x202f44: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x202f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x202f48: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x202F48u;
    {
        const bool branch_taken_0x202f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F48u;
        // 0x202f4c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f48) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202F50u;
    // 0x202f50: 0xdce201f8  ld          $v0, 0x1F8($a3)
    ctx->pc = 0x202f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 504)));
    // 0x202f54: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x202f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x202f58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202f5c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x202f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x202f60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202f64: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x202F64u;
    {
        const bool branch_taken_0x202f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202f64) {
            ctx->pc = 0x202F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202F64u;
            // 0x202f68: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030F8u;
            goto label_2030f8;
        }
    }
    ctx->pc = 0x202F6Cu;
    // 0x202f6c: 0x86430080  lh          $v1, 0x80($s2)
    ctx->pc = 0x202f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x202f70: 0x28622aaa  slti        $v0, $v1, 0x2AAA
    ctx->pc = 0x202f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x202f74: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x202F74u;
    {
        const bool branch_taken_0x202f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F74u;
        // 0x202f78: 0x28625556  slti        $v0, $v1, 0x5556 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21846) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f74) {
            ctx->pc = 0x2030B8u;
            goto label_2030b8;
        }
    }
    ctx->pc = 0x202F7Cu;
    // 0x202f7c: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x202f80: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x202f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x202f84: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x202F84u;
    {
        const bool branch_taken_0x202f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F84u;
        // 0x202f88: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f84) {
            ctx->pc = 0x203018u;
            goto label_203018;
        }
    }
    ctx->pc = 0x202F8Cu;
    // 0x202f8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x202F8Cu;
    {
        const bool branch_taken_0x202f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F8Cu;
        // 0x202f90: 0x84e30088  lh          $v1, 0x88($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f8c) {
            ctx->pc = 0x202FD8u;
            goto label_202fd8;
        }
    }
    ctx->pc = 0x202F94u;
    // 0x202f94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202F94u;
    {
        const bool branch_taken_0x202f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F94u;
        // 0x202f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f94) {
            ctx->pc = 0x202FA8u;
            goto label_202fa8;
        }
    }
    ctx->pc = 0x202F9Cu;
    // 0x202f9c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x202F9Cu;
    {
        const bool branch_taken_0x202f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F9Cu;
        // 0x202fa0: 0x2409000e  addiu       $t1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f9c) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202FA4u;
    // 0x202fa4: 0x0  nop
    ctx->pc = 0x202fa4u;
    // NOP
label_202fa8:
    // 0x202fa8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FA8u;
    {
        const bool branch_taken_0x202fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FA8u;
        // 0x202fac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fa8) {
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202FB0u;
    // 0x202fb0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x202FB0u;
    {
        const bool branch_taken_0x202fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB0u;
        // 0x202fb4: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb0) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202FB8u;
label_202fb8:
    // 0x202fb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FB8u;
    {
        const bool branch_taken_0x202fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB8u;
        // 0x202fbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb8) {
            ctx->pc = 0x202FC8u;
            goto label_202fc8;
        }
    }
    ctx->pc = 0x202FC0u;
    // 0x202fc0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x202FC0u;
    {
        const bool branch_taken_0x202fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FC0u;
        // 0x202fc4: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fc0) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202FC8u;
label_202fc8:
    // 0x202fc8: 0x50620077  beql        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x202FC8u;
    {
        const bool branch_taken_0x202fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202fc8) {
            ctx->pc = 0x202FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202FC8u;
            // 0x202fcc: 0x2409000f  addiu       $t1, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202FD0u;
    // 0x202fd0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x202FD0u;
    {
        const bool branch_taken_0x202fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FD0u;
        // 0x202fd4: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fd0) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x202FD8u;
label_202fd8:
    // 0x202fd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FD8u;
    {
        const bool branch_taken_0x202fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FD8u;
        // 0x202fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fd8) {
            ctx->pc = 0x202FE8u;
            goto label_202fe8;
        }
    }
    ctx->pc = 0x202FE0u;
    // 0x202fe0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x202FE0u;
    {
        const bool branch_taken_0x202fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE0u;
        // 0x202fe4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe0) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202FE8u;
label_202fe8:
    // 0x202fe8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FE8u;
    {
        const bool branch_taken_0x202fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE8u;
        // 0x202fec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe8) {
            ctx->pc = 0x202FF8u;
            goto label_202ff8;
        }
    }
    ctx->pc = 0x202FF0u;
    // 0x202ff0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x202FF0u;
    {
        const bool branch_taken_0x202ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FF0u;
        // 0x202ff4: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ff0) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x202FF8u;
label_202ff8:
    // 0x202ff8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202FF8u;
    {
        const bool branch_taken_0x202ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FF8u;
        // 0x202ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ff8) {
            ctx->pc = 0x203008u;
            goto label_203008;
        }
    }
    ctx->pc = 0x203000u;
    // 0x203000: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x203000u;
    {
        const bool branch_taken_0x203000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203000u;
        // 0x203004: 0x2409000d  addiu       $t1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203000) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203008u;
label_203008:
    // 0x203008: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x203008u;
    {
        const bool branch_taken_0x203008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203008) {
            ctx->pc = 0x20300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203008u;
            // 0x20300c: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203010u;
    // 0x203010: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x203010u;
    {
        const bool branch_taken_0x203010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203010u;
        // 0x203014: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203010) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x203018u;
label_203018:
    // 0x203018: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x203018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x20301c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20301Cu;
    {
        const bool branch_taken_0x20301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20301Cu;
        // 0x203020: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20301c) {
            ctx->pc = 0x203068u;
            goto label_203068;
        }
    }
    ctx->pc = 0x203024u;
    // 0x203024: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203028: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203028u;
    {
        const bool branch_taken_0x203028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203028u;
        // 0x20302c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203028) {
            ctx->pc = 0x203038u;
            goto label_203038;
        }
    }
    ctx->pc = 0x203030u;
    // 0x203030: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x203030u;
    {
        const bool branch_taken_0x203030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203030u;
        // 0x203034: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203030) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203038u;
label_203038:
    // 0x203038: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203038u;
    {
        const bool branch_taken_0x203038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203038u;
        // 0x20303c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203038) {
            ctx->pc = 0x203048u;
            goto label_203048;
        }
    }
    ctx->pc = 0x203040u;
    // 0x203040: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x203040u;
    {
        const bool branch_taken_0x203040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203040u;
        // 0x203044: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203040) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203048u;
label_203048:
    // 0x203048: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203048u;
    {
        const bool branch_taken_0x203048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203048u;
        // 0x20304c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203048) {
            ctx->pc = 0x203058u;
            goto label_203058;
        }
    }
    ctx->pc = 0x203050u;
    // 0x203050: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x203050u;
    {
        const bool branch_taken_0x203050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203050u;
        // 0x203054: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203050) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203058u;
label_203058:
    // 0x203058: 0x50620053  beql        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x203058u;
    {
        const bool branch_taken_0x203058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203058) {
            ctx->pc = 0x20305Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203058u;
            // 0x20305c: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203060u;
    // 0x203060: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x203060u;
    {
        const bool branch_taken_0x203060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203060u;
        // 0x203064: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203060) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x203068u;
label_203068:
    // 0x203068: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x203068u;
    {
        const bool branch_taken_0x203068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203068u;
        // 0x20306c: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203068) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x203070u;
    // 0x203070: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203074: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203074u;
    {
        const bool branch_taken_0x203074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203074u;
        // 0x203078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203074) {
            ctx->pc = 0x203088u;
            goto label_203088;
        }
    }
    ctx->pc = 0x20307Cu;
    // 0x20307c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x20307Cu;
    {
        const bool branch_taken_0x20307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20307c) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203084u;
    // 0x203084: 0x0  nop
    ctx->pc = 0x203084u;
    // NOP
label_203088:
    // 0x203088: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203088u;
    {
        const bool branch_taken_0x203088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203088u;
        // 0x20308c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203088) {
            ctx->pc = 0x203098u;
            goto label_203098;
        }
    }
    ctx->pc = 0x203090u;
    // 0x203090: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x203090u;
    {
        const bool branch_taken_0x203090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203090u;
        // 0x203094: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203090) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203098u;
label_203098:
    // 0x203098: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203098u;
    {
        const bool branch_taken_0x203098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203098u;
        // 0x20309c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203098) {
            ctx->pc = 0x2030A8u;
            goto label_2030a8;
        }
    }
    ctx->pc = 0x2030A0u;
    // 0x2030a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2030A0u;
    {
        const bool branch_taken_0x2030a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A0u;
        // 0x2030a4: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a0) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x2030A8u;
label_2030a8:
    // 0x2030a8: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2030A8u;
    {
        const bool branch_taken_0x2030a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2030a8) {
            ctx->pc = 0x2030ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2030A8u;
            // 0x2030ac: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x2030B0u;
    // 0x2030b0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2030B0u;
    {
        const bool branch_taken_0x2030b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030B0u;
        // 0x2030b4: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030b0) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x2030B8u;
label_2030b8:
    // 0x2030b8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2030B8u;
    {
        const bool branch_taken_0x2030b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2030BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030B8u;
        // 0x2030bc: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030b8) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x2030C0u;
    // 0x2030c0: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x2030c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2030c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2030c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2030c8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2030C8u;
    {
        const bool branch_taken_0x2030c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030C8u;
        // 0x2030cc: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030c8) {
            ctx->pc = 0x2031B0u;
            goto label_2031b0;
        }
    }
    ctx->pc = 0x2030D0u;
    // 0x2030d0: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x2030d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x2030d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2030D4u;
    {
        const bool branch_taken_0x2030d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2030D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030D4u;
        // 0x2030d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030d4) {
            ctx->pc = 0x2030E8u;
            goto label_2030e8;
        }
    }
    ctx->pc = 0x2030DCu;
    // 0x2030dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2030DCu;
    {
        const bool branch_taken_0x2030dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030DCu;
        // 0x2030e0: 0x24090012  addiu       $t1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030dc) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x2030E4u;
    // 0x2030e4: 0x0  nop
    ctx->pc = 0x2030e4u;
    // NOP
label_2030e8:
    // 0x2030e8: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2030E8u;
    {
        const bool branch_taken_0x2030e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2030e8) {
            ctx->pc = 0x2030ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2030E8u;
            // 0x2030ec: 0x24090013  addiu       $t1, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x2030F0u;
    // 0x2030f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2030F0u;
    {
        const bool branch_taken_0x2030f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030F0u;
        // 0x2030f4: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030f0) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x2030F8u;
label_2030f8:
    // 0x2030f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2030F8u;
    {
        const bool branch_taken_0x2030f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030F8u;
        // 0x2030fc: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030f8) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x203100u;
    // 0x203100: 0x90e201ff  lbu         $v0, 0x1FF($a3)
    ctx->pc = 0x203100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 511)));
    // 0x203104: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x203104u;
    {
        const bool branch_taken_0x203104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203104u;
        // 0x203108: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203104) {
            ctx->pc = 0x2031B0u;
            goto label_2031b0;
        }
    }
    ctx->pc = 0x20310Cu;
    // 0x20310c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20310cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203110: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x203110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203114: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203114u;
    {
        const bool branch_taken_0x203114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203114u;
        // 0x203118: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203114) {
            ctx->pc = 0x2031B0u;
            goto label_2031b0;
        }
    }
    ctx->pc = 0x20311Cu;
    // 0x20311c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x20311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203120: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x203120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x203124: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x203124u;
    {
        const bool branch_taken_0x203124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203124) {
            ctx->pc = 0x203128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203124u;
            // 0x203128: 0x84e80088  lh          $t0, 0x88($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203170u;
            goto label_203170;
        }
    }
    ctx->pc = 0x20312Cu;
    // 0x20312c: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x20312cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203130: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203130u;
    {
        const bool branch_taken_0x203130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203130u;
        // 0x203134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203130) {
            ctx->pc = 0x203140u;
            goto label_203140;
        }
    }
    ctx->pc = 0x203138u;
    // 0x203138: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x203138u;
    {
        const bool branch_taken_0x203138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203138u;
        // 0x20313c: 0x2409001c  addiu       $t1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203138) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203140u;
label_203140:
    // 0x203140: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203140u;
    {
        const bool branch_taken_0x203140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203140u;
        // 0x203144: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203140) {
            ctx->pc = 0x203150u;
            goto label_203150;
        }
    }
    ctx->pc = 0x203148u;
    // 0x203148: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203148u;
    {
        const bool branch_taken_0x203148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203148u;
        // 0x20314c: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203148) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203150u;
label_203150:
    // 0x203150: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203150u;
    {
        const bool branch_taken_0x203150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203150u;
        // 0x203154: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203150) {
            ctx->pc = 0x203160u;
            goto label_203160;
        }
    }
    ctx->pc = 0x203158u;
    // 0x203158: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x203158u;
    {
        const bool branch_taken_0x203158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203158u;
        // 0x20315c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203158) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203160u;
label_203160:
    // 0x203160: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203160u;
    {
        const bool branch_taken_0x203160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203160) {
            ctx->pc = 0x203164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203160u;
            // 0x203164: 0x2409001d  addiu       $t1, $zero, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203168u;
    // 0x203168: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203168u;
    {
        const bool branch_taken_0x203168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203168u;
        // 0x20316c: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203168) {
            ctx->pc = 0x2031ACu;
            goto label_2031ac;
        }
    }
    ctx->pc = 0x203170u;
label_203170:
    // 0x203170: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203170u;
    {
        const bool branch_taken_0x203170 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x203174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203170u;
        // 0x203174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203170) {
            ctx->pc = 0x203180u;
            goto label_203180;
        }
    }
    ctx->pc = 0x203178u;
    // 0x203178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203178u;
    {
        const bool branch_taken_0x203178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203178u;
        // 0x20317c: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203178) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203180u;
label_203180:
    // 0x203180: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203180u;
    {
        const bool branch_taken_0x203180 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203180u;
        // 0x203184: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203180) {
            ctx->pc = 0x203190u;
            goto label_203190;
        }
    }
    ctx->pc = 0x203188u;
    // 0x203188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x203188u;
    {
        const bool branch_taken_0x203188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203188u;
        // 0x20318c: 0x2409001a  addiu       $t1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203188) {
            ctx->pc = 0x2031A8u;
            goto label_2031a8;
        }
    }
    ctx->pc = 0x203190u;
label_203190:
    // 0x203190: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203194: 0x39040002  xori        $a0, $t0, 0x2
    ctx->pc = 0x203194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x203198: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x203198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x20319c: 0xa4480a  movz        $t1, $a1, $a0
    ctx->pc = 0x20319cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x2031a0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2031a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2031a4: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x2031a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_2031a8:
    // 0x2031a8: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_2031ac:
    // 0x2031ac: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x2031acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_2031b0:
    // 0x2031b0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2031b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2031b4: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x2031b4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2031b8: 0xa46901c0  sh          $t1, 0x1C0($v1)
    ctx->pc = 0x2031b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 9));
    // 0x2031bc: 0x94e2003c  lhu         $v0, 0x3C($a3)
    ctx->pc = 0x2031bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2031c0: 0x8ce400cc  lw          $a0, 0xCC($a3)
    ctx->pc = 0x2031c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2031c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2031c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2031cc: 0xac4401d0  sw          $a0, 0x1D0($v0)
    ctx->pc = 0x2031ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 4));
    // 0x2031d0: 0x94e3003c  lhu         $v1, 0x3C($a3)
    ctx->pc = 0x2031d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2031d4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2031d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2031dc: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x2031dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2031e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2031e4: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x2031e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_2031e8:
    // 0x2031e8: 0x154809b4  bne         $t2, $t0, . + 4 + (0x9B4 << 2)
    ctx->pc = 0x2031E8u;
    {
        const bool branch_taken_0x2031e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        ctx->pc = 0x2031ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031E8u;
        // 0x2031ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2031F0u;
    // 0x2031f0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2031f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2031f4: 0x10000758  b           . + 4 + (0x758 << 2)
    ctx->pc = 0x2031F4u;
    {
        const bool branch_taken_0x2031f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2031f4) {
            ctx->pc = 0x204F58u;
            goto label_204f58;
        }
    }
    ctx->pc = 0x2031FCu;
    // 0x2031fc: 0x0  nop
    ctx->pc = 0x2031fcu;
    // NOP
label_203200:
    // 0x203200: 0x94ea003c  lhu         $t2, 0x3C($a3)
    ctx->pc = 0x203200u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203204: 0x264b0002  addiu       $t3, $s2, 0x2
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x203208: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x203208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x20320c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x20320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x203210: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x203214: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x203218: 0x248301d0  addiu       $v1, $a0, 0x1D0
    ctx->pc = 0x203218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x20321c: 0x844801c0  lh          $t0, 0x1C0($v0)
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x203220: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x203220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203224: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203228: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x203228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20322c: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x20322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203230: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x203230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203234: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203234u;
    {
        const bool branch_taken_0x203234 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x203238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203234u;
        // 0x203238: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203234) {
            ctx->pc = 0x203258u;
            goto label_203258;
        }
    }
    ctx->pc = 0x20323Cu;
    // 0x20323c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x203240: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x203240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203244: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203244u;
    {
        const bool branch_taken_0x203244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x203248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203244u;
        // 0x203248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203244) {
            ctx->pc = 0x20325Cu;
            goto label_20325c;
        }
    }
    ctx->pc = 0x20324Cu;
    // 0x20324c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x20324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203250: 0x50820002  beql        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203250u;
    {
        const bool branch_taken_0x203250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x203250) {
            ctx->pc = 0x203254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203250u;
            // 0x203254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20325Cu;
            goto label_20325c;
        }
    }
    ctx->pc = 0x203258u;
label_203258:
    // 0x203258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20325c:
    // 0x20325c: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x20325Cu;
    {
        const bool branch_taken_0x20325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20325c) {
            ctx->pc = 0x203508u;
            goto label_203508;
        }
    }
    ctx->pc = 0x203264u;
    // 0x203264: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x203264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x203268: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x203268u;
    {
        const bool branch_taken_0x203268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203268u;
        // 0x20326c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203268) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203270u;
    // 0x203270: 0xdce201f8  ld          $v0, 0x1F8($a3)
    ctx->pc = 0x203270u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 504)));
    // 0x203274: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x203274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x203278: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20327c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x20327cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x203280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x203280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x203284: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x203284u;
    {
        const bool branch_taken_0x203284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203284) {
            ctx->pc = 0x203288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203284u;
            // 0x203288: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203418u;
            goto label_203418;
        }
    }
    ctx->pc = 0x20328Cu;
    // 0x20328c: 0x86430080  lh          $v1, 0x80($s2)
    ctx->pc = 0x20328cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203290: 0x28622aaa  slti        $v0, $v1, 0x2AAA
    ctx->pc = 0x203290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203294: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x203294u;
    {
        const bool branch_taken_0x203294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203294u;
        // 0x203298: 0x28625556  slti        $v0, $v1, 0x5556 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21846) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203294) {
            ctx->pc = 0x2033D8u;
            goto label_2033d8;
        }
    }
    ctx->pc = 0x20329Cu;
    // 0x20329c: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x20329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2032a0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2032a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2032a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2032A4u;
    {
        const bool branch_taken_0x2032a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032A4u;
        // 0x2032a8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032a4) {
            ctx->pc = 0x203338u;
            goto label_203338;
        }
    }
    ctx->pc = 0x2032ACu;
    // 0x2032ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2032ACu;
    {
        const bool branch_taken_0x2032ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032ACu;
        // 0x2032b0: 0x84e30088  lh          $v1, 0x88($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032ac) {
            ctx->pc = 0x2032F8u;
            goto label_2032f8;
        }
    }
    ctx->pc = 0x2032B4u;
    // 0x2032b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2032B4u;
    {
        const bool branch_taken_0x2032b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2032B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032B4u;
        // 0x2032b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032b4) {
            ctx->pc = 0x2032C8u;
            goto label_2032c8;
        }
    }
    ctx->pc = 0x2032BCu;
    // 0x2032bc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2032BCu;
    {
        const bool branch_taken_0x2032bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032BCu;
        // 0x2032c0: 0x2409000e  addiu       $t1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032bc) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2032C4u;
    // 0x2032c4: 0x0  nop
    ctx->pc = 0x2032c4u;
    // NOP
label_2032c8:
    // 0x2032c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2032C8u;
    {
        const bool branch_taken_0x2032c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032C8u;
        // 0x2032cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c8) {
            ctx->pc = 0x2032D8u;
            goto label_2032d8;
        }
    }
    ctx->pc = 0x2032D0u;
    // 0x2032d0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2032D0u;
    {
        const bool branch_taken_0x2032d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D0u;
        // 0x2032d4: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032d0) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2032D8u;
label_2032d8:
    // 0x2032d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2032D8u;
    {
        const bool branch_taken_0x2032d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2032DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D8u;
        // 0x2032dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032d8) {
            ctx->pc = 0x2032E8u;
            goto label_2032e8;
        }
    }
    ctx->pc = 0x2032E0u;
    // 0x2032e0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2032E0u;
    {
        const bool branch_taken_0x2032e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032E0u;
        // 0x2032e4: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032e0) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2032E8u;
label_2032e8:
    // 0x2032e8: 0x50620077  beql        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2032E8u;
    {
        const bool branch_taken_0x2032e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2032e8) {
            ctx->pc = 0x2032ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2032E8u;
            // 0x2032ec: 0x2409000f  addiu       $t1, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2032F0u;
    // 0x2032f0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2032F0u;
    {
        const bool branch_taken_0x2032f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F0u;
        // 0x2032f4: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032f0) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x2032F8u;
label_2032f8:
    // 0x2032f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2032F8u;
    {
        const bool branch_taken_0x2032f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F8u;
        // 0x2032fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032f8) {
            ctx->pc = 0x203308u;
            goto label_203308;
        }
    }
    ctx->pc = 0x203300u;
    // 0x203300: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x203300u;
    {
        const bool branch_taken_0x203300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203300u;
        // 0x203304: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203300) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203308u;
label_203308:
    // 0x203308: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203308u;
    {
        const bool branch_taken_0x203308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203308u;
        // 0x20330c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203308) {
            ctx->pc = 0x203318u;
            goto label_203318;
        }
    }
    ctx->pc = 0x203310u;
    // 0x203310: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x203310u;
    {
        const bool branch_taken_0x203310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203310u;
        // 0x203314: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203310) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203318u;
label_203318:
    // 0x203318: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203318u;
    {
        const bool branch_taken_0x203318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203318u;
        // 0x20331c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203318) {
            ctx->pc = 0x203328u;
            goto label_203328;
        }
    }
    ctx->pc = 0x203320u;
    // 0x203320: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x203320u;
    {
        const bool branch_taken_0x203320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203320u;
        // 0x203324: 0x2409000d  addiu       $t1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203320) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203328u;
label_203328:
    // 0x203328: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x203328u;
    {
        const bool branch_taken_0x203328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203328) {
            ctx->pc = 0x20332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203328u;
            // 0x20332c: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203330u;
    // 0x203330: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x203330u;
    {
        const bool branch_taken_0x203330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203330) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x203338u;
label_203338:
    // 0x203338: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x203338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x20333c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20333Cu;
    {
        const bool branch_taken_0x20333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20333Cu;
        // 0x203340: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20333c) {
            ctx->pc = 0x203388u;
            goto label_203388;
        }
    }
    ctx->pc = 0x203344u;
    // 0x203344: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203348: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203348u;
    {
        const bool branch_taken_0x203348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203348u;
        // 0x20334c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203348) {
            ctx->pc = 0x203358u;
            goto label_203358;
        }
    }
    ctx->pc = 0x203350u;
    // 0x203350: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x203350u;
    {
        const bool branch_taken_0x203350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203350u;
        // 0x203354: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203350) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203358u;
label_203358:
    // 0x203358: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203358u;
    {
        const bool branch_taken_0x203358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203358u;
        // 0x20335c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203358) {
            ctx->pc = 0x203368u;
            goto label_203368;
        }
    }
    ctx->pc = 0x203360u;
    // 0x203360: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x203360u;
    {
        const bool branch_taken_0x203360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203360u;
        // 0x203364: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203360) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203368u;
label_203368:
    // 0x203368: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203368u;
    {
        const bool branch_taken_0x203368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203368u;
        // 0x20336c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203368) {
            ctx->pc = 0x203378u;
            goto label_203378;
        }
    }
    ctx->pc = 0x203370u;
    // 0x203370: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x203370u;
    {
        const bool branch_taken_0x203370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203370u;
        // 0x203374: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203370) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203378u;
label_203378:
    // 0x203378: 0x50620053  beql        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x203378u;
    {
        const bool branch_taken_0x203378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203378) {
            ctx->pc = 0x20337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203378u;
            // 0x20337c: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203380u;
    // 0x203380: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x203380u;
    {
        const bool branch_taken_0x203380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203380u;
        // 0x203384: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203380) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x203388u;
label_203388:
    // 0x203388: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x203388u;
    {
        const bool branch_taken_0x203388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203388u;
        // 0x20338c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203388) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x203390u;
    // 0x203390: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203394: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203394u;
    {
        const bool branch_taken_0x203394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203394u;
        // 0x203398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203394) {
            ctx->pc = 0x2033A8u;
            goto label_2033a8;
        }
    }
    ctx->pc = 0x20339Cu;
    // 0x20339c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x20339Cu;
    {
        const bool branch_taken_0x20339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20339Cu;
        // 0x2033a0: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20339c) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2033A4u;
    // 0x2033a4: 0x0  nop
    ctx->pc = 0x2033a4u;
    // NOP
label_2033a8:
    // 0x2033a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2033A8u;
    {
        const bool branch_taken_0x2033a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2033ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A8u;
        // 0x2033ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a8) {
            ctx->pc = 0x2033B8u;
            goto label_2033b8;
        }
    }
    ctx->pc = 0x2033B0u;
    // 0x2033b0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2033B0u;
    {
        const bool branch_taken_0x2033b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033B0u;
        // 0x2033b4: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033b0) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2033B8u;
label_2033b8:
    // 0x2033b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2033B8u;
    {
        const bool branch_taken_0x2033b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2033BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033B8u;
        // 0x2033bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033b8) {
            ctx->pc = 0x2033C8u;
            goto label_2033c8;
        }
    }
    ctx->pc = 0x2033C0u;
    // 0x2033c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2033C0u;
    {
        const bool branch_taken_0x2033c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033C0u;
        // 0x2033c4: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033c0) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2033C8u;
label_2033c8:
    // 0x2033c8: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2033C8u;
    {
        const bool branch_taken_0x2033c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2033c8) {
            ctx->pc = 0x2033CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2033C8u;
            // 0x2033cc: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2033D0u;
    // 0x2033d0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2033D0u;
    {
        const bool branch_taken_0x2033d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033D0u;
        // 0x2033d4: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033d0) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x2033D8u;
label_2033d8:
    // 0x2033d8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2033D8u;
    {
        const bool branch_taken_0x2033d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2033DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033D8u;
        // 0x2033dc: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033d8) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x2033E0u;
    // 0x2033e0: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x2033e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2033e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2033e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2033e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2033E8u;
    {
        const bool branch_taken_0x2033e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033E8u;
        // 0x2033ec: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033e8) {
            ctx->pc = 0x2034D0u;
            goto label_2034d0;
        }
    }
    ctx->pc = 0x2033F0u;
    // 0x2033f0: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x2033f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x2033f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2033F4u;
    {
        const bool branch_taken_0x2033f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2033F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033F4u;
        // 0x2033f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033f4) {
            ctx->pc = 0x203408u;
            goto label_203408;
        }
    }
    ctx->pc = 0x2033FCu;
    // 0x2033fc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2033FCu;
    {
        const bool branch_taken_0x2033fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033FCu;
        // 0x203400: 0x24090012  addiu       $t1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033fc) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203404u;
    // 0x203404: 0x0  nop
    ctx->pc = 0x203404u;
    // NOP
label_203408:
    // 0x203408: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x203408u;
    {
        const bool branch_taken_0x203408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203408) {
            ctx->pc = 0x20340Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203408u;
            // 0x20340c: 0x24090013  addiu       $t1, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203410u;
    // 0x203410: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x203410u;
    {
        const bool branch_taken_0x203410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203410u;
        // 0x203414: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203410) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x203418u;
label_203418:
    // 0x203418: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x203418u;
    {
        const bool branch_taken_0x203418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203418u;
        // 0x20341c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203418) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x203420u;
    // 0x203420: 0x90e201ff  lbu         $v0, 0x1FF($a3)
    ctx->pc = 0x203420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 511)));
    // 0x203424: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x203424u;
    {
        const bool branch_taken_0x203424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203424u;
        // 0x203428: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203424) {
            ctx->pc = 0x2034D0u;
            goto label_2034d0;
        }
    }
    ctx->pc = 0x20342Cu;
    // 0x20342c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20342cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203430: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x203430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203434: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203434u;
    {
        const bool branch_taken_0x203434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203434u;
        // 0x203438: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203434) {
            ctx->pc = 0x2034D0u;
            goto label_2034d0;
        }
    }
    ctx->pc = 0x20343Cu;
    // 0x20343c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203440: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x203440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x203444: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x203444u;
    {
        const bool branch_taken_0x203444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203444) {
            ctx->pc = 0x203448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203444u;
            // 0x203448: 0x84e80088  lh          $t0, 0x88($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203490u;
            goto label_203490;
        }
    }
    ctx->pc = 0x20344Cu;
    // 0x20344c: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x20344cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203450: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203450u;
    {
        const bool branch_taken_0x203450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203450u;
        // 0x203454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203450) {
            ctx->pc = 0x203460u;
            goto label_203460;
        }
    }
    ctx->pc = 0x203458u;
    // 0x203458: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x203458u;
    {
        const bool branch_taken_0x203458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203458u;
        // 0x20345c: 0x2409001c  addiu       $t1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203458) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203460u;
label_203460:
    // 0x203460: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203460u;
    {
        const bool branch_taken_0x203460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203460u;
        // 0x203464: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203460) {
            ctx->pc = 0x203470u;
            goto label_203470;
        }
    }
    ctx->pc = 0x203468u;
    // 0x203468: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203468u;
    {
        const bool branch_taken_0x203468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203468u;
        // 0x20346c: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203468) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203470u;
    {
        const bool branch_taken_0x203470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203470u;
        // 0x203474: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203470) {
            ctx->pc = 0x203480u;
            goto label_203480;
        }
    }
    ctx->pc = 0x203478u;
    // 0x203478: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x203478u;
    {
        const bool branch_taken_0x203478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203478u;
        // 0x20347c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203478) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203480u;
label_203480:
    // 0x203480: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203480u;
    {
        const bool branch_taken_0x203480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203480) {
            ctx->pc = 0x203484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203480u;
            // 0x203484: 0x2409001d  addiu       $t1, $zero, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x203488u;
    // 0x203488: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203488u;
    {
        const bool branch_taken_0x203488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203488u;
        // 0x20348c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203488) {
            ctx->pc = 0x2034CCu;
            goto label_2034cc;
        }
    }
    ctx->pc = 0x203490u;
label_203490:
    // 0x203490: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203490u;
    {
        const bool branch_taken_0x203490 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x203494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203490u;
        // 0x203494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203490) {
            ctx->pc = 0x2034A0u;
            goto label_2034a0;
        }
    }
    ctx->pc = 0x203498u;
    // 0x203498: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203498u;
    {
        const bool branch_taken_0x203498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203498u;
        // 0x20349c: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203498) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2034A0u;
label_2034a0:
    // 0x2034a0: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034A0u;
    {
        const bool branch_taken_0x2034a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A0u;
        // 0x2034a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a0) {
            ctx->pc = 0x2034B0u;
            goto label_2034b0;
        }
    }
    ctx->pc = 0x2034A8u;
    // 0x2034a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A8u;
        // 0x2034ac: 0x2409001a  addiu       $t1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2034C8u;
            goto label_2034c8;
        }
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2034b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2034b4: 0x39040002  xori        $a0, $t0, 0x2
    ctx->pc = 0x2034b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x2034b8: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x2034b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x2034bc: 0xa4480a  movz        $t1, $a1, $a0
    ctx->pc = 0x2034bcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x2034c0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2034c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2034c4: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x2034c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_2034c8:
    // 0x2034c8: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2034c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_2034cc:
    // 0x2034cc: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x2034ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_2034d0:
    // 0x2034d0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2034d4: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x2034d4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2034d8: 0xa46901c0  sh          $t1, 0x1C0($v1)
    ctx->pc = 0x2034d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 9));
    // 0x2034dc: 0x94e2003c  lhu         $v0, 0x3C($a3)
    ctx->pc = 0x2034dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2034e0: 0x8ce400cc  lw          $a0, 0xCC($a3)
    ctx->pc = 0x2034e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2034e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2034e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2034e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2034ec: 0xac4401d0  sw          $a0, 0x1D0($v0)
    ctx->pc = 0x2034ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 4));
    // 0x2034f0: 0x94e3003c  lhu         $v1, 0x3C($a3)
    ctx->pc = 0x2034f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2034f4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2034f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2034f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2034fc: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x2034fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203500: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x203504: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x203504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_203508:
    // 0x203508: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20350c: 0x450008eb  bc1f        . + 4 + (0x8EB << 2)
    ctx->pc = 0x20350Cu;
    {
        const bool branch_taken_0x20350c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20350Cu;
        // 0x203510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20350c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203514u;
    // 0x203514: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203518: 0x1102053f  beq         $t0, $v0, . + 4 + (0x53F << 2)
    ctx->pc = 0x203518u;
    {
        const bool branch_taken_0x203518 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203518u;
        // 0x20351c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203518) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x203520u;
    // 0x203520: 0x150208e7  bne         $t0, $v0, . + 4 + (0x8E7 << 2)
    ctx->pc = 0x203520u;
    {
        const bool branch_taken_0x203520 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203520u;
        // 0x203524: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203520) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x203528u;
    // 0x203528: 0x100008e4  b           . + 4 + (0x8E4 << 2)
    ctx->pc = 0x203528u;
    {
        const bool branch_taken_0x203528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203528u;
        // 0x20352c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203528) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203530u;
label_203530:
    // 0x203530: 0x94ea003c  lhu         $t2, 0x3C($a3)
    ctx->pc = 0x203530u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203534: 0x264b0002  addiu       $t3, $s2, 0x2
    ctx->pc = 0x203534u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x203538: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x203538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x20353c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x20353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x203540: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x203540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x203544: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x203544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x203548: 0x248301d0  addiu       $v1, $a0, 0x1D0
    ctx->pc = 0x203548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x20354c: 0x844801c0  lh          $t0, 0x1C0($v0)
    ctx->pc = 0x20354cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x203550: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203554: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x203554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203558: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20355c: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x20355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203560: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x203560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203564: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203564u;
    {
        const bool branch_taken_0x203564 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x203568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203564u;
        // 0x203568: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203564) {
            ctx->pc = 0x203588u;
            goto label_203588;
        }
    }
    ctx->pc = 0x20356Cu;
    // 0x20356c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x203570: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x203570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203574: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203574u;
    {
        const bool branch_taken_0x203574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x203578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203574u;
        // 0x203578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203574) {
            ctx->pc = 0x20358Cu;
            goto label_20358c;
        }
    }
    ctx->pc = 0x20357Cu;
    // 0x20357c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x20357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203580: 0x50820002  beql        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203580u;
    {
        const bool branch_taken_0x203580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x203580) {
            ctx->pc = 0x203584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203580u;
            // 0x203584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20358Cu;
            goto label_20358c;
        }
    }
    ctx->pc = 0x203588u;
label_203588:
    // 0x203588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20358c:
    // 0x20358c: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x20358Cu;
    {
        const bool branch_taken_0x20358c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20358c) {
            ctx->pc = 0x203838u;
            goto label_203838;
        }
    }
    ctx->pc = 0x203594u;
    // 0x203594: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x203594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x203598: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x203598u;
    {
        const bool branch_taken_0x203598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203598u;
        // 0x20359c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203598) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2035A0u;
    // 0x2035a0: 0xdce201f8  ld          $v0, 0x1F8($a3)
    ctx->pc = 0x2035a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 504)));
    // 0x2035a4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2035a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2035a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2035ac: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2035acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2035b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2035b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2035b4: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x2035B4u;
    {
        const bool branch_taken_0x2035b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2035b4) {
            ctx->pc = 0x2035B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2035B4u;
            // 0x2035b8: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203748u;
            goto label_203748;
        }
    }
    ctx->pc = 0x2035BCu;
    // 0x2035bc: 0x86430080  lh          $v1, 0x80($s2)
    ctx->pc = 0x2035bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2035c0: 0x28622aaa  slti        $v0, $v1, 0x2AAA
    ctx->pc = 0x2035c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2035c4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2035C4u;
    {
        const bool branch_taken_0x2035c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035C4u;
        // 0x2035c8: 0x28625556  slti        $v0, $v1, 0x5556 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21846) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035c4) {
            ctx->pc = 0x203708u;
            goto label_203708;
        }
    }
    ctx->pc = 0x2035CCu;
    // 0x2035cc: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2035d0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2035d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2035d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2035D4u;
    {
        const bool branch_taken_0x2035d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035D4u;
        // 0x2035d8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035d4) {
            ctx->pc = 0x203668u;
            goto label_203668;
        }
    }
    ctx->pc = 0x2035DCu;
    // 0x2035dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035DCu;
        // 0x2035e0: 0x84e30088  lh          $v1, 0x88($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x203628u;
            goto label_203628;
        }
    }
    ctx->pc = 0x2035E4u;
    // 0x2035e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2035E4u;
    {
        const bool branch_taken_0x2035e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2035E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035E4u;
        // 0x2035e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035e4) {
            ctx->pc = 0x2035F8u;
            goto label_2035f8;
        }
    }
    ctx->pc = 0x2035ECu;
    // 0x2035ec: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2035ECu;
    {
        const bool branch_taken_0x2035ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035ECu;
        // 0x2035f0: 0x2409000e  addiu       $t1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035ec) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2035F4u;
    // 0x2035f4: 0x0  nop
    ctx->pc = 0x2035f4u;
    // NOP
label_2035f8:
    // 0x2035f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2035F8u;
    {
        const bool branch_taken_0x2035f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2035FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035F8u;
        // 0x2035fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035f8) {
            ctx->pc = 0x203608u;
            goto label_203608;
        }
    }
    ctx->pc = 0x203600u;
    // 0x203600: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x203600u;
    {
        const bool branch_taken_0x203600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203600u;
        // 0x203604: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203600) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203608u;
label_203608:
    // 0x203608: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203608u;
    {
        const bool branch_taken_0x203608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203608u;
        // 0x20360c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203608) {
            ctx->pc = 0x203618u;
            goto label_203618;
        }
    }
    ctx->pc = 0x203610u;
    // 0x203610: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x203610u;
    {
        const bool branch_taken_0x203610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203610u;
        // 0x203614: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203610) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203618u;
label_203618:
    // 0x203618: 0x50620077  beql        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x203618u;
    {
        const bool branch_taken_0x203618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203618) {
            ctx->pc = 0x20361Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203618u;
            // 0x20361c: 0x2409000f  addiu       $t1, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203620u;
    // 0x203620: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x203620u;
    {
        const bool branch_taken_0x203620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203620u;
        // 0x203624: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203620) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x203628u;
label_203628:
    // 0x203628: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203628u;
    {
        const bool branch_taken_0x203628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203628u;
        // 0x20362c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203628) {
            ctx->pc = 0x203638u;
            goto label_203638;
        }
    }
    ctx->pc = 0x203630u;
    // 0x203630: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x203630u;
    {
        const bool branch_taken_0x203630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203630u;
        // 0x203634: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203630) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203638u;
label_203638:
    // 0x203638: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203638u;
    {
        const bool branch_taken_0x203638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203638u;
        // 0x20363c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203638) {
            ctx->pc = 0x203648u;
            goto label_203648;
        }
    }
    ctx->pc = 0x203640u;
    // 0x203640: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x203640u;
    {
        const bool branch_taken_0x203640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203640u;
        // 0x203644: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203640) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203648u;
label_203648:
    // 0x203648: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203648u;
    {
        const bool branch_taken_0x203648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203648u;
        // 0x20364c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203648) {
            ctx->pc = 0x203658u;
            goto label_203658;
        }
    }
    ctx->pc = 0x203650u;
    // 0x203650: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x203650u;
    {
        const bool branch_taken_0x203650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203650u;
        // 0x203654: 0x2409000d  addiu       $t1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203650) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203658u;
label_203658:
    // 0x203658: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x203658u;
    {
        const bool branch_taken_0x203658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203658) {
            ctx->pc = 0x20365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203658u;
            // 0x20365c: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203660u;
    // 0x203660: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x203660u;
    {
        const bool branch_taken_0x203660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203660u;
        // 0x203664: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203660) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x203668u;
label_203668:
    // 0x203668: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x203668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x20366c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20366Cu;
    {
        const bool branch_taken_0x20366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20366Cu;
        // 0x203670: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20366c) {
            ctx->pc = 0x2036B8u;
            goto label_2036b8;
        }
    }
    ctx->pc = 0x203674u;
    // 0x203674: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203678: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203678u;
    {
        const bool branch_taken_0x203678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203678u;
        // 0x20367c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203678) {
            ctx->pc = 0x203688u;
            goto label_203688;
        }
    }
    ctx->pc = 0x203680u;
    // 0x203680: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x203680u;
    {
        const bool branch_taken_0x203680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203680u;
        // 0x203684: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203680) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203688u;
label_203688:
    // 0x203688: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203688u;
    {
        const bool branch_taken_0x203688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203688u;
        // 0x20368c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203688) {
            ctx->pc = 0x203698u;
            goto label_203698;
        }
    }
    ctx->pc = 0x203690u;
    // 0x203690: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x203690u;
    {
        const bool branch_taken_0x203690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203690u;
        // 0x203694: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203690) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203698u;
label_203698:
    // 0x203698: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203698u;
    {
        const bool branch_taken_0x203698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203698u;
        // 0x20369c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203698) {
            ctx->pc = 0x2036A8u;
            goto label_2036a8;
        }
    }
    ctx->pc = 0x2036A0u;
    // 0x2036a0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2036A0u;
    {
        const bool branch_taken_0x2036a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A0u;
        // 0x2036a4: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a0) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2036A8u;
label_2036a8:
    // 0x2036a8: 0x50620053  beql        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x2036ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2036A8u;
            // 0x2036ac: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2036B0u;
    // 0x2036b0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2036B0u;
    {
        const bool branch_taken_0x2036b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036B0u;
        // 0x2036b4: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036b0) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x2036B8u;
label_2036b8:
    // 0x2036b8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2036B8u;
    {
        const bool branch_taken_0x2036b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036B8u;
        // 0x2036bc: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036b8) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x2036C0u;
    // 0x2036c0: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x2036c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x2036c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2036C4u;
    {
        const bool branch_taken_0x2036c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036C4u;
        // 0x2036c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036c4) {
            ctx->pc = 0x2036D8u;
            goto label_2036d8;
        }
    }
    ctx->pc = 0x2036CCu;
    // 0x2036cc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2036CCu;
    {
        const bool branch_taken_0x2036cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036CCu;
        // 0x2036d0: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036cc) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2036D4u;
    // 0x2036d4: 0x0  nop
    ctx->pc = 0x2036d4u;
    // NOP
label_2036d8:
    // 0x2036d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2036D8u;
    {
        const bool branch_taken_0x2036d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036D8u;
        // 0x2036dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036d8) {
            ctx->pc = 0x2036E8u;
            goto label_2036e8;
        }
    }
    ctx->pc = 0x2036E0u;
    // 0x2036e0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2036E0u;
    {
        const bool branch_taken_0x2036e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036E0u;
        // 0x2036e4: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036e0) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2036E8u;
label_2036e8:
    // 0x2036e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2036E8u;
    {
        const bool branch_taken_0x2036e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2036ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036E8u;
        // 0x2036ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036e8) {
            ctx->pc = 0x2036F8u;
            goto label_2036f8;
        }
    }
    ctx->pc = 0x2036F0u;
    // 0x2036f0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2036F0u;
    {
        const bool branch_taken_0x2036f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F0u;
        // 0x2036f4: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f0) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2036F8u;
label_2036f8:
    // 0x2036f8: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x2036FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2036F8u;
            // 0x2036fc: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203700u;
    // 0x203700: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x203700u;
    {
        const bool branch_taken_0x203700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203700u;
        // 0x203704: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203700) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x203708u;
label_203708:
    // 0x203708: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x203708u;
    {
        const bool branch_taken_0x203708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203708u;
        // 0x20370c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203708) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x203710u;
    // 0x203710: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203714: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x203714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x203718: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x203718u;
    {
        const bool branch_taken_0x203718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203718u;
        // 0x20371c: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203718) {
            ctx->pc = 0x203800u;
            goto label_203800;
        }
    }
    ctx->pc = 0x203720u;
    // 0x203720: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203724: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203724u;
    {
        const bool branch_taken_0x203724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203724u;
        // 0x203728: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203724) {
            ctx->pc = 0x203738u;
            goto label_203738;
        }
    }
    ctx->pc = 0x20372Cu;
    // 0x20372c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x20372Cu;
    {
        const bool branch_taken_0x20372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20372Cu;
        // 0x203730: 0x24090012  addiu       $t1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20372c) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203734u;
    // 0x203734: 0x0  nop
    ctx->pc = 0x203734u;
    // NOP
label_203738:
    // 0x203738: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203738) {
            ctx->pc = 0x20373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203738u;
            // 0x20373c: 0x24090013  addiu       $t1, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203740u;
    // 0x203740: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x203740u;
    {
        const bool branch_taken_0x203740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203740u;
        // 0x203744: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203740) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x203748u;
label_203748:
    // 0x203748: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x203748u;
    {
        const bool branch_taken_0x203748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203748u;
        // 0x20374c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203748) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x203750u;
    // 0x203750: 0x90e201ff  lbu         $v0, 0x1FF($a3)
    ctx->pc = 0x203750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 511)));
    // 0x203754: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x203754u;
    {
        const bool branch_taken_0x203754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203754u;
        // 0x203758: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203754) {
            ctx->pc = 0x203800u;
            goto label_203800;
        }
    }
    ctx->pc = 0x20375Cu;
    // 0x20375c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20375cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203760: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x203760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203764: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203764u;
    {
        const bool branch_taken_0x203764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203764u;
        // 0x203768: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203764) {
            ctx->pc = 0x203800u;
            goto label_203800;
        }
    }
    ctx->pc = 0x20376Cu;
    // 0x20376c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203770: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x203770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x203774: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x203774u;
    {
        const bool branch_taken_0x203774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203774) {
            ctx->pc = 0x203778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203774u;
            // 0x203778: 0x84e80088  lh          $t0, 0x88($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037C0u;
            goto label_2037c0;
        }
    }
    ctx->pc = 0x20377Cu;
    // 0x20377c: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x20377cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203780: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203780u;
    {
        const bool branch_taken_0x203780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203780u;
        // 0x203784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203780) {
            ctx->pc = 0x203790u;
            goto label_203790;
        }
    }
    ctx->pc = 0x203788u;
    // 0x203788: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x203788u;
    {
        const bool branch_taken_0x203788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203788u;
        // 0x20378c: 0x2409001c  addiu       $t1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203788) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x203790u;
label_203790:
    // 0x203790: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203790u;
    {
        const bool branch_taken_0x203790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203790u;
        // 0x203794: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203790) {
            ctx->pc = 0x2037A0u;
            goto label_2037a0;
        }
    }
    ctx->pc = 0x203798u;
    // 0x203798: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203798u;
    {
        const bool branch_taken_0x203798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203798u;
        // 0x20379c: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203798) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2037A0u;
label_2037a0:
    // 0x2037a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2037A0u;
    {
        const bool branch_taken_0x2037a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A0u;
        // 0x2037a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037a0) {
            ctx->pc = 0x2037B0u;
            goto label_2037b0;
        }
    }
    ctx->pc = 0x2037A8u;
    // 0x2037a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2037A8u;
    {
        const bool branch_taken_0x2037a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A8u;
        // 0x2037ac: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037a8) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2037B0u;
label_2037b0:
    // 0x2037b0: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2037B0u;
    {
        const bool branch_taken_0x2037b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2037b0) {
            ctx->pc = 0x2037B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2037B0u;
            // 0x2037b4: 0x2409001d  addiu       $t1, $zero, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2037B8u;
    // 0x2037b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2037B8u;
    {
        const bool branch_taken_0x2037b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B8u;
        // 0x2037bc: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037b8) {
            ctx->pc = 0x2037FCu;
            goto label_2037fc;
        }
    }
    ctx->pc = 0x2037C0u;
label_2037c0:
    // 0x2037c0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2037C0u;
    {
        const bool branch_taken_0x2037c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2037C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037C0u;
        // 0x2037c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037c0) {
            ctx->pc = 0x2037D0u;
            goto label_2037d0;
        }
    }
    ctx->pc = 0x2037C8u;
    // 0x2037c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2037C8u;
    {
        const bool branch_taken_0x2037c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037C8u;
        // 0x2037cc: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037c8) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2037D0u;
label_2037d0:
    // 0x2037d0: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2037D0u;
    {
        const bool branch_taken_0x2037d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D0u;
        // 0x2037d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d0) {
            ctx->pc = 0x2037E0u;
            goto label_2037e0;
        }
    }
    ctx->pc = 0x2037D8u;
    // 0x2037d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2037D8u;
    {
        const bool branch_taken_0x2037d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D8u;
        // 0x2037dc: 0x2409001a  addiu       $t1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d8) {
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2037E0u;
label_2037e0:
    // 0x2037e0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2037e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2037e4: 0x39040002  xori        $a0, $t0, 0x2
    ctx->pc = 0x2037e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x2037e8: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x2037e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x2037ec: 0xa4480a  movz        $t1, $a1, $a0
    ctx->pc = 0x2037ecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x2037f0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2037f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2037f4: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x2037f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_2037f8:
    // 0x2037f8: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2037f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_2037fc:
    // 0x2037fc: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x2037fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_203800:
    // 0x203800: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x203800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x203804: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x203804u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x203808: 0xa46901c0  sh          $t1, 0x1C0($v1)
    ctx->pc = 0x203808u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 9));
    // 0x20380c: 0x94e2003c  lhu         $v0, 0x3C($a3)
    ctx->pc = 0x20380cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203810: 0x8ce400cc  lw          $a0, 0xCC($a3)
    ctx->pc = 0x203810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x203814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x203818: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x203818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20381c: 0xac4401d0  sw          $a0, 0x1D0($v0)
    ctx->pc = 0x20381cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 4));
    // 0x203820: 0x94e3003c  lhu         $v1, 0x3C($a3)
    ctx->pc = 0x203820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203824: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x203824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x203828: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20382c: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x20382cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203830: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x203834: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x203834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_203838:
    // 0x203838: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20383c: 0x4500081f  bc1f        . + 4 + (0x81F << 2)
    ctx->pc = 0x20383Cu;
    {
        const bool branch_taken_0x20383c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20383Cu;
        // 0x203840: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20383c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203844u;
    // 0x203844: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x203844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203848: 0x11020473  beq         $t0, $v0, . + 4 + (0x473 << 2)
    ctx->pc = 0x203848u;
    {
        const bool branch_taken_0x203848 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203848u;
        // 0x20384c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203848) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x203850u;
    // 0x203850: 0x1502081b  bne         $t0, $v0, . + 4 + (0x81B << 2)
    ctx->pc = 0x203850u;
    {
        const bool branch_taken_0x203850 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203850u;
        // 0x203854: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203850) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x203858u;
    // 0x203858: 0x10000818  b           . + 4 + (0x818 << 2)
    ctx->pc = 0x203858u;
    {
        const bool branch_taken_0x203858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203858u;
        // 0x20385c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203858) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203860u;
label_203860:
    // 0x203860: 0x94ea003c  lhu         $t2, 0x3C($a3)
    ctx->pc = 0x203860u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203864: 0x264b0002  addiu       $t3, $s2, 0x2
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x203868: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x20386c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x20386cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x203870: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x203870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x203874: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x203874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x203878: 0x248301d0  addiu       $v1, $a0, 0x1D0
    ctx->pc = 0x203878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x20387c: 0x844801c0  lh          $t0, 0x1C0($v0)
    ctx->pc = 0x20387cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x203880: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203884: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x203884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203888: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20388c: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x20388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203890: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203894: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203894u;
    {
        const bool branch_taken_0x203894 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x203898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203894u;
        // 0x203898: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203894) {
            ctx->pc = 0x2038B8u;
            goto label_2038b8;
        }
    }
    ctx->pc = 0x20389Cu;
    // 0x20389c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x20389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2038a0: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x2038a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2038a4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2038A4u;
    {
        const bool branch_taken_0x2038a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038a4) {
            ctx->pc = 0x2038BCu;
            goto label_2038bc;
        }
    }
    ctx->pc = 0x2038ACu;
    // 0x2038ac: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2038b0: 0x50820002  beql        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2038B0u;
    {
        const bool branch_taken_0x2038b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2038b0) {
            ctx->pc = 0x2038B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2038B0u;
            // 0x2038b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2038BCu;
            goto label_2038bc;
        }
    }
    ctx->pc = 0x2038B8u;
label_2038b8:
    // 0x2038b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2038bc:
    // 0x2038bc: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x2038BCu;
    {
        const bool branch_taken_0x2038bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2038bc) {
            ctx->pc = 0x203B68u;
            goto label_203b68;
        }
    }
    ctx->pc = 0x2038C4u;
    // 0x2038c4: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x2038c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x2038c8: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2038C8u;
    {
        const bool branch_taken_0x2038c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C8u;
        // 0x2038cc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038c8) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x2038D0u;
    // 0x2038d0: 0xdce201f8  ld          $v0, 0x1F8($a3)
    ctx->pc = 0x2038d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 504)));
    // 0x2038d4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2038d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2038d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2038dc: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2038dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2038e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2038e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2038e4: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x2038E4u;
    {
        const bool branch_taken_0x2038e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2038e4) {
            ctx->pc = 0x2038E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2038E4u;
            // 0x2038e8: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A78u;
            goto label_203a78;
        }
    }
    ctx->pc = 0x2038ECu;
    // 0x2038ec: 0x86430080  lh          $v1, 0x80($s2)
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2038f0: 0x28622aaa  slti        $v0, $v1, 0x2AAA
    ctx->pc = 0x2038f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2038f4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2038F4u;
    {
        const bool branch_taken_0x2038f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038F4u;
        // 0x2038f8: 0x28625556  slti        $v0, $v1, 0x5556 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21846) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038f4) {
            ctx->pc = 0x203A38u;
            goto label_203a38;
        }
    }
    ctx->pc = 0x2038FCu;
    // 0x2038fc: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x2038fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203900: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x203900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x203904: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x203904u;
    {
        const bool branch_taken_0x203904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203904u;
        // 0x203908: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203904) {
            ctx->pc = 0x203998u;
            goto label_203998;
        }
    }
    ctx->pc = 0x20390Cu;
    // 0x20390c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20390Cu;
    {
        const bool branch_taken_0x20390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20390Cu;
        // 0x203910: 0x84e30088  lh          $v1, 0x88($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20390c) {
            ctx->pc = 0x203958u;
            goto label_203958;
        }
    }
    ctx->pc = 0x203914u;
    // 0x203914: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203914u;
    {
        const bool branch_taken_0x203914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203914u;
        // 0x203918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203914) {
            ctx->pc = 0x203928u;
            goto label_203928;
        }
    }
    ctx->pc = 0x20391Cu;
    // 0x20391c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x20391Cu;
    {
        const bool branch_taken_0x20391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20391Cu;
        // 0x203920: 0x2409000e  addiu       $t1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20391c) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203924u;
    // 0x203924: 0x0  nop
    ctx->pc = 0x203924u;
    // NOP
label_203928:
    // 0x203928: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203928u;
    {
        const bool branch_taken_0x203928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203928u;
        // 0x20392c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203928) {
            ctx->pc = 0x203938u;
            goto label_203938;
        }
    }
    ctx->pc = 0x203930u;
    // 0x203930: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x203930u;
    {
        const bool branch_taken_0x203930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203930u;
        // 0x203934: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203930) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203938u;
label_203938:
    // 0x203938: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203938u;
    {
        const bool branch_taken_0x203938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203938u;
        // 0x20393c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203938) {
            ctx->pc = 0x203948u;
            goto label_203948;
        }
    }
    ctx->pc = 0x203940u;
    // 0x203940: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x203940u;
    {
        const bool branch_taken_0x203940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203940u;
        // 0x203944: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203940) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203948u;
label_203948:
    // 0x203948: 0x50620077  beql        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x203948u;
    {
        const bool branch_taken_0x203948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203948) {
            ctx->pc = 0x20394Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203948u;
            // 0x20394c: 0x2409000f  addiu       $t1, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203950u;
    // 0x203950: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x203950u;
    {
        const bool branch_taken_0x203950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203950u;
        // 0x203954: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203950) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203958u;
label_203958:
    // 0x203958: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203958u;
    {
        const bool branch_taken_0x203958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203958u;
        // 0x20395c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203958) {
            ctx->pc = 0x203968u;
            goto label_203968;
        }
    }
    ctx->pc = 0x203960u;
    // 0x203960: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x203960u;
    {
        const bool branch_taken_0x203960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203960u;
        // 0x203964: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203960) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203968u;
label_203968:
    // 0x203968: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203968u;
    {
        const bool branch_taken_0x203968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203968u;
        // 0x20396c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203968) {
            ctx->pc = 0x203978u;
            goto label_203978;
        }
    }
    ctx->pc = 0x203970u;
    // 0x203970: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x203970u;
    {
        const bool branch_taken_0x203970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203970u;
        // 0x203974: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203970) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203978u;
label_203978:
    // 0x203978: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203978u;
    {
        const bool branch_taken_0x203978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203978u;
        // 0x20397c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203978) {
            ctx->pc = 0x203988u;
            goto label_203988;
        }
    }
    ctx->pc = 0x203980u;
    // 0x203980: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x203980u;
    {
        const bool branch_taken_0x203980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203980u;
        // 0x203984: 0x2409000d  addiu       $t1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203980) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203988u;
label_203988:
    // 0x203988: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x203988u;
    {
        const bool branch_taken_0x203988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203988) {
            ctx->pc = 0x20398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203988u;
            // 0x20398c: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203990u;
    // 0x203990: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x203990u;
    {
        const bool branch_taken_0x203990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203990u;
        // 0x203994: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203990) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203998u;
label_203998:
    // 0x203998: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x203998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x20399c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20399Cu;
    {
        const bool branch_taken_0x20399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20399Cu;
        // 0x2039a0: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20399c) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2039A4u;
    // 0x2039a4: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x2039a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2039A8u;
    {
        const bool branch_taken_0x2039a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2039ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039A8u;
        // 0x2039ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039a8) {
            ctx->pc = 0x2039B8u;
            goto label_2039b8;
        }
    }
    ctx->pc = 0x2039B0u;
    // 0x2039b0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2039B0u;
    {
        const bool branch_taken_0x2039b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039B0u;
        // 0x2039b4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039b0) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x2039B8u;
label_2039b8:
    // 0x2039b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2039B8u;
    {
        const bool branch_taken_0x2039b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2039BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039B8u;
        // 0x2039bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039b8) {
            ctx->pc = 0x2039C8u;
            goto label_2039c8;
        }
    }
    ctx->pc = 0x2039C0u;
    // 0x2039c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2039C0u;
    {
        const bool branch_taken_0x2039c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039C0u;
        // 0x2039c4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039c0) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x2039C8u;
label_2039c8:
    // 0x2039c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2039C8u;
    {
        const bool branch_taken_0x2039c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2039CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039C8u;
        // 0x2039cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039c8) {
            ctx->pc = 0x2039D8u;
            goto label_2039d8;
        }
    }
    ctx->pc = 0x2039D0u;
    // 0x2039d0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2039D0u;
    {
        const bool branch_taken_0x2039d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D0u;
        // 0x2039d4: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d0) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x2039D8u;
label_2039d8:
    // 0x2039d8: 0x50620053  beql        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x2039DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039D8u;
            // 0x2039dc: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x2039E0u;
    // 0x2039e0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2039E0u;
    {
        const bool branch_taken_0x2039e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039E0u;
        // 0x2039e4: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039e0) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x2039E8u;
label_2039e8:
    // 0x2039e8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2039E8u;
    {
        const bool branch_taken_0x2039e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039E8u;
        // 0x2039ec: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039e8) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x2039F0u;
    // 0x2039f0: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x2039f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2039F4u;
    {
        const bool branch_taken_0x2039f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039f4) {
            ctx->pc = 0x203A08u;
            goto label_203a08;
        }
    }
    ctx->pc = 0x2039FCu;
    // 0x2039fc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2039FCu;
    {
        const bool branch_taken_0x2039fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039FCu;
        // 0x203a00: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039fc) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203A04u;
    // 0x203a04: 0x0  nop
    ctx->pc = 0x203a04u;
    // NOP
label_203a08:
    // 0x203a08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203A08u;
    {
        const bool branch_taken_0x203a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A08u;
        // 0x203a0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a08) {
            ctx->pc = 0x203A18u;
            goto label_203a18;
        }
    }
    ctx->pc = 0x203A10u;
    // 0x203a10: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x203A10u;
    {
        const bool branch_taken_0x203a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A10u;
        // 0x203a14: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a10) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203A18u;
label_203a18:
    // 0x203a18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203A18u;
    {
        const bool branch_taken_0x203a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A18u;
        // 0x203a1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a18) {
            ctx->pc = 0x203A28u;
            goto label_203a28;
        }
    }
    ctx->pc = 0x203A20u;
    // 0x203a20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x203A20u;
    {
        const bool branch_taken_0x203a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A20u;
        // 0x203a24: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a20) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x203A28u;
    {
        const bool branch_taken_0x203a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203a28) {
            ctx->pc = 0x203A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A28u;
            // 0x203a2c: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203A30u;
    // 0x203a30: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x203A30u;
    {
        const bool branch_taken_0x203a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A30u;
        // 0x203a34: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a30) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203A38u;
label_203a38:
    // 0x203a38: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x203A38u;
    {
        const bool branch_taken_0x203a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A38u;
        // 0x203a3c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a38) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203A40u;
    // 0x203a40: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203a44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x203a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x203a48: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x203A48u;
    {
        const bool branch_taken_0x203a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A48u;
        // 0x203a4c: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a48) {
            ctx->pc = 0x203B30u;
            goto label_203b30;
        }
    }
    ctx->pc = 0x203A50u;
    // 0x203a50: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203a54: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203A54u;
    {
        const bool branch_taken_0x203a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A54u;
        // 0x203a58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a54) {
            ctx->pc = 0x203A68u;
            goto label_203a68;
        }
    }
    ctx->pc = 0x203A5Cu;
    // 0x203a5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x203A5Cu;
    {
        const bool branch_taken_0x203a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A5Cu;
        // 0x203a60: 0x24090012  addiu       $t1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a5c) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203A64u;
    // 0x203a64: 0x0  nop
    ctx->pc = 0x203a64u;
    // NOP
label_203a68:
    // 0x203a68: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x203A68u;
    {
        const bool branch_taken_0x203a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203a68) {
            ctx->pc = 0x203A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A68u;
            // 0x203a6c: 0x24090013  addiu       $t1, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203A70u;
    // 0x203a70: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x203A70u;
    {
        const bool branch_taken_0x203a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a70) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203A78u;
label_203a78:
    // 0x203a78: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x203A78u;
    {
        const bool branch_taken_0x203a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A78u;
        // 0x203a7c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a78) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203A80u;
    // 0x203a80: 0x90e201ff  lbu         $v0, 0x1FF($a3)
    ctx->pc = 0x203a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 511)));
    // 0x203a84: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x203A84u;
    {
        const bool branch_taken_0x203a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A84u;
        // 0x203a88: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a84) {
            ctx->pc = 0x203B30u;
            goto label_203b30;
        }
    }
    ctx->pc = 0x203A8Cu;
    // 0x203a8c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x203a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203a90: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x203a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203a94: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203A94u;
    {
        const bool branch_taken_0x203a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A94u;
        // 0x203a98: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a94) {
            ctx->pc = 0x203B30u;
            goto label_203b30;
        }
    }
    ctx->pc = 0x203A9Cu;
    // 0x203a9c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203aa0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x203aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x203aa4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x203AA4u;
    {
        const bool branch_taken_0x203aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203aa4) {
            ctx->pc = 0x203AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203AA4u;
            // 0x203aa8: 0x84e80088  lh          $t0, 0x88($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203AF0u;
            goto label_203af0;
        }
    }
    ctx->pc = 0x203AACu;
    // 0x203aac: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203ab0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203AB0u;
    {
        const bool branch_taken_0x203ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AB0u;
        // 0x203ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ab0) {
            ctx->pc = 0x203AC0u;
            goto label_203ac0;
        }
    }
    ctx->pc = 0x203AB8u;
    // 0x203ab8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x203AB8u;
    {
        const bool branch_taken_0x203ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AB8u;
        // 0x203abc: 0x2409001c  addiu       $t1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ab8) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203AC0u;
label_203ac0:
    // 0x203ac0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203AC0u;
    {
        const bool branch_taken_0x203ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC0u;
        // 0x203ac4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ac0) {
            ctx->pc = 0x203AD0u;
            goto label_203ad0;
        }
    }
    ctx->pc = 0x203AC8u;
    // 0x203ac8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203AC8u;
    {
        const bool branch_taken_0x203ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC8u;
        // 0x203acc: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ac8) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203AD0u;
    {
        const bool branch_taken_0x203ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AD0u;
        // 0x203ad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ad0) {
            ctx->pc = 0x203AE0u;
            goto label_203ae0;
        }
    }
    ctx->pc = 0x203AD8u;
    // 0x203ad8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x203AD8u;
    {
        const bool branch_taken_0x203ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AD8u;
        // 0x203adc: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ad8) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203AE0u;
label_203ae0:
    // 0x203ae0: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203AE0u;
    {
        const bool branch_taken_0x203ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203ae0) {
            ctx->pc = 0x203AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203AE0u;
            // 0x203ae4: 0x2409001d  addiu       $t1, $zero, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203AE8u;
    // 0x203ae8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203AE8u;
    {
        const bool branch_taken_0x203ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae8) {
            ctx->pc = 0x203B2Cu;
            goto label_203b2c;
        }
    }
    ctx->pc = 0x203AF0u;
label_203af0:
    // 0x203af0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203AF0u;
    {
        const bool branch_taken_0x203af0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x203AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF0u;
        // 0x203af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203af0) {
            ctx->pc = 0x203B00u;
            goto label_203b00;
        }
    }
    ctx->pc = 0x203AF8u;
    // 0x203af8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203AF8u;
    {
        const bool branch_taken_0x203af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF8u;
        // 0x203afc: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203af8) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203B00u;
label_203b00:
    // 0x203b00: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203B00u;
    {
        const bool branch_taken_0x203b00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B00u;
        // 0x203b04: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b00) {
            ctx->pc = 0x203B10u;
            goto label_203b10;
        }
    }
    ctx->pc = 0x203B08u;
    // 0x203b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x203B08u;
    {
        const bool branch_taken_0x203b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B08u;
        // 0x203b0c: 0x2409001a  addiu       $t1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b08) {
            ctx->pc = 0x203B28u;
            goto label_203b28;
        }
    }
    ctx->pc = 0x203B10u;
label_203b10:
    // 0x203b10: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203b14: 0x39040002  xori        $a0, $t0, 0x2
    ctx->pc = 0x203b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x203b18: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x203b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x203b1c: 0xa4480a  movz        $t1, $a1, $a0
    ctx->pc = 0x203b1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x203b20: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x203b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x203b24: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x203b24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_203b28:
    // 0x203b28: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x203b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_203b2c:
    // 0x203b2c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_203b30:
    // 0x203b30: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x203b34: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x203b38: 0xa46901c0  sh          $t1, 0x1C0($v1)
    ctx->pc = 0x203b38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 9));
    // 0x203b3c: 0x94e2003c  lhu         $v0, 0x3C($a3)
    ctx->pc = 0x203b3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203b40: 0x8ce400cc  lw          $a0, 0xCC($a3)
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203b44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x203b48: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x203b4c: 0xac4401d0  sw          $a0, 0x1D0($v0)
    ctx->pc = 0x203b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 4));
    // 0x203b50: 0x94e3003c  lhu         $v1, 0x3C($a3)
    ctx->pc = 0x203b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203b54: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x203b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x203b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x203b5c: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x203b5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203b60: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x203b64: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x203b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_203b68:
    // 0x203b68: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203b6c: 0x45000753  bc1f        . + 4 + (0x753 << 2)
    ctx->pc = 0x203B6Cu;
    {
        const bool branch_taken_0x203b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B6Cu;
        // 0x203b70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b6c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203B74u;
    // 0x203b74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x203b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203b78: 0x110203a7  beq         $t0, $v0, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x203B78u;
    {
        const bool branch_taken_0x203b78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b78) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x203B80u;
    // 0x203b80: 0x1502074f  bne         $t0, $v0, . + 4 + (0x74F << 2)
    ctx->pc = 0x203B80u;
    {
        const bool branch_taken_0x203b80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B80u;
        // 0x203b84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b80) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x203B88u;
    // 0x203b88: 0x1000074c  b           . + 4 + (0x74C << 2)
    ctx->pc = 0x203B88u;
    {
        const bool branch_taken_0x203b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b88) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203B90u;
label_203b90:
    // 0x203b90: 0x94ea003c  lhu         $t2, 0x3C($a3)
    ctx->pc = 0x203b90u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203b94: 0x264b0002  addiu       $t3, $s2, 0x2
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x203b98: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x203b9c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x203b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x203ba0: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x203ba4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x203ba8: 0x248301d0  addiu       $v1, $a0, 0x1D0
    ctx->pc = 0x203ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x203bac: 0x844801c0  lh          $t0, 0x1C0($v0)
    ctx->pc = 0x203bacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x203bb0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x203bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203bb4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203bb8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x203bbc: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x203bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203bc0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x203bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203bc4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203BC4u;
    {
        const bool branch_taken_0x203bc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC4u;
        // 0x203bc8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bc4) {
            ctx->pc = 0x203BE8u;
            goto label_203be8;
        }
    }
    ctx->pc = 0x203BCCu;
    // 0x203bcc: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x203bd0: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x203bd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203bd4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203BD4u;
    {
        const bool branch_taken_0x203bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x203BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD4u;
        // 0x203bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bd4) {
            ctx->pc = 0x203BECu;
            goto label_203bec;
        }
    }
    ctx->pc = 0x203BDCu;
    // 0x203bdc: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203be0: 0x50820002  beql        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203BE0u;
    {
        const bool branch_taken_0x203be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x203be0) {
            ctx->pc = 0x203BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203BE0u;
            // 0x203be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203BECu;
            goto label_203bec;
        }
    }
    ctx->pc = 0x203BE8u;
label_203be8:
    // 0x203be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203bec:
    // 0x203bec: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x203BECu;
    {
        const bool branch_taken_0x203bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203bec) {
            ctx->pc = 0x203E98u;
            goto label_203e98;
        }
    }
    ctx->pc = 0x203BF4u;
    // 0x203bf4: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x203bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x203bf8: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x203BF8u;
    {
        const bool branch_taken_0x203bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BF8u;
        // 0x203bfc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bf8) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203C00u;
    // 0x203c00: 0xdce201f8  ld          $v0, 0x1F8($a3)
    ctx->pc = 0x203c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 504)));
    // 0x203c04: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x203c08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203c0c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x203c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x203c10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x203c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x203c14: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x203C14u;
    {
        const bool branch_taken_0x203c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203c14) {
            ctx->pc = 0x203C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203C14u;
            // 0x203c18: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203DA8u;
            goto label_203da8;
        }
    }
    ctx->pc = 0x203C1Cu;
    // 0x203c1c: 0x86430080  lh          $v1, 0x80($s2)
    ctx->pc = 0x203c1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203c20: 0x28622aaa  slti        $v0, $v1, 0x2AAA
    ctx->pc = 0x203c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203c24: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x203C24u;
    {
        const bool branch_taken_0x203c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C24u;
        // 0x203c28: 0x28625556  slti        $v0, $v1, 0x5556 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21846) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c24) {
            ctx->pc = 0x203D68u;
            goto label_203d68;
        }
    }
    ctx->pc = 0x203C2Cu;
    // 0x203c2c: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x203c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203c30: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x203c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x203c34: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x203C34u;
    {
        const bool branch_taken_0x203c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C34u;
        // 0x203c38: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c34) {
            ctx->pc = 0x203CC8u;
            goto label_203cc8;
        }
    }
    ctx->pc = 0x203C3Cu;
    // 0x203c3c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x203C3Cu;
    {
        const bool branch_taken_0x203c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C3Cu;
        // 0x203c40: 0x84e30088  lh          $v1, 0x88($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c3c) {
            ctx->pc = 0x203C88u;
            goto label_203c88;
        }
    }
    ctx->pc = 0x203C44u;
    // 0x203c44: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203C58u;
            goto label_203c58;
        }
    }
    ctx->pc = 0x203C4Cu;
    // 0x203c4c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x203C4Cu;
    {
        const bool branch_taken_0x203c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C4Cu;
        // 0x203c50: 0x2409000e  addiu       $t1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c4c) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203C54u;
    // 0x203c54: 0x0  nop
    ctx->pc = 0x203c54u;
    // NOP
label_203c58:
    // 0x203c58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203C58u;
    {
        const bool branch_taken_0x203c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C58u;
        // 0x203c5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c58) {
            ctx->pc = 0x203C68u;
            goto label_203c68;
        }
    }
    ctx->pc = 0x203C60u;
    // 0x203c60: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x203C60u;
    {
        const bool branch_taken_0x203c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C60u;
        // 0x203c64: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c60) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203C68u;
label_203c68:
    // 0x203c68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203C68u;
    {
        const bool branch_taken_0x203c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c68) {
            ctx->pc = 0x203C78u;
            goto label_203c78;
        }
    }
    ctx->pc = 0x203C70u;
    // 0x203c70: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x203C70u;
    {
        const bool branch_taken_0x203c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C70u;
        // 0x203c74: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c70) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203C78u;
label_203c78:
    // 0x203c78: 0x50620077  beql        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x203C78u;
    {
        const bool branch_taken_0x203c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203c78) {
            ctx->pc = 0x203C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203C78u;
            // 0x203c7c: 0x2409000f  addiu       $t1, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203C80u;
    // 0x203c80: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x203C80u;
    {
        const bool branch_taken_0x203c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C80u;
        // 0x203c84: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c80) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203C88u;
    {
        const bool branch_taken_0x203c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c88) {
            ctx->pc = 0x203C98u;
            goto label_203c98;
        }
    }
    ctx->pc = 0x203C90u;
    // 0x203c90: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x203C90u;
    {
        const bool branch_taken_0x203c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C90u;
        // 0x203c94: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c90) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203C98u;
label_203c98:
    // 0x203c98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203C98u;
    {
        const bool branch_taken_0x203c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C98u;
        // 0x203c9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c98) {
            ctx->pc = 0x203CA8u;
            goto label_203ca8;
        }
    }
    ctx->pc = 0x203CA0u;
    // 0x203ca0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x203CA0u;
    {
        const bool branch_taken_0x203ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA0u;
        // 0x203ca4: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca0) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203CA8u;
label_203ca8:
    // 0x203ca8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203CA8u;
    {
        const bool branch_taken_0x203ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca8) {
            ctx->pc = 0x203CB8u;
            goto label_203cb8;
        }
    }
    ctx->pc = 0x203CB0u;
    // 0x203cb0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x203CB0u;
    {
        const bool branch_taken_0x203cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CB0u;
        // 0x203cb4: 0x2409000d  addiu       $t1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cb0) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203CB8u;
label_203cb8:
    // 0x203cb8: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x203CB8u;
    {
        const bool branch_taken_0x203cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203cb8) {
            ctx->pc = 0x203CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203CB8u;
            // 0x203cbc: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203CC0u;
    // 0x203cc0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x203CC0u;
    {
        const bool branch_taken_0x203cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CC0u;
        // 0x203cc4: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cc0) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203CC8u;
label_203cc8:
    // 0x203cc8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x203cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x203ccc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x203CCCu;
    {
        const bool branch_taken_0x203ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CCCu;
        // 0x203cd0: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ccc) {
            ctx->pc = 0x203D18u;
            goto label_203d18;
        }
    }
    ctx->pc = 0x203CD4u;
    // 0x203cd4: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203cd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203CE8u;
            goto label_203ce8;
        }
    }
    ctx->pc = 0x203CE0u;
    // 0x203ce0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x203CE0u;
    {
        const bool branch_taken_0x203ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE0u;
        // 0x203ce4: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce0) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203CE8u;
label_203ce8:
    // 0x203ce8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203CE8u;
    {
        const bool branch_taken_0x203ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE8u;
        // 0x203cec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce8) {
            ctx->pc = 0x203CF8u;
            goto label_203cf8;
        }
    }
    ctx->pc = 0x203CF0u;
    // 0x203cf0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x203CF0u;
    {
        const bool branch_taken_0x203cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CF0u;
        // 0x203cf4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cf0) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203CF8u;
label_203cf8:
    // 0x203cf8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203CF8u;
    {
        const bool branch_taken_0x203cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CF8u;
        // 0x203cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cf8) {
            ctx->pc = 0x203D08u;
            goto label_203d08;
        }
    }
    ctx->pc = 0x203D00u;
    // 0x203d00: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x203D00u;
    {
        const bool branch_taken_0x203d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D00u;
        // 0x203d04: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d00) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D08u;
label_203d08:
    // 0x203d08: 0x50620053  beql        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x203D08u;
    {
        const bool branch_taken_0x203d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203d08) {
            ctx->pc = 0x203D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203D08u;
            // 0x203d0c: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D10u;
    // 0x203d10: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x203D10u;
    {
        const bool branch_taken_0x203d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D10u;
        // 0x203d14: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d10) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203D18u;
label_203d18:
    // 0x203d18: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203D20u;
    // 0x203d20: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203d24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203D24u;
    {
        const bool branch_taken_0x203d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D24u;
        // 0x203d28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d24) {
            ctx->pc = 0x203D38u;
            goto label_203d38;
        }
    }
    ctx->pc = 0x203D2Cu;
    // 0x203d2c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x203D2Cu;
    {
        const bool branch_taken_0x203d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D2Cu;
        // 0x203d30: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d2c) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D34u;
    // 0x203d34: 0x0  nop
    ctx->pc = 0x203d34u;
    // NOP
label_203d38:
    // 0x203d38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203D38u;
    {
        const bool branch_taken_0x203d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D38u;
        // 0x203d3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d38) {
            ctx->pc = 0x203D48u;
            goto label_203d48;
        }
    }
    ctx->pc = 0x203D40u;
    // 0x203d40: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x203D40u;
    {
        const bool branch_taken_0x203d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D40u;
        // 0x203d44: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d40) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D48u;
label_203d48:
    // 0x203d48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203D58u;
            goto label_203d58;
        }
    }
    ctx->pc = 0x203D50u;
    // 0x203d50: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x203D50u;
    {
        const bool branch_taken_0x203d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D50u;
        // 0x203d54: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d50) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D58u;
label_203d58:
    // 0x203d58: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x203D58u;
    {
        const bool branch_taken_0x203d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203d58) {
            ctx->pc = 0x203D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203D58u;
            // 0x203d5c: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D60u;
    // 0x203d60: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x203D60u;
    {
        const bool branch_taken_0x203d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D60u;
        // 0x203d64: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d60) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x203D68u;
    {
        const bool branch_taken_0x203d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D68u;
        // 0x203d6c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d68) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203D70u;
    // 0x203d70: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203d74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x203d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x203d78: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x203D78u;
    {
        const bool branch_taken_0x203d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D78u;
        // 0x203d7c: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d78) {
            ctx->pc = 0x203E60u;
            goto label_203e60;
        }
    }
    ctx->pc = 0x203D80u;
    // 0x203d80: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203d84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203D84u;
    {
        const bool branch_taken_0x203d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D84u;
        // 0x203d88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d84) {
            ctx->pc = 0x203D98u;
            goto label_203d98;
        }
    }
    ctx->pc = 0x203D8Cu;
    // 0x203d8c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x203D8Cu;
    {
        const bool branch_taken_0x203d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D8Cu;
        // 0x203d90: 0x24090012  addiu       $t1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d8c) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203D94u;
    // 0x203d94: 0x0  nop
    ctx->pc = 0x203d94u;
    // NOP
label_203d98:
    // 0x203d98: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x203D98u;
    {
        const bool branch_taken_0x203d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203d98) {
            ctx->pc = 0x203D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203D98u;
            // 0x203d9c: 0x24090013  addiu       $t1, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203DA0u;
    // 0x203da0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x203DA0u;
    {
        const bool branch_taken_0x203da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DA0u;
        // 0x203da4: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203da0) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203DA8u;
label_203da8:
    // 0x203da8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x203DA8u;
    {
        const bool branch_taken_0x203da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DA8u;
        // 0x203dac: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203da8) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203DB0u;
    // 0x203db0: 0x90e201ff  lbu         $v0, 0x1FF($a3)
    ctx->pc = 0x203db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 511)));
    // 0x203db4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x203DB4u;
    {
        const bool branch_taken_0x203db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB4u;
        // 0x203db8: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203db4) {
            ctx->pc = 0x203E60u;
            goto label_203e60;
        }
    }
    ctx->pc = 0x203DBCu;
    // 0x203dbc: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x203dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x203dc0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x203dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x203dc4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203DC4u;
    {
        const bool branch_taken_0x203dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DC4u;
        // 0x203dc8: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dc4) {
            ctx->pc = 0x203E60u;
            goto label_203e60;
        }
    }
    ctx->pc = 0x203DCCu;
    // 0x203dcc: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203dd0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x203dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x203dd4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x203DD4u;
    {
        const bool branch_taken_0x203dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203dd4) {
            ctx->pc = 0x203DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203DD4u;
            // 0x203dd8: 0x84e80088  lh          $t0, 0x88($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E20u;
            goto label_203e20;
        }
    }
    ctx->pc = 0x203DDCu;
    // 0x203ddc: 0x84e30088  lh          $v1, 0x88($a3)
    ctx->pc = 0x203ddcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x203de0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203DE0u;
    {
        const bool branch_taken_0x203de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE0u;
        // 0x203de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203de0) {
            ctx->pc = 0x203DF0u;
            goto label_203df0;
        }
    }
    ctx->pc = 0x203DE8u;
    // 0x203de8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x203DE8u;
    {
        const bool branch_taken_0x203de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE8u;
        // 0x203dec: 0x2409001c  addiu       $t1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203de8) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203DF0u;
label_203df0:
    // 0x203df0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203DF0u;
    {
        const bool branch_taken_0x203df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DF0u;
        // 0x203df4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203df0) {
            ctx->pc = 0x203E00u;
            goto label_203e00;
        }
    }
    ctx->pc = 0x203DF8u;
    // 0x203df8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203DF8u;
    {
        const bool branch_taken_0x203df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DF8u;
        // 0x203dfc: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203df8) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203E00u;
label_203e00:
    // 0x203e00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203E00u;
    {
        const bool branch_taken_0x203e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E00u;
        // 0x203e04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e00) {
            ctx->pc = 0x203E10u;
            goto label_203e10;
        }
    }
    ctx->pc = 0x203E08u;
    // 0x203e08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x203E08u;
    {
        const bool branch_taken_0x203e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E08u;
        // 0x203e0c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e08) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203E10u;
label_203e10:
    // 0x203e10: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203E10u;
    {
        const bool branch_taken_0x203e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x203e10) {
            ctx->pc = 0x203E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203E10u;
            // 0x203e14: 0x2409001d  addiu       $t1, $zero, 0x1D (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203E18u;
    // 0x203e18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203E18u;
    {
        const bool branch_taken_0x203e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E18u;
        // 0x203e1c: 0xa1840  sll         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e18) {
            ctx->pc = 0x203E5Cu;
            goto label_203e5c;
        }
    }
    ctx->pc = 0x203E20u;
label_203e20:
    // 0x203e20: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203E20u;
    {
        const bool branch_taken_0x203e20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x203E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E20u;
        // 0x203e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e20) {
            ctx->pc = 0x203E30u;
            goto label_203e30;
        }
    }
    ctx->pc = 0x203E28u;
    // 0x203e28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203E28u;
    {
        const bool branch_taken_0x203e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E28u;
        // 0x203e2c: 0x24090018  addiu       $t1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e28) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203E30u;
label_203e30:
    // 0x203e30: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203E30u;
    {
        const bool branch_taken_0x203e30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E30u;
        // 0x203e34: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e30) {
            ctx->pc = 0x203E40u;
            goto label_203e40;
        }
    }
    ctx->pc = 0x203E38u;
    // 0x203e38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x203E38u;
    {
        const bool branch_taken_0x203e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E38u;
        // 0x203e3c: 0x2409001a  addiu       $t1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e38) {
            ctx->pc = 0x203E58u;
            goto label_203e58;
        }
    }
    ctx->pc = 0x203E40u;
label_203e40:
    // 0x203e40: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203e44: 0x39040002  xori        $a0, $t0, 0x2
    ctx->pc = 0x203e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x203e48: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x203e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x203e4c: 0xa4480a  movz        $t1, $a1, $a0
    ctx->pc = 0x203e4cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x203e50: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x203e54: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x203e54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_203e58:
    // 0x203e58: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x203e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_203e5c:
    // 0x203e5c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x203e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_203e60:
    // 0x203e60: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x203e64: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x203e64u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x203e68: 0xa46901c0  sh          $t1, 0x1C0($v1)
    ctx->pc = 0x203e68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 9));
    // 0x203e6c: 0x94e2003c  lhu         $v0, 0x3C($a3)
    ctx->pc = 0x203e6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203e70: 0x8ce400cc  lw          $a0, 0xCC($a3)
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x203e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x203e78: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x203e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x203e7c: 0xac4401d0  sw          $a0, 0x1D0($v0)
    ctx->pc = 0x203e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 4));
    // 0x203e80: 0x94e3003c  lhu         $v1, 0x3C($a3)
    ctx->pc = 0x203e80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x203e84: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x203e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x203e88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x203e8c: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x203e8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x203e90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x203e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x203e94: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x203e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_203e98:
    // 0x203e98: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203e9c: 0x45000687  bc1f        . + 4 + (0x687 << 2)
    ctx->pc = 0x203E9Cu;
    {
        const bool branch_taken_0x203e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E9Cu;
        // 0x203ea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e9c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203EA4u;
    // 0x203ea4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x203ea8: 0x110202db  beq         $t0, $v0, . + 4 + (0x2DB << 2)
    ctx->pc = 0x203EA8u;
    {
        const bool branch_taken_0x203ea8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x203EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EA8u;
        // 0x203eac: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ea8) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x203EB0u;
    // 0x203eb0: 0x15020683  bne         $t0, $v0, . + 4 + (0x683 << 2)
    ctx->pc = 0x203EB0u;
    {
        const bool branch_taken_0x203eb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x203EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EB0u;
        // 0x203eb4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb0) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x203EB8u;
    // 0x203eb8: 0x10000680  b           . + 4 + (0x680 << 2)
    ctx->pc = 0x203EB8u;
    {
        const bool branch_taken_0x203eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EB8u;
        // 0x203ebc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203EC0u;
label_203ec0:
    // 0x203ec0: 0xc64001e4  lwc1        $f0, 0x1E4($s2)
    ctx->pc = 0x203ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203ec4:
    // 0x203ec4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203ec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203ec8: 0x4501067c  bc1t        . + 4 + (0x67C << 2)
    ctx->pc = 0x203EC8u;
    {
        const bool branch_taken_0x203ec8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x203ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EC8u;
        // 0x203ecc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ec8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203ED0u;
    // 0x203ed0: 0x1000067a  b           . + 4 + (0x67A << 2)
    ctx->pc = 0x203ED0u;
    {
        const bool branch_taken_0x203ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED0u;
        // 0x203ed4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ed0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203ED8u;
label_203ed8:
    // 0x203ed8: 0xc64001e4  lwc1        $f0, 0x1E4($s2)
    ctx->pc = 0x203ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203edc:
    // 0x203edc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x203edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203ee0: 0x45010676  bc1t        . + 4 + (0x676 << 2)
    ctx->pc = 0x203EE0u;
    {
        const bool branch_taken_0x203ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x203EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE0u;
        // 0x203ee4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203EE8u;
    // 0x203ee8: 0x10000674  b           . + 4 + (0x674 << 2)
    ctx->pc = 0x203EE8u;
    {
        const bool branch_taken_0x203ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE8u;
        // 0x203eec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203EF0u;
label_203ef0:
    // 0x203ef0: 0x0  nop
    ctx->pc = 0x203ef0u;
    // NOP
    // 0x203ef4: 0x0  nop
    ctx->pc = 0x203ef4u;
    // NOP
    // 0x203ef8: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x203EF8u;
    {
        const bool branch_taken_0x203ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EF8u;
        // 0x203efc: 0xc64001e8  lwc1        $f0, 0x1E8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ef8) {
            ctx->pc = 0x203EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203ec4;
        }
    }
    ctx->pc = 0x203F00u;
label_203f00:
    // 0x203f00: 0xc64001e4  lwc1        $f0, 0x1E4($s2)
    ctx->pc = 0x203f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203f04: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f08: 0x450102c3  bc1t        . + 4 + (0x2C3 << 2)
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x203F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F08u;
        // 0x203f0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f08) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x203F10u;
    // 0x203f10: 0xc64001e8  lwc1        $f0, 0x1E8($s2)
    ctx->pc = 0x203f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203f14: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x203f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f18: 0x1000040f  b           . + 4 + (0x40F << 2)
    ctx->pc = 0x203F18u;
    {
        const bool branch_taken_0x203f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f18) {
            ctx->pc = 0x204F58u;
            goto label_204f58;
        }
    }
    ctx->pc = 0x203F20u;
label_203f20:
    // 0x203f20: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0xc64001e8  lwc1        $f0, 0x1E8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203edc;
        }
    }
    ctx->pc = 0x203F28u;
label_203f28:
    // 0x203f28: 0xc64001e4  lwc1        $f0, 0x1E4($s2)
    ctx->pc = 0x203f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203f2c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x203f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f30: 0x450102b9  bc1t        . + 4 + (0x2B9 << 2)
    ctx->pc = 0x203F30u;
    {
        const bool branch_taken_0x203f30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x203F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F30u;
        // 0x203f34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f30) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x203F38u;
    // 0x203f38: 0xc64001e8  lwc1        $f0, 0x1E8($s2)
    ctx->pc = 0x203f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203f3c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x203f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f40: 0x10000405  b           . + 4 + (0x405 << 2)
    ctx->pc = 0x203F40u;
    {
        const bool branch_taken_0x203f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f40) {
            ctx->pc = 0x204F58u;
            goto label_204f58;
        }
    }
    ctx->pc = 0x203F48u;
label_203f48:
    // 0x203f48: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x203f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x203f4c: 0x1040065b  beqz        $v0, . + 4 + (0x65B << 2)
    ctx->pc = 0x203F4Cu;
    {
        const bool branch_taken_0x203f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F4Cu;
        // 0x203f50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f4c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203F54u;
    // 0x203f54: 0x96420150  lhu         $v0, 0x150($s2)
    ctx->pc = 0x203f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x203f58: 0x94e30152  lhu         $v1, 0x152($a3)
    ctx->pc = 0x203f58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 338)));
    // 0x203f5c: 0x100005f9  b           . + 4 + (0x5F9 << 2)
    ctx->pc = 0x203F5Cu;
    {
        const bool branch_taken_0x203f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F5Cu;
        // 0x203f60: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f5c) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x203F64u;
    // 0x203f64: 0x0  nop
    ctx->pc = 0x203f64u;
    // NOP
label_203f68:
    // 0x203f68: 0x10000654  b           . + 4 + (0x654 << 2)
    ctx->pc = 0x203F68u;
    {
        const bool branch_taken_0x203f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F68u;
        // 0x203f6c: 0x90f101ee  lbu         $s1, 0x1EE($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 494)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f68) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203F70u;
label_203f70:
    // 0x203f70: 0x10000652  b           . + 4 + (0x652 << 2)
    ctx->pc = 0x203F70u;
    {
        const bool branch_taken_0x203f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F70u;
        // 0x203f74: 0x925101f1  lbu         $s1, 0x1F1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 497)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f70) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203F78u;
label_203f78:
    // 0x203f78: 0x94e20300  lhu         $v0, 0x300($a3)
    ctx->pc = 0x203f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 768)));
    // 0x203f7c: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x203f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x203f80: 0x38421800  xori        $v0, $v0, 0x1800
    ctx->pc = 0x203f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6144);
    // 0x203f84: 0x1000064d  b           . + 4 + (0x64D << 2)
    ctx->pc = 0x203F84u;
    {
        const bool branch_taken_0x203f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F84u;
        // 0x203f88: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f84) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203F8Cu;
    // 0x203f8c: 0x0  nop
    ctx->pc = 0x203f8cu;
    // NOP
label_203f90:
    // 0x203f90: 0x84e2014e  lh          $v0, 0x14E($a3)
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 334)));
    // 0x203f94: 0x10000649  b           . + 4 + (0x649 << 2)
    ctx->pc = 0x203F94u;
    {
        const bool branch_taken_0x203f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F94u;
        // 0x203f98: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f94) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203F9Cu;
    // 0x203f9c: 0x0  nop
    ctx->pc = 0x203f9cu;
    // NOP
label_203fa0:
    // 0x203fa0: 0x84e2014e  lh          $v0, 0x14E($a3)
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 334)));
    // 0x203fa4: 0x10400645  beqz        $v0, . + 4 + (0x645 << 2)
    ctx->pc = 0x203FA4u;
    {
        const bool branch_taken_0x203fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FA4u;
        // 0x203fa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fa4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203FACu;
    // 0x203fac: 0x94e200cc  lhu         $v0, 0xCC($a3)
    ctx->pc = 0x203facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x203fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203fb4: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x203FB4u;
    {
        const bool branch_taken_0x203fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FB4u;
        // 0x203fb8: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fb4) {
            ctx->pc = 0x204A10u;
            goto label_204a10;
        }
    }
    ctx->pc = 0x203FBCu;
    // 0x203fbc: 0x0  nop
    ctx->pc = 0x203fbcu;
    // NOP
label_203fc0:
    // 0x203fc0: 0x84e2014e  lh          $v0, 0x14E($a3)
    ctx->pc = 0x203fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 334)));
    // 0x203fc4: 0x1040063d  beqz        $v0, . + 4 + (0x63D << 2)
    ctx->pc = 0x203FC4u;
    {
        const bool branch_taken_0x203fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FC4u;
        // 0x203fc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fc4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203FCCu;
    // 0x203fcc: 0x94e200cc  lhu         $v0, 0xCC($a3)
    ctx->pc = 0x203fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203fd4: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x203FD4u;
    {
        const bool branch_taken_0x203fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FD4u;
        // 0x203fd8: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fd4) {
            ctx->pc = 0x204A10u;
            goto label_204a10;
        }
    }
    ctx->pc = 0x203FDCu;
    // 0x203fdc: 0x0  nop
    ctx->pc = 0x203fdcu;
    // NOP
label_203fe0:
    // 0x203fe0: 0x84e2014e  lh          $v0, 0x14E($a3)
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 334)));
    // 0x203fe4: 0x10000635  b           . + 4 + (0x635 << 2)
    ctx->pc = 0x203FE4u;
    {
        const bool branch_taken_0x203fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FE4u;
        // 0x203fe8: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fe4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x203FECu;
    // 0x203fec: 0x0  nop
    ctx->pc = 0x203fecu;
    // NOP
label_203ff0:
    // 0x203ff0: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x203ff4: 0x100002f6  b           . + 4 + (0x2F6 << 2)
    ctx->pc = 0x203FF4u;
    {
        const bool branch_taken_0x203ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FF4u;
        // 0x203ff8: 0x30420407  andi        $v0, $v0, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ff4) {
            ctx->pc = 0x204BD0u;
            goto label_204bd0;
        }
    }
    ctx->pc = 0x203FFCu;
    // 0x203ffc: 0x0  nop
    ctx->pc = 0x203ffcu;
    // NOP
label_204000:
    // 0x204000: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x204004: 0x1000053f  b           . + 4 + (0x53F << 2)
    ctx->pc = 0x204004u;
    {
        const bool branch_taken_0x204004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204004u;
        // 0x204008: 0x30420407  andi        $v0, $v0, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204004) {
            ctx->pc = 0x205504u;
            goto label_205504;
        }
    }
    ctx->pc = 0x20400Cu;
    // 0x20400c: 0x0  nop
    ctx->pc = 0x20400cu;
    // NOP
label_204010:
    // 0x204010: 0x94e20150  lhu         $v0, 0x150($a3)
    ctx->pc = 0x204010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x204014: 0x38420512  xori        $v0, $v0, 0x512
    ctx->pc = 0x204014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1298);
    // 0x204018: 0x10000628  b           . + 4 + (0x628 << 2)
    ctx->pc = 0x204018u;
    {
        const bool branch_taken_0x204018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204018u;
        // 0x20401c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204018) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204020u;
label_204020:
    // 0x204020: 0x94e20150  lhu         $v0, 0x150($a3)
    ctx->pc = 0x204020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x204024: 0x38420217  xori        $v0, $v0, 0x217
    ctx->pc = 0x204024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)535);
    // 0x204028: 0x10000624  b           . + 4 + (0x624 << 2)
    ctx->pc = 0x204028u;
    {
        const bool branch_taken_0x204028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204028u;
        // 0x20402c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204028) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204030u;
label_204030:
    // 0x204030: 0x94e60150  lhu         $a2, 0x150($a3)
    ctx->pc = 0x204030u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x204034: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x204038: 0x10c20277  beq         $a2, $v0, . + 4 + (0x277 << 2)
    ctx->pc = 0x204038u;
    {
        const bool branch_taken_0x204038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x20403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204038u;
        // 0x20403c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204038) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204040u;
    // 0x204040: 0x2402041f  addiu       $v0, $zero, 0x41F
    ctx->pc = 0x204040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x204044: 0x14c2061e  bne         $a2, $v0, . + 4 + (0x61E << 2)
    ctx->pc = 0x204044u;
    {
        const bool branch_taken_0x204044 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x204048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204044u;
        // 0x204048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204044) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20404Cu;
    // 0x20404c: 0x1000061b  b           . + 4 + (0x61B << 2)
    ctx->pc = 0x20404Cu;
    {
        const bool branch_taken_0x20404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20404Cu;
        // 0x204050: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20404c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204054u;
    // 0x204054: 0x0  nop
    ctx->pc = 0x204054u;
    // NOP
label_204058:
    // 0x204058: 0x94e60150  lhu         $a2, 0x150($a3)
    ctx->pc = 0x204058u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x20405c: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x20405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x204060: 0x10c2026d  beq         $a2, $v0, . + 4 + (0x26D << 2)
    ctx->pc = 0x204060u;
    {
        const bool branch_taken_0x204060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x204064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204060u;
        // 0x204064: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204060) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204068u;
    // 0x204068: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x204068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x20406c: 0x14c20614  bne         $a2, $v0, . + 4 + (0x614 << 2)
    ctx->pc = 0x20406Cu;
    {
        const bool branch_taken_0x20406c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x204070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20406Cu;
        // 0x204070: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20406c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204074u;
    // 0x204074: 0x10000611  b           . + 4 + (0x611 << 2)
    ctx->pc = 0x204074u;
    {
        const bool branch_taken_0x204074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204074u;
        // 0x204078: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204074) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20407Cu;
    // 0x20407c: 0x0  nop
    ctx->pc = 0x20407cu;
    // NOP
label_204080:
    // 0x204080: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x204080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x204084: 0x28424001  slti        $v0, $v0, 0x4001
    ctx->pc = 0x204084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x204088: 0x1000060c  b           . + 4 + (0x60C << 2)
    ctx->pc = 0x204088u;
    {
        const bool branch_taken_0x204088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204088u;
        // 0x20408c: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204088) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204090u;
label_204090:
    // 0x204090: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x204090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x204094: 0x10000609  b           . + 4 + (0x609 << 2)
    ctx->pc = 0x204094u;
    {
        const bool branch_taken_0x204094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204094u;
        // 0x204098: 0x28514001  slti        $s1, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204094) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20409Cu;
    // 0x20409c: 0x0  nop
    ctx->pc = 0x20409cu;
    // NOP
label_2040a0:
    // 0x2040a0: 0x8642007e  lh          $v0, 0x7E($s2)
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x2040a4: 0x10000605  b           . + 4 + (0x605 << 2)
    ctx->pc = 0x2040A4u;
    {
        const bool branch_taken_0x2040a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040A4u;
        // 0x2040a8: 0x28fc2  srl         $s1, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040a4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2040ACu;
    // 0x2040ac: 0x0  nop
    ctx->pc = 0x2040acu;
    // NOP
label_2040b0:
    // 0x2040b0: 0x8642007e  lh          $v0, 0x7E($s2)
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x2040b4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2040b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2040b8: 0x10000600  b           . + 4 + (0x600 << 2)
    ctx->pc = 0x2040B8u;
    {
        const bool branch_taken_0x2040b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040B8u;
        // 0x2040bc: 0x28fc2  srl         $s1, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040b8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2040C0u;
label_2040c0:
    // 0x2040c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2040C0u;
    {
        const bool branch_taken_0x2040c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040C0u;
        // 0x2040c4: 0x86420080  lh          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040c0) {
            ctx->pc = 0x2040DCu;
            goto label_2040dc;
        }
    }
    ctx->pc = 0x2040C8u;
label_2040c8:
    // 0x2040c8: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2040cc: 0x100005fb  b           . + 4 + (0x5FB << 2)
    ctx->pc = 0x2040CCu;
    {
        const bool branch_taken_0x2040cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040CCu;
        // 0x2040d0: 0x50882a  slt         $s1, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040cc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2040D4u;
    // 0x2040d4: 0x0  nop
    ctx->pc = 0x2040d4u;
    // NOP
label_2040d8:
    // 0x2040d8: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2040d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
label_2040dc:
    // 0x2040dc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2040dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2040e0: 0x100005f6  b           . + 4 + (0x5F6 << 2)
    ctx->pc = 0x2040E0u;
    {
        const bool branch_taken_0x2040e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040E0u;
        // 0x2040e4: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040e0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2040E8u;
label_2040e8:
    // 0x2040e8: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2040ec: 0x100005f3  b           . + 4 + (0x5F3 << 2)
    ctx->pc = 0x2040ECu;
    {
        const bool branch_taken_0x2040ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040ECu;
        // 0x2040f0: 0x50882a  slt         $s1, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040ec) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2040F4u;
    // 0x2040f4: 0x0  nop
    ctx->pc = 0x2040f4u;
    // NOP
label_2040f8:
    // 0x2040f8: 0x8642007e  lh          $v0, 0x7E($s2)
    ctx->pc = 0x2040f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x2040fc: 0x28424e38  slti        $v0, $v0, 0x4E38
    ctx->pc = 0x2040fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20024) ? 1 : 0);
    // 0x204100: 0x100005ee  b           . + 4 + (0x5EE << 2)
    ctx->pc = 0x204100u;
    {
        const bool branch_taken_0x204100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204100u;
        // 0x204104: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204100) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204108u;
label_204108:
    // 0x204108: 0x8642007e  lh          $v0, 0x7E($s2)
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x20410c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20410cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204110: 0x44105ea  bgez        $v0, . + 4 + (0x5EA << 2)
    ctx->pc = 0x204110u;
    {
        const bool branch_taken_0x204110 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204110u;
        // 0x204114: 0x9643007e  lhu         $v1, 0x7E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204110) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204118u;
    // 0x204118: 0x3402b1c6  ori         $v0, $zero, 0xB1C6
    ctx->pc = 0x204118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45510);
    // 0x20411c: 0x10000589  b           . + 4 + (0x589 << 2)
    ctx->pc = 0x20411Cu;
    {
        const bool branch_taken_0x20411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20411Cu;
        // 0x204120: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20411c) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x204124u;
    // 0x204124: 0x0  nop
    ctx->pc = 0x204124u;
    // NOP
label_204128:
    // 0x204128: 0x8642007e  lh          $v0, 0x7E($s2)
    ctx->pc = 0x204128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x20412c: 0x28423fff  slti        $v0, $v0, 0x3FFF
    ctx->pc = 0x20412cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16383) ? 1 : 0);
    // 0x204130: 0x100005e2  b           . + 4 + (0x5E2 << 2)
    ctx->pc = 0x204130u;
    {
        const bool branch_taken_0x204130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204130u;
        // 0x204134: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204130) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204138u;
label_204138:
    // 0x204138: 0x8642007e  lh          $v0, 0x7E($s2)
    ctx->pc = 0x204138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x20413c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20413cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204140: 0x44105de  bgez        $v0, . + 4 + (0x5DE << 2)
    ctx->pc = 0x204140u;
    {
        const bool branch_taken_0x204140 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204140u;
        // 0x204144: 0x9643007e  lhu         $v1, 0x7E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204140) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204148u;
    // 0x204148: 0x3402bfff  ori         $v0, $zero, 0xBFFF
    ctx->pc = 0x204148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49151);
    // 0x20414c: 0x1000057d  b           . + 4 + (0x57D << 2)
    ctx->pc = 0x20414Cu;
    {
        const bool branch_taken_0x20414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20414Cu;
        // 0x204150: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20414c) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x204154u;
    // 0x204154: 0x0  nop
    ctx->pc = 0x204154u;
    // NOP
label_204158:
    // 0x204158: 0x86420086  lh          $v0, 0x86($s2)
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x20415c: 0x100005d7  b           . + 4 + (0x5D7 << 2)
    ctx->pc = 0x20415Cu;
    {
        const bool branch_taken_0x20415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20415Cu;
        // 0x204160: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20415c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204164u;
    // 0x204164: 0x0  nop
    ctx->pc = 0x204164u;
    // NOP
label_204168:
    // 0x204168: 0x100004e6  b           . + 4 + (0x4E6 << 2)
    ctx->pc = 0x204168u;
    {
        const bool branch_taken_0x204168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204168u;
        // 0x20416c: 0x86420086  lh          $v0, 0x86($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204168) {
            ctx->pc = 0x205504u;
            goto label_205504;
        }
    }
    ctx->pc = 0x204170u;
label_204170:
    // 0x204170: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204170u;
    {
        const bool branch_taken_0x204170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204170u;
        // 0x204174: 0x86420086  lh          $v0, 0x86($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204170) {
            ctx->pc = 0x20419Cu;
            goto label_20419c;
        }
    }
    ctx->pc = 0x204178u;
label_204178:
    // 0x204178: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x204178u;
    {
        const bool branch_taken_0x204178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204178u;
        // 0x20417c: 0x86420086  lh          $v0, 0x86($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204178) {
            ctx->pc = 0x204BD0u;
            goto label_204bd0;
        }
    }
    ctx->pc = 0x204180u;
label_204180:
    // 0x204180: 0x84e20086  lh          $v0, 0x86($a3)
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 134)));
    // 0x204184: 0x100005cd  b           . + 4 + (0x5CD << 2)
    ctx->pc = 0x204184u;
    {
        const bool branch_taken_0x204184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204184u;
        // 0x204188: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204184) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20418Cu;
    // 0x20418c: 0x0  nop
    ctx->pc = 0x20418cu;
    // NOP
label_204190:
    // 0x204190: 0x100004dc  b           . + 4 + (0x4DC << 2)
    ctx->pc = 0x204190u;
    {
        const bool branch_taken_0x204190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204190u;
        // 0x204194: 0x84e20086  lh          $v0, 0x86($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204190) {
            ctx->pc = 0x205504u;
            goto label_205504;
        }
    }
    ctx->pc = 0x204198u;
label_204198:
    // 0x204198: 0x84e20086  lh          $v0, 0x86($a3)
    ctx->pc = 0x204198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 134)));
label_20419c:
    // 0x20419c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2041a0: 0x100005c6  b           . + 4 + (0x5C6 << 2)
    ctx->pc = 0x2041A0u;
    {
        const bool branch_taken_0x2041a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A0u;
        // 0x2041a4: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041a0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2041A8u;
label_2041a8:
    // 0x2041a8: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x2041A8u;
    {
        const bool branch_taken_0x2041a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A8u;
        // 0x2041ac: 0x84e20086  lh          $v0, 0x86($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041a8) {
            ctx->pc = 0x204BD0u;
            goto label_204bd0;
        }
    }
    ctx->pc = 0x2041B0u;
label_2041b0:
    // 0x2041b0: 0x94e30150  lhu         $v1, 0x150($a3)
    ctx->pc = 0x2041b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x2041b4: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x2041b8: 0x146205c0  bne         $v1, $v0, . + 4 + (0x5C0 << 2)
    ctx->pc = 0x2041B8u;
    {
        const bool branch_taken_0x2041b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2041BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041B8u;
        // 0x2041bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041b8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2041C0u;
    // 0x2041c0: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2041c4: 0x84e40096  lh          $a0, 0x96($a3)
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x2041c8: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x2041c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2041cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2041ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2041d0: 0x146005bb  bnez        $v1, . + 4 + (0x5BB << 2)
    ctx->pc = 0x2041D0u;
    {
        const bool branch_taken_0x2041d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2041D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D0u;
        // 0x2041d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041d0) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2041D8u;
    // 0x2041d8: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x2041d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
    // 0x2041dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2041dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2041e0: 0x1000035c  b           . + 4 + (0x35C << 2)
    ctx->pc = 0x2041E0u;
    {
        const bool branch_taken_0x2041e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041E0u;
        // 0x2041e4: 0xc64101e4  lwc1        $f1, 0x1E4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041e0) {
            ctx->pc = 0x204F54u;
            goto label_204f54;
        }
    }
    ctx->pc = 0x2041E8u;
label_2041e8:
    // 0x2041e8: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x2041e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2041ec: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2041f0: 0x94e30096  lhu         $v1, 0x96($a3)
    ctx->pc = 0x2041f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x2041f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2041F4u;
    {
        const bool branch_taken_0x2041f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041F4u;
        // 0x2041f8: 0x94820044  lhu         $v0, 0x44($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041f4) {
            ctx->pc = 0x204238u;
            goto label_204238;
        }
    }
    ctx->pc = 0x2041FCu;
    // 0x2041fc: 0x0  nop
    ctx->pc = 0x2041fcu;
    // NOP
label_204200:
    // 0x204200: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x204200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x204204: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x204208: 0x94e30096  lhu         $v1, 0x96($a3)
    ctx->pc = 0x204208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x20420c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x94820044  lhu         $v0, 0x44($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204258u;
            goto label_204258;
        }
    }
    ctx->pc = 0x204214u;
    // 0x204214: 0x0  nop
    ctx->pc = 0x204214u;
    // NOP
label_204218:
    // 0x204218: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x204218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x20421c: 0x94e40096  lhu         $a0, 0x96($a3)
    ctx->pc = 0x20421cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x204220: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x204220u;
    {
        const bool branch_taken_0x204220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204220u;
        // 0x204224: 0x94430044  lhu         $v1, 0x44($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204220) {
            ctx->pc = 0x20427Cu;
            goto label_20427c;
        }
    }
    ctx->pc = 0x204228u;
label_204228:
    // 0x204228: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x20422c: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x204230: 0x94e30096  lhu         $v1, 0x96($a3)
    ctx->pc = 0x204230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x204234: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x204234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_204238:
    // 0x204238: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20423c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x204240: 0x1000059e  b           . + 4 + (0x59E << 2)
    ctx->pc = 0x204240u;
    {
        const bool branch_taken_0x204240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204240u;
        // 0x204244: 0x45882a  slt         $s1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204240) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x204248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x20424c: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x20424cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x204250: 0x94e30096  lhu         $v1, 0x96($a3)
    ctx->pc = 0x204250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x204254: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x204254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_204258:
    // 0x204258: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20425c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x204260: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x204260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x204264: 0x10000595  b           . + 4 + (0x595 << 2)
    ctx->pc = 0x204264u;
    {
        const bool branch_taken_0x204264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204264u;
        // 0x204268: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204264) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20426Cu;
    // 0x20426c: 0x0  nop
    ctx->pc = 0x20426cu;
    // NOP
label_204270:
    // 0x204270: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x204274: 0x94e40096  lhu         $a0, 0x96($a3)
    ctx->pc = 0x204274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x204278: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x204278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_20427c:
    // 0x20427c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204280: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x204280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x204284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x204284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x204288: 0x1000058c  b           . + 4 + (0x58C << 2)
    ctx->pc = 0x204288u;
    {
        const bool branch_taken_0x204288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204288u;
        // 0x20428c: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204288) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204290u;
label_204290:
    // 0x204290: 0x8ce500c4  lw          $a1, 0xC4($a3)
    ctx->pc = 0x204290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x204294: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x204294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x204298: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x204298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20429c: 0x84e40096  lh          $a0, 0x96($a3)
    ctx->pc = 0x20429cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x2042a0: 0x94a30046  lhu         $v1, 0x46($a1)
    ctx->pc = 0x2042a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x2042a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2042a8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2042a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2042ac: 0x106001da  beqz        $v1, . + 4 + (0x1DA << 2)
    ctx->pc = 0x2042ACu;
    {
        const bool branch_taken_0x2042ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042ACu;
        // 0x2042b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042ac) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2042B4u;
    // 0x2042b4: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x2042b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2042b8: 0x14400581  bnez        $v0, . + 4 + (0x581 << 2)
    ctx->pc = 0x2042B8u;
    {
        const bool branch_taken_0x2042b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2042BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042B8u;
        // 0x2042bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042b8) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2042C0u;
    // 0x2042c0: 0x1000057e  b           . + 4 + (0x57E << 2)
    ctx->pc = 0x2042C0u;
    {
        const bool branch_taken_0x2042c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042C0u;
        // 0x2042c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042c0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2042C8u;
label_2042c8:
    // 0x2042c8: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2042cc: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x2042d0: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x2042d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2042d4: 0x1000041f  b           . + 4 + (0x41F << 2)
    ctx->pc = 0x2042D4u;
    {
        const bool branch_taken_0x2042d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042D4u;
        // 0x2042d8: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042d4) {
            ctx->pc = 0x205354u;
            goto label_205354;
        }
    }
    ctx->pc = 0x2042DCu;
    // 0x2042dc: 0x0  nop
    ctx->pc = 0x2042dcu;
    // NOP
label_2042e0:
    // 0x2042e0: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2042e4: 0x86440096  lh          $a0, 0x96($s2)
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x2042e8: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x2042e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2042ec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2042f0: 0x10000572  b           . + 4 + (0x572 << 2)
    ctx->pc = 0x2042F0u;
    {
        const bool branch_taken_0x2042f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042F0u;
        // 0x2042f4: 0x83882a  slt         $s1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042f0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2042F8u;
label_2042f8:
    // 0x2042f8: 0x84e30096  lh          $v1, 0x96($a3)
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x2042fc: 0x10000414  b           . + 4 + (0x414 << 2)
    ctx->pc = 0x2042FCu;
    {
        const bool branch_taken_0x2042fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042FCu;
        // 0x204300: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042fc) {
            ctx->pc = 0x205350u;
            goto label_205350;
        }
    }
    ctx->pc = 0x204304u;
    // 0x204304: 0x0  nop
    ctx->pc = 0x204304u;
    // NOP
label_204308:
    // 0x204308: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204308u;
    {
        const bool branch_taken_0x204308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204308u;
        // 0x20430c: 0x84e30096  lh          $v1, 0x96($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204308) {
            ctx->pc = 0x20435Cu;
            goto label_20435c;
        }
    }
    ctx->pc = 0x204310u;
label_204310:
    // 0x204310: 0x84e30096  lh          $v1, 0x96($a3)
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x204314: 0x1000041a  b           . + 4 + (0x41A << 2)
    ctx->pc = 0x204314u;
    {
        const bool branch_taken_0x204314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204314u;
        // 0x204318: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204314) {
            ctx->pc = 0x205380u;
            goto label_205380;
        }
    }
    ctx->pc = 0x20431Cu;
    // 0x20431c: 0x0  nop
    ctx->pc = 0x20431cu;
    // NOP
label_204320:
    // 0x204320: 0x8643009e  lh          $v1, 0x9E($s2)
    ctx->pc = 0x204320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
    // 0x204324: 0x1000040a  b           . + 4 + (0x40A << 2)
    ctx->pc = 0x204324u;
    {
        const bool branch_taken_0x204324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204324u;
        // 0x204328: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204324) {
            ctx->pc = 0x205350u;
            goto label_205350;
        }
    }
    ctx->pc = 0x20432Cu;
    // 0x20432c: 0x0  nop
    ctx->pc = 0x20432cu;
    // NOP
label_204330:
    // 0x204330: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204330u;
    {
        const bool branch_taken_0x204330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204330u;
        // 0x204334: 0x8643009e  lh          $v1, 0x9E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204330) {
            ctx->pc = 0x20435Cu;
            goto label_20435c;
        }
    }
    ctx->pc = 0x204338u;
label_204338:
    // 0x204338: 0x8643009e  lh          $v1, 0x9E($s2)
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
    // 0x20433c: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x20433Cu;
    {
        const bool branch_taken_0x20433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20433Cu;
        // 0x204340: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20433c) {
            ctx->pc = 0x205380u;
            goto label_205380;
        }
    }
    ctx->pc = 0x204344u;
    // 0x204344: 0x0  nop
    ctx->pc = 0x204344u;
    // NOP
label_204348:
    // 0x204348: 0x864300a4  lh          $v1, 0xA4($s2)
    ctx->pc = 0x204348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x20434c: 0x10000400  b           . + 4 + (0x400 << 2)
    ctx->pc = 0x20434Cu;
    {
        const bool branch_taken_0x20434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20434Cu;
        // 0x204350: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20434c) {
            ctx->pc = 0x205350u;
            goto label_205350;
        }
    }
    ctx->pc = 0x204354u;
    // 0x204354: 0x0  nop
    ctx->pc = 0x204354u;
    // NOP
label_204358:
    // 0x204358: 0x864300a4  lh          $v1, 0xA4($s2)
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
label_20435c:
    // 0x20435c: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x20435cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x204360: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x204364: 0x10000555  b           . + 4 + (0x555 << 2)
    ctx->pc = 0x204364u;
    {
        const bool branch_taken_0x204364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204364u;
        // 0x204368: 0x62882a  slt         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204364) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20436Cu;
    // 0x20436c: 0x0  nop
    ctx->pc = 0x20436cu;
    // NOP
label_204370:
    // 0x204370: 0x864300a4  lh          $v1, 0xA4($s2)
    ctx->pc = 0x204370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x204374: 0x10000402  b           . + 4 + (0x402 << 2)
    ctx->pc = 0x204374u;
    {
        const bool branch_taken_0x204374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204374u;
        // 0x204378: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204374) {
            ctx->pc = 0x205380u;
            goto label_205380;
        }
    }
    ctx->pc = 0x20437Cu;
    // 0x20437c: 0x0  nop
    ctx->pc = 0x20437cu;
    // NOP
label_204380:
    // 0x204380: 0x864202b6  lh          $v0, 0x2B6($s2)
    ctx->pc = 0x204380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 694)));
    // 0x204384: 0x1440054d  bnez        $v0, . + 4 + (0x54D << 2)
    ctx->pc = 0x204384u;
    {
        const bool branch_taken_0x204384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204384u;
        // 0x204388: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204384) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20438Cu;
    // 0x20438c: 0x100004ed  b           . + 4 + (0x4ED << 2)
    ctx->pc = 0x20438Cu;
    {
        const bool branch_taken_0x20438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20438Cu;
        // 0x204390: 0x864202b8  lh          $v0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20438c) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x204394u;
    // 0x204394: 0x0  nop
    ctx->pc = 0x204394u;
    // NOP
label_204398:
    // 0x204398: 0x864202b6  lh          $v0, 0x2B6($s2)
    ctx->pc = 0x204398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 694)));
    // 0x20439c: 0x1440019e  bnez        $v0, . + 4 + (0x19E << 2)
    ctx->pc = 0x20439Cu;
    {
        const bool branch_taken_0x20439c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20439Cu;
        // 0x2043a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20439c) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2043A4u;
    // 0x2043a4: 0x864202b8  lh          $v0, 0x2B8($s2)
    ctx->pc = 0x2043a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x2043a8: 0x10400545  beqz        $v0, . + 4 + (0x545 << 2)
    ctx->pc = 0x2043A8u;
    {
        const bool branch_taken_0x2043a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A8u;
        // 0x2043ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a8) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2043B0u;
    // 0x2043b0: 0x10000542  b           . + 4 + (0x542 << 2)
    ctx->pc = 0x2043B0u;
    {
        const bool branch_taken_0x2043b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043B0u;
        // 0x2043b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043b0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2043B8u;
label_2043b8:
    // 0x2043b8: 0xc6400690  lwc1        $f0, 0x690($s2)
    ctx->pc = 0x2043b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2043bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2043c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2043c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2043c4: 0x45000194  bc1f        . + 4 + (0x194 << 2)
    ctx->pc = 0x2043C4u;
    {
        const bool branch_taken_0x2043c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2043C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043C4u;
        // 0x2043c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043c4) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2043CCu;
    // 0x2043cc: 0xc6400694  lwc1        $f0, 0x694($s2)
    ctx->pc = 0x2043ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2043d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2043d4: 0x45020539  bc1fl       . + 4 + (0x539 << 2)
    ctx->pc = 0x2043D4u;
    {
        const bool branch_taken_0x2043d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2043d4) {
            ctx->pc = 0x2043D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2043D4u;
            // 0x2043d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2043DCu;
    // 0x2043dc: 0xc6400698  lwc1        $f0, 0x698($s2)
    ctx->pc = 0x2043dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2043e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2043e4: 0x45010536  bc1t        . + 4 + (0x536 << 2)
    ctx->pc = 0x2043E4u;
    {
        const bool branch_taken_0x2043e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2043E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043E4u;
        // 0x2043e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043e4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2043ECu;
    // 0x2043ec: 0x10000533  b           . + 4 + (0x533 << 2)
    ctx->pc = 0x2043ECu;
    {
        const bool branch_taken_0x2043ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043ECu;
        // 0x2043f0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043ec) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2043F4u;
    // 0x2043f4: 0x0  nop
    ctx->pc = 0x2043f4u;
    // NOP
label_2043f8:
    // 0x2043f8: 0xc6400690  lwc1        $f0, 0x690($s2)
    ctx->pc = 0x2043f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2043fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2043fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204400: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x204400u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204404: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x204404u;
    {
        const bool branch_taken_0x204404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204404u;
        // 0x204408: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204404) {
            ctx->pc = 0x20442Cu;
            goto label_20442c;
        }
    }
    ctx->pc = 0x20440Cu;
    // 0x20440c: 0xc6400694  lwc1        $f0, 0x694($s2)
    ctx->pc = 0x20440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204410: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x204410u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204414: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x204414u;
    {
        const bool branch_taken_0x204414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204414) {
            ctx->pc = 0x204418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204414u;
            // 0x204418: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204430u;
            goto label_204430;
        }
    }
    ctx->pc = 0x20441Cu;
    // 0x20441c: 0xc6400698  lwc1        $f0, 0x698($s2)
    ctx->pc = 0x20441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204420: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x204420u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204424: 0x45010526  bc1t        . + 4 + (0x526 << 2)
    ctx->pc = 0x204424u;
    {
        const bool branch_taken_0x204424 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x204428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204424u;
        // 0x204428: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204424) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20442Cu;
label_20442c:
    // 0x20442c: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x20442cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
label_204430:
    // 0x204430: 0x54400523  bnel        $v0, $zero, . + 4 + (0x523 << 2)
    ctx->pc = 0x204430u;
    {
        const bool branch_taken_0x204430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204430) {
            ctx->pc = 0x204434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204430u;
            // 0x204434: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204438u;
    // 0x204438: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x204438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x20443c: 0x100004c1  b           . + 4 + (0x4C1 << 2)
    ctx->pc = 0x20443Cu;
    {
        const bool branch_taken_0x20443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20443Cu;
        // 0x204440: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20443c) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x204444u;
    // 0x204444: 0x0  nop
    ctx->pc = 0x204444u;
    // NOP
label_204448:
    // 0x204448: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x204448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x20444c: 0x1000051b  b           . + 4 + (0x51B << 2)
    ctx->pc = 0x20444Cu;
    {
        const bool branch_taken_0x20444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20444Cu;
        // 0x204450: 0x30510004  andi        $s1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20444c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204454u;
    // 0x204454: 0x0  nop
    ctx->pc = 0x204454u;
    // NOP
label_204458:
    // 0x204458: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x204458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x20445c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x204460: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x204460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x204464: 0x10000515  b           . + 4 + (0x515 << 2)
    ctx->pc = 0x204464u;
    {
        const bool branch_taken_0x204464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204464u;
        // 0x204468: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204464) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20446Cu;
    // 0x20446c: 0x0  nop
    ctx->pc = 0x20446cu;
    // NOP
label_204470:
    // 0x204470: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x204474: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x204474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x204478: 0x10400510  beqz        $v0, . + 4 + (0x510 << 2)
    ctx->pc = 0x204478u;
    {
        const bool branch_taken_0x204478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204478u;
        // 0x20447c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204478) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204480u;
    // 0x204480: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x204484: 0x94430026  lhu         $v1, 0x26($v0)
    ctx->pc = 0x204484u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x204488: 0x1460050d  bnez        $v1, . + 4 + (0x50D << 2)
    ctx->pc = 0x204488u;
    {
        const bool branch_taken_0x204488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204488u;
        // 0x20448c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204488) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204490u;
    // 0x204490: 0xc64001e4  lwc1        $f0, 0x1E4($s2)
    ctx->pc = 0x204490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204494: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x204494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204498: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x204498u;
    {
        const bool branch_taken_0x204498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204498) {
            ctx->pc = 0x204F58u;
            goto label_204f58;
        }
    }
    ctx->pc = 0x2044A0u;
label_2044a0:
    // 0x2044a0: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2044a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2044a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2044a8: 0x10400504  beqz        $v0, . + 4 + (0x504 << 2)
    ctx->pc = 0x2044A8u;
    {
        const bool branch_taken_0x2044a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A8u;
        // 0x2044ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044a8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2044B0u;
    // 0x2044b0: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2044b4: 0x100004a3  b           . + 4 + (0x4A3 << 2)
    ctx->pc = 0x2044B4u;
    {
        const bool branch_taken_0x2044b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044B4u;
        // 0x2044b8: 0x28424000  slti        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044b4) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x2044BCu;
    // 0x2044bc: 0x0  nop
    ctx->pc = 0x2044bcu;
    // NOP
label_2044c0:
    // 0x2044c0: 0x90e201f2  lbu         $v0, 0x1F2($a3)
    ctx->pc = 0x2044c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 498)));
    // 0x2044c4: 0x104004fd  beqz        $v0, . + 4 + (0x4FD << 2)
    ctx->pc = 0x2044C4u;
    {
        const bool branch_taken_0x2044c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044C4u;
        // 0x2044c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044c4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2044CCu;
    // 0x2044cc: 0x1000049d  b           . + 4 + (0x49D << 2)
    ctx->pc = 0x2044CCu;
    {
        const bool branch_taken_0x2044cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044CCu;
        // 0x2044d0: 0x90e201f9  lbu         $v0, 0x1F9($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044cc) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x2044D4u;
    // 0x2044d4: 0x0  nop
    ctx->pc = 0x2044d4u;
    // NOP
label_2044d8:
    // 0x2044d8: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x2044d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x2044dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2044dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2044e0: 0xa2430191  sb          $v1, 0x191($s2)
    ctx->pc = 0x2044e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x2044e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2044E4u;
    {
        const bool branch_taken_0x2044e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044E4u;
        // 0x2044e8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044e4) {
            ctx->pc = 0x204518u;
            goto label_204518;
        }
    }
    ctx->pc = 0x2044ECu;
    // 0x2044ec: 0x0  nop
    ctx->pc = 0x2044ecu;
    // NOP
label_2044f0:
    // 0x2044f0: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x2044f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x2044f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2044f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2044f8: 0xa2430191  sb          $v1, 0x191($s2)
    ctx->pc = 0x2044f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x2044fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2044FCu;
    {
        const bool branch_taken_0x2044fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044FCu;
        // 0x204500: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044fc) {
            ctx->pc = 0x204518u;
            goto label_204518;
        }
    }
    ctx->pc = 0x204504u;
    // 0x204504: 0x0  nop
    ctx->pc = 0x204504u;
    // NOP
label_204508:
    // 0x204508: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x204508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x20450c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204510: 0xa2430191  sb          $v1, 0x191($s2)
    ctx->pc = 0x204510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x204514: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x204514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_204518:
    // 0x204518: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x204518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20451c: 0xa2420192  sb          $v0, 0x192($s2)
    ctx->pc = 0x20451cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 402), (uint8_t)GPR_U32(ctx, 2));
    // 0x204520: 0x100004e6  b           . + 4 + (0x4E6 << 2)
    ctx->pc = 0x204520u;
    {
        const bool branch_taken_0x204520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204520u;
        // 0x204524: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204520) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204528u;
label_204528:
    // 0x204528: 0x8e42069c  lw          $v0, 0x69C($s2)
    ctx->pc = 0x204528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
    // 0x20452c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20452Cu;
    {
        const bool branch_taken_0x20452c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20452Cu;
        // 0x204530: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20452c) {
            ctx->pc = 0x204544u;
            goto label_204544;
        }
    }
    ctx->pc = 0x204534u;
    // 0x204534: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204538: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x20453c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x20453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x204540: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x204540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_204544:
    // 0x204544: 0x100004dd  b           . + 4 + (0x4DD << 2)
    ctx->pc = 0x204544u;
    {
        const bool branch_taken_0x204544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204544u;
        // 0x204548: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204544) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20454Cu;
    // 0x20454c: 0x0  nop
    ctx->pc = 0x20454cu;
    // NOP
label_204550:
    // 0x204550: 0x8ce2069c  lw          $v0, 0x69C($a3)
    ctx->pc = 0x204550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1692)));
    // 0x204554: 0x100004d9  b           . + 4 + (0x4D9 << 2)
    ctx->pc = 0x204554u;
    {
        const bool branch_taken_0x204554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204554u;
        // 0x204558: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204554) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20455Cu;
    // 0x20455c: 0x0  nop
    ctx->pc = 0x20455cu;
    // NOP
label_204560:
    // 0x204560: 0x8ce206a0  lw          $v0, 0x6A0($a3)
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1696)));
    // 0x204564: 0x8ce4069c  lw          $a0, 0x69C($a3)
    ctx->pc = 0x204564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1692)));
    // 0x204568: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x20456c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204570: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x204570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x204574: 0x100004d1  b           . + 4 + (0x4D1 << 2)
    ctx->pc = 0x204574u;
    {
        const bool branch_taken_0x204574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204574u;
        // 0x204578: 0x82882a  slt         $s1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204574) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20457Cu;
    // 0x20457c: 0x0  nop
    ctx->pc = 0x20457cu;
    // NOP
label_204580:
    // 0x204580: 0x924201be  lbu         $v0, 0x1BE($s2)
    ctx->pc = 0x204580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x204584: 0x100004cd  b           . + 4 + (0x4CD << 2)
    ctx->pc = 0x204584u;
    {
        const bool branch_taken_0x204584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204584u;
        // 0x204588: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204584) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20458Cu;
    // 0x20458c: 0x0  nop
    ctx->pc = 0x20458cu;
    // NOP
label_204590:
    // 0x204590: 0x924201be  lbu         $v0, 0x1BE($s2)
    ctx->pc = 0x204590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x204594: 0x100004c9  b           . + 4 + (0x4C9 << 2)
    ctx->pc = 0x204594u;
    {
        const bool branch_taken_0x204594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204594u;
        // 0x204598: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204594) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20459Cu;
    // 0x20459c: 0x0  nop
    ctx->pc = 0x20459cu;
    // NOP
label_2045a0:
    // 0x2045a0: 0x924201be  lbu         $v0, 0x1BE($s2)
    ctx->pc = 0x2045a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x2045a4: 0x144004c5  bnez        $v0, . + 4 + (0x4C5 << 2)
    ctx->pc = 0x2045A4u;
    {
        const bool branch_taken_0x2045a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A4u;
        // 0x2045a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045a4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2045ACu;
    // 0x2045ac: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2045acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2045b0: 0x10000464  b           . + 4 + (0x464 << 2)
    ctx->pc = 0x2045B0u;
    {
        const bool branch_taken_0x2045b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045B0u;
        // 0x2045b4: 0x28424001  slti        $v0, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045b0) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x2045B8u;
label_2045b8:
    // 0x2045b8: 0x924201be  lbu         $v0, 0x1BE($s2)
    ctx->pc = 0x2045b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x2045bc: 0x104004bf  beqz        $v0, . + 4 + (0x4BF << 2)
    ctx->pc = 0x2045BCu;
    {
        const bool branch_taken_0x2045bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045BCu;
        // 0x2045c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045bc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2045C4u;
    // 0x2045c4: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2045c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2045c8: 0x1000045e  b           . + 4 + (0x45E << 2)
    ctx->pc = 0x2045C8u;
    {
        const bool branch_taken_0x2045c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045C8u;
        // 0x2045cc: 0x28424001  slti        $v0, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045c8) {
            ctx->pc = 0x205744u;
            goto label_205744;
        }
    }
    ctx->pc = 0x2045D0u;
label_2045d0:
    // 0x2045d0: 0x924201be  lbu         $v0, 0x1BE($s2)
    ctx->pc = 0x2045d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x2045d4: 0x144004b9  bnez        $v0, . + 4 + (0x4B9 << 2)
    ctx->pc = 0x2045D4u;
    {
        const bool branch_taken_0x2045d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045D4u;
        // 0x2045d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045d4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2045DCu;
    // 0x2045dc: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2045e0: 0x1000040a  b           . + 4 + (0x40A << 2)
    ctx->pc = 0x2045E0u;
    {
        const bool branch_taken_0x2045e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045E0u;
        // 0x2045e4: 0x28424001  slti        $v0, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045e0) {
            ctx->pc = 0x20560Cu;
            goto label_20560c;
        }
    }
    ctx->pc = 0x2045E8u;
label_2045e8:
    // 0x2045e8: 0x924201be  lbu         $v0, 0x1BE($s2)
    ctx->pc = 0x2045e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x2045ec: 0x104004b3  beqz        $v0, . + 4 + (0x4B3 << 2)
    ctx->pc = 0x2045ECu;
    {
        const bool branch_taken_0x2045ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045ECu;
        // 0x2045f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045ec) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2045F4u;
    // 0x2045f4: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2045f8: 0x10000404  b           . + 4 + (0x404 << 2)
    ctx->pc = 0x2045F8u;
    {
        const bool branch_taken_0x2045f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045F8u;
        // 0x2045fc: 0x28424001  slti        $v0, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045f8) {
            ctx->pc = 0x20560Cu;
            goto label_20560c;
        }
    }
    ctx->pc = 0x204600u;
label_204600:
    // 0x204600: 0x864202bc  lh          $v0, 0x2BC($s2)
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x204604: 0x100004ad  b           . + 4 + (0x4AD << 2)
    ctx->pc = 0x204604u;
    {
        const bool branch_taken_0x204604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204604u;
        // 0x204608: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204604) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20460Cu;
    // 0x20460c: 0x0  nop
    ctx->pc = 0x20460cu;
    // NOP
label_204610:
    // 0x204610: 0x864202bc  lh          $v0, 0x2BC($s2)
    ctx->pc = 0x204610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x204614: 0x100004a9  b           . + 4 + (0x4A9 << 2)
    ctx->pc = 0x204614u;
    {
        const bool branch_taken_0x204614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204614u;
        // 0x204618: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204614) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20461Cu;
    // 0x20461c: 0x0  nop
    ctx->pc = 0x20461cu;
    // NOP
label_204620:
    // 0x204620: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x204620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x204624: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204624u;
    {
        const bool branch_taken_0x204624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204624u;
        // 0x204628: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204624) {
            ctx->pc = 0x204640u;
            goto label_204640;
        }
    }
    ctx->pc = 0x20462Cu;
    // 0x20462c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x204630: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x204630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204634: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x204638: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x204638u;
    {
        const bool branch_taken_0x204638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204638u;
        // 0x20463c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204638) {
            ctx->pc = 0x2049F8u;
            goto label_2049f8;
        }
    }
    ctx->pc = 0x204640u;
label_204640:
    // 0x204640: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x204640u;
    SET_GPR_U32(ctx, 31, 0x204648u);
    ctx->pc = 0x204644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204640u;
    // 0x204644: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x204640u, 0x204648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204648u;
label_204648:
    // 0x204648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x204648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20464c: 0xc09d480  jal         func_275200
    ctx->pc = 0x20464Cu;
    SET_GPR_U32(ctx, 31, 0x204654u);
    ctx->pc = 0x204650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20464Cu;
    // 0x204650: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x20464Cu, 0x204654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204654u;
label_204654:
    // 0x204654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204658: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x20465c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x20465cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x204660: 0x10400497  beqz        $v0, . + 4 + (0x497 << 2)
    ctx->pc = 0x204660u;
    {
        const bool branch_taken_0x204660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204660u;
        // 0x204664: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204660) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204668u;
    // 0x204668: 0x240208d0  addiu       $v0, $zero, 0x8D0
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x20466c: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x20466cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x204670: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204674: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x204674u;
    {
        const bool branch_taken_0x204674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204674u;
        // 0x204678: 0x2444ee60  addiu       $a0, $v0, -0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204674) {
            ctx->pc = 0x2049F8u;
            goto label_2049f8;
        }
    }
    ctx->pc = 0x20467Cu;
    // 0x20467c: 0x0  nop
    ctx->pc = 0x20467cu;
    // NOP
label_204680:
    // 0x204680: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x204680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x204684: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x204684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x204688: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20468c: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x20468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x204690: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x204690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x204694: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x204694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x204698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204698u;
    {
        const bool branch_taken_0x204698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204698u;
        // 0x20469c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204698) {
            ctx->pc = 0x2046B0u;
            goto label_2046b0;
        }
    }
    ctx->pc = 0x2046A0u;
    // 0x2046a0: 0x8483009e  lh          $v1, 0x9E($a0)
    ctx->pc = 0x2046a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 158)));
    // 0x2046a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2046a8: 0x50620484  beql        $v1, $v0, . + 4 + (0x484 << 2)
    ctx->pc = 0x2046A8u;
    {
        const bool branch_taken_0x2046a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2046a8) {
            ctx->pc = 0x2046ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2046A8u;
            // 0x2046ac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2046B0u;
label_2046b0:
    // 0x2046b0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2046B0u;
    {
        const bool branch_taken_0x2046b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B0u;
        // 0x2046b4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b0) {
            ctx->pc = 0x2049F8u;
            goto label_2049f8;
        }
    }
    ctx->pc = 0x2046B8u;
label_2046b8:
    // 0x2046b8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2046b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2046bc: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2046BCu;
    {
        const bool branch_taken_0x2046bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2046C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046BCu;
        // 0x2046c0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046bc) {
            ctx->pc = 0x2046CCu;
            goto label_2046cc;
        }
    }
    ctx->pc = 0x2046C4u;
    // 0x2046c4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2046C4u;
    {
        const bool branch_taken_0x2046c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C4u;
        // 0x2046c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046c4) {
            ctx->pc = 0x2046E0u;
            goto label_2046e0;
        }
    }
    ctx->pc = 0x2046CCu;
label_2046cc:
    // 0x2046cc: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x2046ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x2046d0: 0x106400d1  beq         $v1, $a0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2046D0u;
    {
        const bool branch_taken_0x2046d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2046D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D0u;
        // 0x2046d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d0) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2046D8u;
    // 0x2046d8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2046D8u;
    {
        const bool branch_taken_0x2046d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d8) {
            ctx->pc = 0x204A10u;
            goto label_204a10;
        }
    }
    ctx->pc = 0x2046E0u;
label_2046e0:
    // 0x2046e0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2046E0u;
    {
        const bool branch_taken_0x2046e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046E0u;
        // 0x2046e4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046e0) {
            ctx->pc = 0x2046F8u;
            goto label_2046f8;
        }
    }
    ctx->pc = 0x2046E8u;
    // 0x2046e8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2046E8u;
    {
        const bool branch_taken_0x2046e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2046e8) {
            ctx->pc = 0x2046ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2046E8u;
            // 0x2046ec: 0x8643003e  lh          $v1, 0x3E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2046FCu;
            goto label_2046fc;
        }
    }
    ctx->pc = 0x2046F0u;
    // 0x2046f0: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x2046F0u;
    {
        const bool branch_taken_0x2046f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046F0u;
        // 0x2046f4: 0x8642003e  lh          $v0, 0x3E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046f0) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x2046F8u;
label_2046f8:
    // 0x2046f8: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x2046f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
label_2046fc:
    // 0x2046fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2046fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204700: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x204700u;
    {
        const bool branch_taken_0x204700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204700u;
        // 0x204704: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204700) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204708u;
    // 0x204708: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x204708u;
    {
        const bool branch_taken_0x204708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204708u;
        // 0x20470c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204708) {
            ctx->pc = 0x204A10u;
            goto label_204a10;
        }
    }
    ctx->pc = 0x204710u;
label_204710:
    // 0x204710: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x204710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x204714: 0x120200c0  beq         $s0, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x204714u;
    {
        const bool branch_taken_0x204714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204714u;
        // 0x204718: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204714) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x20471Cu;
    // 0x20471c: 0x120200be  beq         $s0, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x20471Cu;
    {
        const bool branch_taken_0x20471c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20471Cu;
        // 0x204720: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20471c) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204724u;
    // 0x204724: 0x120200bc  beq         $s0, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x204724u;
    {
        const bool branch_taken_0x204724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204724u;
        // 0x204728: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204724) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x20472Cu;
    // 0x20472c: 0x52020463  beql        $s0, $v0, . + 4 + (0x463 << 2)
    ctx->pc = 0x20472Cu;
    {
        const bool branch_taken_0x20472c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20472c) {
            ctx->pc = 0x204730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20472Cu;
            // 0x204730: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204734u;
    // 0x204734: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x204734u;
    {
        const bool branch_taken_0x204734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204734u;
        // 0x204738: 0x8642003e  lh          $v0, 0x3E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204734) {
            ctx->pc = 0x204CD0u;
            goto label_204cd0;
        }
    }
    ctx->pc = 0x20473Cu;
    // 0x20473c: 0x0  nop
    ctx->pc = 0x20473cu;
    // NOP
label_204740:
    // 0x204740: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x204744: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204744u;
    {
        const bool branch_taken_0x204744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x204748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204744u;
        // 0x204748: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204744) {
            ctx->pc = 0x204754u;
            goto label_204754;
        }
    }
    ctx->pc = 0x20474Cu;
    // 0x20474c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20474Cu;
    {
        const bool branch_taken_0x20474c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x204750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20474Cu;
        // 0x204750: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20474c) {
            ctx->pc = 0x204778u;
            goto label_204778;
        }
    }
    ctx->pc = 0x204754u;
label_204754:
    // 0x204754: 0x84e6003e  lh          $a2, 0x3E($a3)
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 62)));
    // 0x204758: 0x10c300af  beq         $a2, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x204758u;
    {
        const bool branch_taken_0x204758 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x20475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204758u;
        // 0x20475c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204758) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204760u;
    // 0x204760: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x204764: 0x14c20456  bne         $a2, $v0, . + 4 + (0x456 << 2)
    ctx->pc = 0x204764u;
    {
        const bool branch_taken_0x204764 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x204768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204764u;
        // 0x204768: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204764) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20476Cu;
    // 0x20476c: 0x10000453  b           . + 4 + (0x453 << 2)
    ctx->pc = 0x20476Cu;
    {
        const bool branch_taken_0x20476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20476Cu;
        // 0x204770: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20476c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204774u;
    // 0x204774: 0x0  nop
    ctx->pc = 0x204774u;
    // NOP
label_204778:
    // 0x204778: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204778u;
    {
        const bool branch_taken_0x204778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204778u;
        // 0x20477c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204778) {
            ctx->pc = 0x204790u;
            goto label_204790;
        }
    }
    ctx->pc = 0x204780u;
    // 0x204780: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204780u;
    {
        const bool branch_taken_0x204780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204780) {
            ctx->pc = 0x204784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204780u;
            // 0x204784: 0x84e6003e  lh          $a2, 0x3E($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204794u;
            goto label_204794;
        }
    }
    ctx->pc = 0x204788u;
    // 0x204788: 0x1000038e  b           . + 4 + (0x38E << 2)
    ctx->pc = 0x204788u;
    {
        const bool branch_taken_0x204788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204788u;
        // 0x20478c: 0x84e2003e  lh          $v0, 0x3E($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204788) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204790u;
label_204790:
    // 0x204790: 0x84e6003e  lh          $a2, 0x3E($a3)
    ctx->pc = 0x204790u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 62)));
label_204794:
    // 0x204794: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x204794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x204798: 0x10c2009f  beq         $a2, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x204798u;
    {
        const bool branch_taken_0x204798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x20479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204798u;
        // 0x20479c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204798) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2047A0u;
    // 0x2047a0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2047a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2047a4: 0x14c20446  bne         $a2, $v0, . + 4 + (0x446 << 2)
    ctx->pc = 0x2047A4u;
    {
        const bool branch_taken_0x2047a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2047A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047A4u;
        // 0x2047a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047a4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2047ACu;
    // 0x2047ac: 0x10000443  b           . + 4 + (0x443 << 2)
    ctx->pc = 0x2047ACu;
    {
        const bool branch_taken_0x2047ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047ACu;
        // 0x2047b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047ac) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2047B4u;
    // 0x2047b4: 0x0  nop
    ctx->pc = 0x2047b4u;
    // NOP
label_2047b8:
    // 0x2047b8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2047b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2047bc: 0x12020096  beq         $s0, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2047BCu;
    {
        const bool branch_taken_0x2047bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047BCu;
        // 0x2047c0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047bc) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2047C4u;
    // 0x2047c4: 0x12020094  beq         $s0, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2047C4u;
    {
        const bool branch_taken_0x2047c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2047C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047C4u;
        // 0x2047c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047c4) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2047CCu;
    // 0x2047cc: 0x12020092  beq         $s0, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2047CCu;
    {
        const bool branch_taken_0x2047cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2047D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047CCu;
        // 0x2047d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047cc) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2047D4u;
    // 0x2047d4: 0x52020439  beql        $s0, $v0, . + 4 + (0x439 << 2)
    ctx->pc = 0x2047D4u;
    {
        const bool branch_taken_0x2047d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2047d4) {
            ctx->pc = 0x2047D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2047D4u;
            // 0x2047d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2047DCu;
    // 0x2047dc: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2047DCu;
    {
        const bool branch_taken_0x2047dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047DCu;
        // 0x2047e0: 0x84e2003e  lh          $v0, 0x3E($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047dc) {
            ctx->pc = 0x204CD0u;
            goto label_204cd0;
        }
    }
    ctx->pc = 0x2047E4u;
    // 0x2047e4: 0x0  nop
    ctx->pc = 0x2047e4u;
    // NOP
label_2047e8:
    // 0x2047e8: 0x10000376  b           . + 4 + (0x376 << 2)
    ctx->pc = 0x2047E8u;
    {
        const bool branch_taken_0x2047e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047E8u;
        // 0x2047ec: 0x86420040  lh          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047e8) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x2047F0u;
label_2047f0:
    // 0x2047f0: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x2047F0u;
    {
        const bool branch_taken_0x2047f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047F0u;
        // 0x2047f4: 0x86420040  lh          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047f0) {
            ctx->pc = 0x204CD0u;
            goto label_204cd0;
        }
    }
    ctx->pc = 0x2047F8u;
label_2047f8:
    // 0x2047f8: 0x10000372  b           . + 4 + (0x372 << 2)
    ctx->pc = 0x2047F8u;
    {
        const bool branch_taken_0x2047f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047F8u;
        // 0x2047fc: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047f8) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204800u;
label_204800:
    // 0x204800: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x204800u;
    {
        const bool branch_taken_0x204800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204800u;
        // 0x204804: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204800) {
            ctx->pc = 0x204CD0u;
            goto label_204cd0;
        }
    }
    ctx->pc = 0x204808u;
label_204808:
    // 0x204808: 0x1600036e  bnez        $s0, . + 4 + (0x36E << 2)
    ctx->pc = 0x204808u;
    {
        const bool branch_taken_0x204808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204808u;
        // 0x20480c: 0x924201bc  lbu         $v0, 0x1BC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204808) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204810u;
    // 0x204810: 0x10500029  beq         $v0, $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x204810u;
    {
        const bool branch_taken_0x204810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x204814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204810u;
        // 0x204814: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204810) {
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x204818u;
    // 0x204818: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x204818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20481c: 0x245183c0  addiu       $s1, $v0, -0x7C40
    ctx->pc = 0x20481cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x204820: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x204820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x204824: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x204824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x204828: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x204828u;
    {
        const bool branch_taken_0x204828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204828) {
            ctx->pc = 0x20482Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204828u;
            // 0x20482c: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20487Cu;
            goto label_20487c;
        }
    }
    ctx->pc = 0x204830u;
    // 0x204830: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x204830u;
    SET_GPR_U32(ctx, 31, 0x204838u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x204830u, 0x204838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204838u;
label_204838:
    // 0x204838: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x204838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20483c: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x20483Cu;
    {
        const bool branch_taken_0x20483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20483c) {
            ctx->pc = 0x204840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20483Cu;
            // 0x204840: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2048BCu;
            goto label_2048bc;
        }
    }
    ctx->pc = 0x204844u;
    // 0x204844: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204848: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x204848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x20484c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20484Cu;
    {
        const bool branch_taken_0x20484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20484c) {
            ctx->pc = 0x204850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20484Cu;
            // 0x204850: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20487Cu;
            goto label_20487c;
        }
    }
    ctx->pc = 0x204854u;
    // 0x204854: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x204854u;
    SET_GPR_U32(ctx, 31, 0x20485Cu);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x204854u, 0x20485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20485Cu;
label_20485c:
    // 0x20485c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20485Cu;
    {
        const bool branch_taken_0x20485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20485c) {
            ctx->pc = 0x204860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20485Cu;
            // 0x204860: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20487Cu;
            goto label_20487c;
        }
    }
    ctx->pc = 0x204864u;
    // 0x204864: 0xc07ebba  jal         func_1FAEE8
    ctx->pc = 0x204864u;
    SET_GPR_U32(ctx, 31, 0x20486Cu);
    ctx->pc = 0x1FAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE8u, 0x204864u, 0x20486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20486Cu;
label_20486c:
    // 0x20486c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204870: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x204870u;
    {
        const bool branch_taken_0x204870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x204870) {
            ctx->pc = 0x204874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204870u;
            // 0x204874: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2048BCu;
            goto label_2048bc;
        }
    }
    ctx->pc = 0x204878u;
    // 0x204878: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x204878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_20487c:
    // 0x20487c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20487Cu;
    {
        const bool branch_taken_0x20487c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20487Cu;
        // 0x204880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20487c) {
            ctx->pc = 0x20489Cu;
            goto label_20489c;
        }
    }
    ctx->pc = 0x204884u;
    // 0x204884: 0x924301bc  lbu         $v1, 0x1BC($s2)
    ctx->pc = 0x204884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x204888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20488c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20488Cu;
    {
        const bool branch_taken_0x20488c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20488c) {
            ctx->pc = 0x20489Cu;
            goto label_20489c;
        }
    }
    ctx->pc = 0x204894u;
    // 0x204894: 0x924201bd  lbu         $v0, 0x1BD($s2)
    ctx->pc = 0x204894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 445)));
    // 0x204898: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x204898u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20489c:
    // 0x20489c: 0x10800407  beqz        $a0, . + 4 + (0x407 << 2)
    ctx->pc = 0x20489Cu;
    {
        const bool branch_taken_0x20489c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20489Cu;
        // 0x2048a0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20489c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2048A4u;
    // 0x2048a4: 0xc09d464  jal         func_275190
    ctx->pc = 0x2048A4u;
    SET_GPR_U32(ctx, 31, 0x2048ACu);
    ctx->pc = 0x2048A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048A4u;
    // 0x2048a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275190u, 0x2048A4u, 0x2048ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048ACu;
label_2048ac:
    // 0x2048ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2048acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048b0: 0x54430402  bnel        $v0, $v1, . + 4 + (0x402 << 2)
    ctx->pc = 0x2048B0u;
    {
        const bool branch_taken_0x2048b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2048b0) {
            ctx->pc = 0x2048B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2048B0u;
            // 0x2048b4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2048B8u;
label_2048b8:
    // 0x2048b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2048b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2048bc:
    // 0x2048bc: 0x100003ff  b           . + 4 + (0x3FF << 2)
    ctx->pc = 0x2048BCu;
    {
        const bool branch_taken_0x2048bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048BCu;
        // 0x2048c0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048bc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2048C4u;
    // 0x2048c4: 0x0  nop
    ctx->pc = 0x2048c4u;
    // NOP
label_2048c8:
    // 0x2048c8: 0x1000033e  b           . + 4 + (0x33E << 2)
    ctx->pc = 0x2048C8u;
    {
        const bool branch_taken_0x2048c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C8u;
        // 0x2048cc: 0x90e201bc  lbu         $v0, 0x1BC($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c8) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x2048D0u;
label_2048d0:
    // 0x2048d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2048d4: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2048d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2048dc: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x2048dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x2048e0: 0x1050004d  beq         $v0, $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2048E0u;
    {
        const bool branch_taken_0x2048e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2048E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048E0u;
        // 0x2048e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048e0) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2048E8u;
    // 0x2048e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2048ec: 0x8443003e  lh          $v1, 0x3E($v0)
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2048f0: 0x147003f3  bne         $v1, $s0, . + 4 + (0x3F3 << 2)
    ctx->pc = 0x2048F0u;
    {
        const bool branch_taken_0x2048f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2048F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048F0u;
        // 0x2048f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048f0) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2048F8u;
    // 0x2048f8: 0x100003f0  b           . + 4 + (0x3F0 << 2)
    ctx->pc = 0x2048F8u;
    {
        const bool branch_taken_0x2048f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048F8u;
        // 0x2048fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048f8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204900u;
label_204900:
    // 0x204900: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x204900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x204904: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x204904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x204908: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x204908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20490c: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x204910: 0x10500041  beq         $v0, $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x204910u;
    {
        const bool branch_taken_0x204910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x204914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204910u;
        // 0x204914: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204910) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x204918u;
    // 0x204918: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x204918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20491c: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x20491cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x204920: 0x147003e7  bne         $v1, $s0, . + 4 + (0x3E7 << 2)
    ctx->pc = 0x204920u;
    {
        const bool branch_taken_0x204920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x204924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204920u;
        // 0x204924: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204920) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204928u;
    // 0x204928: 0x100003e4  b           . + 4 + (0x3E4 << 2)
    ctx->pc = 0x204928u;
    {
        const bool branch_taken_0x204928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204928u;
        // 0x20492c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204928) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204930u;
label_204930:
    // 0x204930: 0x10000324  b           . + 4 + (0x324 << 2)
    ctx->pc = 0x204930u;
    {
        const bool branch_taken_0x204930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204930u;
        // 0x204934: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204930) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204938u;
label_204938:
    // 0x204938: 0xc0920f2  jal         func_2483C8
    ctx->pc = 0x204938u;
    SET_GPR_U32(ctx, 31, 0x204940u);
    ctx->pc = 0x2483C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2483C8u, 0x204938u, 0x204940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204940u;
label_204940:
    // 0x204940: 0x100003de  b           . + 4 + (0x3DE << 2)
    ctx->pc = 0x204940u;
    {
        const bool branch_taken_0x204940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204940u;
        // 0x204944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204940) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204948u;
label_204948:
    // 0x204948: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x204948u;
    SET_GPR_U32(ctx, 31, 0x204950u);
    ctx->pc = 0x20494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204948u;
    // 0x20494c: 0x86440042  lh          $a0, 0x42($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x204948u, 0x204950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204950u;
label_204950:
    // 0x204950: 0x1000031d  b           . + 4 + (0x31D << 2)
    ctx->pc = 0x204950u;
    {
        const bool branch_taken_0x204950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204950u;
        // 0x204954: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204950) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204958u;
label_204958:
    // 0x204958: 0xc07e59c  jal         func_1F9670
    ctx->pc = 0x204958u;
    SET_GPR_U32(ctx, 31, 0x204960u);
    ctx->pc = 0x1F9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9670u, 0x204958u, 0x204960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204960u;
label_204960:
    // 0x204960: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x204960u;
    {
        const bool branch_taken_0x204960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204960u;
        // 0x204964: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204960) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204968u;
label_204968:
    // 0x204968: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x204968u;
    SET_GPR_U32(ctx, 31, 0x204970u);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x204968u, 0x204970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204970u;
label_204970:
    // 0x204970: 0x104003d4  beqz        $v0, . + 4 + (0x3D4 << 2)
    ctx->pc = 0x204970u;
    {
        const bool branch_taken_0x204970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204970u;
        // 0x204974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204970) {
            ctx->pc = 0x2058C4u;
            goto label_2058c4;
        }
    }
    ctx->pc = 0x204978u;
    // 0x204978: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x204978u;
    SET_GPR_U32(ctx, 31, 0x204980u);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x204978u, 0x204980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204980u;
label_204980:
    // 0x204980: 0x94420026  lhu         $v0, 0x26($v0)
    ctx->pc = 0x204980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x204984: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x204984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x204988: 0x100003cd  b           . + 4 + (0x3CD << 2)
    ctx->pc = 0x204988u;
    {
        const bool branch_taken_0x204988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204988u;
        // 0x20498c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204988) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204990u;
label_204990:
    // 0x204990: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204994: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x204998: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x204998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x20499c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20499Cu;
    {
        const bool branch_taken_0x20499c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20499Cu;
        // 0x2049a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20499c) {
            ctx->pc = 0x2049B0u;
            goto label_2049b0;
        }
    }
    ctx->pc = 0x2049A4u;
    // 0x2049a4: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x2049A4u;
    SET_GPR_U32(ctx, 31, 0x2049ACu);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x2049A4u, 0x2049ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049ACu;
label_2049ac:
    // 0x2049ac: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2049acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2049b0:
    // 0x2049b0: 0x100003c3  b           . + 4 + (0x3C3 << 2)
    ctx->pc = 0x2049B0u;
    {
        const bool branch_taken_0x2049b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049B0u;
        // 0x2049b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049b0) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2049B8u;
label_2049b8:
    // 0x2049b8: 0x96450176  lhu         $a1, 0x176($s2)
    ctx->pc = 0x2049b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 374)));
    // 0x2049bc: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x2049bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2049c0: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2049c4: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2049c4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2049c8: 0x1010  mfhi        $v0
    ctx->pc = 0x2049c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2049cc: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x2049CCu;
    {
        const bool branch_taken_0x2049cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049CCu;
        // 0x2049d0: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049cc) {
            ctx->pc = 0x205354u;
            goto label_205354;
        }
    }
    ctx->pc = 0x2049D4u;
    // 0x2049d4: 0x0  nop
    ctx->pc = 0x2049d4u;
    // NOP
label_2049d8:
    // 0x2049d8: 0x100003b9  b           . + 4 + (0x3B9 << 2)
    ctx->pc = 0x2049D8u;
    {
        const bool branch_taken_0x2049d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049D8u;
        // 0x2049dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049d8) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2049E0u;
label_2049e0:
    // 0x2049e0: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x2049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x2049e4: 0x100003b5  b           . + 4 + (0x3B5 << 2)
    ctx->pc = 0x2049E4u;
    {
        const bool branch_taken_0x2049e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049E4u;
        // 0x2049e8: 0x905101ee  lbu         $s1, 0x1EE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 494)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049e4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2049ECu;
    // 0x2049ec: 0x0  nop
    ctx->pc = 0x2049ecu;
    // NOP
label_2049f0:
    // 0x2049f0: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x2049f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x2049f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2049f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2049f8:
    // 0x2049f8: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2049fc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x204a00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x204a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x204a04: 0x104003ad  beqz        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x204A04u;
    {
        const bool branch_taken_0x204a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A04u;
        // 0x204a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a04) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204A0Cu;
    // 0x204a0c: 0x8483009e  lh          $v1, 0x9E($a0)
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 158)));
label_204a10:
    // 0x204a10: 0x146203ab  bne         $v1, $v0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x204A10u;
    {
        const bool branch_taken_0x204a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A10u;
        // 0x204a14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a10) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204A18u;
label_204a18:
    // 0x204a18: 0x100003a8  b           . + 4 + (0x3A8 << 2)
    ctx->pc = 0x204A18u;
    {
        const bool branch_taken_0x204a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A18u;
        // 0x204a1c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a18) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204A20u;
label_204a20:
    // 0x204a20: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x204a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x204a24: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x204a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x204a28: 0x100003a4  b           . + 4 + (0x3A4 << 2)
    ctx->pc = 0x204A28u;
    {
        const bool branch_taken_0x204a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A28u;
        // 0x204a2c: 0x30710004  andi        $s1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a28) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204A30u;
label_204a30:
    // 0x204a30: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x204a34: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x204a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x204a38: 0x100003a0  b           . + 4 + (0x3A0 << 2)
    ctx->pc = 0x204A38u;
    {
        const bool branch_taken_0x204a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A38u;
        // 0x204a3c: 0x30710200  andi        $s1, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a38) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204A40u;
label_204a40:
    // 0x204a40: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x204a44: 0x34048100  ori         $a0, $zero, 0x8100
    ctx->pc = 0x204a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x204a48: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x204a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x204a4c: 0xdc4300c8  ld          $v1, 0xC8($v0)
    ctx->pc = 0x204a4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x204a50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x204a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x204a54: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x204a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x204a58: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x204a58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x204a5c: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x204a5cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x204a60: 0x10000397  b           . + 4 + (0x397 << 2)
    ctx->pc = 0x204A60u;
    {
        const bool branch_taken_0x204a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A60u;
        // 0x204a64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a60) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204A68u;
label_204a68:
    // 0x204a68: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x204a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x204a6c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x204a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x204a70: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x204a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x204a74: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x204a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x204a78: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x204a78u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x204a7c: 0x1010  mfhi        $v0
    ctx->pc = 0x204a7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x204a80: 0x100002d1  b           . + 4 + (0x2D1 << 2)
    ctx->pc = 0x204A80u;
    {
        const bool branch_taken_0x204a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A80u;
        // 0x204a84: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a80) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204A88u;
label_204a88:
    // 0x204a88: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x204a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x204a8c: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x204a90: 0x1060038a  beqz        $v1, . + 4 + (0x38A << 2)
    ctx->pc = 0x204A90u;
    {
        const bool branch_taken_0x204a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A90u;
        // 0x204a94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a90) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204A98u;
    // 0x204a98: 0x9464001c  lhu         $a0, 0x1C($v1)
    ctx->pc = 0x204a98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x204a9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x204a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x204aa0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x204aa0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x204aa4: 0x1010  mfhi        $v0
    ctx->pc = 0x204aa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x204aa8: 0x100002c7  b           . + 4 + (0x2C7 << 2)
    ctx->pc = 0x204AA8u;
    {
        const bool branch_taken_0x204aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AA8u;
        // 0x204aac: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204aa8) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204AB0u;
label_204ab0:
    // 0x204ab0: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x204ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x204ab4: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x204ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x204ab8: 0x10000380  b           . + 4 + (0x380 << 2)
    ctx->pc = 0x204AB8u;
    {
        const bool branch_taken_0x204ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AB8u;
        // 0x204abc: 0x38fc2  srl         $s1, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ab8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204AC0u;
label_204ac0:
    // 0x204ac0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x204AC0u;
    SET_GPR_U32(ctx, 31, 0x204AC8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x204AC0u, 0x204AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AC8u;
label_204ac8:
    // 0x204ac8: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x204ac8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204acc: 0x1810  mfhi        $v1
    ctx->pc = 0x204accu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x204ad0: 0x1000037a  b           . + 4 + (0x37A << 2)
    ctx->pc = 0x204AD0u;
    {
        const bool branch_taken_0x204ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AD0u;
        // 0x204ad4: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ad0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204AD8u;
label_204ad8:
    // 0x204ad8: 0x96430176  lhu         $v1, 0x176($s2)
    ctx->pc = 0x204ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 374)));
    // 0x204adc: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x204ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204ae4: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x204ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x204ae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x204ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x204aec: 0x10000373  b           . + 4 + (0x373 << 2)
    ctx->pc = 0x204AECu;
    {
        const bool branch_taken_0x204aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AECu;
        // 0x204af0: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204aec) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204AF4u;
    // 0x204af4: 0x0  nop
    ctx->pc = 0x204af4u;
    // NOP
label_204af8:
    // 0x204af8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x204AF8u;
    {
        const bool branch_taken_0x204af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AF8u;
        // 0x204afc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204af8) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204B00u;
label_204b00:
    // 0x204b00: 0x96430176  lhu         $v1, 0x176($s2)
    ctx->pc = 0x204b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 374)));
    // 0x204b04: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x204b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x204b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204b0c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x204b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x204b10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x204b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x204b14: 0x10000369  b           . + 4 + (0x369 << 2)
    ctx->pc = 0x204B14u;
    {
        const bool branch_taken_0x204b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B14u;
        // 0x204b18: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b14) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204B1Cu;
    // 0x204b1c: 0x0  nop
    ctx->pc = 0x204b1cu;
    // NOP
label_204b20:
    // 0x204b20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x204B20u;
    {
        const bool branch_taken_0x204b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B20u;
        // 0x204b24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b20) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204B28u;
label_204b28:
    // 0x204b28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x204B28u;
    {
        const bool branch_taken_0x204b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B28u;
        // 0x204b2c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b28) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204B30u;
label_204b30:
    // 0x204b30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x204B30u;
    {
        const bool branch_taken_0x204b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B30u;
        // 0x204b34: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b30) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204B38u;
label_204b38:
    // 0x204b38: 0x96430176  lhu         $v1, 0x176($s2)
    ctx->pc = 0x204b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 374)));
    // 0x204b3c: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x204b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204b44: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x204b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x204b48: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x204b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x204b4c: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x204B4Cu;
    {
        const bool branch_taken_0x204b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B4Cu;
        // 0x204b50: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b4c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204B54u;
    // 0x204b54: 0x0  nop
    ctx->pc = 0x204b54u;
    // NOP
label_204b58:
    // 0x204b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204B58u;
    {
        const bool branch_taken_0x204b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B58u;
        // 0x204b5c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b58) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204B60u;
label_204b60:
    // 0x204b60: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_204b64:
    // 0x204b64: 0x96460176  lhu         $a2, 0x176($s2)
    ctx->pc = 0x204b64u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 374)));
    // 0x204b68: 0x204001b  divu        $zero, $s0, $a0
    ctx->pc = 0x204b68u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x204b6c: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x204b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x204b70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204b74: 0x2810  mfhi        $a1
    ctx->pc = 0x204b74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x204b78: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x204b78u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x204b7c: 0x1010  mfhi        $v0
    ctx->pc = 0x204b7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x204b80: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x204b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x204b84: 0x1000034d  b           . + 4 + (0x34D << 2)
    ctx->pc = 0x204B84u;
    {
        const bool branch_taken_0x204b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B84u;
        // 0x204b88: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b84) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204B8Cu;
    // 0x204b8c: 0x0  nop
    ctx->pc = 0x204b8cu;
    // NOP
label_204b90:
    // 0x204b90: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x204B90u;
    SET_GPR_U32(ctx, 31, 0x204B98u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x204B90u, 0x204B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B98u;
label_204b98:
    // 0x204b98: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x204b9c: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x204b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x204ba0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x204ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x204ba4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x204ba4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x204ba8: 0x1812  mflo        $v1
    ctx->pc = 0x204ba8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x204bac: 0x10000343  b           . + 4 + (0x343 << 2)
    ctx->pc = 0x204BACu;
    {
        const bool branch_taken_0x204bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BACu;
        // 0x204bb0: 0x43882a  slt         $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bac) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204BB4u;
    // 0x204bb4: 0x0  nop
    ctx->pc = 0x204bb4u;
    // NOP
label_204bb8:
    // 0x204bb8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204bbc: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x204BBCu;
    {
        const bool branch_taken_0x204bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BBCu;
        // 0x204bc0: 0x8c62885c  lw          $v0, -0x77A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bbc) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204BC4u;
    // 0x204bc4: 0x0  nop
    ctx->pc = 0x204bc4u;
    // NOP
label_204bc8:
    // 0x204bc8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204bcc: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x204bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
label_204bd0:
    // 0x204bd0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x204bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x204bd4: 0x10000339  b           . + 4 + (0x339 << 2)
    ctx->pc = 0x204BD4u;
    {
        const bool branch_taken_0x204bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BD4u;
        // 0x204bd8: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bd4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204BDCu;
    // 0x204bdc: 0x0  nop
    ctx->pc = 0x204bdcu;
    // NOP
label_204be0:
    // 0x204be0: 0xc08215c  jal         func_208570
    ctx->pc = 0x204BE0u;
    SET_GPR_U32(ctx, 31, 0x204BE8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x204BE0u, 0x204BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BE8u;
label_204be8:
    // 0x204be8: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x204BE8u;
    {
        const bool branch_taken_0x204be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE8u;
        // 0x204bec: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204be8) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204BF0u;
label_204bf0:
    // 0x204bf0: 0xc08215e  jal         func_208578
    ctx->pc = 0x204BF0u;
    SET_GPR_U32(ctx, 31, 0x204BF8u);
    ctx->pc = 0x208578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208578u, 0x204BF0u, 0x204BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BF8u;
label_204bf8:
    // 0x204bf8: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x204BF8u;
    {
        const bool branch_taken_0x204bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BF8u;
        // 0x204bfc: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bf8) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204C00u;
label_204c00:
    // 0x204c00: 0x86460090  lh          $a2, 0x90($s2)
    ctx->pc = 0x204c00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x204c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c08: 0x84e30090  lh          $v1, 0x90($a3)
    ctx->pc = 0x204c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x204c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204c10: 0xc3202a  slt         $a0, $a2, $v1
    ctx->pc = 0x204c10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204c14: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x204c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x204c18: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x204c18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x204c1c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x204c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x204c20: 0x10000268  b           . + 4 + (0x268 << 2)
    ctx->pc = 0x204C20u;
    {
        const bool branch_taken_0x204c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C20u;
        // 0x204c24: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c20) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204C28u;
label_204c28:
    // 0x204c28: 0x86460092  lh          $a2, 0x92($s2)
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x204c2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204c30: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204C30u;
    {
        const bool branch_taken_0x204c30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x204C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C30u;
        // 0x204c34: 0x96440092  lhu         $a0, 0x92($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c30) {
            ctx->pc = 0x204C44u;
            goto label_204c44;
        }
    }
    ctx->pc = 0x204C38u;
    // 0x204c38: 0x84e20092  lh          $v0, 0x92($a3)
    ctx->pc = 0x204c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 146)));
    // 0x204c3c: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x204C3Cu;
    {
        const bool branch_taken_0x204c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x204C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C3Cu;
        // 0x204c40: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c3c) {
            ctx->pc = 0x204C4Cu;
            goto label_204c4c;
        }
    }
    ctx->pc = 0x204C44u;
label_204c44:
    // 0x204c44: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x204c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x204c48: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x204c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_204c4c:
    // 0x204c4c: 0x701026  xor         $v0, $v1, $s0
    ctx->pc = 0x204c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
    // 0x204c50: 0x1000031a  b           . + 4 + (0x31A << 2)
    ctx->pc = 0x204C50u;
    {
        const bool branch_taken_0x204c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C50u;
        // 0x204c54: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c50) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204C58u;
label_204c58:
    // 0x204c58: 0xc082fae  jal         func_20BEB8
    ctx->pc = 0x204C58u;
    SET_GPR_U32(ctx, 31, 0x204C60u);
    ctx->pc = 0x204C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C58u;
    // 0x204c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BEB8u, 0x204C58u, 0x204C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C60u;
label_204c60:
    // 0x204c60: 0x10000316  b           . + 4 + (0x316 << 2)
    ctx->pc = 0x204C60u;
    {
        const bool branch_taken_0x204c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C60u;
        // 0x204c64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c60) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204C68u;
label_204c68:
    // 0x204c68: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x204C68u;
    {
        const bool branch_taken_0x204c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C68u;
        // 0x204c6c: 0x8f82973c  lw          $v0, -0x68C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c68) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204C70u;
label_204c70:
    // 0x204c70: 0xc08215c  jal         func_208570
    ctx->pc = 0x204C70u;
    SET_GPR_U32(ctx, 31, 0x204C78u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x204C70u, 0x204C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C78u;
label_204c78:
    // 0x204c78: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x204c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x204c7c: 0x1000030f  b           . + 4 + (0x30F << 2)
    ctx->pc = 0x204C7Cu;
    {
        const bool branch_taken_0x204c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C7Cu;
        // 0x204c80: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c7c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204C84u;
    // 0x204c84: 0x0  nop
    ctx->pc = 0x204c84u;
    // NOP
label_204c88:
    // 0x204c88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204c8c: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x204C8Cu;
    {
        const bool branch_taken_0x204c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C8Cu;
        // 0x204c90: 0x8c628880  lw          $v0, -0x7780($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c8c) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204C94u;
    // 0x204c94: 0x0  nop
    ctx->pc = 0x204c94u;
    // NOP
label_204c98:
    // 0x204c98: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204c9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x204C9Cu;
    {
        const bool branch_taken_0x204c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C9Cu;
        // 0x204ca0: 0x8c628880  lw          $v0, -0x7780($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c9c) {
            ctx->pc = 0x204CD0u;
            goto label_204cd0;
        }
    }
    ctx->pc = 0x204CA4u;
    // 0x204ca4: 0x0  nop
    ctx->pc = 0x204ca4u;
    // NOP
label_204ca8:
    // 0x204ca8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204cac: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x204CACu;
    {
        const bool branch_taken_0x204cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CACu;
        // 0x204cb0: 0x8c6283f8  lw          $v0, -0x7C08($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cac) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204CB4u;
    // 0x204cb4: 0x0  nop
    ctx->pc = 0x204cb4u;
    // NOP
label_204cb8:
    // 0x204cb8: 0xc07daf0  jal         func_1F6BC0
    ctx->pc = 0x204CB8u;
    SET_GPR_U32(ctx, 31, 0x204CC0u);
    ctx->pc = 0x1F6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC0u, 0x204CB8u, 0x204CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CC0u;
label_204cc0:
    // 0x204cc0: 0x10000241  b           . + 4 + (0x241 << 2)
    ctx->pc = 0x204CC0u;
    {
        const bool branch_taken_0x204cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CC0u;
        // 0x204cc4: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cc0) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204CC8u;
label_204cc8:
    // 0x204cc8: 0xc07daf0  jal         func_1F6BC0
    ctx->pc = 0x204CC8u;
    SET_GPR_U32(ctx, 31, 0x204CD0u);
    ctx->pc = 0x1F6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC0u, 0x204CC8u, 0x204CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CD0u;
label_204cd0:
    // 0x204cd0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x204cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x204cd4: 0x100002f9  b           . + 4 + (0x2F9 << 2)
    ctx->pc = 0x204CD4u;
    {
        const bool branch_taken_0x204cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CD4u;
        // 0x204cd8: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cd4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204CDCu;
    // 0x204cdc: 0x0  nop
    ctx->pc = 0x204cdcu;
    // NOP
label_204ce0:
    // 0x204ce0: 0x120002f6  beqz        $s0, . + 4 + (0x2F6 << 2)
    ctx->pc = 0x204CE0u;
    {
        const bool branch_taken_0x204ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CE0u;
        // 0x204ce4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ce0) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204CE8u;
    // 0x204ce8: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x204ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x204cec: 0x100002f3  b           . + 4 + (0x2F3 << 2)
    ctx->pc = 0x204CECu;
    {
        const bool branch_taken_0x204cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CECu;
        // 0x204cf0: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cec) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204CF4u;
    // 0x204cf4: 0x0  nop
    ctx->pc = 0x204cf4u;
    // NOP
label_204cf8:
    // 0x204cf8: 0x120002f0  beqz        $s0, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x204CF8u;
    {
        const bool branch_taken_0x204cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CF8u;
        // 0x204cfc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cf8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204D00u;
    // 0x204d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d04: 0x120202ed  beq         $s0, $v0, . + 4 + (0x2ED << 2)
    ctx->pc = 0x204D04u;
    {
        const bool branch_taken_0x204d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D04u;
        // 0x204d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d04) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204D0Cu;
    // 0x204d0c: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x204d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x204d10: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x204D10u;
    {
        const bool branch_taken_0x204d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D10u;
        // 0x204d14: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d10) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204D18u;
label_204d18:
    // 0x204d18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x204d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x204d1c: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x204d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x204d20: 0x24478858  addiu       $a3, $v0, -0x77A8
    ctx->pc = 0x204d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x204d24: 0x8ce20044  lw          $v0, 0x44($a3)
    ctx->pc = 0x204d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A889Cu));
    // 0x204d28: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x204d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x204d2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x204D2Cu;
    {
        const bool branch_taken_0x204d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D2Cu;
        // 0x204d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d2c) {
            ctx->pc = 0x204D68u;
            goto label_204d68;
        }
    }
    ctx->pc = 0x204D34u;
    // 0x204d34: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x204d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x204d38: 0x8ce70040  lw          $a3, 0x40($a3)
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x204d3c: 0x244888d0  addiu       $t0, $v0, -0x7730
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x204d40: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x204d44: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x204d48: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x204d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x204d4c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x204D4Cu;
    {
        const bool branch_taken_0x204d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d4c) {
            ctx->pc = 0x204D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204D4Cu;
            // 0x204d50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204D6Cu;
            goto label_204d6c;
        }
    }
    ctx->pc = 0x204D54u;
    // 0x204d54: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x204d58: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x204d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x204d5c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x204d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x204d60: 0x544002d6  bnel        $v0, $zero, . + 4 + (0x2D6 << 2)
    ctx->pc = 0x204D60u;
    {
        const bool branch_taken_0x204d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204d60) {
            ctx->pc = 0x204D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204D60u;
            // 0x204d64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204D68u;
label_204d68:
    // 0x204d68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204d6c:
    // 0x204d6c: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x204D6Cu;
    {
        const bool branch_taken_0x204d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D6Cu;
        // 0x204d70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d6c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204D74u;
    // 0x204d74: 0x0  nop
    ctx->pc = 0x204d74u;
    // NOP
label_204d78:
    // 0x204d78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204d7c: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x204D7Cu;
    {
        const bool branch_taken_0x204d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D7Cu;
        // 0x204d80: 0x8c628868  lw          $v0, -0x7798($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d7c) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204D84u;
    // 0x204d84: 0x0  nop
    ctx->pc = 0x204d84u;
    // NOP
label_204d88:
    // 0x204d88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x204d8c: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x204D8Cu;
    {
        const bool branch_taken_0x204d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D8Cu;
        // 0x204d90: 0x905183e0  lbu         $s1, -0x7C20($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d8c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204D94u;
    // 0x204d94: 0x0  nop
    ctx->pc = 0x204d94u;
    // NOP
label_204d98:
    // 0x204d98: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x204d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x204d9c: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x204D9Cu;
    {
        const bool branch_taken_0x204d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D9Cu;
        // 0x204da0: 0x906283e1  lbu         $v0, -0x7C1F($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935521)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d9c) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204DA4u;
    // 0x204da4: 0x0  nop
    ctx->pc = 0x204da4u;
    // NOP
label_204da8:
    // 0x204da8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x204dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db0: 0xc085238  jal         func_2148E0
    ctx->pc = 0x204DB0u;
    SET_GPR_U32(ctx, 31, 0x204DB8u);
    ctx->pc = 0x204DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DB0u;
    // 0x204db4: 0x248483c0  addiu       $a0, $a0, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x204DB0u, 0x204DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DB8u;
label_204db8:
    // 0x204db8: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x204DB8u;
    {
        const bool branch_taken_0x204db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DB8u;
        // 0x204dbc: 0x501026  xor         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204db8) {
            ctx->pc = 0x2055C8u;
            goto label_2055c8;
        }
    }
    ctx->pc = 0x204DC0u;
label_204dc0:
    // 0x204dc0: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x204DC0u;
    {
        const bool branch_taken_0x204dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DC0u;
        // 0x204dc4: 0x924201bb  lbu         $v0, 0x1BB($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204dc0) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x204DC8u;
label_204dc8:
    // 0x204dc8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x204dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x204dcc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x204DCCu;
    {
        const bool branch_taken_0x204dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DCCu;
        // 0x204dd0: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204dcc) {
            ctx->pc = 0x204E28u;
            goto label_204e28;
        }
    }
    ctx->pc = 0x204DD4u;
    // 0x204dd4: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x204dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x204dd8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x204dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x204ddc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x204ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x204de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204de4: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x204de8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x204de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x204dec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x204decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204df0: 0xc07f9e0  jal         func_1FE780
    ctx->pc = 0x204DF0u;
    SET_GPR_U32(ctx, 31, 0x204DF8u);
    ctx->pc = 0x204DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204DF0u;
    // 0x204df4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE780u, 0x204DF0u, 0x204DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DF8u;
label_204df8:
    // 0x204df8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x204dfc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x204dfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x204e00: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x204E00u;
    SET_GPR_U32(ctx, 31, 0x204E08u);
    ctx->pc = 0x204E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E00u;
    // 0x204e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x204E00u, 0x204E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E08u;
label_204e08:
    // 0x204e08: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x204e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e0c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x204e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_204e10:
    // 0x204e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x204e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204e14: 0x450102aa  bc1t        . + 4 + (0x2AA << 2)
    ctx->pc = 0x204E14u;
    {
        const bool branch_taken_0x204e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x204E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E14u;
        // 0x204e18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e14) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204E1Cu;
    // 0x204e1c: 0x100002a7  b           . + 4 + (0x2A7 << 2)
    ctx->pc = 0x204E1Cu;
    {
        const bool branch_taken_0x204e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E1Cu;
        // 0x204e20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e1c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204E24u;
    // 0x204e24: 0x0  nop
    ctx->pc = 0x204e24u;
    // NOP
label_204e28:
    // 0x204e28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204E28u;
    {
        const bool branch_taken_0x204e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E28u;
        // 0x204e2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e28) {
            ctx->pc = 0x204E40u;
            goto label_204e40;
        }
    }
    ctx->pc = 0x204E30u;
    // 0x204e30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x204e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x204e34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204E34u;
    {
        const bool branch_taken_0x204e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E34u;
        // 0x204e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e34) {
            ctx->pc = 0x204E40u;
            goto label_204e40;
        }
    }
    ctx->pc = 0x204E3Cu;
    // 0x204e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204e40:
    // 0x204e40: 0x1080029e  beqz        $a0, . + 4 + (0x29E << 2)
    ctx->pc = 0x204E40u;
    {
        const bool branch_taken_0x204e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E40u;
        // 0x204e44: 0x26500750  addiu       $s0, $s2, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e40) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204E48u;
    // 0x204e48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e4c: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x204E4Cu;
    SET_GPR_U32(ctx, 31, 0x204E54u);
    ctx->pc = 0x204E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E4Cu;
    // 0x204e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x204E4Cu, 0x204E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E54u;
label_204e54:
    // 0x204e54: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x204e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e58: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x204e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x204e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x204e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x204e60: 0x3c014448  lui         $at, 0x4448
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17480 << 16));
    // 0x204e64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x204e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x204e68: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x204e68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x204e6c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x204E6Cu;
    {
        const bool branch_taken_0x204e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E6Cu;
        // 0x204e70: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e6c) {
            ctx->pc = 0x204E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204e10;
        }
    }
    ctx->pc = 0x204E74u;
    // 0x204e74: 0x0  nop
    ctx->pc = 0x204e74u;
    // NOP
label_204e78:
    // 0x204e78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204E78u;
    {
        const bool branch_taken_0x204e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E78u;
        // 0x204e7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e78) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E80u;
label_204e80:
    // 0x204e80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x204E80u;
    {
        const bool branch_taken_0x204e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E80u;
        // 0x204e84: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e80) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E88u;
label_204e88:
    // 0x204e88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x204E88u;
    {
        const bool branch_taken_0x204e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E88u;
        // 0x204e8c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e88) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E90u;
label_204e90:
    // 0x204e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204E90u;
    {
        const bool branch_taken_0x204e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E90u;
        // 0x204e94: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e90) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E98u;
label_204e98:
    // 0x204e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204E98u;
    {
        const bool branch_taken_0x204e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E98u;
        // 0x204e9c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e98) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204EA0u;
label_204ea0:
    // 0x204ea0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_204ea4:
    // 0x204ea4: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x204ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x204ea8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x204EA8u;
    {
        const bool branch_taken_0x204ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EA8u;
        // 0x204eac: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ea8) {
            ctx->pc = 0x204EF0u;
            goto label_204ef0;
        }
    }
    ctx->pc = 0x204EB0u;
    // 0x204eb0: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x204eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x204eb4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x204eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204eb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ec0: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x204ec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x204ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x204ec8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x204ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ecc: 0xc07f9e0  jal         func_1FE780
    ctx->pc = 0x204ECCu;
    SET_GPR_U32(ctx, 31, 0x204ED4u);
    ctx->pc = 0x204ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204ECCu;
    // 0x204ed0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE780u, 0x204ECCu, 0x204ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204ED4u;
label_204ed4:
    // 0x204ed4: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x204ed8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x204ed8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x204edc: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x204EDCu;
    SET_GPR_U32(ctx, 31, 0x204EE4u);
    ctx->pc = 0x204EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EDCu;
    // 0x204ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x204EDCu, 0x204EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EE4u;
label_204ee4:
    // 0x204ee4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x204ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204ee8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204EE8u;
    {
        const bool branch_taken_0x204ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EE8u;
        // 0x204eec: 0x46140840  add.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ee8) {
            ctx->pc = 0x204F3Cu;
            goto label_204f3c;
        }
    }
    ctx->pc = 0x204EF0u;
label_204ef0:
    // 0x204ef0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204EF0u;
    {
        const bool branch_taken_0x204ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EF0u;
        // 0x204ef4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ef0) {
            ctx->pc = 0x204F08u;
            goto label_204f08;
        }
    }
    ctx->pc = 0x204EF8u;
    // 0x204ef8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x204ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x204efc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204EFCu;
    {
        const bool branch_taken_0x204efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EFCu;
        // 0x204f00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204efc) {
            ctx->pc = 0x204F08u;
            goto label_204f08;
        }
    }
    ctx->pc = 0x204F04u;
    // 0x204f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204f08:
    // 0x204f08: 0x1080026c  beqz        $a0, . + 4 + (0x26C << 2)
    ctx->pc = 0x204F08u;
    {
        const bool branch_taken_0x204f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F08u;
        // 0x204f0c: 0x26500750  addiu       $s0, $s2, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f08) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204F10u;
    // 0x204f10: 0xc07f9e0  jal         func_1FE780
    ctx->pc = 0x204F10u;
    SET_GPR_U32(ctx, 31, 0x204F18u);
    ctx->pc = 0x204F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F10u;
    // 0x204f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE780u, 0x204F10u, 0x204F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F18u;
label_204f18:
    // 0x204f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f1c: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x204F1Cu;
    SET_GPR_U32(ctx, 31, 0x204F24u);
    ctx->pc = 0x204F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F1Cu;
    // 0x204f20: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x204F1Cu, 0x204F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F24u;
label_204f24:
    // 0x204f24: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x204f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204f28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x204f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f2c: 0x3c014448  lui         $at, 0x4448
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17480 << 16));
    // 0x204f30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x204f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x204f34: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x204f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x204f38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x204f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_204f3c:
    // 0x204f3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x204f3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x204f40: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x204f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204f44: 0x4500025e  bc1f        . + 4 + (0x25E << 2)
    ctx->pc = 0x204F44u;
    {
        const bool branch_taken_0x204f44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F44u;
        // 0x204f48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f44) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204F4Cu;
    // 0x204f4c: 0xc6410644  lwc1        $f1, 0x644($s2)
    ctx->pc = 0x204f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204f54:
    // 0x204f54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x204f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204f58:
    // 0x204f58: 0x45000259  bc1f        . + 4 + (0x259 << 2)
    ctx->pc = 0x204F58u;
    {
        const bool branch_taken_0x204f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F58u;
        // 0x204f5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f58) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x204F60u;
    // 0x204f60: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x204F60u;
    {
        const bool branch_taken_0x204f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F60u;
        // 0x204f64: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f60) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204F68u;
label_204f68:
    // 0x204f68: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x204f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x204f6c: 0xc0af99e  jal         func_2BE678
    ctx->pc = 0x204F6Cu;
    SET_GPR_U32(ctx, 31, 0x204F74u);
    ctx->pc = 0x204F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F6Cu;
    // 0x204f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE678u, 0x204F6Cu, 0x204F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F74u;
label_204f74:
    // 0x204f74: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x204F74u;
    {
        const bool branch_taken_0x204f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F74u;
        // 0x204f78: 0x30510003  andi        $s1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f74) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204F7Cu;
    // 0x204f7c: 0x0  nop
    ctx->pc = 0x204f7cu;
    // NOP
label_204f80:
    // 0x204f80: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x204f84: 0xc0af99e  jal         func_2BE678
    ctx->pc = 0x204F84u;
    SET_GPR_U32(ctx, 31, 0x204F8Cu);
    ctx->pc = 0x204F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F84u;
    // 0x204f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE678u, 0x204F84u, 0x204F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F8Cu;
label_204f8c:
    // 0x204f8c: 0x1000024b  b           . + 4 + (0x24B << 2)
    ctx->pc = 0x204F8Cu;
    {
        const bool branch_taken_0x204f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F8Cu;
        // 0x204f90: 0x30510002  andi        $s1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f8c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204F94u;
    // 0x204f94: 0x0  nop
    ctx->pc = 0x204f94u;
    // NOP
label_204f98:
    // 0x204f98: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x204f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x204f9c: 0xc0af99e  jal         func_2BE678
    ctx->pc = 0x204F9Cu;
    SET_GPR_U32(ctx, 31, 0x204FA4u);
    ctx->pc = 0x204FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F9Cu;
    // 0x204fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE678u, 0x204F9Cu, 0x204FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FA4u;
label_204fa4:
    // 0x204fa4: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x204FA4u;
    {
        const bool branch_taken_0x204fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FA4u;
        // 0x204fa8: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fa4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204FACu;
    // 0x204fac: 0x0  nop
    ctx->pc = 0x204facu;
    // NOP
label_204fb0:
    // 0x204fb0: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x204fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x204fb4: 0xc0af9ae  jal         func_2BE6B8
    ctx->pc = 0x204FB4u;
    SET_GPR_U32(ctx, 31, 0x204FBCu);
    ctx->pc = 0x204FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FB4u;
    // 0x204fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6B8u, 0x204FB4u, 0x204FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FBCu;
label_204fbc:
    // 0x204fbc: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x204FBCu;
    {
        const bool branch_taken_0x204fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FBCu;
        // 0x204fc0: 0x30510003  andi        $s1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fbc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204FC4u;
    // 0x204fc4: 0x0  nop
    ctx->pc = 0x204fc4u;
    // NOP
label_204fc8:
    // 0x204fc8: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x204fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x204fcc: 0xc0af9ae  jal         func_2BE6B8
    ctx->pc = 0x204FCCu;
    SET_GPR_U32(ctx, 31, 0x204FD4u);
    ctx->pc = 0x204FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FCCu;
    // 0x204fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6B8u, 0x204FCCu, 0x204FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FD4u;
label_204fd4:
    // 0x204fd4: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x204FD4u;
    {
        const bool branch_taken_0x204fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FD4u;
        // 0x204fd8: 0x30510002  andi        $s1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fd4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204FDCu;
    // 0x204fdc: 0x0  nop
    ctx->pc = 0x204fdcu;
    // NOP
label_204fe0:
    // 0x204fe0: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x204fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x204fe4: 0xc0af9ae  jal         func_2BE6B8
    ctx->pc = 0x204FE4u;
    SET_GPR_U32(ctx, 31, 0x204FECu);
    ctx->pc = 0x204FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FE4u;
    // 0x204fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6B8u, 0x204FE4u, 0x204FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FECu;
label_204fec:
    // 0x204fec: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x204FECu;
    {
        const bool branch_taken_0x204fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FECu;
        // 0x204ff0: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fec) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x204FF4u;
    // 0x204ff4: 0x0  nop
    ctx->pc = 0x204ff4u;
    // NOP
label_204ff8:
    // 0x204ff8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x204ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x204ffc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x204FFCu;
    {
        const bool branch_taken_0x204ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FFCu;
        // 0x205000: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ffc) {
            ctx->pc = 0x205058u;
            goto label_205058;
        }
    }
    ctx->pc = 0x205004u;
    // 0x205004: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x205004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x205008: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x205008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x20500c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x205010: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x205014: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x205014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x205018: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x205018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20501c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205020: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x205020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x205024: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x205024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x205028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20502c:
    // 0x20502c: 0xc08b6c0  jal         func_22DB00
    ctx->pc = 0x20502Cu;
    SET_GPR_U32(ctx, 31, 0x205034u);
    ctx->pc = 0x22DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DB00u, 0x20502Cu, 0x205034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205034u;
label_205034:
    // 0x205034: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x205038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20503c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x20503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x205040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x205044: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x205044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205048: 0x4501021d  bc1t        . + 4 + (0x21D << 2)
    ctx->pc = 0x205048u;
    {
        const bool branch_taken_0x205048 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205048u;
        // 0x20504c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205048) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205050u;
    // 0x205050: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x205050u;
    {
        const bool branch_taken_0x205050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205050u;
        // 0x205054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205050) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205058u;
label_205058:
    // 0x205058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205058u;
    {
        const bool branch_taken_0x205058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205058u;
        // 0x20505c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205058) {
            ctx->pc = 0x205070u;
            goto label_205070;
        }
    }
    ctx->pc = 0x205060u;
    // 0x205060: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x205064: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x205064u;
    {
        const bool branch_taken_0x205064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205064u;
        // 0x205068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205064) {
            ctx->pc = 0x205070u;
            goto label_205070;
        }
    }
    ctx->pc = 0x20506Cu;
    // 0x20506c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205070:
    // 0x205070: 0x10800212  beqz        $a0, . + 4 + (0x212 << 2)
    ctx->pc = 0x205070u;
    {
        const bool branch_taken_0x205070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205070u;
        // 0x205074: 0x26500750  addiu       $s0, $s2, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205070) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205078u;
    // 0x205078: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x205078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20507c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205080: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x205080u;
    {
        const bool branch_taken_0x205080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205080u;
        // 0x205084: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205080) {
            ctx->pc = 0x20502Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20502c;
        }
    }
    ctx->pc = 0x205088u;
label_205088:
    // 0x205088: 0x26500750  addiu       $s0, $s2, 0x750
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x20508c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20508cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205090: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x205090u;
    SET_GPR_U32(ctx, 31, 0x205098u);
    ctx->pc = 0x205094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205090u;
    // 0x205094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x205090u, 0x205098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205098u;
label_205098:
    // 0x205098: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x205098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20509c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20509cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2050a0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2050a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2050a4: 0x45010206  bc1t        . + 4 + (0x206 << 2)
    ctx->pc = 0x2050A4u;
    {
        const bool branch_taken_0x2050a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2050A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050A4u;
        // 0x2050a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050a4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2050ACu;
    // 0x2050ac: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x2050ACu;
    {
        const bool branch_taken_0x2050ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050ACu;
        // 0x2050b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050ac) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2050B4u;
    // 0x2050b4: 0x0  nop
    ctx->pc = 0x2050b4u;
    // NOP
label_2050b8:
    // 0x2050b8: 0x26500750  addiu       $s0, $s2, 0x750
    ctx->pc = 0x2050b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x2050bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050c0: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2050C0u;
    SET_GPR_U32(ctx, 31, 0x2050C8u);
    ctx->pc = 0x2050C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050C0u;
    // 0x2050c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2050C0u, 0x2050C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050C8u;
label_2050c8:
    // 0x2050c8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2050c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2050cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2050ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2050d0: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x2050d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2050d4: 0x450101fa  bc1t        . + 4 + (0x1FA << 2)
    ctx->pc = 0x2050D4u;
    {
        const bool branch_taken_0x2050d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2050D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050D4u;
        // 0x2050d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050d4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2050DCu;
    // 0x2050dc: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2050DCu;
    {
        const bool branch_taken_0x2050dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050DCu;
        // 0x2050e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050dc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2050E4u;
    // 0x2050e4: 0x0  nop
    ctx->pc = 0x2050e4u;
    // NOP
label_2050e8:
    // 0x2050e8: 0x1000fb76  b           . + 4 + (-0x48A << 2)
    ctx->pc = 0x2050E8u;
    {
        const bool branch_taken_0x2050e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050E8u;
        // 0x2050ec: 0xc6400754  lwc1        $f0, 0x754($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050e8) {
            ctx->pc = 0x203EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203ec4;
        }
    }
    ctx->pc = 0x2050F0u;
label_2050f0:
    // 0x2050f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2050f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2050f4: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2050F4u;
    {
        const bool branch_taken_0x2050f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2050F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050F4u;
        // 0x2050f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050f4) {
            ctx->pc = 0x205128u;
            goto label_205128;
        }
    }
    ctx->pc = 0x2050FCu;
    // 0x2050fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2050fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205100:
    // 0x205100: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x205100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x205104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x205104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205108: 0x80430210  lb          $v1, 0x210($v0)
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x20510c: 0x28a40006  slti        $a0, $a1, 0x6
    ctx->pc = 0x20510cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x205110: 0x0  nop
    ctx->pc = 0x205110u;
    // NOP
    // 0x205114: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205114u;
    {
        const bool branch_taken_0x205114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x205118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205114u;
        // 0x205118: 0xc3880b  movn        $s1, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205114) {
            ctx->pc = 0x205100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205100;
        }
    }
    ctx->pc = 0x20511Cu;
    // 0x20511c: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x20511Cu;
    {
        const bool branch_taken_0x20511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20511Cu;
        // 0x205120: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20511c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205124u;
    // 0x205124: 0x0  nop
    ctx->pc = 0x205124u;
    // NOP
label_205128:
    // 0x205128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20512c: 0x0  nop
    ctx->pc = 0x20512cu;
    // NOP
label_205130:
    // 0x205130: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x205130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x205134: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205138: 0x80430210  lb          $v1, 0x210($v0)
    ctx->pc = 0x205138u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x20513c: 0x28a40006  slti        $a0, $a1, 0x6
    ctx->pc = 0x20513cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x205140: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x205140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x205144: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205144u;
    {
        const bool branch_taken_0x205144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0xc3880b  movn        $s1, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205144) {
            ctx->pc = 0x205130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205130;
        }
    }
    ctx->pc = 0x20514Cu;
    // 0x20514c: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x20514Cu;
    {
        const bool branch_taken_0x20514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20514Cu;
        // 0x205150: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20514c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205154u;
    // 0x205154: 0x0  nop
    ctx->pc = 0x205154u;
    // NOP
label_205158:
    // 0x205158: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20515c: 0x12020113  beq         $s0, $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x20515Cu;
    {
        const bool branch_taken_0x20515c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20515Cu;
        // 0x205160: 0x82420210  lb          $v0, 0x210($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20515c) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x205164u;
    // 0x205164: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x205164u;
    {
        const bool branch_taken_0x205164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205164u;
        // 0x205168: 0x501024  and         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205164) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x20516Cu;
    // 0x20516c: 0x0  nop
    ctx->pc = 0x20516cu;
    // NOP
label_205170:
    // 0x205170: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x205174: 0x1202010d  beq         $s0, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x205174u;
    {
        const bool branch_taken_0x205174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205174u;
        // 0x205178: 0x82420211  lb          $v0, 0x211($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 529)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205174) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x20517Cu;
    // 0x20517c: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x20517Cu;
    {
        const bool branch_taken_0x20517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20517Cu;
        // 0x205180: 0x501024  and         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20517c) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x205184u;
    // 0x205184: 0x0  nop
    ctx->pc = 0x205184u;
    // NOP
label_205188:
    // 0x205188: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x205188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20518c: 0x12020107  beq         $s0, $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x20518Cu;
    {
        const bool branch_taken_0x20518c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20518Cu;
        // 0x205190: 0x82420212  lb          $v0, 0x212($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 530)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20518c) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x205194u;
    // 0x205194: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x205194u;
    {
        const bool branch_taken_0x205194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205194u;
        // 0x205198: 0x501024  and         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205194) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x20519Cu;
    // 0x20519c: 0x0  nop
    ctx->pc = 0x20519cu;
    // NOP
label_2051a0:
    // 0x2051a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2051a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2051a4: 0x12020101  beq         $s0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2051A4u;
    {
        const bool branch_taken_0x2051a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051A4u;
        // 0x2051a8: 0x82420213  lb          $v0, 0x213($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 531)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051a4) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x2051ACu;
    // 0x2051ac: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2051ACu;
    {
        const bool branch_taken_0x2051ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051ACu;
        // 0x2051b0: 0x501024  and         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051ac) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x2051B4u;
    // 0x2051b4: 0x0  nop
    ctx->pc = 0x2051b4u;
    // NOP
label_2051b8:
    // 0x2051b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2051b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2051bc: 0x120200fb  beq         $s0, $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x2051BCu;
    {
        const bool branch_taken_0x2051bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2051C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051BCu;
        // 0x2051c0: 0x82420214  lb          $v0, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051bc) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x2051C4u;
    // 0x2051c4: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x2051C4u;
    {
        const bool branch_taken_0x2051c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051C4u;
        // 0x2051c8: 0x501024  and         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051c4) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x2051CCu;
    // 0x2051cc: 0x0  nop
    ctx->pc = 0x2051ccu;
    // NOP
label_2051d0:
    // 0x2051d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2051d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2051d4: 0x120200f5  beq         $s0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2051D4u;
    {
        const bool branch_taken_0x2051d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2051D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051D4u;
        // 0x2051d8: 0x82420215  lb          $v0, 0x215($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 533)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051d4) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x2051DCu;
    // 0x2051dc: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x2051DCu;
    {
        const bool branch_taken_0x2051dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051DCu;
        // 0x2051e0: 0x501024  and         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051dc) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x2051E4u;
    // 0x2051e4: 0x0  nop
    ctx->pc = 0x2051e4u;
    // NOP
label_2051e8:
    // 0x2051e8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2051E8u;
    {
        const bool branch_taken_0x2051e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051E8u;
        // 0x2051ec: 0x964202c8  lhu         $v0, 0x2C8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051e8) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2051F0u;
label_2051f0:
    // 0x2051f0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2051F0u;
    {
        const bool branch_taken_0x2051f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F0u;
        // 0x2051f4: 0x964202ca  lhu         $v0, 0x2CA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 714)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051f0) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2051F8u;
label_2051f8:
    // 0x2051f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2051F8u;
    {
        const bool branch_taken_0x2051f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F8u;
        // 0x2051fc: 0x964202cc  lhu         $v0, 0x2CC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051f8) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205200u;
label_205200:
    // 0x205200: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x205200u;
    {
        const bool branch_taken_0x205200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205200u;
        // 0x205204: 0x964202ce  lhu         $v0, 0x2CE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 718)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205200) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205208u;
label_205208:
    // 0x205208: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x205208u;
    {
        const bool branch_taken_0x205208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205208u;
        // 0x20520c: 0x964202d0  lhu         $v0, 0x2D0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205208) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205210u;
label_205210:
    // 0x205210: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x205210u;
    {
        const bool branch_taken_0x205210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205210u;
        // 0x205214: 0x96420168  lhu         $v0, 0x168($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205210) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205218u;
label_205218:
    // 0x205218: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x205218u;
    {
        const bool branch_taken_0x205218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205218u;
        // 0x20521c: 0x964202d2  lhu         $v0, 0x2D2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 722)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205218) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205220u;
label_205220:
    // 0x205220: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x205220u;
    {
        const bool branch_taken_0x205220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205220u;
        // 0x205224: 0x964202d4  lhu         $v0, 0x2D4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205220) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205228u;
label_205228:
    // 0x205228: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x205228u;
    {
        const bool branch_taken_0x205228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205228u;
        // 0x20522c: 0x964202c8  lhu         $v0, 0x2C8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205228) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205230u;
label_205230:
    // 0x205230: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x205230u;
    {
        const bool branch_taken_0x205230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205230u;
        // 0x205234: 0x964202ca  lhu         $v0, 0x2CA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 714)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205230) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205238u;
label_205238:
    // 0x205238: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x205238u;
    {
        const bool branch_taken_0x205238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205238u;
        // 0x20523c: 0x964202cc  lhu         $v0, 0x2CC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205238) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205240u;
label_205240:
    // 0x205240: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x205240u;
    {
        const bool branch_taken_0x205240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205240u;
        // 0x205244: 0x964202ce  lhu         $v0, 0x2CE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 718)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205240) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205248u;
label_205248:
    // 0x205248: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x205248u;
    {
        const bool branch_taken_0x205248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205248u;
        // 0x20524c: 0x964202d0  lhu         $v0, 0x2D0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205248) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205250u;
label_205250:
    // 0x205250: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x205250u;
    {
        const bool branch_taken_0x205250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205250u;
        // 0x205254: 0x96420168  lhu         $v0, 0x168($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205250) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205258u;
label_205258:
    // 0x205258: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x205258u;
    {
        const bool branch_taken_0x205258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205258u;
        // 0x20525c: 0x964202d2  lhu         $v0, 0x2D2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 722)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205258) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205260u;
label_205260:
    // 0x205260: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x205260u;
    {
        const bool branch_taken_0x205260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205260u;
        // 0x205264: 0x964202d4  lhu         $v0, 0x2D4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205260) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205268u;
label_205268:
    // 0x205268: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x205268u;
    {
        const bool branch_taken_0x205268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205268u;
        // 0x20526c: 0x964202c8  lhu         $v0, 0x2C8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205268) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205270u;
label_205270:
    // 0x205270: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x205270u;
    {
        const bool branch_taken_0x205270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205270u;
        // 0x205274: 0x964202ca  lhu         $v0, 0x2CA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 714)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205270) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205278u;
label_205278:
    // 0x205278: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x205278u;
    {
        const bool branch_taken_0x205278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205278u;
        // 0x20527c: 0x964202cc  lhu         $v0, 0x2CC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205278) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205280u;
label_205280:
    // 0x205280: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x205280u;
    {
        const bool branch_taken_0x205280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205280u;
        // 0x205284: 0x964202ce  lhu         $v0, 0x2CE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 718)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205280) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205288u;
label_205288:
    // 0x205288: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x205288u;
    {
        const bool branch_taken_0x205288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205288u;
        // 0x20528c: 0x964202d0  lhu         $v0, 0x2D0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205288) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205290u;
label_205290:
    // 0x205290: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x205290u;
    {
        const bool branch_taken_0x205290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205290u;
        // 0x205294: 0x96420168  lhu         $v0, 0x168($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205290) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205298u;
label_205298:
    // 0x205298: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x205298u;
    {
        const bool branch_taken_0x205298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205298u;
        // 0x20529c: 0x964202d2  lhu         $v0, 0x2D2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 722)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205298) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x2052A0u;
label_2052a0:
    // 0x2052a0: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2052A0u;
    {
        const bool branch_taken_0x2052a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A0u;
        // 0x2052a4: 0x964202d4  lhu         $v0, 0x2D4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052a0) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x2052A8u;
label_2052a8:
    // 0x2052a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2052A8u;
    {
        const bool branch_taken_0x2052a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A8u;
        // 0x2052ac: 0x94e202c8  lhu         $v0, 0x2C8($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052a8) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2052B0u;
label_2052b0:
    // 0x2052b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2052B0u;
    {
        const bool branch_taken_0x2052b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B0u;
        // 0x2052b4: 0x94e202ca  lhu         $v0, 0x2CA($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 714)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052b0) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2052B8u;
label_2052b8:
    // 0x2052b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2052B8u;
    {
        const bool branch_taken_0x2052b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B8u;
        // 0x2052bc: 0x94e202cc  lhu         $v0, 0x2CC($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052b8) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2052C0u;
label_2052c0:
    // 0x2052c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2052C0u;
    {
        const bool branch_taken_0x2052c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052C0u;
        // 0x2052c4: 0x94e202ce  lhu         $v0, 0x2CE($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 718)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052c0) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2052C8u;
label_2052c8:
    // 0x2052c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2052C8u;
    {
        const bool branch_taken_0x2052c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052C8u;
        // 0x2052cc: 0x94e202d0  lhu         $v0, 0x2D0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052c8) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2052D0u;
label_2052d0:
    // 0x2052d0: 0x94e20168  lhu         $v0, 0x168($a3)
    ctx->pc = 0x2052d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 360)));
label_2052d4:
    // 0x2052d4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2052d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2052d8: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x2052D8u;
    {
        const bool branch_taken_0x2052d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D8u;
        // 0x2052dc: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052d8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2052E0u;
label_2052e0:
    // 0x2052e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2052E0u;
    {
        const bool branch_taken_0x2052e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052E0u;
        // 0x2052e4: 0x94e202c8  lhu         $v0, 0x2C8($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052e0) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x2052E8u;
label_2052e8:
    // 0x2052e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2052E8u;
    {
        const bool branch_taken_0x2052e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052E8u;
        // 0x2052ec: 0x94e202ca  lhu         $v0, 0x2CA($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 714)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052e8) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x2052F0u;
label_2052f0:
    // 0x2052f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2052F0u;
    {
        const bool branch_taken_0x2052f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052F0u;
        // 0x2052f4: 0x94e202cc  lhu         $v0, 0x2CC($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052f0) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x2052F8u;
label_2052f8:
    // 0x2052f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2052F8u;
    {
        const bool branch_taken_0x2052f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052F8u;
        // 0x2052fc: 0x94e202ce  lhu         $v0, 0x2CE($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 718)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052f8) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205300u;
label_205300:
    // 0x205300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205300u;
    {
        const bool branch_taken_0x205300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205300u;
        // 0x205304: 0x94e202d0  lhu         $v0, 0x2D0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205300) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x205308u;
label_205308:
    // 0x205308: 0x94e20168  lhu         $v0, 0x168($a3)
    ctx->pc = 0x205308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 360)));
label_20530c:
    // 0x20530c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x20530cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205310: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x205310u;
    {
        const bool branch_taken_0x205310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205310u;
        // 0x205314: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205310) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205318u;
label_205318:
    // 0x205318: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x205318u;
    {
        const bool branch_taken_0x205318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205318u;
        // 0x20531c: 0x94e202c8  lhu         $v0, 0x2C8($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205318) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205320u;
label_205320:
    // 0x205320: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x205320u;
    {
        const bool branch_taken_0x205320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205320u;
        // 0x205324: 0x94e202ca  lhu         $v0, 0x2CA($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 714)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205320) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205328u;
label_205328:
    // 0x205328: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x205328u;
    {
        const bool branch_taken_0x205328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205328u;
        // 0x20532c: 0x94e202cc  lhu         $v0, 0x2CC($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205328) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205330u;
label_205330:
    // 0x205330: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x205330u;
    {
        const bool branch_taken_0x205330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205330u;
        // 0x205334: 0x94e202ce  lhu         $v0, 0x2CE($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 718)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205330) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205338u;
label_205338:
    // 0x205338: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x205338u;
    {
        const bool branch_taken_0x205338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205338u;
        // 0x20533c: 0x94e202d0  lhu         $v0, 0x2D0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205338) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205340u;
label_205340:
    // 0x205340: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x205340u;
    {
        const bool branch_taken_0x205340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205340u;
        // 0x205344: 0x94e20168  lhu         $v0, 0x168($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205340) {
            ctx->pc = 0x2055C4u;
            goto label_2055c4;
        }
    }
    ctx->pc = 0x205348u;
label_205348:
    // 0x205348: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x205348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x20534c: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x20534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_205350:
    // 0x205350: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x205350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_205354:
    // 0x205354: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x205354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205358: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x205358u;
    {
        const bool branch_taken_0x205358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205358u;
        // 0x20535c: 0x38710001  xori        $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205358) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205360u;
label_205360:
    // 0x205360: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x205364: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x205368: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20536c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205370: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x205370u;
    {
        const bool branch_taken_0x205370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205370u;
        // 0x205374: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205370) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205378u;
label_205378:
    // 0x205378: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x20537c: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x20537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_205380:
    // 0x205380: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x205380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x205384: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x205384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x205388: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x205388u;
    {
        const bool branch_taken_0x205388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205388u;
        // 0x20538c: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205388) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205390u;
label_205390:
    // 0x205390: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x205390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
    // 0x205394: 0x14400149  bnez        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x205394u;
    {
        const bool branch_taken_0x205394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205394) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20539Cu;
    // 0x20539c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2053a0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2053a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2053a4: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x2053A4u;
    {
        const bool branch_taken_0x2053a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053A4u;
        // 0x2053a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053a4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2053ACu;
    // 0x2053ac: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2053b0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2053b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2053b4: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2053B4u;
    {
        const bool branch_taken_0x2053b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2053B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053B4u;
        // 0x2053b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053b4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2053BCu;
    // 0x2053bc: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2053BCu;
    {
        const bool branch_taken_0x2053bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053BCu;
        // 0x2053c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053bc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2053C4u;
    // 0x2053c4: 0x0  nop
    ctx->pc = 0x2053c4u;
    // NOP
label_2053c8:
    // 0x2053c8: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x2053c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
label_2053cc:
    // 0x2053cc: 0x1440013b  bnez        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2053CCu;
    {
        const bool branch_taken_0x2053cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2053D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053CCu;
        // 0x2053d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053cc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2053D4u;
    // 0x2053d4: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2053d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2053d8: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2053d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2053dc: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2053DCu;
    {
        const bool branch_taken_0x2053dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053DCu;
        // 0x2053e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053dc) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2053E4u;
    // 0x2053e4: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
label_2053e8:
    // 0x2053e8: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2053e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2053ec: 0x50400133  beql        $v0, $zero, . + 4 + (0x133 << 2)
    ctx->pc = 0x2053ECu;
    {
        const bool branch_taken_0x2053ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2053ec) {
            ctx->pc = 0x2053F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2053ECu;
            // 0x2053f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2053F4u;
    // 0x2053f4: 0x94e30150  lhu         $v1, 0x150($a3)
    ctx->pc = 0x2053f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
label_2053f8:
    // 0x2053f8: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x2053fc: 0x10620118  beq         $v1, $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x2053FCu;
    {
        const bool branch_taken_0x2053fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053FCu;
        // 0x205400: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053fc) {
            ctx->pc = 0x205860u;
            goto label_205860;
        }
    }
    ctx->pc = 0x205404u;
    // 0x205404: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x205404u;
    {
        const bool branch_taken_0x205404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205404) {
            ctx->pc = 0x205858u;
            goto label_205858;
        }
    }
    ctx->pc = 0x20540Cu;
    // 0x20540c: 0x0  nop
    ctx->pc = 0x20540cu;
    // NOP
label_205410:
    // 0x205410: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x205410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
label_205414:
    // 0x205414: 0x14400129  bnez        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x205414u;
    {
        const bool branch_taken_0x205414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205414u;
        // 0x205418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205414) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20541Cu;
    // 0x20541c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20541cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205420: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205424: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x205424u;
    {
        const bool branch_taken_0x205424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205424u;
        // 0x205428: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205424) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20542Cu;
    // 0x20542c: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
label_205430:
    // 0x205430: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205434: 0x50400121  beql        $v0, $zero, . + 4 + (0x121 << 2)
    ctx->pc = 0x205434u;
    {
        const bool branch_taken_0x205434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205434) {
            ctx->pc = 0x205438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205434u;
            // 0x205438: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20543Cu;
    // 0x20543c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x20543Cu;
    {
        const bool branch_taken_0x20543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20543Cu;
        // 0x205440: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20543c) {
            ctx->pc = 0x205844u;
            goto label_205844;
        }
    }
    ctx->pc = 0x205444u;
    // 0x205444: 0x0  nop
    ctx->pc = 0x205444u;
    // NOP
label_205448:
    // 0x205448: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x205448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
label_20544c:
    // 0x20544c: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x20544Cu;
    {
        const bool branch_taken_0x20544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20544Cu;
        // 0x205450: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20544c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205454u;
    // 0x205454: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205458: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x20545c: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x20545Cu;
    {
        const bool branch_taken_0x20545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20545Cu;
        // 0x205460: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20545c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205464u;
    // 0x205464: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
label_205468:
    // 0x205468: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x20546c: 0x50400113  beql        $v0, $zero, . + 4 + (0x113 << 2)
    ctx->pc = 0x20546Cu;
    {
        const bool branch_taken_0x20546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20546c) {
            ctx->pc = 0x205470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20546Cu;
            // 0x205470: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205474u;
    // 0x205474: 0x94e30150  lhu         $v1, 0x150($a3)
    ctx->pc = 0x205474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
label_205478:
    // 0x205478: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x205478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x20547c: 0x106200f8  beq         $v1, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x20547Cu;
    {
        const bool branch_taken_0x20547c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20547Cu;
        // 0x205480: 0x2402041f  addiu       $v0, $zero, 0x41F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20547c) {
            ctx->pc = 0x205860u;
            goto label_205860;
        }
    }
    ctx->pc = 0x205484u;
    // 0x205484: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x205484u;
    {
        const bool branch_taken_0x205484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205484) {
            ctx->pc = 0x205858u;
            goto label_205858;
        }
    }
    ctx->pc = 0x20548Cu;
    // 0x20548c: 0x0  nop
    ctx->pc = 0x20548cu;
    // NOP
label_205490:
    // 0x205490: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x205490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
    // 0x205494: 0x14400109  bnez        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x205494u;
    {
        const bool branch_taken_0x205494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205494u;
        // 0x205498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205494) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20549Cu;
    // 0x20549c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20549cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2054a0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2054a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2054a4: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x2054A4u;
    {
        const bool branch_taken_0x2054a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A4u;
        // 0x2054a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054a4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2054ACu;
    // 0x2054ac: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2054acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2054b0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2054b4: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x2054B4u;
    {
        const bool branch_taken_0x2054b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054B4u;
        // 0x2054b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054b4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2054BCu;
    // 0x2054bc: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2054BCu;
    {
        const bool branch_taken_0x2054bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054BCu;
        // 0x2054c0: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054bc) {
            ctx->pc = 0x205830u;
            goto label_205830;
        }
    }
    ctx->pc = 0x2054C4u;
    // 0x2054c4: 0x0  nop
    ctx->pc = 0x2054c4u;
    // NOP
label_2054c8:
    // 0x2054c8: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x2054c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
    // 0x2054cc: 0x144000fb  bnez        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x2054CCu;
    {
        const bool branch_taken_0x2054cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2054D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054CCu;
        // 0x2054d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054cc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2054D4u;
    // 0x2054d4: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2054d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2054d8: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2054d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2054dc: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2054DCu;
    {
        const bool branch_taken_0x2054dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054DCu;
        // 0x2054e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054dc) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2054E4u;
    // 0x2054e4: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2054e8: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2054e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2054ec: 0x504000f4  beql        $v0, $zero, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2054ECu;
    {
        const bool branch_taken_0x2054ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2054ec) {
            ctx->pc = 0x2054F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2054ECu;
            // 0x2054f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2054F4u;
    // 0x2054f4: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2054F4u;
    {
        const bool branch_taken_0x2054f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F4u;
        // 0x2054f8: 0x8ce200c4  lw          $v0, 0xC4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054f4) {
            ctx->pc = 0x20589Cu;
            goto label_20589c;
        }
    }
    ctx->pc = 0x2054FCu;
    // 0x2054fc: 0x0  nop
    ctx->pc = 0x2054fcu;
    // NOP
label_205500:
    // 0x205500: 0x8f829888  lw          $v0, -0x6778($gp)
    ctx->pc = 0x205500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940808)));
label_205504:
    // 0x205504: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205508: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x205508u;
    {
        const bool branch_taken_0x205508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205508u;
        // 0x20550c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205508) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205510u;
label_205510:
    // 0x205510: 0x8f829888  lw          $v0, -0x6778($gp)
    ctx->pc = 0x205510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940808)));
    // 0x205514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205518: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x205518u;
    {
        const bool branch_taken_0x205518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205518u;
        // 0x20551c: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205518) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205520u;
label_205520:
    // 0x205520: 0x8f829888  lw          $v0, -0x6778($gp)
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940808)));
    // 0x205524: 0x1040fd3c  beqz        $v0, . + 4 + (-0x2C4 << 2)
    ctx->pc = 0x205524u;
    {
        const bool branch_taken_0x205524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x8f83988c  lw          $v1, -0x6774($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205524) {
            ctx->pc = 0x204A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204a18;
        }
    }
    ctx->pc = 0x20552Cu;
    // 0x20552c: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20552Cu;
        // 0x205530: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20552c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205534u;
    // 0x205534: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x205534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x205538: 0x86440096  lh          $a0, 0x96($s2)
    ctx->pc = 0x205538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x20553c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x205540: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x205540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205544: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x205544u;
    {
        const bool branch_taken_0x205544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205544u;
        // 0x205548: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205544) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20554Cu;
    // 0x20554c: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x20554cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x205550: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x205550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x205554: 0x144000da  bnez        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x205554u;
    {
        const bool branch_taken_0x205554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205554u;
        // 0x205558: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205554) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20555Cu;
    // 0x20555c: 0x86420146  lh          $v0, 0x146($s2)
    ctx->pc = 0x20555cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 326)));
    // 0x205560: 0x184000d7  blez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x205560u;
    {
        const bool branch_taken_0x205560 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205560u;
        // 0x205564: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205560) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205568u;
    // 0x205568: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x205568u;
    {
        const bool branch_taken_0x205568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205568u;
        // 0x20556c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205568) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205570u;
label_205570:
    // 0x205570: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x205570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
    // 0x205574: 0x1440fd28  bnez        $v0, . + 4 + (-0x2D8 << 2)
    ctx->pc = 0x205574u;
    {
        const bool branch_taken_0x205574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205574u;
        // 0x205578: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205574) {
            ctx->pc = 0x204A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204a18;
        }
    }
    ctx->pc = 0x20557Cu;
    // 0x20557c: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x205580: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x205580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x205584: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x205584u;
    {
        const bool branch_taken_0x205584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205584u;
        // 0x205588: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205584) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20558Cu;
    // 0x20558c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x20558Cu;
    {
        const bool branch_taken_0x20558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20558Cu;
        // 0x205590: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20558c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205594u;
    // 0x205594: 0x0  nop
    ctx->pc = 0x205594u;
    // NOP
label_205598:
    // 0x205598: 0x90e201f9  lbu         $v0, 0x1F9($a3)
    ctx->pc = 0x205598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 505)));
    // 0x20559c: 0x1440fd1e  bnez        $v0, . + 4 + (-0x2E2 << 2)
    ctx->pc = 0x20559Cu;
    {
        const bool branch_taken_0x20559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2055A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20559Cu;
        // 0x2055a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20559c) {
            ctx->pc = 0x204A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204a18;
        }
    }
    ctx->pc = 0x2055A4u;
    // 0x2055a4: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x2055a8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2055a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2055ac:
    // 0x2055ac: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2055ACu;
    {
        const bool branch_taken_0x2055ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055ACu;
        // 0x2055b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055ac) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2055B4u;
    // 0x2055b4: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2055B4u;
    {
        const bool branch_taken_0x2055b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B4u;
        // 0x2055b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055b4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2055BCu;
    // 0x2055bc: 0x0  nop
    ctx->pc = 0x2055bcu;
    // NOP
label_2055c0:
    // 0x2055c0: 0x8e4206b0  lw          $v0, 0x6B0($s2)
    ctx->pc = 0x2055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
label_2055c4:
    // 0x2055c4: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_2055c8:
    // 0x2055c8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2055D0u;
label_2055d0:
    // 0x2055d0: 0x924201ec  lbu         $v0, 0x1EC($s2)
    ctx->pc = 0x2055d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x2055d4: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2055D4u;
    {
        const bool branch_taken_0x2055d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055D4u;
        // 0x2055d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055d4) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2055DCu;
    // 0x2055dc: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2055e0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2055e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2055e4: 0x504000b6  beql        $v0, $zero, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2055E4u;
    {
        const bool branch_taken_0x2055e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2055e4) {
            ctx->pc = 0x2055E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2055E4u;
            // 0x2055e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2055ECu;
    // 0x2055ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2055ECu;
    {
        const bool branch_taken_0x2055ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055ECu;
        // 0x2055f0: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055ec) {
            ctx->pc = 0x205608u;
            goto label_205608;
        }
    }
    ctx->pc = 0x2055F4u;
    // 0x2055f4: 0x0  nop
    ctx->pc = 0x2055f4u;
    // NOP
label_2055f8:
    // 0x2055f8: 0x924201ec  lbu         $v0, 0x1EC($s2)
    ctx->pc = 0x2055f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x2055fc: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2055FCu;
    {
        const bool branch_taken_0x2055fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055FCu;
        // 0x205600: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055fc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205604u;
    // 0x205604: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x205604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
label_205608:
    // 0x205608: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
label_20560c:
    // 0x20560c: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x20560Cu;
    {
        const bool branch_taken_0x20560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20560Cu;
        // 0x205610: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20560c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205614u;
    // 0x205614: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x205614u;
    {
        const bool branch_taken_0x205614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205614u;
        // 0x205618: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205614) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20561Cu;
    // 0x20561c: 0x0  nop
    ctx->pc = 0x20561cu;
    // NOP
label_205620:
    // 0x205620: 0x1000ff6a  b           . + 4 + (-0x96 << 2)
    ctx->pc = 0x205620u;
    {
        const bool branch_taken_0x205620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205620u;
        // 0x205624: 0x90e201a2  lbu         $v0, 0x1A2($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205620) {
            ctx->pc = 0x2053CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2053cc;
        }
    }
    ctx->pc = 0x205628u;
label_205628:
    // 0x205628: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x20562c: 0x544000a3  bnel        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x20562Cu;
    {
        const bool branch_taken_0x20562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20562c) {
            ctx->pc = 0x205630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20562Cu;
            // 0x205630: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205634u;
    // 0x205634: 0x1000ff6c  b           . + 4 + (-0x94 << 2)
    ctx->pc = 0x205634u;
    {
        const bool branch_taken_0x205634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205634u;
        // 0x205638: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205634) {
            ctx->pc = 0x2053E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2053e8;
        }
    }
    ctx->pc = 0x20563Cu;
    // 0x20563c: 0x0  nop
    ctx->pc = 0x20563cu;
    // NOP
label_205640:
    // 0x205640: 0x1000ff74  b           . + 4 + (-0x8C << 2)
    ctx->pc = 0x205640u;
    {
        const bool branch_taken_0x205640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205640u;
        // 0x205644: 0x90e201a2  lbu         $v0, 0x1A2($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205640) {
            ctx->pc = 0x205414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205414;
        }
    }
    ctx->pc = 0x205648u;
label_205648:
    // 0x205648: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x20564c: 0x5440009b  bnel        $v0, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x20564Cu;
    {
        const bool branch_taken_0x20564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20564c) {
            ctx->pc = 0x205650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20564Cu;
            // 0x205650: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205654u;
    // 0x205654: 0x1000ff76  b           . + 4 + (-0x8A << 2)
    ctx->pc = 0x205654u;
    {
        const bool branch_taken_0x205654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205654u;
        // 0x205658: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205654) {
            ctx->pc = 0x205430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205430;
        }
    }
    ctx->pc = 0x20565Cu;
    // 0x20565c: 0x0  nop
    ctx->pc = 0x20565cu;
    // NOP
label_205660:
    // 0x205660: 0x1000ff7a  b           . + 4 + (-0x86 << 2)
    ctx->pc = 0x205660u;
    {
        const bool branch_taken_0x205660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205660u;
        // 0x205664: 0x90e201a2  lbu         $v0, 0x1A2($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205660) {
            ctx->pc = 0x20544Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20544c;
        }
    }
    ctx->pc = 0x205668u;
label_205668:
    // 0x205668: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x20566c: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x20566Cu;
    {
        const bool branch_taken_0x20566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20566c) {
            ctx->pc = 0x205670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20566Cu;
            // 0x205670: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205674u;
    // 0x205674: 0x1000ff7c  b           . + 4 + (-0x84 << 2)
    ctx->pc = 0x205674u;
    {
        const bool branch_taken_0x205674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205674u;
        // 0x205678: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205674) {
            ctx->pc = 0x205468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205468;
        }
    }
    ctx->pc = 0x20567Cu;
    // 0x20567c: 0x0  nop
    ctx->pc = 0x20567cu;
    // NOP
label_205680:
    // 0x205680: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x205684: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x205684u;
    {
        const bool branch_taken_0x205684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205684u;
        // 0x205688: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205684) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20568Cu;
    // 0x20568c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205690: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205694: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x205694u;
    {
        const bool branch_taken_0x205694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205694u;
        // 0x205698: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205694) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20569Cu;
    // 0x20569c: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x20569cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2056a0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2056a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2056a4: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2056A4u;
    {
        const bool branch_taken_0x2056a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056A4u;
        // 0x2056a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056a4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2056ACu;
    // 0x2056ac: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2056ACu;
    {
        const bool branch_taken_0x2056ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056ACu;
        // 0x2056b0: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056ac) {
            ctx->pc = 0x205830u;
            goto label_205830;
        }
    }
    ctx->pc = 0x2056B4u;
    // 0x2056b4: 0x0  nop
    ctx->pc = 0x2056b4u;
    // NOP
label_2056b8:
    // 0x2056b8: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x2056b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x2056bc: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2056BCu;
    {
        const bool branch_taken_0x2056bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2056C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056BCu;
        // 0x2056c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056bc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2056C4u;
    // 0x2056c4: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2056c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2056c8: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2056c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2056cc: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2056CCu;
    {
        const bool branch_taken_0x2056cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056CCu;
        // 0x2056d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056cc) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2056D4u;
    // 0x2056d4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2056D4u;
    {
        const bool branch_taken_0x2056d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056D4u;
        // 0x2056d8: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056d4) {
            ctx->pc = 0x205830u;
            goto label_205830;
        }
    }
    ctx->pc = 0x2056DCu;
    // 0x2056dc: 0x0  nop
    ctx->pc = 0x2056dcu;
    // NOP
label_2056e0:
    // 0x2056e0: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2056e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2056e4: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2056e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2056e8: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2056E8u;
    {
        const bool branch_taken_0x2056e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056E8u;
        // 0x2056ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056e8) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2056F0u;
    // 0x2056f0: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2056f4: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2056f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2056f8: 0x50400071  beql        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x2056F8u;
    {
        const bool branch_taken_0x2056f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2056f8) {
            ctx->pc = 0x2056FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2056F8u;
            // 0x2056fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205700u;
    // 0x205700: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x205700u;
    {
        const bool branch_taken_0x205700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205700u;
        // 0x205704: 0x8ce200c4  lw          $v0, 0xC4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205700) {
            ctx->pc = 0x20589Cu;
            goto label_20589c;
        }
    }
    ctx->pc = 0x205708u;
label_205708:
    // 0x205708: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x205708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x20570c: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x20570cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205710: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x205710u;
    {
        const bool branch_taken_0x205710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205710) {
            ctx->pc = 0x205714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205710u;
            // 0x205714: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205718u;
    // 0x205718: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x205718u;
    {
        const bool branch_taken_0x205718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205718u;
        // 0x20571c: 0x8ce200c4  lw          $v0, 0xC4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205718) {
            ctx->pc = 0x20589Cu;
            goto label_20589c;
        }
    }
    ctx->pc = 0x205720u;
label_205720:
    // 0x205720: 0x924201ec  lbu         $v0, 0x1EC($s2)
    ctx->pc = 0x205720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x205724: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x205724u;
    {
        const bool branch_taken_0x205724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205724u;
        // 0x205728: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205724) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20572Cu;
    // 0x20572c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20572cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205730: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205734: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x205734u;
    {
        const bool branch_taken_0x205734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205734u;
        // 0x205738: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205734) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20573Cu;
    // 0x20573c: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x205740: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x205740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
label_205744:
    // 0x205744: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x205744u;
    {
        const bool branch_taken_0x205744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205744u;
        // 0x205748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205744) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20574Cu;
    // 0x20574c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x20574Cu;
    {
        const bool branch_taken_0x20574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20574Cu;
        // 0x205750: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20574c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205754u;
    // 0x205754: 0x0  nop
    ctx->pc = 0x205754u;
    // NOP
label_205758:
    // 0x205758: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x20575c: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x20575Cu;
    {
        const bool branch_taken_0x20575c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20575Cu;
        // 0x205760: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20575c) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205764u;
    // 0x205764: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205768: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x20576c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x20576Cu;
    {
        const bool branch_taken_0x20576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20576Cu;
        // 0x205770: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20576c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205774u;
    // 0x205774: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x205778: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x205778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
    // 0x20577c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x20577Cu;
    {
        const bool branch_taken_0x20577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20577Cu;
        // 0x205780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20577c) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205784u;
    // 0x205784: 0x1000ff1c  b           . + 4 + (-0xE4 << 2)
    ctx->pc = 0x205784u;
    {
        const bool branch_taken_0x205784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205784u;
        // 0x205788: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205784) {
            ctx->pc = 0x2053F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2053f8;
        }
    }
    ctx->pc = 0x20578Cu;
    // 0x20578c: 0x0  nop
    ctx->pc = 0x20578cu;
    // NOP
label_205790:
    // 0x205790: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x205794: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x205794u;
    {
        const bool branch_taken_0x205794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205794u;
        // 0x205798: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205794) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20579Cu;
    // 0x20579c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20579cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2057a0: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2057a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2057a4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2057A4u;
    {
        const bool branch_taken_0x2057a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057A4u;
        // 0x2057a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057a4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2057ACu;
    // 0x2057ac: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2057b0: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x2057b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
    // 0x2057b4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2057B4u;
    {
        const bool branch_taken_0x2057b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2057B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B4u;
        // 0x2057b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057b4) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2057BCu;
    // 0x2057bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2057BCu;
    {
        const bool branch_taken_0x2057bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057BCu;
        // 0x2057c0: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057bc) {
            ctx->pc = 0x205844u;
            goto label_205844;
        }
    }
    ctx->pc = 0x2057C4u;
    // 0x2057c4: 0x0  nop
    ctx->pc = 0x2057c4u;
    // NOP
label_2057c8:
    // 0x2057c8: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x2057c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x2057cc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2057CCu;
    {
        const bool branch_taken_0x2057cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2057D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057CCu;
        // 0x2057d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057cc) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2057D4u;
    // 0x2057d4: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x2057d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2057d8: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x2057d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x2057dc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2057DCu;
    {
        const bool branch_taken_0x2057dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057DCu;
        // 0x2057e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057dc) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2057E4u;
    // 0x2057e4: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x2057e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2057e8: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x2057e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
    // 0x2057ec: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2057ECu;
    {
        const bool branch_taken_0x2057ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2057F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057ECu;
        // 0x2057f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057ec) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x2057F4u;
    // 0x2057f4: 0x1000ff20  b           . + 4 + (-0xE0 << 2)
    ctx->pc = 0x2057F4u;
    {
        const bool branch_taken_0x2057f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0x94e30150  lhu         $v1, 0x150($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057f4) {
            ctx->pc = 0x205478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205478;
        }
    }
    ctx->pc = 0x2057FCu;
    // 0x2057fc: 0x0  nop
    ctx->pc = 0x2057fcu;
    // NOP
label_205800:
    // 0x205800: 0x90e201a2  lbu         $v0, 0x1A2($a3)
    ctx->pc = 0x205800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
    // 0x205804: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x205804u;
    {
        const bool branch_taken_0x205804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205804u;
        // 0x205808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205804) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x20580Cu;
    // 0x20580c: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x20580cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205810: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x205810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205814: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x205814u;
    {
        const bool branch_taken_0x205814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205814u;
        // 0x205818: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205814) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20581Cu;
    // 0x20581c: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x20581cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x205820: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x205820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
    // 0x205824: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x205824u;
    {
        const bool branch_taken_0x205824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205824u;
        // 0x205828: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205824) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x20582Cu;
    // 0x20582c: 0x94e30150  lhu         $v1, 0x150($a3)
    ctx->pc = 0x20582cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 336)));
label_205830:
    // 0x205830: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x205834: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x205834u;
    {
        const bool branch_taken_0x205834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205834u;
        // 0x205838: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205834) {
            ctx->pc = 0x205860u;
            goto label_205860;
        }
    }
    ctx->pc = 0x20583Cu;
    // 0x20583c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20583Cu;
    {
        const bool branch_taken_0x20583c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20583c) {
            ctx->pc = 0x205840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20583Cu;
            // 0x205840: 0x8ce400c4  lw          $a0, 0xC4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205864u;
            goto label_205864;
        }
    }
    ctx->pc = 0x205844u;
label_205844:
    // 0x205844: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x205844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x205848: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205848u;
    {
        const bool branch_taken_0x205848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205848u;
        // 0x20584c: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205848) {
            ctx->pc = 0x205860u;
            goto label_205860;
        }
    }
    ctx->pc = 0x205850u;
    // 0x205850: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205850u;
    {
        const bool branch_taken_0x205850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205850u;
        // 0x205854: 0x24020707  addiu       $v0, $zero, 0x707 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205850) {
            ctx->pc = 0x205860u;
            goto label_205860;
        }
    }
    ctx->pc = 0x205858u;
label_205858:
    // 0x205858: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x205858u;
    {
        const bool branch_taken_0x205858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x205858) {
            ctx->pc = 0x20585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205858u;
            // 0x20585c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205860u;
label_205860:
    // 0x205860: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x205860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_205864:
    // 0x205864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205868: 0xc080a6c  jal         func_2029B0
    ctx->pc = 0x205868u;
    SET_GPR_U32(ctx, 31, 0x205870u);
    ctx->pc = 0x20586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205868u;
    // 0x20586c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029B0u, 0x205868u, 0x205870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205870u;
label_205870:
    // 0x205870: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x205870u;
    {
        const bool branch_taken_0x205870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205870u;
        // 0x205874: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205870) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205878u;
label_205878:
    // 0x205878: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x205878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x20587c: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x20587cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x205880: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205880u;
    {
        const bool branch_taken_0x205880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205880u;
        // 0x205884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205880) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x205888u;
    // 0x205888: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x20588c: 0x28425556  slti        $v0, $v0, 0x5556
    ctx->pc = 0x20588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21846) ? 1 : 0);
    // 0x205890: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x205890u;
    {
        const bool branch_taken_0x205890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205890u;
        // 0x205894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205890) {
            ctx->pc = 0x2058C0u;
            goto label_2058c0;
        }
    }
    ctx->pc = 0x205898u;
label_205898:
    // 0x205898: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x205898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_20589c:
    // 0x20589c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2058a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058a4: 0xc080b0e  jal         func_202C38
    ctx->pc = 0x2058A4u;
    SET_GPR_U32(ctx, 31, 0x2058ACu);
    ctx->pc = 0x2058A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058A4u;
    // 0x2058a8: 0x9445001c  lhu         $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C38u, 0x2058A4u, 0x2058ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058ACu;
label_2058ac:
    // 0x2058ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2058ACu;
    {
        const bool branch_taken_0x2058ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058ACu;
        // 0x2058b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058ac) {
            ctx->pc = 0x2058BCu;
            goto label_2058bc;
        }
    }
    ctx->pc = 0x2058B4u;
    // 0x2058b4: 0x0  nop
    ctx->pc = 0x2058b4u;
    // NOP
label_2058b8:
    // 0x2058b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2058b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2058bc:
    // 0x2058bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2058bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2058c0:
    // 0x2058c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2058c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2058c4:
    // 0x2058c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2058c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2058c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2058c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2058cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2058ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2058d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2058d4: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2058d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2058d8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2058d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2058dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2058DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058DCu;
        // 0x2058e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058E4u;
    // 0x2058e4: 0x0  nop
    ctx->pc = 0x2058e4u;
    // NOP
    ctx->pc = 0x2058e8u;
}
