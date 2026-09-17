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

// Function: sub_0023F440
// Address: 0x23f440 - 0x23f4b8
void sub_0023F440_0x23f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F440_0x23f440");
#endif

    switch (ctx->pc) {
        case 0x23f474u: goto label_23f474;
        case 0x23f48cu: goto label_23f48c;
        default: break;
    }

    ctx->pc = 0x23f440u;

    // 0x23f440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f44c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f450: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23f454: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23F454u;
    {
        const bool branch_taken_0x23f454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F454u;
        // 0x23f458: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f454) {
            ctx->pc = 0x23F490u;
            goto label_23f490;
        }
    }
    ctx->pc = 0x23F45Cu;
    // 0x23f45c: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x23f460: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x23f460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x23f464: 0x261035b0  addiu       $s0, $s0, 0x35B0
    ctx->pc = 0x23f464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13744));
    // 0x23f468: 0x24a5b700  addiu       $a1, $a1, -0x4900
    ctx->pc = 0x23f468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
    // 0x23f46c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x23F46Cu;
    SET_GPR_U32(ctx, 31, 0x23F474u);
    ctx->pc = 0x23F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F46Cu;
    // 0x23f470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x23F46Cu, 0x23F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F474u;
label_23f474:
    // 0x23f474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23f478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f47c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f480: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23f484: 0xc0d2f8e  jal         func_34BE38
    ctx->pc = 0x23F484u;
    SET_GPR_U32(ctx, 31, 0x23F48Cu);
    ctx->pc = 0x23F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F484u;
    // 0x23f488: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x23F484u, 0x23F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F48Cu;
label_23f48c:
    // 0x23f48c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23f48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f490:
    // 0x23f490: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23f490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x23f494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f498: 0x24843580  addiu       $a0, $a0, 0x3580
    ctx->pc = 0x23f498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13696));
    // 0x23f49c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f4a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x16358Cu));
    // 0x23f4a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23f4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f4ac: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x23f4acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x16358Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16358Cu, _value); } while (0);
    // 0x23f4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4B0u;
        // 0x23f4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F4B8u;
}
