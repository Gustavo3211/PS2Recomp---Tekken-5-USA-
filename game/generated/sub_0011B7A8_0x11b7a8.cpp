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

// Function: sub_0011B7A8
// Address: 0x11b7a8 - 0x11b9d0
void sub_0011B7A8_0x11b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B7A8_0x11b7a8");
#endif

    switch (ctx->pc) {
        case 0x11b7a8u: goto label_11b7a8;
        case 0x11b7acu: goto label_11b7ac;
        case 0x11b7b0u: goto label_11b7b0;
        case 0x11b7b4u: goto label_11b7b4;
        case 0x11b7b8u: goto label_11b7b8;
        case 0x11b7bcu: goto label_11b7bc;
        case 0x11b7c0u: goto label_11b7c0;
        case 0x11b7c4u: goto label_11b7c4;
        case 0x11b7c8u: goto label_11b7c8;
        case 0x11b7ccu: goto label_11b7cc;
        case 0x11b7d0u: goto label_11b7d0;
        case 0x11b7d4u: goto label_11b7d4;
        case 0x11b7d8u: goto label_11b7d8;
        case 0x11b7dcu: goto label_11b7dc;
        case 0x11b7e0u: goto label_11b7e0;
        case 0x11b7e4u: goto label_11b7e4;
        case 0x11b7e8u: goto label_11b7e8;
        case 0x11b7ecu: goto label_11b7ec;
        case 0x11b7f0u: goto label_11b7f0;
        case 0x11b7f4u: goto label_11b7f4;
        case 0x11b7f8u: goto label_11b7f8;
        case 0x11b7fcu: goto label_11b7fc;
        case 0x11b800u: goto label_11b800;
        case 0x11b804u: goto label_11b804;
        case 0x11b808u: goto label_11b808;
        case 0x11b80cu: goto label_11b80c;
        case 0x11b810u: goto label_11b810;
        case 0x11b814u: goto label_11b814;
        case 0x11b818u: goto label_11b818;
        case 0x11b81cu: goto label_11b81c;
        case 0x11b820u: goto label_11b820;
        case 0x11b824u: goto label_11b824;
        case 0x11b828u: goto label_11b828;
        case 0x11b82cu: goto label_11b82c;
        case 0x11b830u: goto label_11b830;
        case 0x11b834u: goto label_11b834;
        case 0x11b838u: goto label_11b838;
        case 0x11b83cu: goto label_11b83c;
        case 0x11b840u: goto label_11b840;
        case 0x11b844u: goto label_11b844;
        case 0x11b848u: goto label_11b848;
        case 0x11b84cu: goto label_11b84c;
        case 0x11b850u: goto label_11b850;
        case 0x11b854u: goto label_11b854;
        case 0x11b858u: goto label_11b858;
        case 0x11b85cu: goto label_11b85c;
        case 0x11b860u: goto label_11b860;
        case 0x11b864u: goto label_11b864;
        case 0x11b868u: goto label_11b868;
        case 0x11b86cu: goto label_11b86c;
        case 0x11b870u: goto label_11b870;
        case 0x11b874u: goto label_11b874;
        case 0x11b878u: goto label_11b878;
        case 0x11b87cu: goto label_11b87c;
        case 0x11b880u: goto label_11b880;
        case 0x11b884u: goto label_11b884;
        case 0x11b888u: goto label_11b888;
        case 0x11b88cu: goto label_11b88c;
        case 0x11b890u: goto label_11b890;
        case 0x11b894u: goto label_11b894;
        case 0x11b898u: goto label_11b898;
        case 0x11b89cu: goto label_11b89c;
        case 0x11b8a0u: goto label_11b8a0;
        case 0x11b8a4u: goto label_11b8a4;
        case 0x11b8a8u: goto label_11b8a8;
        case 0x11b8acu: goto label_11b8ac;
        case 0x11b8b0u: goto label_11b8b0;
        case 0x11b8b4u: goto label_11b8b4;
        case 0x11b8b8u: goto label_11b8b8;
        case 0x11b8bcu: goto label_11b8bc;
        case 0x11b8c0u: goto label_11b8c0;
        case 0x11b8c4u: goto label_11b8c4;
        case 0x11b8c8u: goto label_11b8c8;
        case 0x11b8ccu: goto label_11b8cc;
        case 0x11b8d0u: goto label_11b8d0;
        case 0x11b8d4u: goto label_11b8d4;
        case 0x11b8d8u: goto label_11b8d8;
        case 0x11b8dcu: goto label_11b8dc;
        case 0x11b8e0u: goto label_11b8e0;
        case 0x11b8e4u: goto label_11b8e4;
        case 0x11b8e8u: goto label_11b8e8;
        case 0x11b8ecu: goto label_11b8ec;
        case 0x11b8f0u: goto label_11b8f0;
        case 0x11b8f4u: goto label_11b8f4;
        case 0x11b8f8u: goto label_11b8f8;
        case 0x11b8fcu: goto label_11b8fc;
        case 0x11b900u: goto label_11b900;
        case 0x11b904u: goto label_11b904;
        case 0x11b908u: goto label_11b908;
        case 0x11b90cu: goto label_11b90c;
        case 0x11b910u: goto label_11b910;
        case 0x11b914u: goto label_11b914;
        case 0x11b918u: goto label_11b918;
        case 0x11b91cu: goto label_11b91c;
        case 0x11b920u: goto label_11b920;
        case 0x11b924u: goto label_11b924;
        case 0x11b928u: goto label_11b928;
        case 0x11b92cu: goto label_11b92c;
        case 0x11b930u: goto label_11b930;
        case 0x11b934u: goto label_11b934;
        case 0x11b938u: goto label_11b938;
        case 0x11b93cu: goto label_11b93c;
        case 0x11b940u: goto label_11b940;
        case 0x11b944u: goto label_11b944;
        case 0x11b948u: goto label_11b948;
        case 0x11b94cu: goto label_11b94c;
        case 0x11b950u: goto label_11b950;
        case 0x11b954u: goto label_11b954;
        case 0x11b958u: goto label_11b958;
        case 0x11b95cu: goto label_11b95c;
        case 0x11b960u: goto label_11b960;
        case 0x11b964u: goto label_11b964;
        case 0x11b968u: goto label_11b968;
        case 0x11b96cu: goto label_11b96c;
        case 0x11b970u: goto label_11b970;
        case 0x11b974u: goto label_11b974;
        case 0x11b978u: goto label_11b978;
        case 0x11b97cu: goto label_11b97c;
        case 0x11b980u: goto label_11b980;
        case 0x11b984u: goto label_11b984;
        case 0x11b988u: goto label_11b988;
        case 0x11b98cu: goto label_11b98c;
        case 0x11b990u: goto label_11b990;
        case 0x11b994u: goto label_11b994;
        case 0x11b998u: goto label_11b998;
        case 0x11b99cu: goto label_11b99c;
        case 0x11b9a0u: goto label_11b9a0;
        case 0x11b9a4u: goto label_11b9a4;
        case 0x11b9a8u: goto label_11b9a8;
        case 0x11b9acu: goto label_11b9ac;
        case 0x11b9b0u: goto label_11b9b0;
        case 0x11b9b4u: goto label_11b9b4;
        case 0x11b9b8u: goto label_11b9b8;
        case 0x11b9bcu: goto label_11b9bc;
        case 0x11b9c0u: goto label_11b9c0;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9c8u: goto label_11b9c8;
        case 0x11b9ccu: goto label_11b9cc;
        default: break;
    }

    ctx->pc = 0x11b7a8u;

label_11b7a8:
    // 0x11b7a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_11b7ac:
    // 0x11b7ac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x11b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_11b7b0:
    // 0x11b7b0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_11b7b4:
    // 0x11b7b4: 0x3c1e001f  lui         $fp, 0x1F
    ctx->pc = 0x11b7b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)31 << 16));
label_11b7b8:
    // 0x11b7b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11b7bc:
    // 0x11b7bc: 0x3c170013  lui         $s7, 0x13
    ctx->pc = 0x11b7bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)19 << 16));
label_11b7c0:
    // 0x11b7c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11b7c4:
    // 0x11b7c4: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x11b7c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
label_11b7c8:
    // 0x11b7c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11b7cc:
    // 0x11b7cc: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x11b7ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
label_11b7d0:
    // 0x11b7d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11b7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11b7d4:
    // 0x11b7d4: 0x3c140013  lui         $s4, 0x13
    ctx->pc = 0x11b7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)19 << 16));
label_11b7d8:
    // 0x11b7d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11b7dc:
    // 0x11b7dc: 0x3c130013  lui         $s3, 0x13
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)19 << 16));
label_11b7e0:
    // 0x11b7e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11b7e4:
    // 0x11b7e4: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
label_11b7e8:
    // 0x11b7e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11b7ec:
    // 0x11b7ec: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x11b7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
label_11b7f0:
    // 0x11b7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b7f4:
    // 0x11b7f4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11b7f8:
    // 0x11b7f8: 0xc043cf8  jal         func_10F3E0
label_11b7fc:
    if (ctx->pc == 0x11B7FCu) {
        ctx->pc = 0x11B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7F8u;
        // 0x11b7fc: 0x8c4427e0  lw          $a0, 0x27E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B800u;
        goto label_11b800;
    }
    ctx->pc = 0x11B7F8u;
    SET_GPR_U32(ctx, 31, 0x11B800u);
    ctx->pc = 0x11B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7F8u;
    // 0x11b7fc: 0x8c4427e0  lw          $a0, 0x27E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x11B7F8u, 0x11B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B800u;
label_11b800:
    // 0x11b800: 0x8e832820  lw          $v1, 0x2820($s4)
    ctx->pc = 0x11b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10272)));
label_11b804:
    // 0x11b804: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b808:
    // 0x11b808: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_11b80c:
    if (ctx->pc == 0x11B80Cu) {
        ctx->pc = 0x11B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B808u;
        // 0x11b80c: 0x8ee227d0  lw          $v0, 0x27D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B810u;
        goto label_11b810;
    }
    ctx->pc = 0x11B808u;
    {
        const bool branch_taken_0x11b808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B808u;
        // 0x11b80c: 0x8ee227d0  lw          $v0, 0x27D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b808) {
            ctx->pc = 0x11B82Cu;
            goto label_11b82c;
        }
    }
    ctx->pc = 0x11B810u;
label_11b810:
    // 0x11b810: 0xae6027f4  sw          $zero, 0x27F4($s3)
    ctx->pc = 0x11b810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10228), GPR_U32(ctx, 0));
label_11b814:
    // 0x11b814: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11b818:
    // 0x11b818: 0xae802820  sw          $zero, 0x2820($s4)
    ctx->pc = 0x11b818u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10272), GPR_U32(ctx, 0));
label_11b81c:
    // 0x11b81c: 0xac4027d4  sw          $zero, 0x27D4($v0)
    ctx->pc = 0x11b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10196), GPR_U32(ctx, 0));
label_11b820:
    // 0x11b820: 0xc043c78  jal         func_10F1E0
label_11b824:
    if (ctx->pc == 0x11B824u) {
        ctx->pc = 0x11B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B820u;
        // 0x11b824: 0xafc0f854  sw          $zero, -0x7AC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294965332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B828u;
        goto label_11b828;
    }
    ctx->pc = 0x11B820u;
    SET_GPR_U32(ctx, 31, 0x11B828u);
    ctx->pc = 0x11B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B820u;
    // 0x11b824: 0xafc0f854  sw          $zero, -0x7AC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294965332), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x11B820u, 0x11B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B828u;
label_11b828:
    // 0x11b828: 0x8ee227d0  lw          $v0, 0x27D0($s7)
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10192)));
label_11b82c:
    // 0x11b82c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11b830:
    if (ctx->pc == 0x11B830u) {
        ctx->pc = 0x11B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B82Cu;
        // 0x11b830: 0x26c4e548  addiu       $a0, $s6, -0x1AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B834u;
        goto label_11b834;
    }
    ctx->pc = 0x11B82Cu;
    {
        const bool branch_taken_0x11b82c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B82Cu;
        // 0x11b830: 0x26c4e548  addiu       $a0, $s6, -0x1AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b82c) {
            ctx->pc = 0x11B840u;
            goto label_11b840;
        }
    }
    ctx->pc = 0x11B834u;
label_11b834:
    // 0x11b834: 0x8e45f840  lw          $a1, -0x7C0($s2)
    ctx->pc = 0x11b834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965312)));
label_11b838:
    // 0x11b838: 0xc044794  jal         func_111E50
label_11b83c:
    if (ctx->pc == 0x11B83Cu) {
        ctx->pc = 0x11B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B838u;
        // 0x11b83c: 0x8e262824  lw          $a2, 0x2824($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B840u;
        goto label_11b840;
    }
    ctx->pc = 0x11B838u;
    SET_GPR_U32(ctx, 31, 0x11B840u);
    ctx->pc = 0x11B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B838u;
    // 0x11b83c: 0x8e262824  lw          $a2, 0x2824($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11B838u, 0x11B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B840u;
label_11b840:
    // 0x11b840: 0x8e43f840  lw          $v1, -0x7C0($s2)
    ctx->pc = 0x11b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965312)));
label_11b844:
    // 0x11b844: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_11b848:
    if (ctx->pc == 0x11B848u) {
        ctx->pc = 0x11B84Cu;
        goto label_11b84c;
    }
    ctx->pc = 0x11B844u;
    {
        const bool branch_taken_0x11b844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b844) {
            ctx->pc = 0x11B86Cu;
            goto label_11b86c;
        }
    }
    ctx->pc = 0x11B84Cu;
label_11b84c:
    // 0x11b84c: 0x8e222824  lw          $v0, 0x2824($s1)
    ctx->pc = 0x11b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10276)));
label_11b850:
    // 0x11b850: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11b854:
    if (ctx->pc == 0x11B854u) {
        ctx->pc = 0x11B858u;
        goto label_11b858;
    }
    ctx->pc = 0x11B850u;
    {
        const bool branch_taken_0x11b850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b850) {
            ctx->pc = 0x11B86Cu;
            goto label_11b86c;
        }
    }
    ctx->pc = 0x11B858u;
label_11b858:
    // 0x11b858: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11b858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11b85c:
    // 0x11b85c: 0x8ebcf844  lw          $gp, -0x7BC($s5)
    ctx->pc = 0x11b85cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965316)));
label_11b860:
    // 0x11b860: 0x60f809  jalr        $v1
label_11b864:
    if (ctx->pc == 0x11B864u) {
        ctx->pc = 0x11B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B860u;
        // 0x11b864: 0x8e242824  lw          $a0, 0x2824($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B868u;
        goto label_11b868;
    }
    ctx->pc = 0x11B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B868u);
        ctx->pc = 0x11B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B860u;
        // 0x11b864: 0x8e242824  lw          $a0, 0x2824($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10276)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B860u, 0x11B868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B868u;
label_11b868:
    // 0x11b868: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11b868u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b86c:
    // 0x11b86c: 0xae6027f4  sw          $zero, 0x27F4($s3)
    ctx->pc = 0x11b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10228), GPR_U32(ctx, 0));
label_11b870:
    // 0x11b870: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_11b874:
    if (ctx->pc == 0x11B874u) {
        ctx->pc = 0x11B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B870u;
        // 0x11b874: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B878u;
        goto label_11b878;
    }
    ctx->pc = 0x11B870u;
    {
        const bool branch_taken_0x11b870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B870u;
        // 0x11b874: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b870) {
            ctx->pc = 0x11B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b7f8;
        }
    }
    ctx->pc = 0x11B878u;
label_11b878:
    // 0x11b878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11b87c:
    // 0x11b87c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11b87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b880:
    // 0x11b880: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11b884:
    // 0x11b884: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11b884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b888:
    // 0x11b888: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
label_11b88c:
    // 0x11b88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b890:
    // 0x11b890: 0x8e2427d4  lw          $a0, 0x27D4($s1)
    ctx->pc = 0x11b890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10196)));
label_11b894:
    // 0x11b894: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11b894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b898:
    // 0x11b898: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_11b89c:
    if (ctx->pc == 0x11B89Cu) {
        ctx->pc = 0x11B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B898u;
        // 0x11b89c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8A0u;
        goto label_11b8a0;
    }
    ctx->pc = 0x11B898u;
    {
        const bool branch_taken_0x11b898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B898u;
        // 0x11b89c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b898) {
            ctx->pc = 0x11B8F0u;
            goto label_11b8f0;
        }
    }
    ctx->pc = 0x11B8A0u;
label_11b8a0:
    // 0x11b8a0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b8a4:
    // 0x11b8a4: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
label_11b8a8:
    // 0x11b8a8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x11b8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_11b8ac:
    // 0x11b8ac: 0x2442f858  addiu       $v0, $v0, -0x7A8
    ctx->pc = 0x11b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965336));
label_11b8b0:
    // 0x11b8b0: 0x2463b7a8  addiu       $v1, $v1, -0x4858
    ctx->pc = 0x11b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948776));
label_11b8b4:
    // 0x11b8b4: 0x24a5e570  addiu       $a1, $a1, -0x1A90
    ctx->pc = 0x11b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960496));
label_11b8b8:
    // 0x11b8b8: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x11b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_11b8bc:
    // 0x11b8bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b8c0:
    // 0x11b8c0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x11b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_11b8c4:
    // 0x11b8c4: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x11b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_11b8c8:
    // 0x11b8c8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x11b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
label_11b8cc:
    // 0x11b8cc: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x11b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_11b8d0:
    // 0x11b8d0: 0xc043c68  jal         func_10F1A0
label_11b8d4:
    if (ctx->pc == 0x11B8D4u) {
        ctx->pc = 0x11B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D0u;
        // 0x11b8d4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8D8u;
        goto label_11b8d8;
    }
    ctx->pc = 0x11B8D0u;
    SET_GPR_U32(ctx, 31, 0x11B8D8u);
    ctx->pc = 0x11B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8D0u;
    // 0x11b8d4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x11B8D0u, 0x11B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8D8u;
label_11b8d8:
    // 0x11b8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b8dc:
    // 0x11b8dc: 0xae2227d4  sw          $v0, 0x27D4($s1)
    ctx->pc = 0x11b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10196), GPR_U32(ctx, 2));
label_11b8e0:
    // 0x11b8e0: 0xc044138  jal         func_1104E0
label_11b8e4:
    if (ctx->pc == 0x11B8E4u) {
        ctx->pc = 0x11B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E0u;
        // 0x11b8e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8E8u;
        goto label_11b8e8;
    }
    ctx->pc = 0x11B8E0u;
    SET_GPR_U32(ctx, 31, 0x11B8E8u);
    ctx->pc = 0x11B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8E0u;
    // 0x11b8e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x11B8E0u, 0x11B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8E8u;
label_11b8e8:
    // 0x11b8e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_11b8ec:
    if (ctx->pc == 0x11B8ECu) {
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E8u;
        // 0x11b8ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8F0u;
        goto label_11b8f0;
    }
    ctx->pc = 0x11B8E8u;
    {
        const bool branch_taken_0x11b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E8u;
        // 0x11b8ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e8) {
            ctx->pc = 0x11B900u;
            goto label_11b900;
        }
    }
    ctx->pc = 0x11B8F0u;
label_11b8f0:
    // 0x11b8f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11b8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11b8f4:
    // 0x11b8f4: 0xc043c8c  jal         func_10F230
label_11b8f8:
    if (ctx->pc == 0x11B8F8u) {
        ctx->pc = 0x11B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F4u;
        // 0x11b8f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B8FCu;
        goto label_11b8fc;
    }
    ctx->pc = 0x11B8F4u;
    SET_GPR_U32(ctx, 31, 0x11B8FCu);
    ctx->pc = 0x11B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8F4u;
    // 0x11b8f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F230u, 0x11B8F4u, 0x11B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8FCu;
label_11b8fc:
    // 0x11b8fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b900:
    // 0x11b900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11b904:
    // 0x11b904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b908:
    // 0x11b908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b90c:
    // 0x11b90c: 0x3e00008  jr          $ra
label_11b910:
    if (ctx->pc == 0x11B910u) {
        ctx->pc = 0x11B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B90Cu;
        // 0x11b910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B914u;
        goto label_11b914;
    }
    ctx->pc = 0x11B90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B90Cu;
        // 0x11b910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B914u;
label_11b914:
    // 0x11b914: 0x0  nop
    ctx->pc = 0x11b914u;
    // NOP
label_11b918:
    // 0x11b918: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x11b918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_11b91c:
    // 0x11b91c: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x11b91cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_11b920:
    // 0x11b920: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11b924:
    // 0x11b924: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_11b928:
    if (ctx->pc == 0x11B928u) {
        ctx->pc = 0x11B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B924u;
        // 0x11b928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B92Cu;
        goto label_11b92c;
    }
    ctx->pc = 0x11B924u;
    {
        const bool branch_taken_0x11b924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B924u;
        // 0x11b928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b924) {
            ctx->pc = 0x11B978u;
            goto label_11b978;
        }
    }
    ctx->pc = 0x11B92Cu;
label_11b92c:
    // 0x11b92c: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x11b92cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_11b930:
    // 0x11b930: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_11b934:
    if (ctx->pc == 0x11B934u) {
        ctx->pc = 0x11B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B930u;
        // 0x11b934: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B938u;
        goto label_11b938;
    }
    ctx->pc = 0x11B930u;
    {
        const bool branch_taken_0x11b930 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B930u;
        // 0x11b934: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b930) {
            ctx->pc = 0x11B978u;
            goto label_11b978;
        }
    }
    ctx->pc = 0x11B938u;
label_11b938:
    // 0x11b938: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x11b938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_11b93c:
    // 0x11b93c: 0x3c0b0013  lui         $t3, 0x13
    ctx->pc = 0x11b93cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)19 << 16));
label_11b940:
    // 0x11b940: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11b944:
    // 0x11b944: 0x0  nop
    ctx->pc = 0x11b944u;
    // NOP
label_11b948:
    // 0x11b948: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_11b94c:
    // 0x11b94c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11b94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11b950:
    // 0x11b950: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_11b954:
    // 0x11b954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11b958:
    // 0x11b958: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11b958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b95c:
    // 0x11b95c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11b95cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b960:
    // 0x11b960: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11b964:
    // 0x11b964: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11b964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11b968:
    // 0x11b968: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_11b96c:
    if (ctx->pc == 0x11B96Cu) {
        ctx->pc = 0x11B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B968u;
        // 0x11b96c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B970u;
        goto label_11b970;
    }
    ctx->pc = 0x11B968u;
    {
        const bool branch_taken_0x11b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B968u;
        // 0x11b96c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b968) {
            ctx->pc = 0x11B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b948;
        }
    }
    ctx->pc = 0x11B970u;
label_11b970:
    // 0x11b970: 0x10000003  b           . + 4 + (0x3 << 2)
label_11b974:
    if (ctx->pc == 0x11B974u) {
        ctx->pc = 0x11B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B970u;
        // 0x11b974: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B978u;
        goto label_11b978;
    }
    ctx->pc = 0x11B970u;
    {
        const bool branch_taken_0x11b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B970u;
        // 0x11b974: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b970) {
            ctx->pc = 0x11B980u;
            goto label_11b980;
        }
    }
    ctx->pc = 0x11B978u;
label_11b978:
    // 0x11b978: 0x3c0b0013  lui         $t3, 0x13
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)19 << 16));
label_11b97c:
    // 0x11b97c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x11b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11b980:
    // 0x11b980: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_11b984:
    if (ctx->pc == 0x11B984u) {
        ctx->pc = 0x11B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B980u;
        // 0x11b984: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B988u;
        goto label_11b988;
    }
    ctx->pc = 0x11B980u;
    {
        const bool branch_taken_0x11b980 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B980u;
        // 0x11b984: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b980) {
            ctx->pc = 0x11B9C8u;
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11B988u;
label_11b988:
    // 0x11b988: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_11b98c:
    // 0x11b98c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b990:
    // 0x11b990: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_11b994:
    if (ctx->pc == 0x11B994u) {
        ctx->pc = 0x11B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B990u;
        // 0x11b994: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B998u;
        goto label_11b998;
    }
    ctx->pc = 0x11B990u;
    {
        const bool branch_taken_0x11b990 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B990u;
        // 0x11b994: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b990) {
            ctx->pc = 0x11B9C8u;
            goto label_11b9c8;
        }
    }
    ctx->pc = 0x11B998u;
label_11b998:
    // 0x11b998: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_11b99c:
    // 0x11b99c: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11b9a0:
    // 0x11b9a0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_11b9a4:
    // 0x11b9a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11b9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11b9a8:
    // 0x11b9a8: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_11b9ac:
    // 0x11b9ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11b9b0:
    // 0x11b9b0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11b9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b9b4:
    // 0x11b9b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11b9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b9b8:
    // 0x11b9b8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x11b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11b9bc:
    // 0x11b9bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11b9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11b9c0:
    // 0x11b9c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_11b9c4:
    if (ctx->pc == 0x11B9C4u) {
        ctx->pc = 0x11B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C0u;
        // 0x11b9c4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9C8u;
        goto label_11b9c8;
    }
    ctx->pc = 0x11B9C0u;
    {
        const bool branch_taken_0x11b9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C0u;
        // 0x11b9c4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9c0) {
            ctx->pc = 0x11B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b9a0;
        }
    }
    ctx->pc = 0x11B9C8u;
label_11b9c8:
    // 0x11b9c8: 0x8046dc2  j           func_11B708
label_11b9cc:
    if (ctx->pc == 0x11B9CCu) {
        ctx->pc = 0x11B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C8u;
        // 0x11b9cc: 0x25642820  addiu       $a0, $t3, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 10272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9D0u;
        goto label_fallthrough_0x11b9c8;
    }
    ctx->pc = 0x11B9C8u;
    ctx->pc = 0x11B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9C8u;
    // 0x11b9cc: 0x25642820  addiu       $a0, $t3, 0x2820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 10272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B708u, 0x11B9C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x11b9c8:
    ctx->pc = 0x11B9D0u;
}
