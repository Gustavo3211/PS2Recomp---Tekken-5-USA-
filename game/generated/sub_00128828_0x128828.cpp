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

// Function: sub_00128828
// Address: 0x128828 - 0x128880
void sub_00128828_0x128828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128828_0x128828");
#endif

    switch (ctx->pc) {
        case 0x128850u: goto label_128850;
        default: break;
    }

    ctx->pc = 0x128828u;

    // 0x128828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12882c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x128830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12883c: 0x24515578  addiu       $s1, $v0, 0x5578
    ctx->pc = 0x12883cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21880));
    // 0x128840: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128848: 0xc043ea8  jal         func_10FAA0
    ctx->pc = 0x128848u;
    SET_GPR_U32(ctx, 31, 0x128850u);
    ctx->pc = 0x12884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128848u;
    // 0x12884c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAA0u, 0x128848u, 0x128850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128850u;
label_128850:
    // 0x128850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128854: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x128854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128858: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128858u;
    {
        const bool branch_taken_0x128858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128858) {
            ctx->pc = 0x12885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128858u;
            // 0x12885c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128870u;
            goto label_128870;
        }
    }
    ctx->pc = 0x128860u;
    // 0x128860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128864: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128864u;
    {
        const bool branch_taken_0x128864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128864) {
            ctx->pc = 0x128868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128864u;
            // 0x128868: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12886Cu;
            goto label_12886c;
        }
    }
    ctx->pc = 0x12886Cu;
label_12886c:
    // 0x12886c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12886cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128870:
    // 0x128870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128878: 0x3e00008  jr          $ra
    ctx->pc = 0x128878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128878u;
        // 0x12887c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128880u;
}
