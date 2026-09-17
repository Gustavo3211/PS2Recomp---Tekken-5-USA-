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

// Function: sub_0022FD88
// Address: 0x22fd88 - 0x22fe08
void sub_0022FD88_0x22fd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FD88_0x22fd88");
#endif

    switch (ctx->pc) {
        case 0x22fdb8u: goto label_22fdb8;
        case 0x22fddcu: goto label_22fddc;
        default: break;
    }

    ctx->pc = 0x22fd88u;

    // 0x22fd88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22fd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22fd8c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22fd90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22fd94: 0x2452b2e8  addiu       $s2, $v0, -0x4D18
    ctx->pc = 0x22fd94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947560));
    // 0x22fd98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22fd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fda0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22fda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fda4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22fda8: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x22fda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x22fdac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22fdb0: 0x24130e54  addiu       $s3, $zero, 0xE54
    ctx->pc = 0x22fdb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3668));
    // 0x22fdb4: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x22fdb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22fdb8:
    // 0x22fdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdbc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x22fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22fdc0: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x22fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22fdc4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22fdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdc8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x22fdcc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x22fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x22fdd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22fdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22fdd4: 0xc08befa  jal         func_22FBE8
    ctx->pc = 0x22FDD4u;
    SET_GPR_U32(ctx, 31, 0x22FDDCu);
    ctx->pc = 0x22FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDD4u;
    // 0x22fdd8: 0xaca00050  sw          $zero, 0x50($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBE8u, 0x22FDD4u, 0x22FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDDCu;
label_22fddc:
    // 0x22fddc: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x22fddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22fde0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x22FDE0u;
    {
        const bool branch_taken_0x22fde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fde0) {
            ctx->pc = 0x22FDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FDE0u;
            // 0x22fde4: 0x2131018  mult        $v0, $s0, $s3 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fdb8;
        }
    }
    ctx->pc = 0x22FDE8u;
    // 0x22fde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fdec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fdf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22fdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fdf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22fdf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22fdf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22fdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22FDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDFCu;
        // 0x22fe00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FE04u;
    // 0x22fe04: 0x0  nop
    ctx->pc = 0x22fe04u;
    // NOP
    ctx->pc = 0x22fe08u;
}
