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

// Function: sub_00239DB0
// Address: 0x239db0 - 0x239e70
void sub_00239DB0_0x239db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239DB0_0x239db0");
#endif

    switch (ctx->pc) {
        case 0x239e04u: goto label_239e04;
        case 0x239e40u: goto label_239e40;
        default: break;
    }

    ctx->pc = 0x239db0u;

    // 0x239db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239db4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x239db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x239db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dc0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x239dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x239dc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239dc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239dcc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x239dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x239dd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239dd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dd8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x239DD8u;
    {
        const bool branch_taken_0x239dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DD8u;
        // 0x239ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dd8) {
            ctx->pc = 0x239E54u;
            goto label_239e54;
        }
    }
    ctx->pc = 0x239DE0u;
    // 0x239de0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x239de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x239de4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x239de8: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x239de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x239dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239df0: 0x905101bb  lbu         $s1, 0x1BB($v0)
    ctx->pc = 0x239df0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 443)));
    // 0x239df4: 0x56230017  bnel        $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x239DF4u;
    {
        const bool branch_taken_0x239df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x239df4) {
            ctx->pc = 0x239DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239DF4u;
            // 0x239df8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E54u;
            goto label_239e54;
        }
    }
    ctx->pc = 0x239DFCu;
    // 0x239dfc: 0xc09d940  jal         func_276500
    ctx->pc = 0x239DFCu;
    SET_GPR_U32(ctx, 31, 0x239E04u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x239DFCu, 0x239E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E04u;
label_239e04:
    // 0x239e04: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x239E04u;
    {
        const bool branch_taken_0x239e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E04u;
        // 0x239e08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e04) {
            ctx->pc = 0x239E54u;
            goto label_239e54;
        }
    }
    ctx->pc = 0x239E0Cu;
    // 0x239e0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x239e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x239e10: 0x2112004  sllv        $a0, $s1, $s0
    ctx->pc = 0x239e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x239e14: 0x8c4388a8  lw          $v1, -0x7758($v0)
    ctx->pc = 0x239e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936744)));
    // 0x239e18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x239e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x239e1c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x239E1Cu;
    {
        const bool branch_taken_0x239e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239e1c) {
            ctx->pc = 0x239E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239E1Cu;
            // 0x239e20: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E50u;
            goto label_239e50;
        }
    }
    ctx->pc = 0x239E24u;
    // 0x239e24: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x239e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x239e28: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x239e28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x239e2c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x239e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x239e30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x239E30u;
    {
        const bool branch_taken_0x239e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239e30) {
            ctx->pc = 0x239E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239E30u;
            // 0x239e34: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E54u;
            goto label_239e54;
        }
    }
    ctx->pc = 0x239E38u;
    // 0x239e38: 0xc07ebba  jal         func_1FAEE8
    ctx->pc = 0x239E38u;
    SET_GPR_U32(ctx, 31, 0x239E40u);
    ctx->pc = 0x1FAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE8u, 0x239E38u, 0x239E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E40u;
label_239e40:
    // 0x239e40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x239e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x239e44: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239E44u;
    {
        const bool branch_taken_0x239e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x239E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E44u;
        // 0x239e48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e44) {
            ctx->pc = 0x239E54u;
            goto label_239e54;
        }
    }
    ctx->pc = 0x239E4Cu;
    // 0x239e4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x239e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239e50:
    // 0x239e50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x239e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239e54:
    // 0x239e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239e5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239e60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239e64: 0x3e00008  jr          $ra
    ctx->pc = 0x239E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E64u;
        // 0x239e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239E6Cu;
    // 0x239e6c: 0x0  nop
    ctx->pc = 0x239e6cu;
    // NOP
    ctx->pc = 0x239e70u;
}
