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

// Function: sub_001F64A8
// Address: 0x1f64a8 - 0x1f6518
void sub_001F64A8_0x1f64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F64A8_0x1f64a8");
#endif

    switch (ctx->pc) {
        case 0x1f64c8u: goto label_1f64c8;
        case 0x1f64d0u: goto label_1f64d0;
        case 0x1f64e0u: goto label_1f64e0;
        case 0x1f64f0u: goto label_1f64f0;
        default: break;
    }

    ctx->pc = 0x1f64a8u;

    // 0x1f64a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f64a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f64ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f64acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f64b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f64b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f64b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f64b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f64bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f64bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f64c0: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F64C0u;
    SET_GPR_U32(ctx, 31, 0x1F64C8u);
    ctx->pc = 0x1F64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64C0u;
    // 0x1f64c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F64C0u, 0x1F64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64C8u;
label_1f64c8:
    // 0x1f64c8: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F64C8u;
    SET_GPR_U32(ctx, 31, 0x1F64D0u);
    ctx->pc = 0x1F64CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64C8u;
    // 0x1f64cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F64C8u, 0x1F64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64D0u;
label_1f64d0:
    // 0x1f64d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f64d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64d4: 0x5a20000a  blezl       $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F64D4u;
    {
        const bool branch_taken_0x1f64d4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1f64d4) {
            ctx->pc = 0x1F64D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F64D4u;
            // 0x1f64d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6500u;
            goto label_1f6500;
        }
    }
    ctx->pc = 0x1F64DCu;
    // 0x1f64dc: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x1f64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1f64e0:
    // 0x1f64e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f64e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f64e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f64e8: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F64E8u;
    SET_GPR_U32(ctx, 31, 0x1F64F0u);
    ctx->pc = 0x1F64ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64E8u;
    // 0x1f64ec: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F64E8u, 0x1F64F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64F0u;
label_1f64f0:
    // 0x1f64f0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1f64f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f64f4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F64F4u;
    {
        const bool branch_taken_0x1f64f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f64f4) {
            ctx->pc = 0x1F64F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F64F4u;
            // 0x1f64f8: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F64E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f64e0;
        }
    }
    ctx->pc = 0x1F64FCu;
    // 0x1f64fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f64fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6500:
    // 0x1f6500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6508: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f6508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f650c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F650Cu;
        // 0x1f6510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6514u;
    // 0x1f6514: 0x0  nop
    ctx->pc = 0x1f6514u;
    // NOP
    ctx->pc = 0x1f6518u;
}
