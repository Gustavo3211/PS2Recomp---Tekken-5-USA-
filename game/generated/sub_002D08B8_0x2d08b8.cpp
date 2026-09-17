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

// Function: sub_002D08B8
// Address: 0x2d08b8 - 0x2d0948
void sub_002D08B8_0x2d08b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D08B8_0x2d08b8");
#endif

    switch (ctx->pc) {
        case 0x2d08f8u: goto label_2d08f8;
        case 0x2d0910u: goto label_2d0910;
        case 0x2d0930u: goto label_2d0930;
        default: break;
    }

    ctx->pc = 0x2d08b8u;

    // 0x2d08b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d08b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d08bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d08c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d08c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d08c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d08c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d08c8: 0x24458858  addiu       $a1, $v0, -0x77A8
    ctx->pc = 0x2d08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2d08cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d08ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d08d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d08d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2d08d8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D08D8u;
    {
        const bool branch_taken_0x2d08d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08D8u;
        // 0x2d08dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08d8) {
            ctx->pc = 0x2D08FCu;
            goto label_2d08fc;
        }
    }
    ctx->pc = 0x2D08E0u;
    // 0x2d08e0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d08e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d08e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d08e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D08E8u;
    {
        const bool branch_taken_0x2d08e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d08e8) {
            ctx->pc = 0x2D08ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D08E8u;
            // 0x2d08ec: 0x8f90cb28  lw          $s0, -0x34D8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0900u;
            goto label_2d0900;
        }
    }
    ctx->pc = 0x2D08F0u;
    // 0x2d08f0: 0xc08215c  jal         func_208570
    ctx->pc = 0x2D08F0u;
    SET_GPR_U32(ctx, 31, 0x2D08F8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2D08F0u, 0x2D08F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08F8u;
label_2d08f8:
    // 0x2d08f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d08fc:
    // 0x2d08fc: 0x8f90cb28  lw          $s0, -0x34D8($gp)
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953768)));
label_2d0900:
    // 0x2d0900: 0x8f84cb30  lw          $a0, -0x34D0($gp)
    ctx->pc = 0x2d0900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953776)));
    // 0x2d0904: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d0904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d0908: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x2D0908u;
    SET_GPR_U32(ctx, 31, 0x2D0910u);
    ctx->pc = 0x2D090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0908u;
    // 0x2d090c: 0x3210000f  andi        $s0, $s0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x2D0908u, 0x2D0910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0910u;
label_2d0910:
    // 0x2d0910: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2d0910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2d0914: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d0914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d0918: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d0918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d091c: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2d091cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2d0920: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2d0920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d0924: 0x96108e00  lhu         $s0, -0x7200($s0)
    ctx->pc = 0x2d0924u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294938112)));
    // 0x2d0928: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x2D0928u;
    SET_GPR_U32(ctx, 31, 0x2D0930u);
    ctx->pc = 0x2D092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0928u;
    // 0x2d092c: 0x8f84cb30  lw          $a0, -0x34D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x2D0928u, 0x2D0930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0930u;
label_2d0930:
    // 0x2d0930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d093c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d093cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0940: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0940u;
        // 0x2d0944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0948u;
}
