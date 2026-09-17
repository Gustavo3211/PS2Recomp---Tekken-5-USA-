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

// Function: sub_002E4C00
// Address: 0x2e4c00 - 0x2e4c88
void sub_002E4C00_0x2e4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C00_0x2e4c00");
#endif

    switch (ctx->pc) {
        case 0x2e4c20u: goto label_2e4c20;
        case 0x2e4c30u: goto label_2e4c30;
        case 0x2e4c48u: goto label_2e4c48;
        case 0x2e4c5cu: goto label_2e4c5c;
        default: break;
    }

    ctx->pc = 0x2e4c00u;

    // 0x2e4c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4c08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4c10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e4c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e4c14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e4c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e4c18: 0xc094b1c  jal         func_252C70
    ctx->pc = 0x2E4C18u;
    SET_GPR_U32(ctx, 31, 0x2E4C20u);
    ctx->pc = 0x2E4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C18u;
    // 0x2e4c1c: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C70u, 0x2E4C18u, 0x2E4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C20u;
label_2e4c20:
    // 0x2e4c20: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e4c24: 0x245288d0  addiu       $s2, $v0, -0x7730
    ctx->pc = 0x2e4c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2e4c28: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2e4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2e4c2c: 0x0  nop
    ctx->pc = 0x2e4c2cu;
    // NOP
label_2e4c30:
    // 0x2e4c30: 0x2111804  sllv        $v1, $s1, $s0
    ctx->pc = 0x2e4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x2e4c34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4c38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4C38u;
    {
        const bool branch_taken_0x2e4c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c38) {
            ctx->pc = 0x2E4C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4C38u;
            // 0x2e4c3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C60u;
            goto label_2e4c60;
        }
    }
    ctx->pc = 0x2E4C40u;
    // 0x2e4c40: 0xc08b8bc  jal         func_22E2F0
    ctx->pc = 0x2E4C40u;
    SET_GPR_U32(ctx, 31, 0x2E4C48u);
    ctx->pc = 0x2E4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C40u;
    // 0x2e4c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2F0u, 0x2E4C40u, 0x2E4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C48u;
label_2e4c48:
    // 0x2e4c48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e4c4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4C4Cu;
    {
        const bool branch_taken_0x2e4c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C4Cu;
        // 0x2e4c50: 0x721821  addu        $v1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c4c) {
            ctx->pc = 0x2E4C5Cu;
            goto label_2e4c5c;
        }
    }
    ctx->pc = 0x2E4C54u;
    // 0x2e4c54: 0xc096136  jal         func_2584D8
    ctx->pc = 0x2E4C54u;
    SET_GPR_U32(ctx, 31, 0x2E4C5Cu);
    ctx->pc = 0x2E4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C54u;
    // 0x2e4c58: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2584D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2584D8u, 0x2E4C54u, 0x2E4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C5Cu;
label_2e4c5c:
    // 0x2e4c5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e4c60:
    // 0x2e4c60: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2e4c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e4c64: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E4C64u;
    {
        const bool branch_taken_0x2e4c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c64) {
            ctx->pc = 0x2E4C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4C64u;
            // 0x2e4c68: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4c30;
        }
    }
    ctx->pc = 0x2E4C6Cu;
    // 0x2e4c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4c78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e4c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C7Cu;
        // 0x2e4c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C84u;
    // 0x2e4c84: 0x0  nop
    ctx->pc = 0x2e4c84u;
    // NOP
    ctx->pc = 0x2e4c88u;
}
