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

// Function: sub_001F2190
// Address: 0x1f2190 - 0x1f2fa8
void sub_001F2190_0x1f2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2190_0x1f2190");
#endif

    switch (ctx->pc) {
        case 0x1f21d0u: goto label_1f21d0;
        case 0x1f21e0u: goto label_1f21e0;
        case 0x1f2218u: goto label_1f2218;
        case 0x1f2250u: goto label_1f2250;
        case 0x1f2268u: goto label_1f2268;
        case 0x1f2274u: goto label_1f2274;
        case 0x1f227cu: goto label_1f227c;
        case 0x1f2284u: goto label_1f2284;
        case 0x1f22b0u: goto label_1f22b0;
        case 0x1f22b8u: goto label_1f22b8;
        case 0x1f22c0u: goto label_1f22c0;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22d0u: goto label_1f22d0;
        case 0x1f22e4u: goto label_1f22e4;
        case 0x1f22ecu: goto label_1f22ec;
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f2310u: goto label_1f2310;
        case 0x1f2318u: goto label_1f2318;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f2360u: goto label_1f2360;
        case 0x1f2378u: goto label_1f2378;
        case 0x1f2380u: goto label_1f2380;
        case 0x1f2388u: goto label_1f2388;
        case 0x1f2398u: goto label_1f2398;
        case 0x1f23a0u: goto label_1f23a0;
        case 0x1f23acu: goto label_1f23ac;
        case 0x1f23c0u: goto label_1f23c0;
        case 0x1f23e0u: goto label_1f23e0;
        case 0x1f23f0u: goto label_1f23f0;
        case 0x1f2400u: goto label_1f2400;
        case 0x1f2418u: goto label_1f2418;
        case 0x1f2428u: goto label_1f2428;
        case 0x1f2430u: goto label_1f2430;
        case 0x1f2444u: goto label_1f2444;
        case 0x1f2490u: goto label_1f2490;
        case 0x1f2498u: goto label_1f2498;
        case 0x1f24a8u: goto label_1f24a8;
        case 0x1f24b0u: goto label_1f24b0;
        case 0x1f24c4u: goto label_1f24c4;
        case 0x1f24dcu: goto label_1f24dc;
        case 0x1f24f0u: goto label_1f24f0;
        case 0x1f24f8u: goto label_1f24f8;
        case 0x1f2518u: goto label_1f2518;
        case 0x1f2534u: goto label_1f2534;
        case 0x1f2548u: goto label_1f2548;
        case 0x1f2550u: goto label_1f2550;
        case 0x1f2560u: goto label_1f2560;
        case 0x1f25b4u: goto label_1f25b4;
        case 0x1f25bcu: goto label_1f25bc;
        case 0x1f25c4u: goto label_1f25c4;
        case 0x1f25ccu: goto label_1f25cc;
        case 0x1f25e4u: goto label_1f25e4;
        case 0x1f25ecu: goto label_1f25ec;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f25fcu: goto label_1f25fc;
        case 0x1f2608u: goto label_1f2608;
        case 0x1f2614u: goto label_1f2614;
        case 0x1f261cu: goto label_1f261c;
        case 0x1f2624u: goto label_1f2624;
        case 0x1f2634u: goto label_1f2634;
        case 0x1f2648u: goto label_1f2648;
        case 0x1f2650u: goto label_1f2650;
        case 0x1f2658u: goto label_1f2658;
        case 0x1f2660u: goto label_1f2660;
        case 0x1f266cu: goto label_1f266c;
        case 0x1f2674u: goto label_1f2674;
        case 0x1f26a0u: goto label_1f26a0;
        case 0x1f26b0u: goto label_1f26b0;
        case 0x1f26b8u: goto label_1f26b8;
        case 0x1f26f4u: goto label_1f26f4;
        case 0x1f2704u: goto label_1f2704;
        case 0x1f2728u: goto label_1f2728;
        case 0x1f2738u: goto label_1f2738;
        case 0x1f2764u: goto label_1f2764;
        case 0x1f2774u: goto label_1f2774;
        case 0x1f278cu: goto label_1f278c;
        case 0x1f2798u: goto label_1f2798;
        case 0x1f27a8u: goto label_1f27a8;
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f27e8u: goto label_1f27e8;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2848u: goto label_1f2848;
        case 0x1f2864u: goto label_1f2864;
        case 0x1f2874u: goto label_1f2874;
        case 0x1f28a0u: goto label_1f28a0;
        case 0x1f28bcu: goto label_1f28bc;
        case 0x1f28ccu: goto label_1f28cc;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f2914u: goto label_1f2914;
        case 0x1f2924u: goto label_1f2924;
        case 0x1f2968u: goto label_1f2968;
        case 0x1f2988u: goto label_1f2988;
        case 0x1f2998u: goto label_1f2998;
        case 0x1f29b8u: goto label_1f29b8;
        case 0x1f29d8u: goto label_1f29d8;
        case 0x1f29f8u: goto label_1f29f8;
        case 0x1f2a08u: goto label_1f2a08;
        case 0x1f2a10u: goto label_1f2a10;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a44u: goto label_1f2a44;
        case 0x1f2a64u: goto label_1f2a64;
        case 0x1f2a70u: goto label_1f2a70;
        case 0x1f2b60u: goto label_1f2b60;
        case 0x1f2b70u: goto label_1f2b70;
        case 0x1f2b78u: goto label_1f2b78;
        case 0x1f2b80u: goto label_1f2b80;
        case 0x1f2bb0u: goto label_1f2bb0;
        case 0x1f2c18u: goto label_1f2c18;
        case 0x1f2c20u: goto label_1f2c20;
        case 0x1f2c44u: goto label_1f2c44;
        case 0x1f2c4cu: goto label_1f2c4c;
        case 0x1f2c64u: goto label_1f2c64;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c78u: goto label_1f2c78;
        case 0x1f2c80u: goto label_1f2c80;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2c98u: goto label_1f2c98;
        case 0x1f2ca0u: goto label_1f2ca0;
        case 0x1f2cbcu: goto label_1f2cbc;
        case 0x1f2cdcu: goto label_1f2cdc;
        case 0x1f2ce4u: goto label_1f2ce4;
        case 0x1f2cecu: goto label_1f2cec;
        case 0x1f2cf0u: goto label_1f2cf0;
        case 0x1f2cfcu: goto label_1f2cfc;
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d50u: goto label_1f2d50;
        case 0x1f2d60u: goto label_1f2d60;
        case 0x1f2d80u: goto label_1f2d80;
        case 0x1f2d90u: goto label_1f2d90;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2dc8u: goto label_1f2dc8;
        case 0x1f2dd0u: goto label_1f2dd0;
        case 0x1f2dd8u: goto label_1f2dd8;
        case 0x1f2de0u: goto label_1f2de0;
        case 0x1f2de8u: goto label_1f2de8;
        case 0x1f2df0u: goto label_1f2df0;
        case 0x1f2e0cu: goto label_1f2e0c;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e24u: goto label_1f2e24;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e34u: goto label_1f2e34;
        case 0x1f2e58u: goto label_1f2e58;
        case 0x1f2e78u: goto label_1f2e78;
        case 0x1f2e88u: goto label_1f2e88;
        case 0x1f2e90u: goto label_1f2e90;
        case 0x1f2e98u: goto label_1f2e98;
        case 0x1f2ea0u: goto label_1f2ea0;
        case 0x1f2eb4u: goto label_1f2eb4;
        case 0x1f2ebcu: goto label_1f2ebc;
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2ed8u: goto label_1f2ed8;
        case 0x1f2eecu: goto label_1f2eec;
        case 0x1f2f00u: goto label_1f2f00;
        case 0x1f2f08u: goto label_1f2f08;
        case 0x1f2f10u: goto label_1f2f10;
        case 0x1f2f18u: goto label_1f2f18;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f28u: goto label_1f2f28;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f40u: goto label_1f2f40;
        case 0x1f2f58u: goto label_1f2f58;
        case 0x1f2f64u: goto label_1f2f64;
        case 0x1f2f70u: goto label_1f2f70;
        case 0x1f2f78u: goto label_1f2f78;
        default: break;
    }

    ctx->pc = 0x1f2190u;

    // 0x1f2190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2194: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f2198: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f2198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f219c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f21a0: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x1f21a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f21a8: 0x26a288d0  addiu       $v0, $s5, -0x7730
    ctx->pc = 0x1f21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f21ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f21acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f21b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f21b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f21b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f21b8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f21b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f21bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f21bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f21c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f21c4: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1f21c4u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f21c8: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F21C8u;
    SET_GPR_U32(ctx, 31, 0x1F21D0u);
    ctx->pc = 0x1F21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21C8u;
    // 0x1f21cc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F21C8u, 0x1F21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21D0u;
label_1f21d0:
    // 0x1f21d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F21D0u;
    {
        const bool branch_taken_0x1f21d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f21d0) {
            ctx->pc = 0x1F21D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21D0u;
            // 0x1f21d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F21E8u;
            goto label_1f21e8;
        }
    }
    ctx->pc = 0x1F21D8u;
    // 0x1f21d8: 0xc09dba0  jal         func_276E80
    ctx->pc = 0x1F21D8u;
    SET_GPR_U32(ctx, 31, 0x1F21E0u);
    ctx->pc = 0x1F21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21D8u;
    // 0x1f21dc: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276E80u, 0x1F21D8u, 0x1F21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21E0u;
label_1f21e0:
    // 0x1f21e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F21E0u;
    {
        const bool branch_taken_0x1f21e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21E0u;
        // 0x1f21e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21e0) {
            ctx->pc = 0x1F226Cu;
            goto label_1f226c;
        }
    }
    ctx->pc = 0x1F21E8u;
label_1f21e8:
    // 0x1f21e8: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F21E8u;
    {
        const bool branch_taken_0x1f21e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21E8u;
        // 0x1f21ec: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21e8) {
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F21F0u;
    // 0x1f21f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f21f4: 0x26f18858  addiu       $s1, $s7, -0x77A8
    ctx->pc = 0x1f21f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x1f21f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x1f21fc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f2200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2200u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x1f2204: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1f2204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f2208: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x1f2208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f220c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f2210: 0xc04a1ea  jal         func_1287A8
    ctx->pc = 0x1F2210u;
    SET_GPR_U32(ctx, 31, 0x1F2218u);
    ctx->pc = 0x1F2214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2210u;
    // 0x1f2214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287A8u, 0x1F2210u, 0x1F2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2218u;
label_1f2218:
    // 0x1f2218: 0x24023039  addiu       $v0, $zero, 0x3039
    ctx->pc = 0x1f2218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12345));
    // 0x1f221c: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x1f221cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
    // 0x1f2220: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F2220u;
    {
        const bool branch_taken_0x1f2220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2220u;
        // 0x1f2224: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2220) {
            ctx->pc = 0x1F2268u;
            goto label_1f2268;
        }
    }
    ctx->pc = 0x1F2228u;
label_1f2228:
    // 0x1f2228: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f2228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f222c: 0x26f18858  addiu       $s1, $s7, -0x77A8
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x1f2230: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f2230u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x1f2234: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f2238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2238u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x1f223c: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x1f223cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f2240: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f2244: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f2244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f2248: 0xc04a1ea  jal         func_1287A8
    ctx->pc = 0x1F2248u;
    SET_GPR_U32(ctx, 31, 0x1F2250u);
    ctx->pc = 0x1F224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2248u;
    // 0x1f224c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287A8u, 0x1F2248u, 0x1F2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2250u;
label_1f2250:
    // 0x1f2250: 0x24023039  addiu       $v0, $zero, 0x3039
    ctx->pc = 0x1f2250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12345));
    // 0x1f2254: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1f2254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1f2258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f225c: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x1f225cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
    // 0x1f2260: 0xc09db92  jal         func_276E48
    ctx->pc = 0x1F2260u;
    SET_GPR_U32(ctx, 31, 0x1F2268u);
    ctx->pc = 0x1F2264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2260u;
    // 0x1f2264: 0x24053039  addiu       $a1, $zero, 0x3039 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12345));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276E48u, 0x1F2260u, 0x1F2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2268u;
label_1f2268:
    // 0x1f2268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f226c:
    // 0x1f226c: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1F226Cu;
    SET_GPR_U32(ctx, 31, 0x1F2274u);
    ctx->pc = 0x1F2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F226Cu;
    // 0x1f2270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1F226Cu, 0x1F2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2274u;
label_1f2274:
    // 0x1f2274: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1F2274u;
    SET_GPR_U32(ctx, 31, 0x1F227Cu);
    ctx->pc = 0x1F2278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2274u;
    // 0x1f2278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1F2274u, 0x1F227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F227Cu;
label_1f227c:
    // 0x1f227c: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F227Cu;
    SET_GPR_U32(ctx, 31, 0x1F2284u);
    ctx->pc = 0x1F2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F227Cu;
    // 0x1f2280: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F227Cu, 0x1F2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2284u;
label_1f2284:
    // 0x1f2284: 0x2683fffc  addiu       $v1, $s4, -0x4
    ctx->pc = 0x1f2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1f2288: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1f2288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f228c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F228Cu;
    {
        const bool branch_taken_0x1f228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F228Cu;
        // 0x1f2290: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f228c) {
            ctx->pc = 0x1F22A8u;
            goto label_1f22a8;
        }
    }
    ctx->pc = 0x1F2294u;
    // 0x1f2294: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f2294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f2298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f229c: 0x8c6332a0  lw          $v1, 0x32A0($v1)
    ctx->pc = 0x1f229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12960)));
    // 0x1f22a0: 0x600008  jr          $v1
    ctx->pc = 0x1F22A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F22A8u: goto label_1f22a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F22A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F22A8u;
label_1f22a8:
    // 0x1f22a8: 0xc0845d8  jal         func_211760
    ctx->pc = 0x1F22A8u;
    SET_GPR_U32(ctx, 31, 0x1F22B0u);
    ctx->pc = 0x1F22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22A8u;
    // 0x1f22ac: 0xaf809720  sw          $zero, -0x68E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211760u, 0x1F22A8u, 0x1F22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22B0u;
label_1f22b0:
    // 0x1f22b0: 0xc088218  jal         func_220860
    ctx->pc = 0x1F22B0u;
    SET_GPR_U32(ctx, 31, 0x1F22B8u);
    ctx->pc = 0x220860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220860u, 0x1F22B0u, 0x1F22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22B8u;
label_1f22b8:
    // 0x1f22b8: 0xc08f530  jal         func_23D4C0
    ctx->pc = 0x1F22B8u;
    SET_GPR_U32(ctx, 31, 0x1F22C0u);
    ctx->pc = 0x23D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D4C0u, 0x1F22B8u, 0x1F22C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22C0u;
label_1f22c0:
    // 0x1f22c0: 0xc091b96  jal         func_246E58
    ctx->pc = 0x1F22C0u;
    SET_GPR_U32(ctx, 31, 0x1F22C8u);
    ctx->pc = 0x1F22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22C0u;
    // 0x1f22c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246E58u, 0x1F22C0u, 0x1F22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22C8u;
label_1f22c8:
    // 0x1f22c8: 0xc091590  jal         func_245640
    ctx->pc = 0x1F22C8u;
    SET_GPR_U32(ctx, 31, 0x1F22D0u);
    ctx->pc = 0x245640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245640u, 0x1F22C8u, 0x1F22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22D0u;
label_1f22d0:
    // 0x1f22d0: 0x26e28858  addiu       $v0, $s7, -0x77A8
    ctx->pc = 0x1f22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x1f22d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f22d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22d8: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1f22d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f22dc: 0xc0904fc  jal         func_2413F0
    ctx->pc = 0x1F22DCu;
    SET_GPR_U32(ctx, 31, 0x1F22E4u);
    ctx->pc = 0x1F22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22DCu;
    // 0x1f22e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2413F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2413F0u, 0x1F22DCu, 0x1F22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22E4u;
label_1f22e4:
    // 0x1f22e4: 0xc0929e2  jal         func_24A788
    ctx->pc = 0x1F22E4u;
    SET_GPR_U32(ctx, 31, 0x1F22ECu);
    ctx->pc = 0x1F22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22E4u;
    // 0x1f22e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A788u, 0x1F22E4u, 0x1F22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22ECu;
label_1f22ec:
    // 0x1f22ec: 0xc0929e2  jal         func_24A788
    ctx->pc = 0x1F22ECu;
    SET_GPR_U32(ctx, 31, 0x1F22F4u);
    ctx->pc = 0x1F22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22ECu;
    // 0x1f22f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A788u, 0x1F22ECu, 0x1F22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22F4u;
label_1f22f4:
    // 0x1f22f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f22f8: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F22F8u;
    {
        const bool branch_taken_0x1f22f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22F8u;
        // 0x1f22fc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22f8) {
            ctx->pc = 0x1F2318u;
            goto label_1f2318;
        }
    }
    ctx->pc = 0x1F2300u;
    // 0x1f2300: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2300u;
    {
        const bool branch_taken_0x1f2300 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2300u;
        // 0x1f2304: 0x2e960025  sltiu       $s6, $s4, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2300) {
            ctx->pc = 0x1F231Cu;
            goto label_1f231c;
        }
    }
    ctx->pc = 0x1F2308u;
    // 0x1f2308: 0xc099104  jal         func_264410
    ctx->pc = 0x1F2308u;
    SET_GPR_U32(ctx, 31, 0x1F2310u);
    ctx->pc = 0x1F230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2308u;
    // 0x1f230c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264410u, 0x1F2308u, 0x1F2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2310u;
label_1f2310:
    // 0x1f2310: 0xc099104  jal         func_264410
    ctx->pc = 0x1F2310u;
    SET_GPR_U32(ctx, 31, 0x1F2318u);
    ctx->pc = 0x1F2314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2310u;
    // 0x1f2314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264410u, 0x1F2310u, 0x1F2318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2318u;
label_1f2318:
    // 0x1f2318: 0x2e960025  sltiu       $s6, $s4, 0x25
    ctx->pc = 0x1f2318u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
label_1f231c:
    // 0x1f231c: 0x12c0008a  beqz        $s6, . + 4 + (0x8A << 2)
    ctx->pc = 0x1F231Cu;
    {
        const bool branch_taken_0x1f231c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F231Cu;
        // 0x1f2320: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f231c) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F2324u;
    // 0x1f2324: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f2324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f2328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f2328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f232c: 0x8c6332e0  lw          $v1, 0x32E0($v1)
    ctx->pc = 0x1f232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13024)));
    // 0x1f2330: 0x600008  jr          $v1
    ctx->pc = 0x1F2330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2338u: goto label_1f2338;
            case 0x1F2340u: goto label_1f2340;
            case 0x1F23C0u: goto label_1f23c0;
            case 0x1F2488u: goto label_1f2488;
            case 0x1F2490u: goto label_1f2490;
            case 0x1F24A0u: goto label_1f24a0;
            case 0x1F24B8u: goto label_1f24b8;
            case 0x1F2540u: goto label_1f2540;
            case 0x1F2548u: goto label_1f2548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2330u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F2338u;
label_1f2338:
    // 0x1f2338: 0xc07dafe  jal         func_1F6BF8
    ctx->pc = 0x1F2338u;
    SET_GPR_U32(ctx, 31, 0x1F2340u);
    ctx->pc = 0x1F6BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BF8u, 0x1F2338u, 0x1F2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2340u;
label_1f2340:
    // 0x1f2340: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x1f2340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x1f2344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2348: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f2348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f234c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F234Cu;
    {
        const bool branch_taken_0x1f234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F234Cu;
        // 0x1f2350: 0xaf83973c  sw          $v1, -0x68C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f234c) {
            ctx->pc = 0x1F2364u;
            goto label_1f2364;
        }
    }
    ctx->pc = 0x1F2354u;
    // 0x1f2354: 0x26e28858  addiu       $v0, $s7, -0x77A8
    ctx->pc = 0x1f2354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x1f2358: 0xc08ef18  jal         func_23BC60
    ctx->pc = 0x1F2358u;
    SET_GPR_U32(ctx, 31, 0x1F2360u);
    ctx->pc = 0x1F235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2358u;
    // 0x1f235c: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BC60u, 0x1F2358u, 0x1F2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2360u;
label_1f2360:
    // 0x1f2360: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x1f2360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
label_1f2364:
    // 0x1f2364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2368: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2368u;
    {
        const bool branch_taken_0x1f2368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2368) {
            ctx->pc = 0x1F2380u;
            goto label_1f2380;
        }
    }
    ctx->pc = 0x1F2370u;
    // 0x1f2370: 0xc08999e  jal         func_226678
    ctx->pc = 0x1F2370u;
    SET_GPR_U32(ctx, 31, 0x1F2378u);
    ctx->pc = 0x226678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226678u, 0x1F2370u, 0x1F2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2378u;
label_1f2378:
    // 0x1f2378: 0xc092636  jal         func_2498D8
    ctx->pc = 0x1F2378u;
    SET_GPR_U32(ctx, 31, 0x1F2380u);
    ctx->pc = 0x1F237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2378u;
    // 0x1f237c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498D8u, 0x1F2378u, 0x1F2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2380u;
label_1f2380:
    // 0x1f2380: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F2380u;
    SET_GPR_U32(ctx, 31, 0x1F2388u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F2380u, 0x1F2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2388u;
label_1f2388:
    // 0x1f2388: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2388u;
    {
        const bool branch_taken_0x1f2388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2388u;
        // 0x1f238c: 0x8f85973c  lw          $a1, -0x68C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2388) {
            ctx->pc = 0x1F23B8u;
            goto label_1f23b8;
        }
    }
    ctx->pc = 0x1F2390u;
    // 0x1f2390: 0xc09dcce  jal         func_277338
    ctx->pc = 0x1F2390u;
    SET_GPR_U32(ctx, 31, 0x1F2398u);
    ctx->pc = 0x1F2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2390u;
    // 0x1f2394: 0x8f84973c  lw          $a0, -0x68C4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277338u, 0x1F2390u, 0x1F2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2398u;
label_1f2398:
    // 0x1f2398: 0xc09dcd2  jal         func_277348
    ctx->pc = 0x1F2398u;
    SET_GPR_U32(ctx, 31, 0x1F23A0u);
    ctx->pc = 0x1F239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2398u;
    // 0x1f239c: 0x2690ffee  addiu       $s0, $s4, -0x12 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277348u, 0x1F2398u, 0x1F23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23A0u;
label_1f23a0:
    // 0x1f23a0: 0x8f85973c  lw          $a1, -0x68C4($gp)
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x1f23a4: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1F23A4u;
    SET_GPR_U32(ctx, 31, 0x1F23ACu);
    ctx->pc = 0x1F23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23A4u;
    // 0x1f23a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1F23A4u, 0x1F23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23ACu;
label_1f23ac:
    // 0x1f23ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F23ACu;
    {
        const bool branch_taken_0x1f23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23ACu;
        // 0x1f23b0: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23ac) {
            ctx->pc = 0x1F23C8u;
            goto label_1f23c8;
        }
    }
    ctx->pc = 0x1F23B4u;
    // 0x1f23b4: 0x0  nop
    ctx->pc = 0x1f23b4u;
    // NOP
label_1f23b8:
    // 0x1f23b8: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1F23B8u;
    SET_GPR_U32(ctx, 31, 0x1F23C0u);
    ctx->pc = 0x1F23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23B8u;
    // 0x1f23bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1F23B8u, 0x1F23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23C0u;
label_1f23c0:
    // 0x1f23c0: 0x2690ffee  addiu       $s0, $s4, -0x12
    ctx->pc = 0x1f23c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967278));
    // 0x1f23c4: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x1f23c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1f23c8:
    // 0x1f23c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F23C8u;
    {
        const bool branch_taken_0x1f23c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23C8u;
        // 0x1f23cc: 0x8f82973c  lw          $v0, -0x68C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23c8) {
            ctx->pc = 0x1F23D8u;
            goto label_1f23d8;
        }
    }
    ctx->pc = 0x1F23D0u;
    // 0x1f23d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f23d4: 0xaf83973c  sw          $v1, -0x68C4($gp)
    ctx->pc = 0x1f23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940476), GPR_U32(ctx, 3));
label_1f23d8:
    // 0x1f23d8: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F23D8u;
    SET_GPR_U32(ctx, 31, 0x1F23E0u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F23D8u, 0x1F23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23E0u;
label_1f23e0:
    // 0x1f23e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F23E0u;
    {
        const bool branch_taken_0x1f23e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f23e0) {
            ctx->pc = 0x1F23E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F23E0u;
            // 0x1f23e4: 0x26e28858  addiu       $v0, $s7, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F23F8u;
            goto label_1f23f8;
        }
    }
    ctx->pc = 0x1F23E8u;
    // 0x1f23e8: 0xc09d996  jal         func_276658
    ctx->pc = 0x1F23E8u;
    SET_GPR_U32(ctx, 31, 0x1F23F0u);
    ctx->pc = 0x276658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276658u, 0x1F23E8u, 0x1F23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23F0u;
label_1f23f0:
    // 0x1f23f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F23F0u;
    {
        const bool branch_taken_0x1f23f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23F0u;
        // 0x1f23f4: 0xaf829728  sw          $v0, -0x68D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23f0) {
            ctx->pc = 0x1F2404u;
            goto label_1f2404;
        }
    }
    ctx->pc = 0x1F23F8u;
label_1f23f8:
    // 0x1f23f8: 0xc084eac  jal         func_213AB0
    ctx->pc = 0x1F23F8u;
    SET_GPR_U32(ctx, 31, 0x1F2400u);
    ctx->pc = 0x1F23FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23F8u;
    // 0x1f23fc: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AB0u, 0x1F23F8u, 0x1F2400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2400u;
label_1f2400:
    // 0x1f2400: 0xaf829728  sw          $v0, -0x68D8($gp)
    ctx->pc = 0x1f2400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940456), GPR_U32(ctx, 2));
label_1f2404:
    // 0x1f2404: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x1f2404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f2408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2408u;
    {
        const bool branch_taken_0x1f2408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2408u;
        // 0x1f240c: 0xaf809738  sw          $zero, -0x68C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2408) {
            ctx->pc = 0x1F2420u;
            goto label_1f2420;
        }
    }
    ctx->pc = 0x1F2410u;
    // 0x1f2410: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x1F2410u;
    SET_GPR_U32(ctx, 31, 0x1F2418u);
    ctx->pc = 0x1F2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2410u;
    // 0x1f2414: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x1F2410u, 0x1F2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2418u;
label_1f2418:
    // 0x1f2418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2418u;
    {
        const bool branch_taken_0x1f2418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2418) {
            ctx->pc = 0x1F2428u;
            goto label_1f2428;
        }
    }
    ctx->pc = 0x1F2420u;
label_1f2420:
    // 0x1f2420: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x1F2420u;
    SET_GPR_U32(ctx, 31, 0x1F2428u);
    ctx->pc = 0x1F2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2420u;
    // 0x1f2424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x1F2420u, 0x1F2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2428u;
label_1f2428:
    // 0x1f2428: 0xc0820c8  jal         func_208320
    ctx->pc = 0x1F2428u;
    SET_GPR_U32(ctx, 31, 0x1F2430u);
    ctx->pc = 0x1F242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2428u;
    // 0x1f242c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208320u, 0x1F2428u, 0x1F2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2430u;
label_1f2430:
    // 0x1f2430: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f2434: 0x56820006  bnel        $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2434u;
    {
        const bool branch_taken_0x1f2434 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2434) {
            ctx->pc = 0x1F2438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2434u;
            // 0x1f2438: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2450u;
            goto label_1f2450;
        }
    }
    ctx->pc = 0x1F243Cu;
    // 0x1f243c: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x1F243Cu;
    SET_GPR_U32(ctx, 31, 0x1F2444u);
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x1F243Cu, 0x1F2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2444u;
label_1f2444:
    // 0x1f2444: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1F2444u;
    {
        const bool branch_taken_0x1f2444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2444) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F244Cu;
    // 0x1f244c: 0x0  nop
    ctx->pc = 0x1f244cu;
    // NOP
label_1f2450:
    // 0x1f2450: 0x1682003d  bne         $s4, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F2450u;
    {
        const bool branch_taken_0x1f2450 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2450) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F2458u;
    // 0x1f2458: 0x26a488d0  addiu       $a0, $s5, -0x7730
    ctx->pc = 0x1f2458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f245c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2460: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f2460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f2464: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2464u;
    {
        const bool branch_taken_0x1f2464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2464) {
            ctx->pc = 0x1F2468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2464u;
            // 0x1f2468: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F246Cu;
            goto label_1f246c;
        }
    }
    ctx->pc = 0x1F246Cu;
label_1f246c:
    // 0x1f246c: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1f246cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1f2470: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f2474: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F2474u;
    {
        const bool branch_taken_0x1f2474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2474u;
        // 0x1f2478: 0x26e28858  addiu       $v0, $s7, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2474) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F247Cu;
    // 0x1f247c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F247Cu;
    {
        const bool branch_taken_0x1f247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F247Cu;
        // 0x1f2480: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f247c) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F2484u;
    // 0x1f2484: 0x0  nop
    ctx->pc = 0x1f2484u;
    // NOP
label_1f2488:
    // 0x1f2488: 0xc07db06  jal         func_1F6C18
    ctx->pc = 0x1F2488u;
    SET_GPR_U32(ctx, 31, 0x1F2490u);
    ctx->pc = 0x1F248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2488u;
    // 0x1f248c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C18u, 0x1F2488u, 0x1F2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2490u;
label_1f2490:
    // 0x1f2490: 0xc07db06  jal         func_1F6C18
    ctx->pc = 0x1F2490u;
    SET_GPR_U32(ctx, 31, 0x1F2498u);
    ctx->pc = 0x1F2494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2490u;
    // 0x1f2494: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C18u, 0x1F2490u, 0x1F2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2498u;
label_1f2498:
    // 0x1f2498: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F2498u;
    {
        const bool branch_taken_0x1f2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2498) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F24A0u;
label_1f24a0:
    // 0x1f24a0: 0xc0820c8  jal         func_208320
    ctx->pc = 0x1F24A0u;
    SET_GPR_U32(ctx, 31, 0x1F24A8u);
    ctx->pc = 0x1F24A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24A0u;
    // 0x1f24a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208320u, 0x1F24A0u, 0x1F24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24A8u;
label_1f24a8:
    // 0x1f24a8: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x1F24A8u;
    SET_GPR_U32(ctx, 31, 0x1F24B0u);
    ctx->pc = 0x1F24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24A8u;
    // 0x1f24ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x1F24A8u, 0x1F24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24B0u;
label_1f24b0:
    // 0x1f24b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F24B0u;
    {
        const bool branch_taken_0x1f24b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24b0) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F24B8u;
label_1f24b8:
    // 0x1f24b8: 0x26e28858  addiu       $v0, $s7, -0x77A8
    ctx->pc = 0x1f24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x1f24bc: 0xc084eac  jal         func_213AB0
    ctx->pc = 0x1F24BCu;
    SET_GPR_U32(ctx, 31, 0x1F24C4u);
    ctx->pc = 0x1F24C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24BCu;
    // 0x1f24c0: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AB0u, 0x1F24BCu, 0x1F24C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24C4u;
label_1f24c4:
    // 0x1f24c4: 0xaf809738  sw          $zero, -0x68C8($gp)
    ctx->pc = 0x1f24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940472), GPR_U32(ctx, 0));
    // 0x1f24c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f24cc: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F24CCu;
    {
        const bool branch_taken_0x1f24cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24CCu;
        // 0x1f24d0: 0xaf829728  sw          $v0, -0x68D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24cc) {
            ctx->pc = 0x1F24E8u;
            goto label_1f24e8;
        }
    }
    ctx->pc = 0x1F24D4u;
    // 0x1f24d4: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x1F24D4u;
    SET_GPR_U32(ctx, 31, 0x1F24DCu);
    ctx->pc = 0x1F24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24D4u;
    // 0x1f24d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x1F24D4u, 0x1F24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24DCu;
label_1f24dc:
    // 0x1f24dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F24DCu;
    {
        const bool branch_taken_0x1f24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24dc) {
            ctx->pc = 0x1F24F0u;
            goto label_1f24f0;
        }
    }
    ctx->pc = 0x1F24E4u;
    // 0x1f24e4: 0x0  nop
    ctx->pc = 0x1f24e4u;
    // NOP
label_1f24e8:
    // 0x1f24e8: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x1F24E8u;
    SET_GPR_U32(ctx, 31, 0x1F24F0u);
    ctx->pc = 0x1F24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24E8u;
    // 0x1f24ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x1F24E8u, 0x1F24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24F0u;
label_1f24f0:
    // 0x1f24f0: 0xc0820c8  jal         func_208320
    ctx->pc = 0x1F24F0u;
    SET_GPR_U32(ctx, 31, 0x1F24F8u);
    ctx->pc = 0x1F24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24F0u;
    // 0x1f24f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208320u, 0x1F24F0u, 0x1F24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24F8u;
label_1f24f8:
    // 0x1f24f8: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x1f24fc: 0x2682fff1  addiu       $v0, $s4, -0xF
    ctx->pc = 0x1f24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
    // 0x1f2500: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1f2500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2504: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f2504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2508u;
    {
        const bool branch_taken_0x1f2508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2508u;
        // 0x1f250c: 0xaf85973c  sw          $a1, -0x68C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940476), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2508) {
            ctx->pc = 0x1F2520u;
            goto label_1f2520;
        }
    }
    ctx->pc = 0x1F2510u;
    // 0x1f2510: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1F2510u;
    SET_GPR_U32(ctx, 31, 0x1F2518u);
    ctx->pc = 0x1F2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2510u;
    // 0x1f2514: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1F2510u, 0x1F2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2518u;
label_1f2518:
    // 0x1f2518: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F2518u;
    {
        const bool branch_taken_0x1f2518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2518) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F2520u;
label_1f2520:
    // 0x1f2520: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f2524: 0x16820008  bne         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2524u;
    {
        const bool branch_taken_0x1f2524 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2524) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F252Cu;
    // 0x1f252c: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1F252Cu;
    SET_GPR_U32(ctx, 31, 0x1F2534u);
    ctx->pc = 0x1F2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F252Cu;
    // 0x1f2530: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1F252Cu, 0x1F2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2534u;
label_1f2534:
    // 0x1f2534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2534u;
    {
        const bool branch_taken_0x1f2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2534) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F253Cu;
    // 0x1f253c: 0x0  nop
    ctx->pc = 0x1f253cu;
    // NOP
label_1f2540:
    // 0x1f2540: 0xc0820c8  jal         func_208320
    ctx->pc = 0x1F2540u;
    SET_GPR_U32(ctx, 31, 0x1F2548u);
    ctx->pc = 0x1F2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2540u;
    // 0x1f2544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208320u, 0x1F2540u, 0x1F2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2548u;
label_1f2548:
    // 0x1f2548: 0xc084720  jal         func_211C80
    ctx->pc = 0x1F2548u;
    SET_GPR_U32(ctx, 31, 0x1F2550u);
    ctx->pc = 0x211C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211C80u, 0x1F2548u, 0x1F2550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2550u;
label_1f2550:
    // 0x1f2550: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2550u;
    {
        const bool branch_taken_0x1f2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2550) {
            ctx->pc = 0x1F2554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2550u;
            // 0x1f2554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2564u;
            goto label_1f2564;
        }
    }
    ctx->pc = 0x1F2558u;
    // 0x1f2558: 0xc09843c  jal         func_2610F0
    ctx->pc = 0x1F2558u;
    SET_GPR_U32(ctx, 31, 0x1F2560u);
    ctx->pc = 0x2610F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2610F0u, 0x1F2558u, 0x1F2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2560u;
label_1f2560:
    // 0x1f2560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2564:
    // 0x1f2564: 0xaf809730  sw          $zero, -0x68D0($gp)
    ctx->pc = 0x1f2564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 0));
    // 0x1f2568: 0xaf809734  sw          $zero, -0x68CC($gp)
    ctx->pc = 0x1f2568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940468), GPR_U32(ctx, 0));
    // 0x1f256c: 0x1282001a  beq         $s4, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F256Cu;
    {
        const bool branch_taken_0x1f256c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F256Cu;
        // 0x1f2570: 0xaf82c894  sw          $v0, -0x376C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f256c) {
            ctx->pc = 0x1F25D8u;
            goto label_1f25d8;
        }
    }
    ctx->pc = 0x1F2574u;
    // 0x1f2574: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1f2574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2578: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2578u;
    {
        const bool branch_taken_0x1f2578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2578) {
            ctx->pc = 0x1F257Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2578u;
            // 0x1f257c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2590u;
            goto label_1f2590;
        }
    }
    ctx->pc = 0x1F2580u;
    // 0x1f2580: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2580u;
    {
        const bool branch_taken_0x1f2580 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2580u;
        // 0x1f2584: 0x8eb088d0  lw          $s0, -0x7730($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2580) {
            ctx->pc = 0x1F25A8u;
            goto label_1f25a8;
        }
    }
    ctx->pc = 0x1F2588u;
    // 0x1f2588: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F2588u;
    {
        const bool branch_taken_0x1f2588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2588u;
        // 0x1f258c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2588) {
            ctx->pc = 0x1F2608u;
            goto label_1f2608;
        }
    }
    ctx->pc = 0x1F2590u;
label_1f2590:
    // 0x1f2590: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2590u;
    {
        const bool branch_taken_0x1f2590 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2590u;
        // 0x1f2594: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2590) {
            ctx->pc = 0x1F25A8u;
            goto label_1f25a8;
        }
    }
    ctx->pc = 0x1F2598u;
    // 0x1f2598: 0x1282000f  beq         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2598u;
    {
        const bool branch_taken_0x1f2598 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2598u;
        // 0x1f259c: 0x8eb088d0  lw          $s0, -0x7730($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2598) {
            ctx->pc = 0x1F25D8u;
            goto label_1f25d8;
        }
    }
    ctx->pc = 0x1F25A0u;
    // 0x1f25a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F25A0u;
    {
        const bool branch_taken_0x1f25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25A0u;
        // 0x1f25a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25a0) {
            ctx->pc = 0x1F2608u;
            goto label_1f2608;
        }
    }
    ctx->pc = 0x1F25A8u;
label_1f25a8:
    // 0x1f25a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f25a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25ac: 0xc0af082  jal         func_2BC208
    ctx->pc = 0x1F25ACu;
    SET_GPR_U32(ctx, 31, 0x1F25B4u);
    ctx->pc = 0x1F25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25ACu;
    // 0x1f25b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC208u, 0x1F25ACu, 0x1F25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25B4u;
label_1f25b4:
    // 0x1f25b4: 0xc0a0502  jal         func_281408
    ctx->pc = 0x1F25B4u;
    SET_GPR_U32(ctx, 31, 0x1F25BCu);
    ctx->pc = 0x1F25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25B4u;
    // 0x1f25b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281408u, 0x1F25B4u, 0x1F25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25BCu;
label_1f25bc:
    // 0x1f25bc: 0xc0832c4  jal         func_20CB10
    ctx->pc = 0x1F25BCu;
    SET_GPR_U32(ctx, 31, 0x1F25C4u);
    ctx->pc = 0x1F25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25BCu;
    // 0x1f25c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB10u, 0x1F25BCu, 0x1F25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25C4u;
label_1f25c4:
    // 0x1f25c4: 0xc0a04fa  jal         func_2813E8
    ctx->pc = 0x1F25C4u;
    SET_GPR_U32(ctx, 31, 0x1F25CCu);
    ctx->pc = 0x1F25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25C4u;
    // 0x1f25c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813E8u, 0x1F25C4u, 0x1F25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25CCu;
label_1f25cc:
    // 0x1f25cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F25CCu;
    {
        const bool branch_taken_0x1f25cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25cc) {
            ctx->pc = 0x1F2658u;
            goto label_1f2658;
        }
    }
    ctx->pc = 0x1F25D4u;
    // 0x1f25d4: 0x0  nop
    ctx->pc = 0x1f25d4u;
    // NOP
label_1f25d8:
    // 0x1f25d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f25d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25dc: 0xc0af082  jal         func_2BC208
    ctx->pc = 0x1F25DCu;
    SET_GPR_U32(ctx, 31, 0x1F25E4u);
    ctx->pc = 0x1F25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25DCu;
    // 0x1f25e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC208u, 0x1F25DCu, 0x1F25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25E4u;
label_1f25e4:
    // 0x1f25e4: 0xc0a0502  jal         func_281408
    ctx->pc = 0x1F25E4u;
    SET_GPR_U32(ctx, 31, 0x1F25ECu);
    ctx->pc = 0x1F25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25E4u;
    // 0x1f25e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281408u, 0x1F25E4u, 0x1F25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25ECu;
label_1f25ec:
    // 0x1f25ec: 0xc0832c4  jal         func_20CB10
    ctx->pc = 0x1F25ECu;
    SET_GPR_U32(ctx, 31, 0x1F25F4u);
    ctx->pc = 0x1F25F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25ECu;
    // 0x1f25f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB10u, 0x1F25ECu, 0x1F25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25F4u;
label_1f25f4:
    // 0x1f25f4: 0xc0a04fa  jal         func_2813E8
    ctx->pc = 0x1F25F4u;
    SET_GPR_U32(ctx, 31, 0x1F25FCu);
    ctx->pc = 0x1F25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25F4u;
    // 0x1f25f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813E8u, 0x1F25F4u, 0x1F25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25FCu;
label_1f25fc:
    // 0x1f25fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F25FCu;
    {
        const bool branch_taken_0x1f25fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25fc) {
            ctx->pc = 0x1F2658u;
            goto label_1f2658;
        }
    }
    ctx->pc = 0x1F2604u;
    // 0x1f2604: 0x0  nop
    ctx->pc = 0x1f2604u;
    // NOP
label_1f2608:
    // 0x1f2608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f260c: 0xc0af082  jal         func_2BC208
    ctx->pc = 0x1F260Cu;
    SET_GPR_U32(ctx, 31, 0x1F2614u);
    ctx->pc = 0x1F2610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F260Cu;
    // 0x1f2610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC208u, 0x1F260Cu, 0x1F2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2614u;
label_1f2614:
    // 0x1f2614: 0xc0a04fa  jal         func_2813E8
    ctx->pc = 0x1F2614u;
    SET_GPR_U32(ctx, 31, 0x1F261Cu);
    ctx->pc = 0x1F2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2614u;
    // 0x1f2618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2813E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813E8u, 0x1F2614u, 0x1F261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F261Cu;
label_1f261c:
    // 0x1f261c: 0xc0832c4  jal         func_20CB10
    ctx->pc = 0x1F261Cu;
    SET_GPR_U32(ctx, 31, 0x1F2624u);
    ctx->pc = 0x1F2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F261Cu;
    // 0x1f2620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB10u, 0x1F261Cu, 0x1F2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2624u;
label_1f2624:
    // 0x1f2624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f262c: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x1F262Cu;
    SET_GPR_U32(ctx, 31, 0x1F2634u);
    ctx->pc = 0x1F2630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F262Cu;
    // 0x1f2630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AA8u, 0x1F262Cu, 0x1F2634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2634u;
label_1f2634:
    // 0x1f2634: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f2634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2638: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F2638u;
    {
        const bool branch_taken_0x1f2638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2638u;
        // 0x1f263c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2638) {
            ctx->pc = 0x1F2608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2608;
        }
    }
    ctx->pc = 0x1F2640u;
    // 0x1f2640: 0xc0a04e4  jal         func_281390
    ctx->pc = 0x1F2640u;
    SET_GPR_U32(ctx, 31, 0x1F2648u);
    ctx->pc = 0x281390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281390u, 0x1F2640u, 0x1F2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2648u;
label_1f2648:
    // 0x1f2648: 0xc093796  jal         func_24DE58
    ctx->pc = 0x1F2648u;
    SET_GPR_U32(ctx, 31, 0x1F2650u);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x1F2648u, 0x1F2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2650u;
label_1f2650:
    // 0x1f2650: 0xc08b342  jal         func_22CD08
    ctx->pc = 0x1F2650u;
    SET_GPR_U32(ctx, 31, 0x1F2658u);
    ctx->pc = 0x22CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD08u, 0x1F2650u, 0x1F2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2658u;
label_1f2658:
    // 0x1f2658: 0xc07db74  jal         func_1F6DD0
    ctx->pc = 0x1F2658u;
    SET_GPR_U32(ctx, 31, 0x1F2660u);
    ctx->pc = 0x1F265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2658u;
    // 0x1f265c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6DD0u, 0x1F2658u, 0x1F2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2660u;
label_1f2660:
    // 0x1f2660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2664: 0xc0af97a  jal         func_2BE5E8
    ctx->pc = 0x1F2664u;
    SET_GPR_U32(ctx, 31, 0x1F266Cu);
    ctx->pc = 0x1F2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2664u;
    // 0x1f2668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE5E8u, 0x1F2664u, 0x1F266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F266Cu;
label_1f266c:
    // 0x1f266c: 0xc08e4aa  jal         func_2392A8
    ctx->pc = 0x1F266Cu;
    SET_GPR_U32(ctx, 31, 0x1F2674u);
    ctx->pc = 0x2392A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392A8u, 0x1F266Cu, 0x1F2674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2674u;
label_1f2674:
    // 0x1f2674: 0x2e820024  sltiu       $v0, $s4, 0x24
    ctx->pc = 0x1f2674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1f2678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2678u;
    {
        const bool branch_taken_0x1f2678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2678u;
        // 0x1f267c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2678) {
            ctx->pc = 0x1F26A8u;
            goto label_1f26a8;
        }
    }
    ctx->pc = 0x1F2680u;
    // 0x1f2680: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f2680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f2684: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f2684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2688: 0x8c633380  lw          $v1, 0x3380($v1)
    ctx->pc = 0x1f2688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13184)));
    // 0x1f268c: 0x600008  jr          $v1
    ctx->pc = 0x1F268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2698u: goto label_1f2698;
            case 0x1F26A8u: goto label_1f26a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F268Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F2694u;
    // 0x1f2694: 0x0  nop
    ctx->pc = 0x1f2694u;
    // NOP
label_1f2698:
    // 0x1f2698: 0xc09ec72  jal         func_27B1C8
    ctx->pc = 0x1F2698u;
    SET_GPR_U32(ctx, 31, 0x1F26A0u);
    ctx->pc = 0x27B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1C8u, 0x1F2698u, 0x1F26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26A0u;
label_1f26a0:
    // 0x1f26a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F26A0u;
    {
        const bool branch_taken_0x1f26a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f26a0) {
            ctx->pc = 0x1F26B0u;
            goto label_1f26b0;
        }
    }
    ctx->pc = 0x1F26A8u;
label_1f26a8:
    // 0x1f26a8: 0xc09ec72  jal         func_27B1C8
    ctx->pc = 0x1F26A8u;
    SET_GPR_U32(ctx, 31, 0x1F26B0u);
    ctx->pc = 0x27B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1C8u, 0x1F26A8u, 0x1F26B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26B0u;
label_1f26b0:
    // 0x1f26b0: 0xc09d618  jal         func_275860
    ctx->pc = 0x1F26B0u;
    SET_GPR_U32(ctx, 31, 0x1F26B8u);
    ctx->pc = 0x275860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275860u, 0x1F26B0u, 0x1F26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26B8u;
label_1f26b8:
    // 0x1f26b8: 0x12c000cb  beqz        $s6, . + 4 + (0xCB << 2)
    ctx->pc = 0x1F26B8u;
    {
        const bool branch_taken_0x1f26b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26B8u;
        // 0x1f26bc: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26b8) {
            ctx->pc = 0x1F29E8u;
            goto label_1f29e8;
        }
    }
    ctx->pc = 0x1F26C0u;
    // 0x1f26c0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f26c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f26c8: 0x8c633410  lw          $v1, 0x3410($v1)
    ctx->pc = 0x1f26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13328)));
    // 0x1f26cc: 0x600008  jr          $v1
    ctx->pc = 0x1F26CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F26D8u: goto label_1f26d8;
            case 0x1F2748u: goto label_1f2748;
            case 0x1F2788u: goto label_1f2788;
            case 0x1F27B8u: goto label_1f27b8;
            case 0x1F2828u: goto label_1f2828;
            case 0x1F2880u: goto label_1f2880;
            case 0x1F28D8u: goto label_1f28d8;
            case 0x1F2930u: goto label_1f2930;
            case 0x1F29A8u: goto label_1f29a8;
            case 0x1F29C8u: goto label_1f29c8;
            case 0x1F29E8u: goto label_1f29e8;
            case 0x1F2A18u: goto label_1f2a18;
            case 0x1F2A24u: goto label_1f2a24;
            case 0x1F2A58u: goto label_1f2a58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F26D4u;
    // 0x1f26d4: 0x0  nop
    ctx->pc = 0x1f26d4u;
    // NOP
label_1f26d8:
    // 0x1f26d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f26dc: 0x904383f1  lbu         $v1, -0x7C0F($v0)
    ctx->pc = 0x1f26dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83F1u));
    // 0x1f26e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F26E0u;
    {
        const bool branch_taken_0x1f26e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26E0u;
        // 0x1f26e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26e0) {
            ctx->pc = 0x1F2718u;
            goto label_1f2718;
        }
    }
    ctx->pc = 0x1F26E8u;
    // 0x1f26e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f26e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26ec: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F26ECu;
    SET_GPR_U32(ctx, 31, 0x1F26F4u);
    ctx->pc = 0x1F26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26ECu;
    // 0x1f26f0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F26ECu, 0x1F26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26F4u;
label_1f26f4:
    // 0x1f26f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f26f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f26f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26fc: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F26FCu;
    SET_GPR_U32(ctx, 31, 0x1F2704u);
    ctx->pc = 0x1F2700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26FCu;
    // 0x1f2700: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F26FCu, 0x1F2704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2704u;
label_1f2704:
    // 0x1f2704: 0xa24001bb  sb          $zero, 0x1BB($s2)
    ctx->pc = 0x1f2704u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f270c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1F270Cu;
    {
        const bool branch_taken_0x1f270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F270Cu;
        // 0x1f2710: 0xa26201bb  sb          $v0, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f270c) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F2714u;
    // 0x1f2714: 0x0  nop
    ctx->pc = 0x1f2714u;
    // NOP
label_1f2718:
    // 0x1f2718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f271c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f271cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2720: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2720u;
    SET_GPR_U32(ctx, 31, 0x1F2728u);
    ctx->pc = 0x1F2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2720u;
    // 0x1f2724: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2720u, 0x1F2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2728u;
label_1f2728:
    // 0x1f2728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f272c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f272cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2730: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2730u;
    SET_GPR_U32(ctx, 31, 0x1F2738u);
    ctx->pc = 0x1F2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2730u;
    // 0x1f2734: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2730u, 0x1F2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2738u;
label_1f2738:
    // 0x1f2738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f273c: 0xa24201bb  sb          $v0, 0x1BB($s2)
    ctx->pc = 0x1f273cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2740: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1F2740u;
    {
        const bool branch_taken_0x1f2740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2740u;
        // 0x1f2744: 0xa26001bb  sb          $zero, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2740) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F2748u;
label_1f2748:
    // 0x1f2748: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f2748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f274c: 0x904383f2  lbu         $v1, -0x7C0E($v0)
    ctx->pc = 0x1f274cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83F2u));
    // 0x1f2750: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2750u;
    {
        const bool branch_taken_0x1f2750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2750u;
        // 0x1f2754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2750) {
            ctx->pc = 0x1F2788u;
            goto label_1f2788;
        }
    }
    ctx->pc = 0x1F2758u;
    // 0x1f2758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f275c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F275Cu;
    SET_GPR_U32(ctx, 31, 0x1F2764u);
    ctx->pc = 0x1F2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F275Cu;
    // 0x1f2760: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F275Cu, 0x1F2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2764u;
label_1f2764:
    // 0x1f2764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f276c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F276Cu;
    SET_GPR_U32(ctx, 31, 0x1F2774u);
    ctx->pc = 0x1F2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F276Cu;
    // 0x1f2770: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F276Cu, 0x1F2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2774u;
label_1f2774:
    // 0x1f2774: 0xa24001bb  sb          $zero, 0x1BB($s2)
    ctx->pc = 0x1f2774u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f277c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1F277Cu;
    {
        const bool branch_taken_0x1f277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F277Cu;
        // 0x1f2780: 0xa26201bb  sb          $v0, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f277c) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F2784u;
    // 0x1f2784: 0x0  nop
    ctx->pc = 0x1f2784u;
    // NOP
label_1f2788:
    // 0x1f2788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f278c:
    // 0x1f278c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f278cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2790: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2790u;
    SET_GPR_U32(ctx, 31, 0x1F2798u);
    ctx->pc = 0x1F2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2790u;
    // 0x1f2794: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2790u, 0x1F2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2798u;
label_1f2798:
    // 0x1f2798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f279c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27a0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F27A0u;
    SET_GPR_U32(ctx, 31, 0x1F27A8u);
    ctx->pc = 0x1F27A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27A0u;
    // 0x1f27a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F27A0u, 0x1F27A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27A8u;
label_1f27a8:
    // 0x1f27a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f27ac: 0xa24201bb  sb          $v0, 0x1BB($s2)
    ctx->pc = 0x1f27acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f27b0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1F27B0u;
    {
        const bool branch_taken_0x1f27b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27B0u;
        // 0x1f27b4: 0xa26001bb  sb          $zero, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27b0) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F27B8u;
label_1f27b8:
    // 0x1f27b8: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x1f27b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x1f27bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f27c0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F27C0u;
    {
        const bool branch_taken_0x1f27c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27C0u;
        // 0x1f27c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27c0) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F27C8u;
    // 0x1f27c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f27c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f27ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27d0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F27D0u;
    SET_GPR_U32(ctx, 31, 0x1F27D8u);
    ctx->pc = 0x1F27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27D0u;
    // 0x1f27d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F27D0u, 0x1F27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27D8u;
label_1f27d8:
    // 0x1f27d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f27d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f27dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27e0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F27E0u;
    SET_GPR_U32(ctx, 31, 0x1F27E8u);
    ctx->pc = 0x1F27E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27E0u;
    // 0x1f27e4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F27E0u, 0x1F27E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27E8u;
label_1f27e8:
    // 0x1f27e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f27ec: 0xa24201bb  sb          $v0, 0x1BB($s2)
    ctx->pc = 0x1f27ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f27f0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1F27F0u;
    {
        const bool branch_taken_0x1f27f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27F0u;
        // 0x1f27f4: 0xa26001bb  sb          $zero, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27f0) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F27F8u;
label_1f27f8:
    // 0x1f27f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f27f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27fc: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F27FCu;
    SET_GPR_U32(ctx, 31, 0x1F2804u);
    ctx->pc = 0x1F2800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27FCu;
    // 0x1f2800: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F27FCu, 0x1F2804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2804u;
label_1f2804:
    // 0x1f2804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2808: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f280c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F280Cu;
    SET_GPR_U32(ctx, 31, 0x1F2814u);
    ctx->pc = 0x1F2810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F280Cu;
    // 0x1f2810: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F280Cu, 0x1F2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2814u;
label_1f2814:
    // 0x1f2814: 0xa24001bb  sb          $zero, 0x1BB($s2)
    ctx->pc = 0x1f2814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f281c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1F281Cu;
    {
        const bool branch_taken_0x1f281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F281Cu;
        // 0x1f2820: 0xa26201bb  sb          $v0, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f281c) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F2824u;
    // 0x1f2824: 0x0  nop
    ctx->pc = 0x1f2824u;
    // NOP
label_1f2828:
    // 0x1f2828: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x1f2828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x1f282c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f2830: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2830u;
    {
        const bool branch_taken_0x1f2830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2830u;
        // 0x1f2834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2830) {
            ctx->pc = 0x1F2858u;
            goto label_1f2858;
        }
    }
    ctx->pc = 0x1F2838u;
    // 0x1f2838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f283c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f283cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2840: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2840u;
    SET_GPR_U32(ctx, 31, 0x1F2848u);
    ctx->pc = 0x1F2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2840u;
    // 0x1f2844: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2840u, 0x1F2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2848u;
label_1f2848:
    // 0x1f2848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f284c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F284Cu;
    {
        const bool branch_taken_0x1f284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F284Cu;
        // 0x1f2850: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f284c) {
            ctx->pc = 0x1F286Cu;
            goto label_1f286c;
        }
    }
    ctx->pc = 0x1F2854u;
    // 0x1f2854: 0x0  nop
    ctx->pc = 0x1f2854u;
    // NOP
label_1f2858:
    // 0x1f2858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f285c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F285Cu;
    SET_GPR_U32(ctx, 31, 0x1F2864u);
    ctx->pc = 0x1F2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F285Cu;
    // 0x1f2860: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F285Cu, 0x1F2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2864u;
label_1f2864:
    // 0x1f2864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2868: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f286c:
    // 0x1f286c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F286Cu;
    SET_GPR_U32(ctx, 31, 0x1F2874u);
    ctx->pc = 0x1F2870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F286Cu;
    // 0x1f2870: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F286Cu, 0x1F2874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2874u;
label_1f2874:
    // 0x1f2874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2878: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1F2878u;
    {
        const bool branch_taken_0x1f2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2878u;
        // 0x1f287c: 0xa24201bb  sb          $v0, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2878) {
            ctx->pc = 0x1F2A4Cu;
            goto label_1f2a4c;
        }
    }
    ctx->pc = 0x1F2880u;
label_1f2880:
    // 0x1f2880: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x1f2880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x1f2884: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1f2888: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2888u;
    {
        const bool branch_taken_0x1f2888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2888u;
        // 0x1f288c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2888) {
            ctx->pc = 0x1F28B0u;
            goto label_1f28b0;
        }
    }
    ctx->pc = 0x1F2890u;
    // 0x1f2890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2894: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2898: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2898u;
    SET_GPR_U32(ctx, 31, 0x1F28A0u);
    ctx->pc = 0x1F289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2898u;
    // 0x1f289c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2898u, 0x1F28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28A0u;
label_1f28a0:
    // 0x1f28a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f28a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F28A4u;
    {
        const bool branch_taken_0x1f28a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28A4u;
        // 0x1f28a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28a4) {
            ctx->pc = 0x1F28C4u;
            goto label_1f28c4;
        }
    }
    ctx->pc = 0x1F28ACu;
    // 0x1f28ac: 0x0  nop
    ctx->pc = 0x1f28acu;
    // NOP
label_1f28b0:
    // 0x1f28b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f28b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28b4: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F28B4u;
    SET_GPR_U32(ctx, 31, 0x1F28BCu);
    ctx->pc = 0x1F28B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28B4u;
    // 0x1f28b8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F28B4u, 0x1F28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28BCu;
label_1f28bc:
    // 0x1f28bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f28bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f28c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f28c4:
    // 0x1f28c4: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F28C4u;
    SET_GPR_U32(ctx, 31, 0x1F28CCu);
    ctx->pc = 0x1F28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28C4u;
    // 0x1f28c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F28C4u, 0x1F28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28CCu;
label_1f28cc:
    // 0x1f28cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f28d0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1F28D0u;
    {
        const bool branch_taken_0x1f28d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28D0u;
        // 0x1f28d4: 0xa24201bb  sb          $v0, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28d0) {
            ctx->pc = 0x1F2A4Cu;
            goto label_1f2a4c;
        }
    }
    ctx->pc = 0x1F28D8u;
label_1f28d8:
    // 0x1f28d8: 0x8643003e  lh          $v1, 0x3E($s2)
    ctx->pc = 0x1f28d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x1f28dc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1f28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1f28e0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F28E0u;
    {
        const bool branch_taken_0x1f28e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28E0u;
        // 0x1f28e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28e0) {
            ctx->pc = 0x1F2908u;
            goto label_1f2908;
        }
    }
    ctx->pc = 0x1F28E8u;
    // 0x1f28e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f28e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f28ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28f0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F28F0u;
    SET_GPR_U32(ctx, 31, 0x1F28F8u);
    ctx->pc = 0x1F28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28F0u;
    // 0x1f28f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F28F0u, 0x1F28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28F8u;
label_1f28f8:
    // 0x1f28f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f28f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F28FCu;
    {
        const bool branch_taken_0x1f28fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28FCu;
        // 0x1f2900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28fc) {
            ctx->pc = 0x1F291Cu;
            goto label_1f291c;
        }
    }
    ctx->pc = 0x1F2904u;
    // 0x1f2904: 0x0  nop
    ctx->pc = 0x1f2904u;
    // NOP
label_1f2908:
    // 0x1f2908: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f290c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F290Cu;
    SET_GPR_U32(ctx, 31, 0x1F2914u);
    ctx->pc = 0x1F2910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F290Cu;
    // 0x1f2910: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F290Cu, 0x1F2914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2914u;
label_1f2914:
    // 0x1f2914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f291c:
    // 0x1f291c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F291Cu;
    SET_GPR_U32(ctx, 31, 0x1F2924u);
    ctx->pc = 0x1F2920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F291Cu;
    // 0x1f2920: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F291Cu, 0x1F2924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2924u;
label_1f2924:
    // 0x1f2924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2928: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1F2928u;
    {
        const bool branch_taken_0x1f2928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2928u;
        // 0x1f292c: 0xa24201bb  sb          $v0, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2928) {
            ctx->pc = 0x1F2A4Cu;
            goto label_1f2a4c;
        }
    }
    ctx->pc = 0x1F2930u;
label_1f2930:
    // 0x1f2930: 0x26a488d0  addiu       $a0, $s5, -0x7730
    ctx->pc = 0x1f2930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f2934: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2938: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f2938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f293c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F293Cu;
    {
        const bool branch_taken_0x1f293c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f293c) {
            ctx->pc = 0x1F2940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F293Cu;
            // 0x1f2940: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2944u;
            goto label_1f2944;
        }
    }
    ctx->pc = 0x1F2944u;
label_1f2944:
    // 0x1f2944: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2944u;
    {
        const bool branch_taken_0x1f2944 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2944u;
        // 0x1f2948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2944) {
            ctx->pc = 0x1F297Cu;
            goto label_1f297c;
        }
    }
    ctx->pc = 0x1F294Cu;
    // 0x1f294c: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f2950: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f2950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f2954: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2954u;
    {
        const bool branch_taken_0x1f2954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2954u;
        // 0x1f2958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2954) {
            ctx->pc = 0x1F2978u;
            goto label_1f2978;
        }
    }
    ctx->pc = 0x1F295Cu;
    // 0x1f295c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f295cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2960: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2960u;
    SET_GPR_U32(ctx, 31, 0x1F2968u);
    ctx->pc = 0x1F2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2960u;
    // 0x1f2964: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2960u, 0x1F2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2968u;
label_1f2968:
    // 0x1f2968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f296c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F296Cu;
    {
        const bool branch_taken_0x1f296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F296Cu;
        // 0x1f2970: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f296c) {
            ctx->pc = 0x1F2990u;
            goto label_1f2990;
        }
    }
    ctx->pc = 0x1F2974u;
    // 0x1f2974: 0x0  nop
    ctx->pc = 0x1f2974u;
    // NOP
label_1f2978:
    // 0x1f2978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f297c:
    // 0x1f297c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f297cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2980: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2980u;
    SET_GPR_U32(ctx, 31, 0x1F2988u);
    ctx->pc = 0x1F2984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2980u;
    // 0x1f2984: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2980u, 0x1F2988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2988u;
label_1f2988:
    // 0x1f2988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f298c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f2990:
    // 0x1f2990: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2990u;
    SET_GPR_U32(ctx, 31, 0x1F2998u);
    ctx->pc = 0x1F2994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2990u;
    // 0x1f2994: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2990u, 0x1F2998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2998u;
label_1f2998:
    // 0x1f2998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f299c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F299Cu;
    {
        const bool branch_taken_0x1f299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F299Cu;
        // 0x1f29a0: 0xa24201bb  sb          $v0, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f299c) {
            ctx->pc = 0x1F2A4Cu;
            goto label_1f2a4c;
        }
    }
    ctx->pc = 0x1F29A4u;
    // 0x1f29a4: 0x0  nop
    ctx->pc = 0x1f29a4u;
    // NOP
label_1f29a8:
    // 0x1f29a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f29a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f29acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29b0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F29B0u;
    SET_GPR_U32(ctx, 31, 0x1F29B8u);
    ctx->pc = 0x1F29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29B0u;
    // 0x1f29b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F29B0u, 0x1F29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29B8u;
label_1f29b8:
    // 0x1f29b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f29bc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1F29BCu;
    {
        const bool branch_taken_0x1f29bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29BCu;
        // 0x1f29c0: 0xa24201bb  sb          $v0, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29bc) {
            ctx->pc = 0x1F2C18u;
            goto label_1f2c18;
        }
    }
    ctx->pc = 0x1F29C4u;
    // 0x1f29c4: 0x0  nop
    ctx->pc = 0x1f29c4u;
    // NOP
label_1f29c8:
    // 0x1f29c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f29c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f29ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29d0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F29D0u;
    SET_GPR_U32(ctx, 31, 0x1F29D8u);
    ctx->pc = 0x1F29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29D0u;
    // 0x1f29d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F29D0u, 0x1F29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29D8u;
label_1f29d8:
    // 0x1f29d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f29dc: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1F29DCu;
    {
        const bool branch_taken_0x1f29dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29DCu;
        // 0x1f29e0: 0xa26201bb  sb          $v0, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29dc) {
            ctx->pc = 0x1F2C18u;
            goto label_1f2c18;
        }
    }
    ctx->pc = 0x1F29E4u;
    // 0x1f29e4: 0x0  nop
    ctx->pc = 0x1f29e4u;
    // NOP
label_1f29e8:
    // 0x1f29e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f29e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f29ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29f0: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F29F0u;
    SET_GPR_U32(ctx, 31, 0x1F29F8u);
    ctx->pc = 0x1F29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29F0u;
    // 0x1f29f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F29F0u, 0x1F29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29F8u;
label_1f29f8:
    // 0x1f29f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f29f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f29fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a00: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2A00u;
    SET_GPR_U32(ctx, 31, 0x1F2A08u);
    ctx->pc = 0x1F2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A00u;
    // 0x1f2a04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2A00u, 0x1F2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A08u;
label_1f2a08:
    // 0x1f2a08: 0xc09d642  jal         func_275908
    ctx->pc = 0x1F2A08u;
    SET_GPR_U32(ctx, 31, 0x1F2A10u);
    ctx->pc = 0x275908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275908u, 0x1F2A08u, 0x1F2A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A10u;
label_1f2a10:
    // 0x1f2a10: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F2A10u;
    {
        const bool branch_taken_0x1f2a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a10) {
            ctx->pc = 0x1F2C18u;
            goto label_1f2c18;
        }
    }
    ctx->pc = 0x1F2A18u;
label_1f2a18:
    // 0x1f2a18: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x1f2a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x1f2a1c: 0x1040ff5b  beqz        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x1F2A1Cu;
    {
        const bool branch_taken_0x1f2a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A1Cu;
        // 0x1f2a20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a1c) {
            ctx->pc = 0x1F278Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f278c;
        }
    }
    ctx->pc = 0x1F2A24u;
label_1f2a24:
    // 0x1f2a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a2c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A34u);
    ctx->pc = 0x1F2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A2Cu;
    // 0x1f2a30: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2A2Cu, 0x1F2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A34u;
label_1f2a34:
    // 0x1f2a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a3c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A44u);
    ctx->pc = 0x1F2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A3Cu;
    // 0x1f2a40: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2A3Cu, 0x1F2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A44u;
label_1f2a44:
    // 0x1f2a44: 0xa24001bb  sb          $zero, 0x1BB($s2)
    ctx->pc = 0x1f2a44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2a4c:
    // 0x1f2a4c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1F2A4Cu;
    {
        const bool branch_taken_0x1f2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A4Cu;
        // 0x1f2a50: 0xa26201bb  sb          $v0, 0x1BB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a4c) {
            ctx->pc = 0x1F2A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F2A54u;
    // 0x1f2a54: 0x0  nop
    ctx->pc = 0x1f2a54u;
    // NOP
label_1f2a58:
    // 0x1f2a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a5c: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1F2A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A64u);
    ctx->pc = 0x1F2A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A5Cu;
    // 0x1f2a60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1F2A5Cu, 0x1F2A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A64u;
label_1f2a64:
    // 0x1f2a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a68: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1F2A68u;
    SET_GPR_U32(ctx, 31, 0x1F2A70u);
    ctx->pc = 0x1F2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A68u;
    // 0x1f2a6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1F2A68u, 0x1F2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A70u;
label_1f2a70:
    // 0x1f2a70: 0x96430078  lhu         $v1, 0x78($s2)
    ctx->pc = 0x1f2a70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1f2a74: 0xc7818018  lwc1        $f1, -0x7FE8($gp)
    ctx->pc = 0x1f2a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2a78: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f2a7c: 0xc782801c  lwc1        $f2, -0x7FE4($gp)
    ctx->pc = 0x1f2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f2a80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f2a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f2a84: 0xa643007a  sh          $v1, 0x7A($s2)
    ctx->pc = 0x1f2a84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f2a90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f2a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f2a94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2a98: 0x0  nop
    ctx->pc = 0x1f2a98u;
    // NOP
    // 0x1f2a9c: 0x0  nop
    ctx->pc = 0x1f2a9cu;
    // NOP
    // 0x1f2aa0: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1f2aa0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1f2aa4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f2aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2aa8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2AA8u;
    {
        const bool branch_taken_0x1f2aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AA8u;
        // 0x1f2aac: 0xa643000e  sh          $v1, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2aa8) {
            ctx->pc = 0x1F2AC0u;
            goto label_1f2ac0;
        }
    }
    ctx->pc = 0x1F2AB0u;
    // 0x1f2ab0: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x1f2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2ab4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2AB4u;
    {
        const bool branch_taken_0x1f2ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AB4u;
        // 0x1f2ab8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ab4) {
            ctx->pc = 0x1F2AD8u;
            goto label_1f2ad8;
        }
    }
    ctx->pc = 0x1F2ABCu;
    // 0x1f2abc: 0x0  nop
    ctx->pc = 0x1f2abcu;
    // NOP
label_1f2ac0:
    // 0x1f2ac0: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1f2ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2ac4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f2ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2ac8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2AC8u;
    {
        const bool branch_taken_0x1f2ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2ac8) {
            ctx->pc = 0x1F2ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2AC8u;
            // 0x1f2acc: 0xe6420020  swc1        $f2, 0x20($s2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2ADCu;
            goto label_1f2adc;
        }
    }
    ctx->pc = 0x1F2AD0u;
    // 0x1f2ad0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1f2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2ad4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f2ad4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f2ad8:
    // 0x1f2ad8: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x1f2ad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1f2adc:
    // 0x1f2adc: 0xe6420074  swc1        $f2, 0x74($s2)
    ctx->pc = 0x1f2adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x1f2ae0: 0xc781802c  lwc1        $f1, -0x7FD4($gp)
    ctx->pc = 0x1f2ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2ae4: 0x96630078  lhu         $v1, 0x78($s3)
    ctx->pc = 0x1f2ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1f2ae8: 0xc7828030  lwc1        $f2, -0x7FD0($gp)
    ctx->pc = 0x1f2ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f2aec: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1f2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f2af0: 0xa663007a  sh          $v1, 0x7A($s3)
    ctx->pc = 0x1f2af0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2af4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f2af4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f2af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f2b00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f2b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f2b04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2b08: 0x0  nop
    ctx->pc = 0x1f2b08u;
    // NOP
    // 0x1f2b0c: 0x0  nop
    ctx->pc = 0x1f2b0cu;
    // NOP
    // 0x1f2b10: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1f2b10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1f2b14: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f2b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2b18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2B18u;
    {
        const bool branch_taken_0x1f2b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B18u;
        // 0x1f2b1c: 0xa663000e  sh          $v1, 0xE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b18) {
            ctx->pc = 0x1F2B30u;
            goto label_1f2b30;
        }
    }
    ctx->pc = 0x1F2B20u;
    // 0x1f2b20: 0xc7808034  lwc1        $f0, -0x7FCC($gp)
    ctx->pc = 0x1f2b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2B24u;
    {
        const bool branch_taken_0x1f2b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B24u;
        // 0x1f2b28: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b24) {
            ctx->pc = 0x1F2B48u;
            goto label_1f2b48;
        }
    }
    ctx->pc = 0x1F2B2Cu;
    // 0x1f2b2c: 0x0  nop
    ctx->pc = 0x1f2b2cu;
    // NOP
label_1f2b30:
    // 0x1f2b30: 0xc7808038  lwc1        $f0, -0x7FC8($gp)
    ctx->pc = 0x1f2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2b34: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f2b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2b38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B38u;
    {
        const bool branch_taken_0x1f2b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2b38) {
            ctx->pc = 0x1F2B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2B38u;
            // 0x1f2b3c: 0xe6620020  swc1        $f2, 0x20($s3) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2B40u;
    // 0x1f2b40: 0xc780803c  lwc1        $f0, -0x7FC4($gp)
    ctx->pc = 0x1f2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2b44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f2b44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f2b48:
    // 0x1f2b48: 0xe6620020  swc1        $f2, 0x20($s3)
    ctx->pc = 0x1f2b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1f2b4c:
    // 0x1f2b4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b50: 0xe6620074  swc1        $f2, 0x74($s3)
    ctx->pc = 0x1f2b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x1f2b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b58: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2B58u;
    SET_GPR_U32(ctx, 31, 0x1F2B60u);
    ctx->pc = 0x1F2B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B58u;
    // 0x1f2b5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2B58u, 0x1F2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B60u;
label_1f2b60:
    // 0x1f2b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b68: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x1F2B68u;
    SET_GPR_U32(ctx, 31, 0x1F2B70u);
    ctx->pc = 0x1F2B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B68u;
    // 0x1f2b6c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x1F2B68u, 0x1F2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B70u;
label_1f2b70:
    // 0x1f2b70: 0xc09d642  jal         func_275908
    ctx->pc = 0x1F2B70u;
    SET_GPR_U32(ctx, 31, 0x1F2B78u);
    ctx->pc = 0x275908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275908u, 0x1F2B70u, 0x1F2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B78u;
label_1f2b78:
    // 0x1f2b78: 0xc07e594  jal         func_1F9650
    ctx->pc = 0x1F2B78u;
    SET_GPR_U32(ctx, 31, 0x1F2B80u);
    ctx->pc = 0x1F9650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9650u, 0x1F2B78u, 0x1F2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B80u;
label_1f2b80:
    // 0x1f2b80: 0x26a688d0  addiu       $a2, $s5, -0x7730
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f2b84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f2b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2b90: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f2b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f2b94: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2B94u;
    {
        const bool branch_taken_0x1f2b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B94u;
        // 0x1f2b98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b94) {
            ctx->pc = 0x1F2BA0u;
            goto label_1f2ba0;
        }
    }
    ctx->pc = 0x1F2B9Cu;
    // 0x1f2b9c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1f2b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f2ba0:
    // 0x1f2ba0: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x1f2ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x1f2ba4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1f2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1f2ba8: 0xc07e594  jal         func_1F9650
    ctx->pc = 0x1F2BA8u;
    SET_GPR_U32(ctx, 31, 0x1F2BB0u);
    ctx->pc = 0x1F2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BA8u;
    // 0x1f2bac: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9650u, 0x1F2BA8u, 0x1F2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BB0u;
label_1f2bb0:
    // 0x1f2bb0: 0x26a688d0  addiu       $a2, $s5, -0x7730
    ctx->pc = 0x1f2bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f2bb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f2bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2bc0: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f2bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f2bc4: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2BC4u;
    {
        const bool branch_taken_0x1f2bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BC4u;
        // 0x1f2bc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2bc4) {
            ctx->pc = 0x1F2BD0u;
            goto label_1f2bd0;
        }
    }
    ctx->pc = 0x1F2BCCu;
    // 0x1f2bcc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1f2bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f2bd0:
    // 0x1f2bd0: 0x94a2007a  lhu         $v0, 0x7A($a1)
    ctx->pc = 0x1f2bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 122)));
    // 0x1f2bd4: 0x26a488d0  addiu       $a0, $s5, -0x7730
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f2bd8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1f2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1f2bdc: 0xa4a2007a  sh          $v0, 0x7A($a1)
    ctx->pc = 0x1f2bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f2be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2be4: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1f2be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f2be8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2BE8u;
    {
        const bool branch_taken_0x1f2be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BE8u;
        // 0x1f2bec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2be8) {
            ctx->pc = 0x1F2BF4u;
            goto label_1f2bf4;
        }
    }
    ctx->pc = 0x1F2BF0u;
    // 0x1f2bf0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1f2bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f2bf4:
    // 0x1f2bf4: 0x26a688d0  addiu       $a2, $s5, -0x7730
    ctx->pc = 0x1f2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f2bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2bfc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2c00: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x1f2c00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f2c04: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2C04u;
    {
        const bool branch_taken_0x1f2c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2c04) {
            ctx->pc = 0x1F2C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2C04u;
            // 0x1f2c08: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2C0Cu;
            goto label_1f2c0c;
        }
    }
    ctx->pc = 0x1F2C0Cu;
label_1f2c0c:
    // 0x1f2c0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c10: 0xc07e5b4  jal         func_1F96D0
    ctx->pc = 0x1F2C10u;
    SET_GPR_U32(ctx, 31, 0x1F2C18u);
    ctx->pc = 0x1F2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C10u;
    // 0x1f2c14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F96D0u, 0x1F2C10u, 0x1F2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C18u;
label_1f2c18:
    // 0x1f2c18: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x1F2C18u;
    SET_GPR_U32(ctx, 31, 0x1F2C20u);
    ctx->pc = 0x1F2C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C18u;
    // 0x1f2c1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x1F2C18u, 0x1F2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C20u;
label_1f2c20:
    // 0x1f2c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c24: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2C24u;
    {
        const bool branch_taken_0x1f2c24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C24u;
        // 0x1f2c28: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c24) {
            ctx->pc = 0x1F2C58u;
            goto label_1f2c58;
        }
    }
    ctx->pc = 0x1F2C2Cu;
    // 0x1f2c2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F2C2Cu;
    {
        const bool branch_taken_0x1f2c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c2c) {
            ctx->pc = 0x1F2C88u;
            goto label_1f2c88;
        }
    }
    ctx->pc = 0x1F2C34u;
    // 0x1f2c34: 0x16800014  bnez        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F2C34u;
    {
        const bool branch_taken_0x1f2c34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C34u;
        // 0x1f2c38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c34) {
            ctx->pc = 0x1F2C88u;
            goto label_1f2c88;
        }
    }
    ctx->pc = 0x1F2C3Cu;
    // 0x1f2c3c: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F2C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C44u);
    ctx->pc = 0x1F2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C3Cu;
    // 0x1f2c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F2C3Cu, 0x1F2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C44u;
label_1f2c44:
    // 0x1f2c44: 0xc092aea  jal         func_24ABA8
    ctx->pc = 0x1F2C44u;
    SET_GPR_U32(ctx, 31, 0x1F2C4Cu);
    ctx->pc = 0x1F2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C44u;
    // 0x1f2c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ABA8u, 0x1F2C44u, 0x1F2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C4Cu;
label_1f2c4c:
    // 0x1f2c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2C4Cu;
    {
        const bool branch_taken_0x1f2c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C4Cu;
        // 0x1f2c50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c4c) {
            ctx->pc = 0x1F2C70u;
            goto label_1f2c70;
        }
    }
    ctx->pc = 0x1F2C54u;
    // 0x1f2c54: 0x0  nop
    ctx->pc = 0x1f2c54u;
    // NOP
label_1f2c58:
    // 0x1f2c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c5c: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F2C5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C64u);
    ctx->pc = 0x1F2C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C5Cu;
    // 0x1f2c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F2C5Cu, 0x1F2C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C64u;
label_1f2c64:
    // 0x1f2c64: 0xc092aea  jal         func_24ABA8
    ctx->pc = 0x1F2C64u;
    SET_GPR_U32(ctx, 31, 0x1F2C6Cu);
    ctx->pc = 0x1F2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C64u;
    // 0x1f2c68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ABA8u, 0x1F2C64u, 0x1F2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C6Cu;
label_1f2c6c:
    // 0x1f2c6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2c70:
    // 0x1f2c70: 0xc0af082  jal         func_2BC208
    ctx->pc = 0x1F2C70u;
    SET_GPR_U32(ctx, 31, 0x1F2C78u);
    ctx->pc = 0x1F2C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C70u;
    // 0x1f2c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC208u, 0x1F2C70u, 0x1F2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C78u;
label_1f2c78:
    // 0x1f2c78: 0xc08c24e  jal         func_230938
    ctx->pc = 0x1F2C78u;
    SET_GPR_U32(ctx, 31, 0x1F2C80u);
    ctx->pc = 0x1F2C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C78u;
    // 0x1f2c7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230938u, 0x1F2C78u, 0x1F2C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C80u;
label_1f2c80:
    // 0x1f2c80: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1F2C80u;
    {
        const bool branch_taken_0x1f2c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C80u;
        // 0x1f2c84: 0x26e28858  addiu       $v0, $s7, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c80) {
            ctx->pc = 0x1F2E5Cu;
            goto label_1f2e5c;
        }
    }
    ctx->pc = 0x1F2C88u;
label_1f2c88:
    // 0x1f2c88: 0xc07d1e0  jal         func_1F4780
    ctx->pc = 0x1F2C88u;
    SET_GPR_U32(ctx, 31, 0x1F2C90u);
    ctx->pc = 0x1F4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4780u, 0x1F2C88u, 0x1F2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C90u;
label_1f2c90:
    // 0x1f2c90: 0xc07d874  jal         func_1F61D0
    ctx->pc = 0x1F2C90u;
    SET_GPR_U32(ctx, 31, 0x1F2C98u);
    ctx->pc = 0x1F61D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61D0u, 0x1F2C90u, 0x1F2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C98u;
label_1f2c98:
    // 0x1f2c98: 0xc07d872  jal         func_1F61C8
    ctx->pc = 0x1F2C98u;
    SET_GPR_U32(ctx, 31, 0x1F2CA0u);
    ctx->pc = 0x1F2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C98u;
    // 0x1f2c9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F61C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61C8u, 0x1F2C98u, 0x1F2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CA0u;
label_1f2ca0:
    // 0x1f2ca0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2ca4: 0x56820008  bnel        $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2CA4u;
    {
        const bool branch_taken_0x1f2ca4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2ca4) {
            ctx->pc = 0x1F2CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2CA4u;
            // 0x1f2ca8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2CC8u;
            goto label_1f2cc8;
        }
    }
    ctx->pc = 0x1F2CACu;
    // 0x1f2cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cb4: 0xc07e16a  jal         func_1F85A8
    ctx->pc = 0x1F2CB4u;
    SET_GPR_U32(ctx, 31, 0x1F2CBCu);
    ctx->pc = 0x1F2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CB4u;
    // 0x1f2cb8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85A8u, 0x1F2CB4u, 0x1F2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CBCu;
label_1f2cbc:
    // 0x1f2cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2CBCu;
    {
        const bool branch_taken_0x1f2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2cbc) {
            ctx->pc = 0x1F2CDCu;
            goto label_1f2cdc;
        }
    }
    ctx->pc = 0x1F2CC4u;
    // 0x1f2cc4: 0x0  nop
    ctx->pc = 0x1f2cc4u;
    // NOP
label_1f2cc8:
    // 0x1f2cc8: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2CC8u;
    {
        const bool branch_taken_0x1f2cc8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CC8u;
        // 0x1f2ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cc8) {
            ctx->pc = 0x1F2CDCu;
            goto label_1f2cdc;
        }
    }
    ctx->pc = 0x1F2CD0u;
    // 0x1f2cd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cd4: 0xc07e16a  jal         func_1F85A8
    ctx->pc = 0x1F2CD4u;
    SET_GPR_U32(ctx, 31, 0x1F2CDCu);
    ctx->pc = 0x1F2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CD4u;
    // 0x1f2cd8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85A8u, 0x1F2CD4u, 0x1F2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CDCu;
label_1f2cdc:
    // 0x1f2cdc: 0xc07dfa8  jal         func_1F7EA0
    ctx->pc = 0x1F2CDCu;
    SET_GPR_U32(ctx, 31, 0x1F2CE4u);
    ctx->pc = 0x1F2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CDCu;
    // 0x1f2ce0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EA0u, 0x1F2CDCu, 0x1F2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CE4u;
label_1f2ce4:
    // 0x1f2ce4: 0xc0b12f2  jal         func_2C4BC8
    ctx->pc = 0x1F2CE4u;
    SET_GPR_U32(ctx, 31, 0x1F2CECu);
    ctx->pc = 0x2C4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4BC8u, 0x1F2CE4u, 0x1F2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CECu;
label_1f2cec:
    // 0x1f2cec: 0x8eb088d0  lw          $s0, -0x7730($s5)
    ctx->pc = 0x1f2cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936784)));
label_1f2cf0:
    // 0x1f2cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cf4: 0xc0af082  jal         func_2BC208
    ctx->pc = 0x1F2CF4u;
    SET_GPR_U32(ctx, 31, 0x1F2CFCu);
    ctx->pc = 0x1F2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CF4u;
    // 0x1f2cf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC208u, 0x1F2CF4u, 0x1F2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CFCu;
label_1f2cfc:
    // 0x1f2cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2d04: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x1F2D04u;
    SET_GPR_U32(ctx, 31, 0x1F2D0Cu);
    ctx->pc = 0x1F2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D04u;
    // 0x1f2d08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AA8u, 0x1F2D04u, 0x1F2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D0Cu;
label_1f2d0c:
    // 0x1f2d0c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f2d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2d10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F2D10u;
    {
        const bool branch_taken_0x1f2d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D10u;
        // 0x1f2d14: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d10) {
            ctx->pc = 0x1F2CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2cf0;
        }
    }
    ctx->pc = 0x1F2D18u;
    // 0x1f2d18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f2d1c: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x1f2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f2d20: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f2d24: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f2d28: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2D28u;
    {
        const bool branch_taken_0x1f2d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D28u;
        // 0x1f2d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d28) {
            ctx->pc = 0x1F2D3Cu;
            goto label_1f2d3c;
        }
    }
    ctx->pc = 0x1F2D30u;
    // 0x1f2d30: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f2d34: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2D34u;
    {
        const bool branch_taken_0x1f2d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2d34) {
            ctx->pc = 0x1F2D40u;
            goto label_1f2d40;
        }
    }
    ctx->pc = 0x1F2D3Cu;
label_1f2d3c:
    // 0x1f2d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2d40:
    // 0x1f2d40: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2D40u;
    {
        const bool branch_taken_0x1f2d40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d40) {
            ctx->pc = 0x1F2D58u;
            goto label_1f2d58;
        }
    }
    ctx->pc = 0x1F2D48u;
    // 0x1f2d48: 0xc07c518  jal         func_1F1460
    ctx->pc = 0x1F2D48u;
    SET_GPR_U32(ctx, 31, 0x1F2D50u);
    ctx->pc = 0x1F2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D48u;
    // 0x1f2d4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1460u, 0x1F2D48u, 0x1F2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D50u;
label_1f2d50:
    // 0x1f2d50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2D50u;
    {
        const bool branch_taken_0x1f2d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D50u;
        // 0x1f2d54: 0x2682ffed  addiu       $v0, $s4, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d50) {
            ctx->pc = 0x1F2D64u;
            goto label_1f2d64;
        }
    }
    ctx->pc = 0x1F2D58u;
label_1f2d58:
    // 0x1f2d58: 0xc07c582  jal         func_1F1608
    ctx->pc = 0x1F2D58u;
    SET_GPR_U32(ctx, 31, 0x1F2D60u);
    ctx->pc = 0x1F2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D58u;
    // 0x1f2d5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1608u, 0x1F2D58u, 0x1F2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D60u;
label_1f2d60:
    // 0x1f2d60: 0x2682ffed  addiu       $v0, $s4, -0x13
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967277));
label_1f2d64:
    // 0x1f2d64: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f2d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2d68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2D68u;
    {
        const bool branch_taken_0x1f2d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D68u;
        // 0x1f2d6c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d68) {
            ctx->pc = 0x1F2D78u;
            goto label_1f2d78;
        }
    }
    ctx->pc = 0x1F2D70u;
    // 0x1f2d70: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2D70u;
    {
        const bool branch_taken_0x1f2d70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2d70) {
            ctx->pc = 0x1F2D88u;
            goto label_1f2d88;
        }
    }
    ctx->pc = 0x1F2D78u;
label_1f2d78:
    // 0x1f2d78: 0xc08c24e  jal         func_230938
    ctx->pc = 0x1F2D78u;
    SET_GPR_U32(ctx, 31, 0x1F2D80u);
    ctx->pc = 0x1F2D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D78u;
    // 0x1f2d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230938u, 0x1F2D78u, 0x1F2D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D80u;
label_1f2d80:
    // 0x1f2d80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2D80u;
    {
        const bool branch_taken_0x1f2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D80u;
        // 0x1f2d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d80) {
            ctx->pc = 0x1F2D94u;
            goto label_1f2d94;
        }
    }
    ctx->pc = 0x1F2D88u;
label_1f2d88:
    // 0x1f2d88: 0xc08c24e  jal         func_230938
    ctx->pc = 0x1F2D88u;
    SET_GPR_U32(ctx, 31, 0x1F2D90u);
    ctx->pc = 0x1F2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D88u;
    // 0x1f2d8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230938u, 0x1F2D88u, 0x1F2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D90u;
label_1f2d90:
    // 0x1f2d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d94:
    // 0x1f2d94: 0xc08c31e  jal         func_230C78
    ctx->pc = 0x1F2D94u;
    SET_GPR_U32(ctx, 31, 0x1F2D9Cu);
    ctx->pc = 0x1F2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D94u;
    // 0x1f2d98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C78u, 0x1F2D94u, 0x1F2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D9Cu;
label_1f2d9c:
    // 0x1f2d9c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f2d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f2da0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2da4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2da8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f2da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2db0: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x1f2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x1f2db4: 0xc08dd60  jal         func_237580
    ctx->pc = 0x1F2DB4u;
    SET_GPR_U32(ctx, 31, 0x1F2DBCu);
    ctx->pc = 0x1F2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DB4u;
    // 0x1f2db8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x1F2DB4u, 0x1F2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DBCu;
label_1f2dbc:
    // 0x1f2dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dc0: 0xc08c31e  jal         func_230C78
    ctx->pc = 0x1F2DC0u;
    SET_GPR_U32(ctx, 31, 0x1F2DC8u);
    ctx->pc = 0x1F2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DC0u;
    // 0x1f2dc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C78u, 0x1F2DC0u, 0x1F2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DC8u;
label_1f2dc8:
    // 0x1f2dc8: 0xc08c3ec  jal         func_230FB0
    ctx->pc = 0x1F2DC8u;
    SET_GPR_U32(ctx, 31, 0x1F2DD0u);
    ctx->pc = 0x230FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230FB0u, 0x1F2DC8u, 0x1F2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DD0u;
label_1f2dd0:
    // 0x1f2dd0: 0xc09d726  jal         func_275C98
    ctx->pc = 0x1F2DD0u;
    SET_GPR_U32(ctx, 31, 0x1F2DD8u);
    ctx->pc = 0x275C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C98u, 0x1F2DD0u, 0x1F2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DD8u;
label_1f2dd8:
    // 0x1f2dd8: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x1F2DD8u;
    SET_GPR_U32(ctx, 31, 0x1F2DE0u);
    ctx->pc = 0x1F2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DD8u;
    // 0x1f2ddc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x1F2DD8u, 0x1F2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DE0u;
label_1f2de0:
    // 0x1f2de0: 0xc0b3d38  jal         func_2CF4E0
    ctx->pc = 0x1F2DE0u;
    SET_GPR_U32(ctx, 31, 0x1F2DE8u);
    ctx->pc = 0x2CF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4E0u, 0x1F2DE0u, 0x1F2DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DE8u;
label_1f2de8:
    // 0x1f2de8: 0xc09210c  jal         func_248430
    ctx->pc = 0x1F2DE8u;
    SET_GPR_U32(ctx, 31, 0x1F2DF0u);
    ctx->pc = 0x248430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248430u, 0x1F2DE8u, 0x1F2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DF0u;
label_1f2df0:
    // 0x1f2df0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f2df4: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2DF4u;
    {
        const bool branch_taken_0x1f2df4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DF4u;
        // 0x1f2df8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2df4) {
            ctx->pc = 0x1F2E24u;
            goto label_1f2e24;
        }
    }
    ctx->pc = 0x1F2DFCu;
    // 0x1f2dfc: 0x12820009  beq         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2DFCu;
    {
        const bool branch_taken_0x1f2dfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2dfc) {
            ctx->pc = 0x1F2E24u;
            goto label_1f2e24;
        }
    }
    ctx->pc = 0x1F2E04u;
    // 0x1f2e04: 0xc092aea  jal         func_24ABA8
    ctx->pc = 0x1F2E04u;
    SET_GPR_U32(ctx, 31, 0x1F2E0Cu);
    ctx->pc = 0x1F2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E04u;
    // 0x1f2e08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ABA8u, 0x1F2E04u, 0x1F2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E0Cu;
label_1f2e0c:
    // 0x1f2e0c: 0xc092aea  jal         func_24ABA8
    ctx->pc = 0x1F2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E14u);
    ctx->pc = 0x1F2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E0Cu;
    // 0x1f2e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ABA8u, 0x1F2E0Cu, 0x1F2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E14u;
label_1f2e14:
    // 0x1f2e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e18: 0x8f86973c  lw          $a2, -0x68C4($gp)
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x1f2e1c: 0xc092b46  jal         func_24AD18
    ctx->pc = 0x1F2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E24u);
    ctx->pc = 0x1F2E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E1Cu;
    // 0x1f2e20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AD18u, 0x1F2E1Cu, 0x1F2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E24u;
label_1f2e24:
    // 0x1f2e24: 0xc0994e8  jal         func_2653A0
    ctx->pc = 0x1F2E24u;
    SET_GPR_U32(ctx, 31, 0x1F2E2Cu);
    ctx->pc = 0x2653A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2653A0u, 0x1F2E24u, 0x1F2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E2Cu;
label_1f2e2c:
    // 0x1f2e2c: 0xc09d8d6  jal         func_276358
    ctx->pc = 0x1F2E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E34u);
    ctx->pc = 0x276358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276358u, 0x1F2E2Cu, 0x1F2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E34u;
label_1f2e34:
    // 0x1f2e34: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f2e38: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2E38u;
    {
        const bool branch_taken_0x1f2e38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E38u;
        // 0x1f2e3c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e38) {
            ctx->pc = 0x1F2E50u;
            goto label_1f2e50;
        }
    }
    ctx->pc = 0x1F2E40u;
    // 0x1f2e40: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2E40u;
    {
        const bool branch_taken_0x1f2e40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E40u;
        // 0x1f2e44: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e40) {
            ctx->pc = 0x1F2E50u;
            goto label_1f2e50;
        }
    }
    ctx->pc = 0x1F2E48u;
    // 0x1f2e48: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2E48u;
    {
        const bool branch_taken_0x1f2e48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E48u;
        // 0x1f2e4c: 0x26e28858  addiu       $v0, $s7, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e48) {
            ctx->pc = 0x1F2E5Cu;
            goto label_1f2e5c;
        }
    }
    ctx->pc = 0x1F2E50u;
label_1f2e50:
    // 0x1f2e50: 0xc0a04a6  jal         func_281298
    ctx->pc = 0x1F2E50u;
    SET_GPR_U32(ctx, 31, 0x1F2E58u);
    ctx->pc = 0x1F2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E50u;
    // 0x1f2e54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281298u, 0x1F2E50u, 0x1F2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E58u;
label_1f2e58:
    // 0x1f2e58: 0x26e28858  addiu       $v0, $s7, -0x77A8
    ctx->pc = 0x1f2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
label_1f2e5c:
    // 0x1f2e5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f2e60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f2e64: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2E64u;
    {
        const bool branch_taken_0x1f2e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f2e64) {
            ctx->pc = 0x1F2EB4u;
            goto label_1f2eb4;
        }
    }
    ctx->pc = 0x1F2E6Cu;
    // 0x1f2e6c: 0x8eb088d0  lw          $s0, -0x7730($s5)
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936784)));
    // 0x1f2e70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e74: 0x0  nop
    ctx->pc = 0x1f2e74u;
    // NOP
label_1f2e78:
    // 0x1f2e78: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1f2e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2e80: 0xc0c0048  jal         func_300120
    ctx->pc = 0x1F2E80u;
    SET_GPR_U32(ctx, 31, 0x1F2E88u);
    ctx->pc = 0x1F2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E80u;
    // 0x1f2e84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300120u, 0x1F2E80u, 0x1F2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E88u;
label_1f2e88:
    // 0x1f2e88: 0xc0967ee  jal         func_259FB8
    ctx->pc = 0x1F2E88u;
    SET_GPR_U32(ctx, 31, 0x1F2E90u);
    ctx->pc = 0x1F2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E88u;
    // 0x1f2e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FB8u, 0x1F2E88u, 0x1F2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E90u;
label_1f2e90:
    // 0x1f2e90: 0xc096800  jal         func_25A000
    ctx->pc = 0x1F2E90u;
    SET_GPR_U32(ctx, 31, 0x1F2E98u);
    ctx->pc = 0x1F2E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E90u;
    // 0x1f2e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A000u, 0x1F2E90u, 0x1F2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E98u;
label_1f2e98:
    // 0x1f2e98: 0xc0960ce  jal         func_258338
    ctx->pc = 0x1F2E98u;
    SET_GPR_U32(ctx, 31, 0x1F2EA0u);
    ctx->pc = 0x1F2E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E98u;
    // 0x1f2e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258338u, 0x1F2E98u, 0x1F2EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EA0u;
label_1f2ea0:
    // 0x1f2ea0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f2ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2ea4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F2EA4u;
    {
        const bool branch_taken_0x1f2ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EA4u;
        // 0x1f2ea8: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ea4) {
            ctx->pc = 0x1F2E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2e78;
        }
    }
    ctx->pc = 0x1F2EACu;
    // 0x1f2eac: 0xc0b2a7a  jal         func_2CA9E8
    ctx->pc = 0x1F2EACu;
    SET_GPR_U32(ctx, 31, 0x1F2EB4u);
    ctx->pc = 0x2CA9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9E8u, 0x1F2EACu, 0x1F2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EB4u;
label_1f2eb4:
    // 0x1f2eb4: 0xc084364  jal         func_210D90
    ctx->pc = 0x1F2EB4u;
    SET_GPR_U32(ctx, 31, 0x1F2EBCu);
    ctx->pc = 0x210D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210D90u, 0x1F2EB4u, 0x1F2EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EBCu;
label_1f2ebc:
    // 0x1f2ebc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1f2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1f2ec0: 0x56820006  bnel        $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2EC0u;
    {
        const bool branch_taken_0x1f2ec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2ec0) {
            ctx->pc = 0x1F2EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2EC0u;
            // 0x1f2ec4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2EDCu;
            goto label_1f2edc;
        }
    }
    ctx->pc = 0x1F2EC8u;
    // 0x1f2ec8: 0xc086f22  jal         func_21BC88
    ctx->pc = 0x1F2EC8u;
    SET_GPR_U32(ctx, 31, 0x1F2ED0u);
    ctx->pc = 0x21BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BC88u, 0x1F2EC8u, 0x1F2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ED0u;
label_1f2ed0:
    // 0x1f2ed0: 0xc086f28  jal         func_21BCA0
    ctx->pc = 0x1F2ED0u;
    SET_GPR_U32(ctx, 31, 0x1F2ED8u);
    ctx->pc = 0x21BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BCA0u, 0x1F2ED0u, 0x1F2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ED8u;
label_1f2ed8:
    // 0x1f2ed8: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1f2edc:
    // 0x1f2edc: 0x56820004  bnel        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2EDCu;
    {
        const bool branch_taken_0x1f2edc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2edc) {
            ctx->pc = 0x1F2EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2EDCu;
            // 0x1f2ee0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2EF0u;
            goto label_1f2ef0;
        }
    }
    ctx->pc = 0x1F2EE4u;
    // 0x1f2ee4: 0xc08f050  jal         func_23C140
    ctx->pc = 0x1F2EE4u;
    SET_GPR_U32(ctx, 31, 0x1F2EECu);
    ctx->pc = 0x23C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C140u, 0x1F2EE4u, 0x1F2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EECu;
label_1f2eec:
    // 0x1f2eec: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f2ef0:
    // 0x1f2ef0: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2EF0u;
    {
        const bool branch_taken_0x1f2ef0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2ef0) {
            ctx->pc = 0x1F2F00u;
            goto label_1f2f00;
        }
    }
    ctx->pc = 0x1F2EF8u;
    // 0x1f2ef8: 0xc07ec76  jal         func_1FB1D8
    ctx->pc = 0x1F2EF8u;
    SET_GPR_U32(ctx, 31, 0x1F2F00u);
    ctx->pc = 0x1FB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB1D8u, 0x1F2EF8u, 0x1F2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F00u;
label_1f2f00:
    // 0x1f2f00: 0xc07ed02  jal         func_1FB408
    ctx->pc = 0x1F2F00u;
    SET_GPR_U32(ctx, 31, 0x1F2F08u);
    ctx->pc = 0x1FB408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB408u, 0x1F2F00u, 0x1F2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F08u;
label_1f2f08:
    // 0x1f2f08: 0xc0b6fa2  jal         func_2DBE88
    ctx->pc = 0x1F2F08u;
    SET_GPR_U32(ctx, 31, 0x1F2F10u);
    ctx->pc = 0x1F2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F08u;
    // 0x1f2f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE88u, 0x1F2F08u, 0x1F2F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F10u;
label_1f2f10:
    // 0x1f2f10: 0xc0b6fa2  jal         func_2DBE88
    ctx->pc = 0x1F2F10u;
    SET_GPR_U32(ctx, 31, 0x1F2F18u);
    ctx->pc = 0x1F2F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F10u;
    // 0x1f2f14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE88u, 0x1F2F10u, 0x1F2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F18u;
label_1f2f18:
    // 0x1f2f18: 0xc0b6b5a  jal         func_2DAD68
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x2DAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD68u, 0x1F2F18u, 0x1F2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0xc08f022  jal         func_23C088
    ctx->pc = 0x1F2F20u;
    SET_GPR_U32(ctx, 31, 0x1F2F28u);
    ctx->pc = 0x1F2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F20u;
    // 0x1f2f24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x1F2F20u, 0x1F2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F28u;
label_1f2f28:
    // 0x1f2f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f2c: 0xc0af458  jal         func_2BD160
    ctx->pc = 0x1F2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F34u);
    ctx->pc = 0x1F2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F2Cu;
    // 0x1f2f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD160u, 0x1F2F2Cu, 0x1F2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F34u;
label_1f2f34:
    // 0x1f2f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f38: 0xc0af458  jal         func_2BD160
    ctx->pc = 0x1F2F38u;
    SET_GPR_U32(ctx, 31, 0x1F2F40u);
    ctx->pc = 0x1F2F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F38u;
    // 0x1f2f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD160u, 0x1F2F38u, 0x1F2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F40u;
label_1f2f40:
    // 0x1f2f40: 0x2682ffe4  addiu       $v0, $s4, -0x1C
    ctx->pc = 0x1f2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967268));
    // 0x1f2f44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f2f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2f48: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2F48u;
    {
        const bool branch_taken_0x1f2f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f48) {
            ctx->pc = 0x1F2F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2F48u;
            // 0x1f2f4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2F7Cu;
            goto label_1f2f7c;
        }
    }
    ctx->pc = 0x1F2F50u;
    // 0x1f2f50: 0xc08f022  jal         func_23C088
    ctx->pc = 0x1F2F50u;
    SET_GPR_U32(ctx, 31, 0x1F2F58u);
    ctx->pc = 0x1F2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F50u;
    // 0x1f2f54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x1F2F50u, 0x1F2F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F58u;
label_1f2f58:
    // 0x1f2f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f5c: 0xc0af458  jal         func_2BD160
    ctx->pc = 0x1F2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F64u);
    ctx->pc = 0x1F2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F5Cu;
    // 0x1f2f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD160u, 0x1F2F5Cu, 0x1F2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F64u;
label_1f2f64:
    // 0x1f2f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f68: 0xc0af458  jal         func_2BD160
    ctx->pc = 0x1F2F68u;
    SET_GPR_U32(ctx, 31, 0x1F2F70u);
    ctx->pc = 0x1F2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F68u;
    // 0x1f2f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD160u, 0x1F2F68u, 0x1F2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F70u;
label_1f2f70:
    // 0x1f2f70: 0xc0b2a8c  jal         func_2CAA30
    ctx->pc = 0x1F2F70u;
    SET_GPR_U32(ctx, 31, 0x1F2F78u);
    ctx->pc = 0x2CAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA30u, 0x1F2F70u, 0x1F2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F78u;
label_1f2f78:
    // 0x1f2f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2f7c:
    // 0x1f2f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f2f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2f80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2f84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f2f84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2f88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f2f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2f8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f2f8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f2f90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2f94: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f2f94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f2f98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F9Cu;
        // 0x1f2fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2FA4u;
    // 0x1f2fa4: 0x0  nop
    ctx->pc = 0x1f2fa4u;
    // NOP
    ctx->pc = 0x1f2fa8u;
}
