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

// Function: sub_0023ACB8
// Address: 0x23acb8 - 0x23ad38
void sub_0023ACB8_0x23acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ACB8_0x23acb8");
#endif

    switch (ctx->pc) {
        case 0x23acd8u: goto label_23acd8;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad20u: goto label_23ad20;
        default: break;
    }

    ctx->pc = 0x23acb8u;

    // 0x23acb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23acbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23acc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23acc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23acc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23accc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23acd0: 0xc08b1ea  jal         func_22C7A8
    ctx->pc = 0x23ACD0u;
    SET_GPR_U32(ctx, 31, 0x23ACD8u);
    ctx->pc = 0x23ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACD0u;
    // 0x23acd4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7A8u, 0x23ACD0u, 0x23ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACD8u;
label_23acd8:
    // 0x23acd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23acd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ace0: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x23ACE0u;
    SET_GPR_U32(ctx, 31, 0x23ACE8u);
    ctx->pc = 0x23ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACE0u;
    // 0x23ace4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x23ACE0u, 0x23ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACE8u;
label_23ace8:
    // 0x23ace8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23ACECu;
    {
        const bool branch_taken_0x23acec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACECu;
        // 0x23acf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23acec) {
            ctx->pc = 0x23AD20u;
            goto label_23ad20;
        }
    }
    ctx->pc = 0x23ACF4u;
    // 0x23acf4: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x23ACF4u;
    SET_GPR_U32(ctx, 31, 0x23ACFCu);
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x23ACF4u, 0x23ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACFCu;
label_23acfc:
    // 0x23acfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23acfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad00: 0x24640094  addiu       $a0, $v1, 0x94
    ctx->pc = 0x23ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x23ad04: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x23ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x23ad08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23AD08u;
    {
        const bool branch_taken_0x23ad08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD08u;
        // 0x23ad0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad08) {
            ctx->pc = 0x23AD20u;
            goto label_23ad20;
        }
    }
    ctx->pc = 0x23AD10u;
    // 0x23ad10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AD10u;
    {
        const bool branch_taken_0x23ad10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad10) {
            ctx->pc = 0x23AD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AD10u;
            // 0x23ad14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AD24u;
            goto label_23ad24;
        }
    }
    ctx->pc = 0x23AD18u;
    // 0x23ad18: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x23AD18u;
    SET_GPR_U32(ctx, 31, 0x23AD20u);
    ctx->pc = 0x23AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD18u;
    // 0x23ad1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x23AD18u, 0x23AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD20u;
label_23ad20:
    // 0x23ad20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ad20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ad24:
    // 0x23ad24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ad24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ad28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ad28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ad30: 0x3e00008  jr          $ra
    ctx->pc = 0x23AD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD30u;
        // 0x23ad34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AD38u;
}
