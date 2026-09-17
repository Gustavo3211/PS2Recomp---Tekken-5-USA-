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

// Function: sub_002E9450
// Address: 0x2e9450 - 0x2e94f0
void sub_002E9450_0x2e9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9450_0x2e9450");
#endif

    switch (ctx->pc) {
        case 0x2e9470u: goto label_2e9470;
        case 0x2e9488u: goto label_2e9488;
        case 0x2e949cu: goto label_2e949c;
        case 0x2e94d8u: goto label_2e94d8;
        default: break;
    }

    ctx->pc = 0x2e9450u;

    // 0x2e9450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e9458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e945c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e9460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9464: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e9464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e9468: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9468u;
    SET_GPR_U32(ctx, 31, 0x2E9470u);
    ctx->pc = 0x2E946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9468u;
    // 0x2e946c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9468u, 0x2E9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9470u;
label_2e9470:
    // 0x2e9470: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e9474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9478: 0x2463fc98  addiu       $v1, $v1, -0x368
    ctx->pc = 0x2e9478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966424));
    // 0x2e947c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9480: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9480u;
    SET_GPR_U32(ctx, 31, 0x2E9488u);
    ctx->pc = 0x2E9484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9480u;
    // 0x2e9484: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9480u, 0x2E9488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9488u;
label_2e9488:
    // 0x2e9488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e948c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e948cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9494: 0xc0ba33e  jal         func_2E8CF8
    ctx->pc = 0x2E9494u;
    SET_GPR_U32(ctx, 31, 0x2E949Cu);
    ctx->pc = 0x2E9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9494u;
    // 0x2e9498: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8CF8u, 0x2E9494u, 0x2E949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E949Cu;
label_2e949c:
    // 0x2e949c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2e94a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e94a4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2e94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2e94a8: 0x24630650  addiu       $v1, $v1, 0x650
    ctx->pc = 0x2e94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1616));
    // 0x2e94ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e94b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e94b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E94B4u;
    {
        const bool branch_taken_0x2e94b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94B4u;
        // 0x2e94b8: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94b4) {
            ctx->pc = 0x2E94D8u;
            goto label_2e94d8;
        }
    }
    ctx->pc = 0x2E94BCu;
    // 0x2e94bc: 0x0  nop
    ctx->pc = 0x2e94bcu;
    // NOP
    // 0x2e94c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e94c4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e94c8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e94cc: 0x2484058c  addiu       $a0, $a0, 0x58C
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1420));
    // 0x2e94d0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E94D0u;
    SET_GPR_U32(ctx, 31, 0x2E94D8u);
    ctx->pc = 0x2E94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94D0u;
    // 0x2e94d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E94D0u, 0x2E94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94D8u;
label_2e94d8:
    // 0x2e94d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e94d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e94dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e94dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e94e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e94e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e94e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e94e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e94e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E94E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94E8u;
        // 0x2e94ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E94E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E94F0u;
}
