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

// Function: sub_00508830
// Address: 0x508830 - 0x5088a8
void sub_00508830_0x508830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00508830_0x508830");
#endif

    switch (ctx->pc) {
        case 0x50887cu: goto label_50887c;
        default: break;
    }

    ctx->pc = 0x508830u;

    // 0x508830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x508834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x508834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x508838: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x508838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x50883c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x508840: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x508840u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x508844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x508844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x508848: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x508848u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x50884c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x508850: 0x2631c5ac  addiu       $s1, $s1, -0x3A54
    ctx->pc = 0x508850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952364));
    // 0x508854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x508858: 0x2652c5b0  addiu       $s2, $s2, -0x3A50
    ctx->pc = 0x508858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952368));
    // 0x50885c: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x50885cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x508860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x508860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5ACu));
    // 0x508864: 0x26130054  addiu       $s3, $s0, 0x54
    ctx->pc = 0x508864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x508868: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x508868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC5B0u));
    // 0x50886c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x50886cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x508870: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x508874: 0xc142162  jal         func_508588
    ctx->pc = 0x508874u;
    SET_GPR_U32(ctx, 31, 0x50887Cu);
    ctx->pc = 0x508878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508874u;
    // 0x508878: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508588u, 0x508874u, 0x50887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50887Cu;
label_50887c:
    // 0x50887c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508880: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x508880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x508884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508888: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x508888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50888c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50888cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x508890: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x508890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x508894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x508894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x508898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50889c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5088a0: 0x3e00008  jr          $ra
    ctx->pc = 0x5088A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5088A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5088A0u;
        // 0x5088a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5088A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5088A8u;
}
