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

// Function: sub_00333CE0
// Address: 0x333ce0 - 0x333d40
void sub_00333CE0_0x333ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333CE0_0x333ce0");
#endif

    switch (ctx->pc) {
        case 0x333d24u: goto label_333d24;
        case 0x333d2cu: goto label_333d2c;
        default: break;
    }

    ctx->pc = 0x333ce0u;

    // 0x333ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x333cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x333cf0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x333cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x333cf4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x333cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x333cf8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x333cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x333cfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x333cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x333d00: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x333d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x333d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333d08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x333d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x333d0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x333d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333d10: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x333d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x333d14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x333d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333d18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x333d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x333d1c: 0xc0ccf76  jal         func_333DD8
    ctx->pc = 0x333D1Cu;
    SET_GPR_U32(ctx, 31, 0x333D24u);
    ctx->pc = 0x333D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D1Cu;
    // 0x333d20: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333DD8u, 0x333D1Cu, 0x333D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D24u;
label_333d24:
    // 0x333d24: 0xc0ccffe  jal         func_333FF8
    ctx->pc = 0x333D24u;
    SET_GPR_U32(ctx, 31, 0x333D2Cu);
    ctx->pc = 0x333D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D24u;
    // 0x333d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FF8u, 0x333D24u, 0x333D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D2Cu;
label_333d2c:
    // 0x333d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333d30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x333d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333d34: 0x3e00008  jr          $ra
    ctx->pc = 0x333D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D34u;
        // 0x333d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333D3Cu;
    // 0x333d3c: 0x0  nop
    ctx->pc = 0x333d3cu;
    // NOP
    ctx->pc = 0x333d40u;
}
