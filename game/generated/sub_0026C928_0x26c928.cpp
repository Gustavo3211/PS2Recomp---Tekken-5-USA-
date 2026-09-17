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

// Function: sub_0026C928
// Address: 0x26c928 - 0x26c9a0
void sub_0026C928_0x26c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C928_0x26c928");
#endif

    switch (ctx->pc) {
        case 0x26c970u: goto label_26c970;
        default: break;
    }

    ctx->pc = 0x26c928u;

    // 0x26c928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c92c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c934: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x26c934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26c938: 0x94850010  lhu         $a1, 0x10($a0)
    ctx->pc = 0x26c938u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c93c: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C93Cu;
    {
        const bool branch_taken_0x26c93c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C93Cu;
        // 0x26c940: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c93c) {
            ctx->pc = 0x26C974u;
            goto label_26c974;
        }
    }
    ctx->pc = 0x26C944u;
    // 0x26c944: 0x94860012  lhu         $a2, 0x12($a0)
    ctx->pc = 0x26c944u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x26c948: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x26c948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26c94c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x26c94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x26c950: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C950u;
    {
        const bool branch_taken_0x26c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c950) {
            ctx->pc = 0x26C954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C950u;
            // 0x26c954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C978u;
            goto label_26c978;
        }
    }
    ctx->pc = 0x26C958u;
    // 0x26c958: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C958u;
    {
        const bool branch_taken_0x26c958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C958u;
        // 0x26c95c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c958) {
            ctx->pc = 0x26C974u;
            goto label_26c974;
        }
    }
    ctx->pc = 0x26C960u;
    // 0x26c960: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C960u;
    {
        const bool branch_taken_0x26c960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c960) {
            ctx->pc = 0x26C964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C960u;
            // 0x26c964: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C978u;
            goto label_26c978;
        }
    }
    ctx->pc = 0x26C968u;
    // 0x26c968: 0xc09b27c  jal         func_26C9F0
    ctx->pc = 0x26C968u;
    SET_GPR_U32(ctx, 31, 0x26C970u);
    ctx->pc = 0x26C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C9F0u, 0x26C968u, 0x26C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C970u;
label_26c970:
    // 0x26c970: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x26c970u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c974:
    // 0x26c974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c978:
    // 0x26c978: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x26c978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c97c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C97Cu;
        // 0x26c980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C984u;
    // 0x26c984: 0x0  nop
    ctx->pc = 0x26c984u;
    // NOP
    // 0x26c988: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26c98c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x26c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26c990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c994: 0x3e00008  jr          $ra
    ctx->pc = 0x26C994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C994u;
        // 0x26c998: 0x30421400  andi        $v0, $v0, 0x1400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5120);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C99Cu;
    // 0x26c99c: 0x0  nop
    ctx->pc = 0x26c99cu;
    // NOP
    ctx->pc = 0x26c9a0u;
}
