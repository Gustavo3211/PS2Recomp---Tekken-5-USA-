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

// Function: sub_00219368
// Address: 0x219368 - 0x2193c8
void sub_00219368_0x219368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219368_0x219368");
#endif

    switch (ctx->pc) {
        case 0x2193a0u: goto label_2193a0;
        default: break;
    }

    ctx->pc = 0x219368u;

    // 0x219368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21936c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219374: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219378: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x219378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21937c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x219380: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x219380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x219384: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219384u;
    {
        const bool branch_taken_0x219384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219384u;
        // 0x219388: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219384) {
            ctx->pc = 0x219398u;
            goto label_219398;
        }
    }
    ctx->pc = 0x21938Cu;
    // 0x21938c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x219390: 0x244267f0  addiu       $v0, $v0, 0x67F0
    ctx->pc = 0x219390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26608));
    // 0x219394: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x219394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_219398:
    // 0x219398: 0xc0864fc  jal         func_2193F0
    ctx->pc = 0x219398u;
    SET_GPR_U32(ctx, 31, 0x2193A0u);
    ctx->pc = 0x2193F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2193F0u, 0x219398u, 0x2193A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193A0u;
label_2193a0:
    // 0x2193a0: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x2193a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2193a4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2193a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2193a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2193a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2193acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2193b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2193b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2193b4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2193b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2193b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2193b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2193bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2193BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2193C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193BCu;
        // 0x2193c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2193BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2193C4u;
    // 0x2193c4: 0x0  nop
    ctx->pc = 0x2193c4u;
    // NOP
    ctx->pc = 0x2193c8u;
}
