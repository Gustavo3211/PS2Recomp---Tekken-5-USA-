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

// Function: sub_0034BCF8
// Address: 0x34bcf8 - 0x34bd38
void sub_0034BCF8_0x34bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BCF8_0x34bcf8");
#endif

    ctx->pc = 0x34bcf8u;

    // 0x34bcf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bcfc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34bcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34bd00: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bd00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd04: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34bd08: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34bd0c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34bd10: 0x2442b180  addiu       $v0, $v0, -0x4E80
    ctx->pc = 0x34bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x34bd14: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34bd18: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bd1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34bd20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34bd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd24: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bd24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd28: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34bd28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bd2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34bd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34bd30: 0x3e00008  jr          $ra
    ctx->pc = 0x34BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BD38u;
}
