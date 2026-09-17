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

// Function: sub_004F9C68
// Address: 0x4f9c68 - 0x4f9cc8
void sub_004F9C68_0x4f9c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9C68_0x4f9c68");
#endif

    switch (ctx->pc) {
        case 0x4f9c80u: goto label_4f9c80;
        default: break;
    }

    ctx->pc = 0x4f9c68u;

    // 0x4f9c68: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4f9c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4f9c6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9c70: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x4f9c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x4f9c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f9c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f9c78: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x4F9C78u;
    SET_GPR_U32(ctx, 31, 0x4F9C80u);
    ctx->pc = 0x4F9C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9C78u;
    // 0x4f9c7c: 0x24841380  addiu       $a0, $a0, 0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x4F9C78u, 0x4F9C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9C80u;
label_4f9c80:
    // 0x4f9c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f9c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9c84: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f9c88: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x4f9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x4f9c8c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4f9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4f9c90: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x4f9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x4f9c94: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x4f9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4f9c98: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x4f9c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4f9c9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4f9c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f9ca0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4f9ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f9ca4: 0xa44400a0  sh          $a0, 0xA0($v0)
    ctx->pc = 0x4f9ca4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72D720u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D720u, _value); } while (0);
    // 0x4f9ca8: 0xa44500a2  sh          $a1, 0xA2($v0)
    ctx->pc = 0x4f9ca8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72D722u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D722u, _value); } while (0);
    // 0x4f9cac: 0xa44000a6  sh          $zero, 0xA6($v0)
    ctx->pc = 0x4f9cacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D726u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D726u, _value); } while (0);
    // 0x4f9cb0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x4f9cb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x831388u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x831388u, _value); } while (0);
    // 0x4f9cb4: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x4f9cb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x831389u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x831389u, _value); } while (0);
    // 0x4f9cb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x4f9cb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83138Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x83138Au, _value); } while (0);
    // 0x4f9cbc: 0xa44000a4  sh          $zero, 0xA4($v0)
    ctx->pc = 0x4f9cbcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D724u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D724u, _value); } while (0);
    // 0x4f9cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9CC0u;
        // 0x4f9cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9CC8u;
}
