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

// Function: sub_0048CDE8
// Address: 0x48cde8 - 0x48ce48
void sub_0048CDE8_0x48cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CDE8_0x48cde8");
#endif

    switch (ctx->pc) {
        case 0x48ce18u: goto label_48ce18;
        default: break;
    }

    ctx->pc = 0x48cde8u;

    // 0x48cde8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48cde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48cdec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48cdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48cdf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48cdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cdf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48cdf8: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x48cdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48cdfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48ce00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48ce04: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x48ce04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48ce08: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x48ce08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48ce0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48ce10: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x48CE10u;
    SET_GPR_U32(ctx, 31, 0x48CE18u);
    ctx->pc = 0x48CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CE10u;
    // 0x48ce14: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x48CE10u, 0x48CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CE18u;
label_48ce18:
    // 0x48ce18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48ce18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ce1c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ce20: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x48ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x48ce24: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x48ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x48ce28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48ce28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48ce2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48ce2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ce30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48ce30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ce34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48ce34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48ce38: 0xa440d710  sh          $zero, -0x28F0($v0)
    ctx->pc = 0x48ce38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D710u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D710u, _value); } while (0);
    // 0x48ce3c: 0x3e00008  jr          $ra
    ctx->pc = 0x48CE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CE3Cu;
        // 0x48ce40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CE44u;
    // 0x48ce44: 0x0  nop
    ctx->pc = 0x48ce44u;
    // NOP
    ctx->pc = 0x48ce48u;
}
