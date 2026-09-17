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

// Function: sub_00117A68
// Address: 0x117a68 - 0x117af8
void sub_00117A68_0x117a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A68_0x117a68");
#endif

    switch (ctx->pc) {
        case 0x117aa4u: goto label_117aa4;
        case 0x117abcu: goto label_117abc;
        case 0x117ad0u: goto label_117ad0;
        default: break;
    }

    ctx->pc = 0x117a68u;

    // 0x117a68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x117a6c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x117a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x117a70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117a74: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x117a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117a78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117a7c: 0x245310f3  addiu       $s3, $v0, 0x10F3
    ctx->pc = 0x117a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4339));
    // 0x117a80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117a84: 0x2471bf28  addiu       $s1, $v1, -0x40D8
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950696));
    // 0x117a88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117a8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x117a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a9c: 0xc04a100  jal         func_128400
    ctx->pc = 0x117A9Cu;
    SET_GPR_U32(ctx, 31, 0x117AA4u);
    ctx->pc = 0x117AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A9Cu;
    // 0x117aa0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x117A9Cu, 0x117AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AA4u;
label_117aa4:
    // 0x117aa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x117AA4u;
    {
        const bool branch_taken_0x117aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AA4u;
        // 0x117aa8: 0x3c100013  lui         $s0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117aa4) {
            ctx->pc = 0x117AD4u;
            goto label_117ad4;
        }
    }
    ctx->pc = 0x117AACu;
    // 0x117aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ab0: 0x8e0511b4  lw          $a1, 0x11B4($s0)
    ctx->pc = 0x117ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4532)));
    // 0x117ab4: 0xc04a100  jal         func_128400
    ctx->pc = 0x117AB4u;
    SET_GPR_U32(ctx, 31, 0x117ABCu);
    ctx->pc = 0x117AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AB4u;
    // 0x117ab8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x117AB4u, 0x117ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117ABCu;
label_117abc:
    // 0x117abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117ABCu;
    {
        const bool branch_taken_0x117abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117ABCu;
        // 0x117ac0: 0x8e0511b4  lw          $a1, 0x11B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117abc) {
            ctx->pc = 0x117AD4u;
            goto label_117ad4;
        }
    }
    ctx->pc = 0x117AC4u;
    // 0x117ac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x117ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ac8: 0xc04a100  jal         func_128400
    ctx->pc = 0x117AC8u;
    SET_GPR_U32(ctx, 31, 0x117AD0u);
    ctx->pc = 0x117ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AC8u;
    // 0x117acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x117AC8u, 0x117AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AD0u;
label_117ad0:
    // 0x117ad0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x117ad0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_117ad4:
    // 0x117ad4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x117ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ad8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117adc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117adcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117ae0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117ae4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117aec: 0x3e00008  jr          $ra
    ctx->pc = 0x117AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AECu;
        // 0x117af0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117AF4u;
    // 0x117af4: 0x0  nop
    ctx->pc = 0x117af4u;
    // NOP
    ctx->pc = 0x117af8u;
}
