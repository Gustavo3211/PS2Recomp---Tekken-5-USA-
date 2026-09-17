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

// Function: sub_004E9D98
// Address: 0x4e9d98 - 0x4e9e18
void sub_004E9D98_0x4e9d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9D98_0x4e9d98");
#endif

    switch (ctx->pc) {
        case 0x4e9dacu: goto label_4e9dac;
        default: break;
    }

    ctx->pc = 0x4e9d98u;

    // 0x4e9d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e9d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e9d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e9da0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e9da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e9da4: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E9DA4u;
    SET_GPR_U32(ctx, 31, 0x4E9DACu);
    ctx->pc = 0x4E9DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9DA4u;
    // 0x4e9da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E9DA4u, 0x4E9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9DACu;
label_4e9dac:
    // 0x4e9dac: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x4e9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x4e9db0: 0xa44001be  sh          $zero, 0x1BE($v0)
    ctx->pc = 0x4e9db0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e9db4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e9db4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e9db8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4e9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e9dbc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9dc0: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x4e9dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e9dc4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4e9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e9dc8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e9dcc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e9dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9dd0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9dd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e9dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9dd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9ddc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e9de0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4e9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e9de4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e9de4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9de8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9dec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9df0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e9df4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4e9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e9df8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e9df8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e9dfc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9e04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9e08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4e9e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E0Cu;
        // 0x4e9e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9E14u;
    // 0x4e9e14: 0x0  nop
    ctx->pc = 0x4e9e14u;
    // NOP
    ctx->pc = 0x4e9e18u;
}
