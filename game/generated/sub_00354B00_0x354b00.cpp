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

// Function: sub_00354B00
// Address: 0x354b00 - 0x354b50
void sub_00354B00_0x354b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354B00_0x354b00");
#endif

    switch (ctx->pc) {
        case 0x354b34u: goto label_354b34;
        default: break;
    }

    ctx->pc = 0x354b00u;

    // 0x354b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354b04: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354b08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x354b0c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354b0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b10: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354b10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x354b14: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x354b14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x354b18: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354b1c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x354b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x354b20: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x354b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b28: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x354b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x354b2c: 0xc0d530e  jal         func_354C38
    ctx->pc = 0x354B2Cu;
    SET_GPR_U32(ctx, 31, 0x354B34u);
    ctx->pc = 0x354C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C38u, 0x354B2Cu, 0x354B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B34u;
label_354b34:
    // 0x354b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b38: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354b38u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b3c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354b3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354b40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354b44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354b48: 0x3e00008  jr          $ra
    ctx->pc = 0x354B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354B50u;
}
