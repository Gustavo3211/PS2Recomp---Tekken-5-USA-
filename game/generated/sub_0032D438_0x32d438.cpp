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

// Function: sub_0032D438
// Address: 0x32d438 - 0x32d4c8
void sub_0032D438_0x32d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D438_0x32d438");
#endif

    switch (ctx->pc) {
        case 0x32d45cu: goto label_32d45c;
        case 0x32d470u: goto label_32d470;
        case 0x32d4a4u: goto label_32d4a4;
        case 0x32d4b8u: goto label_32d4b8;
        default: break;
    }

    ctx->pc = 0x32d438u;

    // 0x32d438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d43c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d440: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d448: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d44c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d454: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D454u;
    SET_GPR_U32(ctx, 31, 0x32D45Cu);
    ctx->pc = 0x32D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D454u;
    // 0x32d458: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D454u, 0x32D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D45Cu;
label_32d45c:
    // 0x32d45c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D460u;
    {
        const bool branch_taken_0x32d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D460u;
        // 0x32d464: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d460) {
            ctx->pc = 0x32D470u;
            goto label_32d470;
        }
    }
    ctx->pc = 0x32D468u;
    // 0x32d468: 0xc0cafce  jal         func_32BF38
    ctx->pc = 0x32D468u;
    SET_GPR_U32(ctx, 31, 0x32D470u);
    ctx->pc = 0x32BF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BF38u, 0x32D468u, 0x32D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D470u;
label_32d470:
    // 0x32d470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d478: 0x3e00008  jr          $ra
    ctx->pc = 0x32D478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D478u;
        // 0x32d47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D480u;
    // 0x32d480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d484: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d488: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d490: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d494: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d49c: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D49Cu;
    SET_GPR_U32(ctx, 31, 0x32D4A4u);
    ctx->pc = 0x32D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D49Cu;
    // 0x32d4a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D49Cu, 0x32D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4A4u;
label_32d4a4:
    // 0x32d4a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D4A8u;
    {
        const bool branch_taken_0x32d4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4A8u;
        // 0x32d4ac: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4a8) {
            ctx->pc = 0x32D4B8u;
            goto label_32d4b8;
        }
    }
    ctx->pc = 0x32D4B0u;
    // 0x32d4b0: 0xc0caffe  jal         func_32BFF8
    ctx->pc = 0x32D4B0u;
    SET_GPR_U32(ctx, 31, 0x32D4B8u);
    ctx->pc = 0x32BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BFF8u, 0x32D4B0u, 0x32D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4B8u;
label_32d4b8:
    // 0x32d4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d4bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4C0u;
        // 0x32d4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D4C8u;
}
