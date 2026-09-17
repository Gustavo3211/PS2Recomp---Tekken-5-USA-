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

// Function: sub_0023F3D0
// Address: 0x23f3d0 - 0x23f440
void sub_0023F3D0_0x23f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F3D0_0x23f3d0");
#endif

    switch (ctx->pc) {
        case 0x23f40cu: goto label_23f40c;
        case 0x23f41cu: goto label_23f41c;
        default: break;
    }

    ctx->pc = 0x23f3d0u;

    // 0x23f3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f3d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f3dc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x23f3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f3ec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x23f3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23f3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23f3fc: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F3FCu;
    {
        const bool branch_taken_0x23f3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3FCu;
        // 0x23f400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3fc) {
            ctx->pc = 0x23F420u;
            goto label_23f420;
        }
    }
    ctx->pc = 0x23F404u;
    // 0x23f404: 0xc0d3031  jal         func_34C0C4
    ctx->pc = 0x23F404u;
    SET_GPR_U32(ctx, 31, 0x23F40Cu);
    ctx->pc = 0x23F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F404u;
    // 0x23f408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x23F404u, 0x23F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F40Cu;
label_23f40c:
    // 0x23f40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f414: 0xc0d2fed  jal         func_34BFB4
    ctx->pc = 0x23F414u;
    SET_GPR_U32(ctx, 31, 0x23F41Cu);
    ctx->pc = 0x23F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F414u;
    // 0x23f418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFB4u, 0x23F414u, 0x23F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F41Cu;
label_23f41c:
    // 0x23f41c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f41cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f420:
    // 0x23f420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f424: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23f424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f42c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f430: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23f430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f434: 0x3e00008  jr          $ra
    ctx->pc = 0x23F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F434u;
        // 0x23f438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F43Cu;
    // 0x23f43c: 0x0  nop
    ctx->pc = 0x23f43cu;
    // NOP
    ctx->pc = 0x23f440u;
}
