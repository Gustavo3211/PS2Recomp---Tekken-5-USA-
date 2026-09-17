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

// Function: sub_0022C3E8
// Address: 0x22c3e8 - 0x22c448
void sub_0022C3E8_0x22c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C3E8_0x22c3e8");
#endif

    switch (ctx->pc) {
        case 0x22c40cu: goto label_22c40c;
        case 0x22c428u: goto label_22c428;
        default: break;
    }

    ctx->pc = 0x22c3e8u;

    // 0x22c3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c3f0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22c3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c3f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22c3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22c400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22c404: 0xc08b018  jal         func_22C060
    ctx->pc = 0x22C404u;
    SET_GPR_U32(ctx, 31, 0x22C40Cu);
    ctx->pc = 0x22C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C404u;
    // 0x22c408: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C060u, 0x22C404u, 0x22C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C40Cu;
label_22c40c:
    // 0x22c40c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22c410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22c414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c418: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C418u;
    {
        const bool branch_taken_0x22c418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C418u;
        // 0x22c41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c418) {
            ctx->pc = 0x22C428u;
            goto label_22c428;
        }
    }
    ctx->pc = 0x22C420u;
    // 0x22c420: 0xc08b092  jal         func_22C248
    ctx->pc = 0x22C420u;
    SET_GPR_U32(ctx, 31, 0x22C428u);
    ctx->pc = 0x22C248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C248u, 0x22C420u, 0x22C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C428u;
label_22c428:
    // 0x22c428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c430: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x22c430u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c43c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22c43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c440: 0x3e00008  jr          $ra
    ctx->pc = 0x22C440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C440u;
        // 0x22c444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C448u;
}
