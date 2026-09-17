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

// Function: sub_003211F0
// Address: 0x3211f0 - 0x3213c8
void sub_003211F0_0x3211f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003211F0_0x3211f0");
#endif

    switch (ctx->pc) {
        case 0x321240u: goto label_321240;
        case 0x321254u: goto label_321254;
        case 0x32125cu: goto label_32125c;
        case 0x321268u: goto label_321268;
        case 0x321278u: goto label_321278;
        case 0x321288u: goto label_321288;
        case 0x321294u: goto label_321294;
        case 0x3212a4u: goto label_3212a4;
        case 0x3212b0u: goto label_3212b0;
        case 0x3212bcu: goto label_3212bc;
        case 0x3212ccu: goto label_3212cc;
        case 0x3212d8u: goto label_3212d8;
        case 0x3212e4u: goto label_3212e4;
        case 0x3212f4u: goto label_3212f4;
        case 0x321300u: goto label_321300;
        case 0x32130cu: goto label_32130c;
        case 0x32131cu: goto label_32131c;
        case 0x321324u: goto label_321324;
        case 0x321330u: goto label_321330;
        case 0x32133cu: goto label_32133c;
        case 0x321368u: goto label_321368;
        case 0x321380u: goto label_321380;
        case 0x321388u: goto label_321388;
        case 0x321390u: goto label_321390;
        case 0x321398u: goto label_321398;
        case 0x3213a0u: goto label_3213a0;
        case 0x3213a8u: goto label_3213a8;
        case 0x3213b4u: goto label_3213b4;
        default: break;
    }

    ctx->pc = 0x3211f0u;

    // 0x3211f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3211f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3211f4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3211f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3211f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3211f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3211fc: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3211fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x321200: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x321200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321204: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x321204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x321208: 0x26520380  addiu       $s2, $s2, 0x380
    ctx->pc = 0x321208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
    // 0x32120c: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x32120cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x321210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x321214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x321218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32121c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321224: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x321224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321228: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x321228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32122c: 0x26340a00  addiu       $s4, $s1, 0xA00
    ctx->pc = 0x32122cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
    // 0x321230: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x321230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x321234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321238: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x321238u;
    SET_GPR_U32(ctx, 31, 0x321240u);
    ctx->pc = 0x32123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321238u;
    // 0x32123c: 0x26351280  addiu       $s5, $s1, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x321238u, 0x321240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321240u;
label_321240:
    // 0x321240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321244: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x321244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321248: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x321248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x32124c: 0xc0ceaa8  jal         func_33AAA0
    ctx->pc = 0x32124Cu;
    SET_GPR_U32(ctx, 31, 0x321254u);
    ctx->pc = 0x321250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32124Cu;
    // 0x321250: 0x263309c0  addiu       $s3, $s1, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AAA0u, 0x32124Cu, 0x321254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321254u;
label_321254:
    // 0x321254: 0xc0ce780  jal         func_339E00
    ctx->pc = 0x321254u;
    SET_GPR_U32(ctx, 31, 0x32125Cu);
    ctx->pc = 0x321258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321254u;
    // 0x321258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E00u, 0x321254u, 0x32125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32125Cu;
label_32125c:
    // 0x32125c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321260: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x321260u;
    SET_GPR_U32(ctx, 31, 0x321268u);
    ctx->pc = 0x321264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321260u;
    // 0x321264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x321260u, 0x321268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321268u;
label_321268:
    // 0x321268: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x321268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x32126c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32126cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321270: 0xc0ce782  jal         func_339E08
    ctx->pc = 0x321270u;
    SET_GPR_U32(ctx, 31, 0x321278u);
    ctx->pc = 0x321274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321270u;
    // 0x321274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E08u, 0x321270u, 0x321278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321278u;
label_321278:
    // 0x321278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x321278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32127c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32127cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321280: 0xc0ceff4  jal         func_33BFD0
    ctx->pc = 0x321280u;
    SET_GPR_U32(ctx, 31, 0x321288u);
    ctx->pc = 0x321284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321280u;
    // 0x321284: 0x263112c0  addiu       $s1, $s1, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFD0u, 0x321280u, 0x321288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321288u;
label_321288:
    // 0x321288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x321288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32128c: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x32128Cu;
    SET_GPR_U32(ctx, 31, 0x321294u);
    ctx->pc = 0x321290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32128Cu;
    // 0x321290: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x32128Cu, 0x321294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321294u;
label_321294:
    // 0x321294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x321294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321298: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x321298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32129c: 0xc0ceffa  jal         func_33BFE8
    ctx->pc = 0x32129Cu;
    SET_GPR_U32(ctx, 31, 0x3212A4u);
    ctx->pc = 0x3212A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32129Cu;
    // 0x3212a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFE8u, 0x32129Cu, 0x3212A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212A4u;
label_3212a4:
    // 0x3212a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3212a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212a8: 0xc0cf0c6  jal         func_33C318
    ctx->pc = 0x3212A8u;
    SET_GPR_U32(ctx, 31, 0x3212B0u);
    ctx->pc = 0x3212ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212A8u;
    // 0x3212ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C318u, 0x3212A8u, 0x3212B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212B0u;
label_3212b0:
    // 0x3212b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3212b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212b4: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x3212B4u;
    SET_GPR_U32(ctx, 31, 0x3212BCu);
    ctx->pc = 0x3212B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212B4u;
    // 0x3212b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x3212B4u, 0x3212BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212BCu;
label_3212bc:
    // 0x3212bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3212bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3212c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212c4: 0xc0cf0c8  jal         func_33C320
    ctx->pc = 0x3212C4u;
    SET_GPR_U32(ctx, 31, 0x3212CCu);
    ctx->pc = 0x3212C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212C4u;
    // 0x3212c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C320u, 0x3212C4u, 0x3212CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212CCu;
label_3212cc:
    // 0x3212cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3212ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212d0: 0xc0cf110  jal         func_33C440
    ctx->pc = 0x3212D0u;
    SET_GPR_U32(ctx, 31, 0x3212D8u);
    ctx->pc = 0x3212D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212D0u;
    // 0x3212d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C440u, 0x3212D0u, 0x3212D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212D8u;
label_3212d8:
    // 0x3212d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3212d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212dc: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x3212DCu;
    SET_GPR_U32(ctx, 31, 0x3212E4u);
    ctx->pc = 0x3212E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212DCu;
    // 0x3212e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x3212DCu, 0x3212E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212E4u;
label_3212e4:
    // 0x3212e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3212e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3212e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212ec: 0xc0cf116  jal         func_33C458
    ctx->pc = 0x3212ECu;
    SET_GPR_U32(ctx, 31, 0x3212F4u);
    ctx->pc = 0x3212F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212ECu;
    // 0x3212f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C458u, 0x3212ECu, 0x3212F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212F4u;
label_3212f4:
    // 0x3212f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3212f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212f8: 0xc0cf19c  jal         func_33C670
    ctx->pc = 0x3212F8u;
    SET_GPR_U32(ctx, 31, 0x321300u);
    ctx->pc = 0x3212FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212F8u;
    // 0x3212fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C670u, 0x3212F8u, 0x321300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321300u;
label_321300:
    // 0x321300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x321300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321304: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x321304u;
    SET_GPR_U32(ctx, 31, 0x32130Cu);
    ctx->pc = 0x321308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321304u;
    // 0x321308: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x321304u, 0x32130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32130Cu;
label_32130c:
    // 0x32130c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321310: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x321310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321314: 0xc0cf19e  jal         func_33C678
    ctx->pc = 0x321314u;
    SET_GPR_U32(ctx, 31, 0x32131Cu);
    ctx->pc = 0x321318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321314u;
    // 0x321318: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C678u, 0x321314u, 0x32131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32131Cu;
label_32131c:
    // 0x32131c: 0xc0cf890  jal         func_33E240
    ctx->pc = 0x32131Cu;
    SET_GPR_U32(ctx, 31, 0x321324u);
    ctx->pc = 0x321320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32131Cu;
    // 0x321320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E240u, 0x32131Cu, 0x321324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321324u;
label_321324:
    // 0x321324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x321324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321328: 0xc0cbf6e  jal         func_32FDB8
    ctx->pc = 0x321328u;
    SET_GPR_U32(ctx, 31, 0x321330u);
    ctx->pc = 0x32132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321328u;
    // 0x32132c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDB8u, 0x321328u, 0x321330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321330u;
label_321330:
    // 0x321330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321334: 0xc0cf894  jal         func_33E250
    ctx->pc = 0x321334u;
    SET_GPR_U32(ctx, 31, 0x32133Cu);
    ctx->pc = 0x321338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321334u;
    // 0x321338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E250u, 0x321334u, 0x32133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32133Cu;
label_32133c:
    // 0x32133c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32133cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x321348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32134c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32134cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321350: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x321350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321354: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x321354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32135c: 0x3e00008  jr          $ra
    ctx->pc = 0x32135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32135Cu;
        // 0x321360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321364u;
    // 0x321364: 0x0  nop
    ctx->pc = 0x321364u;
    // NOP
label_321368:
    // 0x321368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32136c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321374: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x321374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x321378: 0xc0ceacc  jal         func_33AB30
    ctx->pc = 0x321378u;
    SET_GPR_U32(ctx, 31, 0x321380u);
    ctx->pc = 0x32137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321378u;
    // 0x32137c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB30u, 0x321378u, 0x321380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321380u;
label_321380:
    // 0x321380: 0xc0ce792  jal         func_339E48
    ctx->pc = 0x321380u;
    SET_GPR_U32(ctx, 31, 0x321388u);
    ctx->pc = 0x321384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321380u;
    // 0x321384: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E48u, 0x321380u, 0x321388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321388u;
label_321388:
    // 0x321388: 0xc0cf00c  jal         func_33C030
    ctx->pc = 0x321388u;
    SET_GPR_U32(ctx, 31, 0x321390u);
    ctx->pc = 0x32138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321388u;
    // 0x32138c: 0x260409c0  addiu       $a0, $s0, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C030u, 0x321388u, 0x321390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321390u;
label_321390:
    // 0x321390: 0xc0cf0d6  jal         func_33C358
    ctx->pc = 0x321390u;
    SET_GPR_U32(ctx, 31, 0x321398u);
    ctx->pc = 0x321394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321390u;
    // 0x321394: 0x26040a00  addiu       $a0, $s0, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C358u, 0x321390u, 0x321398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321398u;
label_321398:
    // 0x321398: 0xc0cf128  jal         func_33C4A0
    ctx->pc = 0x321398u;
    SET_GPR_U32(ctx, 31, 0x3213A0u);
    ctx->pc = 0x32139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321398u;
    // 0x32139c: 0x26041280  addiu       $a0, $s0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C4A0u, 0x321398u, 0x3213A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213A0u;
label_3213a0:
    // 0x3213a0: 0xc0cf1ac  jal         func_33C6B0
    ctx->pc = 0x3213A0u;
    SET_GPR_U32(ctx, 31, 0x3213A8u);
    ctx->pc = 0x3213A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213A0u;
    // 0x3213a4: 0x260412c0  addiu       $a0, $s0, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C6B0u, 0x3213A0u, 0x3213A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213A8u;
label_3213a8:
    // 0x3213a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3213a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3213ac: 0xc0cbf5c  jal         func_32FD70
    ctx->pc = 0x3213ACu;
    SET_GPR_U32(ctx, 31, 0x3213B4u);
    ctx->pc = 0x3213B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213ACu;
    // 0x3213b0: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD70u, 0x3213ACu, 0x3213B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213B4u;
label_3213b4:
    // 0x3213b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3213b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3213b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3213bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3213bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3213c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3213C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3213C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213C0u;
        // 0x3213c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213C8u;
}
