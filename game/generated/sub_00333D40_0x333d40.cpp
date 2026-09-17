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

// Function: sub_00333D40
// Address: 0x333d40 - 0x333d98
void sub_00333D40_0x333d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333D40_0x333d40");
#endif

    switch (ctx->pc) {
        case 0x333d7cu: goto label_333d7c;
        case 0x333d84u: goto label_333d84;
        default: break;
    }

    ctx->pc = 0x333d40u;

    // 0x333d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x333d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x333d50: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x333d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x333d54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x333d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x333d58: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x333d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x333d5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333d60: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x333d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x333d64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x333d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333d68: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x333d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x333d6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x333d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333d70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x333d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x333d74: 0xc0ccf76  jal         func_333DD8
    ctx->pc = 0x333D74u;
    SET_GPR_U32(ctx, 31, 0x333D7Cu);
    ctx->pc = 0x333D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D74u;
    // 0x333d78: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333DD8u, 0x333D74u, 0x333D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D7Cu;
label_333d7c:
    // 0x333d7c: 0xc0ccffe  jal         func_333FF8
    ctx->pc = 0x333D7Cu;
    SET_GPR_U32(ctx, 31, 0x333D84u);
    ctx->pc = 0x333D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D7Cu;
    // 0x333d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FF8u, 0x333D7Cu, 0x333D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D84u;
label_333d84:
    // 0x333d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x333d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x333D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D8Cu;
        // 0x333d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333D94u;
    // 0x333d94: 0x0  nop
    ctx->pc = 0x333d94u;
    // NOP
    ctx->pc = 0x333d98u;
}
