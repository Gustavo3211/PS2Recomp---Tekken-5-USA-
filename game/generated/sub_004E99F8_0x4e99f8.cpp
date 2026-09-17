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

// Function: sub_004E99F8
// Address: 0x4e99f8 - 0x4e9a78
void sub_004E99F8_0x4e99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E99F8_0x4e99f8");
#endif

    switch (ctx->pc) {
        case 0x4e9a0cu: goto label_4e9a0c;
        default: break;
    }

    ctx->pc = 0x4e99f8u;

    // 0x4e99f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e99f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e99fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e99fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e9a00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e9a04: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E9A04u;
    SET_GPR_U32(ctx, 31, 0x4E9A0Cu);
    ctx->pc = 0x4E9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9A04u;
    // 0x4e9a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E9A04u, 0x4E9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9A0Cu;
label_4e9a0c:
    // 0x4e9a0c: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x4e9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x4e9a10: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e9a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e9a14: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e9a14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e9a18: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4e9a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e9a1c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9a20: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x4e9a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e9a24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4e9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e9a28: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4e9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e9a2c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e9a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9a30: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9a34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e9a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9a38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9a3c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e9a40: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4e9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e9a44: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e9a44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9a48: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9a4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9a50: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e9a54: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4e9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e9a58: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e9a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e9a5c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9a64: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9a68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4e9a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A6Cu;
        // 0x4e9a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9A74u;
    // 0x4e9a74: 0x0  nop
    ctx->pc = 0x4e9a74u;
    // NOP
    ctx->pc = 0x4e9a78u;
}
