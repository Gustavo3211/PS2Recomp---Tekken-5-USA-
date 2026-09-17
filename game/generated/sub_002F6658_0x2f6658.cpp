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

// Function: sub_002F6658
// Address: 0x2f6658 - 0x2f6730
void sub_002F6658_0x2f6658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6658_0x2f6658");
#endif

    switch (ctx->pc) {
        case 0x2f6678u: goto label_2f6678;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f6714u: goto label_2f6714;
        default: break;
    }

    ctx->pc = 0x2f6658u;

    // 0x2f6658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f665c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f665cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f6660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6668: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f6668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f666c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f6670: 0xc0bb8b0  jal         func_2EE2C0
    ctx->pc = 0x2F6670u;
    SET_GPR_U32(ctx, 31, 0x2F6678u);
    ctx->pc = 0x2F6674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6670u;
    // 0x2f6674: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2F6670u, 0x2F6678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6678u;
label_2f6678:
    // 0x2f6678: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x2f6678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f667c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6680: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F6680u;
    {
        const bool branch_taken_0x2f6680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6680u;
        // 0x2f6684: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6680) {
            ctx->pc = 0x2F66C0u;
            goto label_2f66c0;
        }
    }
    ctx->pc = 0x2F6688u;
    // 0x2f6688: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6688u;
    {
        const bool branch_taken_0x2f6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6688) {
            ctx->pc = 0x2F668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6688u;
            // 0x2f668c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F66A0u;
            goto label_2f66a0;
        }
    }
    ctx->pc = 0x2F6690u;
    // 0x2f6690: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6690u;
    {
        const bool branch_taken_0x2f6690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6690u;
        // 0x2f6694: 0x26250140  addiu       $a1, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6690) {
            ctx->pc = 0x2F66B8u;
            goto label_2f66b8;
        }
    }
    ctx->pc = 0x2F6698u;
    // 0x2f6698: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6698u;
    {
        const bool branch_taken_0x2f6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6698u;
        // 0x2f669c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6698) {
            ctx->pc = 0x2F66E8u;
            goto label_2f66e8;
        }
    }
    ctx->pc = 0x2F66A0u;
label_2f66a0:
    // 0x2f66a0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F66A0u;
    {
        const bool branch_taken_0x2f66a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66A0u;
        // 0x2f66a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66a0) {
            ctx->pc = 0x2F66C8u;
            goto label_2f66c8;
        }
    }
    ctx->pc = 0x2F66A8u;
    // 0x2f66a8: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F66A8u;
    {
        const bool branch_taken_0x2f66a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66A8u;
        // 0x2f66ac: 0x26250140  addiu       $a1, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66a8) {
            ctx->pc = 0x2F66D0u;
            goto label_2f66d0;
        }
    }
    ctx->pc = 0x2F66B0u;
    // 0x2f66b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F66B0u;
    {
        const bool branch_taken_0x2f66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B0u;
        // 0x2f66b4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66b0) {
            ctx->pc = 0x2F66E8u;
            goto label_2f66e8;
        }
    }
    ctx->pc = 0x2F66B8u;
label_2f66b8:
    // 0x2f66b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F66B8u;
    {
        const bool branch_taken_0x2f66b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B8u;
        // 0x2f66bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66b8) {
            ctx->pc = 0x2F66E0u;
            goto label_2f66e0;
        }
    }
    ctx->pc = 0x2F66C0u;
label_2f66c0:
    // 0x2f66c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F66C0u;
    {
        const bool branch_taken_0x2f66c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66C0u;
        // 0x2f66c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66c0) {
            ctx->pc = 0x2F66E0u;
            goto label_2f66e0;
        }
    }
    ctx->pc = 0x2F66C8u;
label_2f66c8:
    // 0x2f66c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F66C8u;
    {
        const bool branch_taken_0x2f66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66C8u;
        // 0x2f66cc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66c8) {
            ctx->pc = 0x2F66E0u;
            goto label_2f66e0;
        }
    }
    ctx->pc = 0x2F66D0u;
label_2f66d0:
    // 0x2f66d0: 0x26240158  addiu       $a0, $s1, 0x158
    ctx->pc = 0x2f66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x2f66d4: 0xc0bb8e4  jal         func_2EE390
    ctx->pc = 0x2F66D4u;
    SET_GPR_U32(ctx, 31, 0x2F66DCu);
    ctx->pc = 0x2F66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66D4u;
    // 0x2f66d8: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2F66D4u, 0x2F66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66DCu;
label_2f66dc:
    // 0x2f66dc: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x2f66dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
label_2f66e0:
    // 0x2f66e0: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x2f66e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2f66e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f66e8:
    // 0x2f66e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F66E8u;
    {
        const bool branch_taken_0x2f66e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f66e8) {
            ctx->pc = 0x2F66ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F66E8u;
            // 0x2f66ec: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6704u;
            goto label_2f6704;
        }
    }
    ctx->pc = 0x2F66F0u;
    // 0x2f66f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f66f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f66f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F66F8u;
    {
        const bool branch_taken_0x2f66f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f66f8) {
            ctx->pc = 0x2F670Cu;
            goto label_2f670c;
        }
    }
    ctx->pc = 0x2F6700u;
    // 0x2f6700: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f6700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f6704:
    // 0x2f6704: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6708: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f670c:
    // 0x2f670c: 0xc0bb4b0  jal         func_2ED2C0
    ctx->pc = 0x2F670Cu;
    SET_GPR_U32(ctx, 31, 0x2F6714u);
    ctx->pc = 0x2F6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F670Cu;
    // 0x2f6710: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED2C0u, 0x2F670Cu, 0x2F6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6714u;
label_2f6714:
    // 0x2f6714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f6718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f671c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f671cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6720: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f6720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f6724: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6724u;
        // 0x2f6728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F672Cu;
    // 0x2f672c: 0x0  nop
    ctx->pc = 0x2f672cu;
    // NOP
    ctx->pc = 0x2f6730u;
}
