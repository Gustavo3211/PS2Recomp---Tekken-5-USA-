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

// Function: sub_00111D10
// Address: 0x111d10 - 0x111d98
void sub_00111D10_0x111d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111D10_0x111d10");
#endif

    switch (ctx->pc) {
        case 0x111d3cu: goto label_111d3c;
        case 0x111d60u: goto label_111d60;
        case 0x111d8cu: goto label_111d8c;
        default: break;
    }

    ctx->pc = 0x111d10u;

    // 0x111d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x111d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x111d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111d18: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x111d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x111d1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x111d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111d24: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x111d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x111d28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x111d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111d2c: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x111d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x111d30: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x111d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x111d34: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x111D34u;
    SET_GPR_U32(ctx, 31, 0x111D3Cu);
    ctx->pc = 0x111D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D34u;
    // 0x111d38: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x111D34u, 0x111D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D3Cu;
label_111d3c:
    // 0x111d3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x111d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111d48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x111d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x111d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x111d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d54: 0x3e00008  jr          $ra
    ctx->pc = 0x111D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D54u;
        // 0x111d58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111D5Cu;
    // 0x111d5c: 0x0  nop
    ctx->pc = 0x111d5cu;
    // NOP
label_111d60:
    // 0x111d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111d64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x111d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d68: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111d6c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x111d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x111d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d74: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x111d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x111d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111d7c: 0x24841c68  addiu       $a0, $a0, 0x1C68
    ctx->pc = 0x111d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7272));
    // 0x111d80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x111d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d84: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x111D84u;
    SET_GPR_U32(ctx, 31, 0x111D8Cu);
    ctx->pc = 0x111D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D84u;
    // 0x111d88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x111D84u, 0x111D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D8Cu;
label_111d8c:
    // 0x111d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111d90: 0x3e00008  jr          $ra
    ctx->pc = 0x111D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D90u;
        // 0x111d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111D98u;
}
