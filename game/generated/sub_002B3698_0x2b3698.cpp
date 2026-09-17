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

// Function: sub_002B3698
// Address: 0x2b3698 - 0x2b3710
void sub_002B3698_0x2b3698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3698_0x2b3698");
#endif

    switch (ctx->pc) {
        case 0x2b36c0u: goto label_2b36c0;
        case 0x2b36e8u: goto label_2b36e8;
        default: break;
    }

    ctx->pc = 0x2b3698u;

    // 0x2b3698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b369c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b36a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b36a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b36a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b36a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b36a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b36a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b36ac: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2b36acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2b36b0: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B36B0u;
    {
        const bool branch_taken_0x2b36b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36B0u;
        // 0x2b36b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36b0) {
            ctx->pc = 0x2B36F8u;
            goto label_2b36f8;
        }
    }
    ctx->pc = 0x2B36B8u;
    // 0x2b36b8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2b36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2b36bc: 0x0  nop
    ctx->pc = 0x2b36bcu;
    // NOP
label_2b36c0:
    // 0x2b36c0: 0x8e2600a4  lw          $a2, 0xA4($s1)
    ctx->pc = 0x2b36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x2b36c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b36c8: 0x8f84cae0  lw          $a0, -0x3520($gp)
    ctx->pc = 0x2b36c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953696)));
    // 0x2b36cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b36d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b36d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b36d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b36d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b36dc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2b36dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b36e0: 0xc0adeae  jal         func_2B7AB8
    ctx->pc = 0x2B36E0u;
    SET_GPR_U32(ctx, 31, 0x2B36E8u);
    ctx->pc = 0x2B36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B36E0u;
    // 0x2b36e4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AB8u, 0x2B36E0u, 0x2B36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B36E8u;
label_2b36e8:
    // 0x2b36e8: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2b36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2b36ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2b36ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b36f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B36F0u;
    {
        const bool branch_taken_0x2b36f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F0u;
        // 0x2b36f4: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36f0) {
            ctx->pc = 0x2B36C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b36c0;
        }
    }
    ctx->pc = 0x2B36F8u;
label_2b36f8:
    // 0x2b36f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b36f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b36fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b36fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3704: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3704u;
        // 0x2b3708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B370Cu;
    // 0x2b370c: 0x0  nop
    ctx->pc = 0x2b370cu;
    // NOP
    ctx->pc = 0x2b3710u;
}
