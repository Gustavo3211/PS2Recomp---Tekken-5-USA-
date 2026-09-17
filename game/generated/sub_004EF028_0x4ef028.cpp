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

// Function: sub_004EF028
// Address: 0x4ef028 - 0x4ef2c8
void sub_004EF028_0x4ef028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF028_0x4ef028");
#endif

    switch (ctx->pc) {
        case 0x4ef0ccu: goto label_4ef0cc;
        case 0x4ef110u: goto label_4ef110;
        case 0x4ef154u: goto label_4ef154;
        case 0x4ef188u: goto label_4ef188;
        default: break;
    }

    ctx->pc = 0x4ef028u;

    // 0x4ef028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ef028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ef02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ef02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ef030: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ef030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ef034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ef034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ef038: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ef038u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ef03c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ef03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ef040: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ef040u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ef044: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ef044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ef048: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ef048u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ef04c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ef04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ef050: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ef050u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ef054: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ef054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ef058: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4ef058u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef05c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ef05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ef060: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4ef060u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4ef064: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ef064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ef068: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4ef068u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef06c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ef06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ef070: 0x26d61208  addiu       $s6, $s6, 0x1208
    ctx->pc = 0x4ef070u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4616));
    // 0x4ef074: 0x263111e8  addiu       $s1, $s1, 0x11E8
    ctx->pc = 0x4ef074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4584));
    // 0x4ef078: 0x265211ec  addiu       $s2, $s2, 0x11EC
    ctx->pc = 0x4ef078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4588));
    // 0x4ef07c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4ef07cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4ef080: 0x269411f4  addiu       $s4, $s4, 0x11F4
    ctx->pc = 0x4ef080u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4596));
    // 0x4ef084: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ef084u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ef088: 0x261011f8  addiu       $s0, $s0, 0x11F8
    ctx->pc = 0x4ef088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
    // 0x4ef08c: 0x84a2002a  lh          $v0, 0x2A($a1)
    ctx->pc = 0x4ef08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x4ef090: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ef090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef094: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ef094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ef098: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ef098u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ef09c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ef09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ef0a0: 0x267311fc  addiu       $s3, $s3, 0x11FC
    ctx->pc = 0x4ef0a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4604));
    // 0x4ef0a4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ef0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ef0a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef0ac: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4ef0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4ef0b0: 0x84a2002c  lh          $v0, 0x2C($a1)
    ctx->pc = 0x4ef0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4ef0b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ef0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef0b8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ef0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ef0bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef0c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ef0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ef0c4: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4EF0C4u;
    SET_GPR_U32(ctx, 31, 0x4EF0CCu);
    ctx->pc = 0x4EF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF0C4u;
    // 0x4ef0c8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4EF0C4u, 0x4EF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF0CCu;
label_4ef0cc:
    // 0x4ef0cc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ef0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef0d0: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4ef0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ef0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef0d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ef0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ef0dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ef0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ef0e0: 0x84e20022  lh          $v0, 0x22($a3)
    ctx->pc = 0x4ef0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x4ef0e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ef0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef0e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef0ec: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ef0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ef0f0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ef0f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ef0f4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4ef0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4ef0f8: 0x84e20024  lh          $v0, 0x24($a3)
    ctx->pc = 0x4ef0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4ef0fc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ef0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ef100: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef104: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ef104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ef108: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4EF108u;
    SET_GPR_U32(ctx, 31, 0x4EF110u);
    ctx->pc = 0x4EF10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF108u;
    // 0x4ef10c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4EF108u, 0x4EF110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF110u;
label_4ef110:
    // 0x4ef110: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ef110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef114: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4ef114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ef118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ef118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef11c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ef11cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ef120: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ef120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ef124: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4ef124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4ef128: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ef128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef12c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef130: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ef130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ef134: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ef134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ef138: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4ef138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4ef13c: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4ef13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4ef140: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ef140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ef144: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef148: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ef148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ef14c: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EF14Cu;
    SET_GPR_U32(ctx, 31, 0x4EF154u);
    ctx->pc = 0x4EF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF14Cu;
    // 0x4ef150: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EF14Cu, 0x4EF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF154u;
label_4ef154:
    // 0x4ef154: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ef154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef15c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ef15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ef160: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ef160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ef164: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ef164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ef168: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ef168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ef16c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ef16cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ef170: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ef170u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ef174: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ef174u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ef178: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ef178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ef17c: 0x813bc62  j           func_4EF188
    ctx->pc = 0x4EF17Cu;
    ctx->pc = 0x4EF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF17Cu;
    // 0x4ef180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF188u;
    goto label_4ef188;
    ctx->pc = 0x4EF184u;
    // 0x4ef184: 0x0  nop
    ctx->pc = 0x4ef184u;
    // NOP
label_4ef188:
    // 0x4ef188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef18c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ef18cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ef190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ef190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ef194: 0x256b1208  addiu       $t3, $t3, 0x1208
    ctx->pc = 0x4ef194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4616));
    // 0x4ef198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ef198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ef19c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ef19cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4ef1a0: 0x252911f4  addiu       $t1, $t1, 0x11F4
    ctx->pc = 0x4ef1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4596));
    // 0x4ef1a4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4ef1a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef1a8: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x4ef1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4ef1ac: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ef1acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ef1b0: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4ef1b0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F11F4u));
    // 0x4ef1b4: 0x258c11f8  addiu       $t4, $t4, 0x11F8
    ctx->pc = 0x4ef1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4600));
    // 0x4ef1b8: 0x85e50012  lh          $a1, 0x12($t7)
    ctx->pc = 0x4ef1b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x4ef1bc: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4ef1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4ef1c0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ef1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ef1c4: 0x25ad11fc  addiu       $t5, $t5, 0x11FC
    ctx->pc = 0x4ef1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4604));
    // 0x4ef1c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ef1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ef1cc: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4ef1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ef1d0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4ef1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4ef1d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ef1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ef1d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ef1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ef1dc: 0x85870000  lh          $a3, 0x0($t4)
    ctx->pc = 0x4ef1dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ef1e0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ef1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ef1e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ef1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ef1e8: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x4ef1e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef1ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ef1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ef1f0: 0x8de20014  lw          $v0, 0x14($t7)
    ctx->pc = 0x4ef1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x4ef1f4: 0x25d00010  addiu       $s0, $t6, 0x10
    ctx->pc = 0x4ef1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x4ef1f8: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x4ef1f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ef1fc: 0x25c90014  addiu       $t1, $t6, 0x14
    ctx->pc = 0x4ef1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x4ef200: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4ef200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4ef204: 0x85a80000  lh          $t0, 0x0($t5)
    ctx->pc = 0x4ef204u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ef208: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef208u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef20c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4ef20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ef210: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4ef210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ef214: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ef214u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ef218: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4ef218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4ef21c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef220: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4ef220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4ef224: 0x25c70018  addiu       $a3, $t6, 0x18
    ctx->pc = 0x4ef224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 24));
    // 0x4ef228: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ef228u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ef22c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ef22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ef230: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x4ef230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x4ef234: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4ef234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4ef238: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef23c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4ef23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ef240: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x4ef240u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x4ef244: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4ef244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4ef248: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4ef248u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4ef24c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ef24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef250: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ef250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ef254: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ef254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ef258: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ef258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ef25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef260: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ef260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ef264: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ef264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ef268: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ef268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ef26c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ef26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ef270: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef274: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ef274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ef278: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ef278u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ef27c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4ef27cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ef280: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ef280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ef284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ef284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ef288: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4ef288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4ef28c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef290: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ef290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ef294: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4ef294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4ef298: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4ef298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ef29c: 0x946201c2  lhu         $v0, 0x1C2($v1)
    ctx->pc = 0x4ef29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 450)));
    // 0x4ef2a0: 0xa5c201c2  sh          $v0, 0x1C2($t6)
    ctx->pc = 0x4ef2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef2a4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4ef2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ef2a8: 0x94620148  lhu         $v0, 0x148($v1)
    ctx->pc = 0x4ef2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x4ef2ac: 0xa5c20148  sh          $v0, 0x148($t6)
    ctx->pc = 0x4ef2acu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef2b0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4ef2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ef2b4: 0x9462016a  lhu         $v0, 0x16A($v1)
    ctx->pc = 0x4ef2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 362)));
    // 0x4ef2b8: 0xa5c2016a  sh          $v0, 0x16A($t6)
    ctx->pc = 0x4ef2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef2bc: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4ef2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ef2c0: 0x8126ee2  j           func_49BB88
    ctx->pc = 0x4EF2C0u;
    ctx->pc = 0x4EF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF2C0u;
    // 0x4ef2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    sub_0049BB88_0x49bb88(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF2C8u;
}
