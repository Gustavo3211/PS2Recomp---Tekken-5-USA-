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

// Function: sub_0028B450
// Address: 0x28b450 - 0x28b598
void sub_0028B450_0x28b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B450_0x28b450");
#endif

    switch (ctx->pc) {
        case 0x28b490u: goto label_28b490;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b510u: goto label_28b510;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b538u: goto label_28b538;
        default: break;
    }

    ctx->pc = 0x28b450u;

    // 0x28b450: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28b454: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28b458: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x28b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x28b45c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x28b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x28b460: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28b460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28b464: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x28b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x28b468: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x28b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x28b46c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x28b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x28b470: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x28b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28b474: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b478: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x28b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28b47c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28b47cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b480: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x28b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28b484: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x28b488: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x28b488u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x28b48c: 0x0  nop
    ctx->pc = 0x28b48cu;
    // NOP
label_28b490:
    // 0x28b490: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b494: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x28b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x28b498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b49c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x28b49cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_28b4a0:
    // 0x28b4a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28b4a4: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x28b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28b4a8: 0x24629bf8  addiu       $v0, $v1, -0x6408
    ctx->pc = 0x28b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941688));
    // 0x28b4ac: 0x27c59c10  addiu       $a1, $fp, -0x63F0
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941712));
    // 0x28b4b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4b4: 0x52280a  movz        $a1, $v0, $s2
    ctx->pc = 0x28b4b4u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x28b4b8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28B4B8u;
    SET_GPR_U32(ctx, 31, 0x28B4C0u);
    ctx->pc = 0x28B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4B8u;
    // 0x28b4bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28B4B8u, 0x28B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4C0u;
label_28b4c0:
    // 0x28b4c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28b4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4c4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28B4C4u;
    SET_GPR_U32(ctx, 31, 0x28B4CCu);
    ctx->pc = 0x28B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4C4u;
    // 0x28b4c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28B4C4u, 0x28B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4CCu;
label_28b4cc:
    // 0x28b4cc: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x28b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x28b4d0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x28b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x28b4d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b4d8: 0x24847068  addiu       $a0, $a0, 0x7068
    ctx->pc = 0x28b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28776));
    // 0x28b4dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28b4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28b4e4: 0x2a240005  slti        $a0, $s1, 0x5
    ctx->pc = 0x28b4e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28b4e8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28B4E8u;
    {
        const bool branch_taken_0x28b4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4E8u;
        // 0x28b4ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4e8) {
            ctx->pc = 0x28B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b4a0;
        }
    }
    ctx->pc = 0x28B4F0u;
    // 0x28b4f0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x28b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x28b4f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b4fc: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x28b4fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x28b500: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x28b500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28b504: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28b508: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x28b508u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x28b50c: 0x2454706c  addiu       $s4, $v0, 0x706C
    ctx->pc = 0x28b50cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28780));
label_28b510:
    // 0x28b510: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x28b510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28b514: 0x26e29c28  addiu       $v0, $s7, -0x63D8
    ctx->pc = 0x28b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941736));
    // 0x28b518: 0x26a59c38  addiu       $a1, $s5, -0x63C8
    ctx->pc = 0x28b518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941752));
    // 0x28b51c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b520: 0x52280a  movz        $a1, $v0, $s2
    ctx->pc = 0x28b520u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x28b524: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28B524u;
    SET_GPR_U32(ctx, 31, 0x28B52Cu);
    ctx->pc = 0x28B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B524u;
    // 0x28b528: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28B524u, 0x28B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B52Cu;
label_28b52c:
    // 0x28b52c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b530: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28B530u;
    SET_GPR_U32(ctx, 31, 0x28B538u);
    ctx->pc = 0x28B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B530u;
    // 0x28b534: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28B530u, 0x28B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B538u;
label_28b538:
    // 0x28b538: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x28b538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x28b53c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b540: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28b540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b544: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x28b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x28b548: 0x2a240008  slti        $a0, $s1, 0x8
    ctx->pc = 0x28b548u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28b54c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28B54Cu;
    {
        const bool branch_taken_0x28b54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B54Cu;
        // 0x28b550: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b54c) {
            ctx->pc = 0x28B510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b510;
        }
    }
    ctx->pc = 0x28B554u;
    // 0x28b554: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28b558: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x28b558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b55c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x28B55Cu;
    {
        const bool branch_taken_0x28b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B55Cu;
        // 0x28b560: 0x12a040  sll         $s4, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b55c) {
            ctx->pc = 0x28B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b490;
        }
    }
    ctx->pc = 0x28B564u;
    // 0x28b564: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28b564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b568: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x28b568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28b56c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x28b56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b570: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x28b570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28b574: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b578: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x28b578u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28b57c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x28b57cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b580: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x28b580u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x28b584: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x28b584u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b588: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x28b588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x28b58c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B58Cu;
        // 0x28b590: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B594u;
    // 0x28b594: 0x0  nop
    ctx->pc = 0x28b594u;
    // NOP
    ctx->pc = 0x28b598u;
}
