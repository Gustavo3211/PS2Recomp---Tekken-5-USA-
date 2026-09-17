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

// Function: sub_004A9C00
// Address: 0x4a9c00 - 0x4a9c70
void sub_004A9C00_0x4a9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9C00_0x4a9c00");
#endif

    switch (ctx->pc) {
        case 0x4a9c48u: goto label_4a9c48;
        default: break;
    }

    ctx->pc = 0x4a9c00u;

    // 0x4a9c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a9c04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a9c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a9c08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a9c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a9c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a9c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a9c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a9c18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9c20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a9c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a9c24: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x4a9c24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9c28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a9c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a9c2c: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4a9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a9c30: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a9c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9c34: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a9c34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a9c38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a9c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a9c3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a9c40: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A9C40u;
    SET_GPR_U32(ctx, 31, 0x4A9C48u);
    ctx->pc = 0x4A9C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9C40u;
    // 0x4a9c44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A9C40u, 0x4A9C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9C48u;
label_4a9c48:
    // 0x4a9c48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9c4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a9c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a9c50: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x4a9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x4a9c54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a9c58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a9c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9c5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a9c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a9c60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a9c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9c64: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9C64u;
        // 0x4a9c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9C6Cu;
    // 0x4a9c6c: 0x0  nop
    ctx->pc = 0x4a9c6cu;
    // NOP
    ctx->pc = 0x4a9c70u;
}
