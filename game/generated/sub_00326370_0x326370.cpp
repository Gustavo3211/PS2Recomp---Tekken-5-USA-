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

// Function: sub_00326370
// Address: 0x326370 - 0x3263b0
void sub_00326370_0x326370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326370_0x326370");
#endif

    switch (ctx->pc) {
        case 0x32639cu: goto label_32639c;
        default: break;
    }

    ctx->pc = 0x326370u;

    // 0x326370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326374: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32637c: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x32637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x326380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x326380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326384: 0x24500068  addiu       $s0, $v0, 0x68
    ctx->pc = 0x326384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x326388: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x326388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DC4u));
    // 0x32638c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32638Cu;
    {
        const bool branch_taken_0x32638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x326390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32638Cu;
        // 0x326390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32638c) {
            ctx->pc = 0x32639Cu;
            goto label_32639c;
        }
    }
    ctx->pc = 0x326394u;
    // 0x326394: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x326394u;
    SET_GPR_U32(ctx, 31, 0x32639Cu);
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x326394u, 0x32639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32639Cu;
label_32639c:
    // 0x32639c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x32639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3263a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3263a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3263a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3263a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3263a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3263A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3263ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263A8u;
        // 0x3263ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3263A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3263B0u;
}
