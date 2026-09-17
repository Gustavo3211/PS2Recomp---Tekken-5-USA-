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

// Function: sub_00100470
// Address: 0x100470 - 0x100510
void sub_00100470_0x100470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100470_0x100470");
#endif

    switch (ctx->pc) {
        case 0x1004a0u: goto label_1004a0;
        case 0x1004a8u: goto label_1004a8;
        case 0x1004b8u: goto label_1004b8;
        case 0x1004e0u: goto label_1004e0;
        case 0x1004e8u: goto label_1004e8;
        default: break;
    }

    ctx->pc = 0x100470u;

    // 0x100470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100474: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100478: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x100478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10047c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x100480: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100484: 0x8c5283c0  lw          $s2, -0x7C40($v0)
    ctx->pc = 0x100484u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100488: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x100488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10048c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10048cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100490: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x100490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x100494: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x100494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10049c: 0x0  nop
    ctx->pc = 0x10049cu;
    // NOP
label_1004a0:
    // 0x1004a0: 0xc089890  jal         func_226240
    ctx->pc = 0x1004A0u;
    SET_GPR_U32(ctx, 31, 0x1004A8u);
    ctx->pc = 0x1004A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004A0u;
    // 0x1004a4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226240u, 0x1004A0u, 0x1004A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004A8u;
label_1004a8:
    // 0x1004a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1004a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1004acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004b0: 0xc040090  jal         func_100240
    ctx->pc = 0x1004B0u;
    SET_GPR_U32(ctx, 31, 0x1004B8u);
    ctx->pc = 0x1004B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004B0u;
    // 0x1004b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100240u, 0x1004B0u, 0x1004B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004B8u;
label_1004b8:
    // 0x1004b8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1004B8u;
    {
        const bool branch_taken_0x1004b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004b8) {
            ctx->pc = 0x1004BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1004B8u;
            // 0x1004bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1004CCu;
            goto label_1004cc;
        }
    }
    ctx->pc = 0x1004C0u;
    // 0x1004c0: 0x16130003  bne         $s0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1004C0u;
    {
        const bool branch_taken_0x1004c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x1004C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004C0u;
        // 0x1004c4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004c0) {
            ctx->pc = 0x1004D0u;
            goto label_1004d0;
        }
    }
    ctx->pc = 0x1004C8u;
    // 0x1004c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1004cc:
    // 0x1004cc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1004ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1004d0:
    // 0x1004d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1004d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d8: 0xc089280  jal         func_224A00
    ctx->pc = 0x1004D8u;
    SET_GPR_U32(ctx, 31, 0x1004E0u);
    ctx->pc = 0x1004DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004D8u;
    // 0x1004dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224A00u, 0x1004D8u, 0x1004E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004E0u;
label_1004e0:
    // 0x1004e0: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x1004E0u;
    SET_GPR_U32(ctx, 31, 0x1004E8u);
    ctx->pc = 0x1004E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004E0u;
    // 0x1004e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x1004E0u, 0x1004E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004E8u;
label_1004e8:
    // 0x1004e8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1004e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1004ec: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1004ECu;
    {
        const bool branch_taken_0x1004ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1004ec) {
            ctx->pc = 0x1004F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1004ECu;
            // 0x1004f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1004A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1004a0;
        }
    }
    ctx->pc = 0x1004F4u;
    // 0x1004f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1004f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1004f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1004fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1004fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100500: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x100500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x100504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100508: 0x3e00008  jr          $ra
    ctx->pc = 0x100508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100508u;
        // 0x10050c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100510u;
}
