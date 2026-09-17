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

// Function: sub_0023CC10
// Address: 0x23cc10 - 0x23cc70
void sub_0023CC10_0x23cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CC10_0x23cc10");
#endif

    switch (ctx->pc) {
        case 0x23cc4cu: goto label_23cc4c;
        default: break;
    }

    ctx->pc = 0x23cc10u;

    // 0x23cc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cc14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x23cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x23cc18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cc1c: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x23cc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x23cc20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23cc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23cc24: 0x26318858  addiu       $s1, $s1, -0x77A8
    ctx->pc = 0x23cc24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x23cc28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cc2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x23cc30: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x23cc30u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A8858u));
    // 0x23cc34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x23cc38: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x23cc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23cc3c: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23cc40: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23cc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23cc44: 0xc04a1ea  jal         func_1287A8
    ctx->pc = 0x23CC44u;
    SET_GPR_U32(ctx, 31, 0x23CC4Cu);
    ctx->pc = 0x23CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC44u;
    // 0x23cc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287A8u, 0x23CC44u, 0x23CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC4Cu;
label_23cc4c:
    // 0x23cc4c: 0x24023039  addiu       $v0, $zero, 0x3039
    ctx->pc = 0x23cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12345));
    // 0x23cc50: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x23cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
    // 0x23cc54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x23cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x23cc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cc5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cc60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x23CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC64u;
        // 0x23cc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CC6Cu;
    // 0x23cc6c: 0x0  nop
    ctx->pc = 0x23cc6cu;
    // NOP
    ctx->pc = 0x23cc70u;
}
