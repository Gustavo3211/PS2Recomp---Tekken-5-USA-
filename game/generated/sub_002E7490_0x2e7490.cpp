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

// Function: sub_002E7490
// Address: 0x2e7490 - 0x2e7530
void sub_002E7490_0x2e7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7490_0x2e7490");
#endif

    switch (ctx->pc) {
        case 0x2e74b0u: goto label_2e74b0;
        case 0x2e74c8u: goto label_2e74c8;
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e7518u: goto label_2e7518;
        default: break;
    }

    ctx->pc = 0x2e7490u;

    // 0x2e7490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e7494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e7498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e749c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e74a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e74a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e74a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e74a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e74a8: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E74A8u;
    SET_GPR_U32(ctx, 31, 0x2E74B0u);
    ctx->pc = 0x2E74ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74A8u;
    // 0x2e74ac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E74A8u, 0x2E74B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74B0u;
label_2e74b0:
    // 0x2e74b0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e74b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e74b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74b8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2e74b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x2e74bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e74bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74c0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E74C0u;
    SET_GPR_U32(ctx, 31, 0x2E74C8u);
    ctx->pc = 0x2E74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74C0u;
    // 0x2e74c4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E74C0u, 0x2E74C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74C8u;
label_2e74c8:
    // 0x2e74c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e74c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e74ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e74d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74d4: 0xc0b99da  jal         func_2E6768
    ctx->pc = 0x2E74D4u;
    SET_GPR_U32(ctx, 31, 0x2E74DCu);
    ctx->pc = 0x2E74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74D4u;
    // 0x2e74d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6768u, 0x2E74D4u, 0x2E74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74DCu;
label_2e74dc:
    // 0x2e74dc: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2e74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2e74e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e74e4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2e74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2e74e8: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x2e74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x2e74ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e74f0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e74f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E74F4u;
    {
        const bool branch_taken_0x2e74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74F4u;
        // 0x2e74f8: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74f4) {
            ctx->pc = 0x2E7518u;
            goto label_2e7518;
        }
    }
    ctx->pc = 0x2E74FCu;
    // 0x2e74fc: 0x0  nop
    ctx->pc = 0x2e74fcu;
    // NOP
    // 0x2e7500: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e7500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e7504: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e7504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e7508: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e750c: 0x2484054c  addiu       $a0, $a0, 0x54C
    ctx->pc = 0x2e750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1356));
    // 0x2e7510: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E7510u;
    SET_GPR_U32(ctx, 31, 0x2E7518u);
    ctx->pc = 0x2E7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7510u;
    // 0x2e7514: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E7510u, 0x2E7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7518u;
label_2e7518:
    // 0x2e7518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e7518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e751c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e751cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7520: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e7520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7524: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e7524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e7528: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7528u;
        // 0x2e752c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7530u;
}
