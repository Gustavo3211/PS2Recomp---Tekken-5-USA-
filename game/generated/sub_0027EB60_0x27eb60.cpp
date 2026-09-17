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

// Function: sub_0027EB60
// Address: 0x27eb60 - 0x27ebe8
void sub_0027EB60_0x27eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EB60_0x27eb60");
#endif

    switch (ctx->pc) {
        case 0x27eb98u: goto label_27eb98;
        case 0x27ebb0u: goto label_27ebb0;
        default: break;
    }

    ctx->pc = 0x27eb60u;

    // 0x27eb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27eb64: 0x24030141  addiu       $v1, $zero, 0x141
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x27eb68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27eb6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27eb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27eb74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27eb74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27eb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27eb7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27eb80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27eb84: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x27eb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27eb88: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27eb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27eb8c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27EB8Cu;
    {
        const bool branch_taken_0x27eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB8Cu;
        // 0x27eb90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb8c) {
            ctx->pc = 0x27EBC8u;
            goto label_27ebc8;
        }
    }
    ctx->pc = 0x27EB94u;
    // 0x27eb94: 0x24130141  addiu       $s3, $zero, 0x141
    ctx->pc = 0x27eb94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
label_27eb98:
    // 0x27eb98: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27EB98u;
    {
        const bool branch_taken_0x27eb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB98u;
        // 0x27eb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb98) {
            ctx->pc = 0x27EBB4u;
            goto label_27ebb4;
        }
    }
    ctx->pc = 0x27EBA0u;
    // 0x27eba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27eba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eba8: 0xc080b98  jal         func_202E60
    ctx->pc = 0x27EBA8u;
    SET_GPR_U32(ctx, 31, 0x27EBB0u);
    ctx->pc = 0x27EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EBA8u;
    // 0x27ebac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E60u, 0x27EBA8u, 0x27EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBB0u;
label_27ebb0:
    // 0x27ebb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27ebb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27ebb4:
    // 0x27ebb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27ebb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27ebb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebbc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ebc0: 0x1453fff5  bne         $v0, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x27EBC0u;
    {
        const bool branch_taken_0x27ebc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x27ebc0) {
            ctx->pc = 0x27EB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eb98;
        }
    }
    ctx->pc = 0x27EBC8u;
label_27ebc8:
    // 0x27ebc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ebc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ebcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27ebccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27ebd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ebd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27ebd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ebd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27ebd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27ebdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ebe0: 0x3e00008  jr          $ra
    ctx->pc = 0x27EBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBE0u;
        // 0x27ebe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EBE8u;
}
