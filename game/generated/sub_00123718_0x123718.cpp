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

// Function: sub_00123718
// Address: 0x123718 - 0x1237d0
void sub_00123718_0x123718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123718_0x123718");
#endif

    switch (ctx->pc) {
        case 0x123798u: goto label_123798;
        case 0x1237c4u: goto label_1237c4;
        default: break;
    }

    ctx->pc = 0x123718u;

    // 0x123718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12371c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123720: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x123720u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x123724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x123728: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x123728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12372c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12372Cu;
    {
        const bool branch_taken_0x12372c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x123730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12372Cu;
        // 0x123730: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12372c) {
            ctx->pc = 0x123740u;
            goto label_123740;
        }
    }
    ctx->pc = 0x123734u;
    // 0x123734: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x123734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x123738: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x123738u;
    {
        const bool branch_taken_0x123738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123738u;
        // 0x12373c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123738) {
            ctx->pc = 0x1237BCu;
            goto label_1237bc;
        }
    }
    ctx->pc = 0x123740u;
label_123740:
    // 0x123740: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x123740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x123744: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x123744u;
    {
        const bool branch_taken_0x123744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123744u;
        // 0x123748: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123744) {
            ctx->pc = 0x123770u;
            goto label_123770;
        }
    }
    ctx->pc = 0x12374Cu;
    // 0x12374c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x123750: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x123750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x123754: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x123754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x123758: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x123758u;
    {
        const bool branch_taken_0x123758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123758u;
        // 0x12375c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123758) {
            ctx->pc = 0x1237C8u;
            goto label_1237c8;
        }
    }
    ctx->pc = 0x123760u;
    // 0x123760: 0x41023  negu        $v0, $a0
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x123764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123764u;
    {
        const bool branch_taken_0x123764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123764u;
        // 0x123768: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123764) {
            ctx->pc = 0x123774u;
            goto label_123774;
        }
    }
    ctx->pc = 0x12376Cu;
    // 0x12376c: 0x0  nop
    ctx->pc = 0x12376cu;
    // NOP
label_123770:
    // 0x123770: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x123770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_123774:
    // 0x123774: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x123774u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12377c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x123780: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x123780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x123784: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x123784u;
    {
        const bool branch_taken_0x123784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123784u;
        // 0x123788: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123784) {
            ctx->pc = 0x1237BCu;
            goto label_1237bc;
        }
    }
    ctx->pc = 0x12378Cu;
    // 0x12378c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12378cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123790: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x123790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x123794: 0x0  nop
    ctx->pc = 0x123794u;
    // NOP
label_123798:
    // 0x123798: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x123798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x12379c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1237a0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1237a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1237a4: 0x0  nop
    ctx->pc = 0x1237a4u;
    // NOP
    // 0x1237a8: 0x0  nop
    ctx->pc = 0x1237a8u;
    // NOP
    // 0x1237ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1237ACu;
    {
        const bool branch_taken_0x1237ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237ACu;
        // 0x1237b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237ac) {
            ctx->pc = 0x123798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123798;
        }
    }
    ctx->pc = 0x1237B4u;
    // 0x1237b4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1237b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1237b8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1237b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1237bc:
    // 0x1237bc: 0xc049c6e  jal         func_1271B8
    ctx->pc = 0x1237BCu;
    SET_GPR_U32(ctx, 31, 0x1237C4u);
    ctx->pc = 0x1237C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237BCu;
    // 0x1237c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271B8u, 0x1237BCu, 0x1237C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237C4u;
label_1237c4:
    // 0x1237c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1237c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1237c8:
    // 0x1237c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1237C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1237CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237C8u;
        // 0x1237cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1237C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1237D0u;
}
