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

// Function: sub_00215DF8
// Address: 0x215df8 - 0x215fb0
void sub_00215DF8_0x215df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215DF8_0x215df8");
#endif

    switch (ctx->pc) {
        case 0x215e20u: goto label_215e20;
        case 0x215e28u: goto label_215e28;
        case 0x215e30u: goto label_215e30;
        case 0x215e40u: goto label_215e40;
        case 0x215e48u: goto label_215e48;
        case 0x215e50u: goto label_215e50;
        case 0x215e68u: goto label_215e68;
        case 0x215e74u: goto label_215e74;
        case 0x215eacu: goto label_215eac;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ec8u: goto label_215ec8;
        case 0x215ed4u: goto label_215ed4;
        case 0x215ee8u: goto label_215ee8;
        case 0x215ef0u: goto label_215ef0;
        case 0x215f04u: goto label_215f04;
        case 0x215f0cu: goto label_215f0c;
        case 0x215f14u: goto label_215f14;
        case 0x215f28u: goto label_215f28;
        case 0x215f30u: goto label_215f30;
        case 0x215f5cu: goto label_215f5c;
        case 0x215f6cu: goto label_215f6c;
        case 0x215f84u: goto label_215f84;
        default: break;
    }

    ctx->pc = 0x215df8u;

    // 0x215df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215dfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215e00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x215e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x215e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x215e18: 0xc092108  jal         func_248420
    ctx->pc = 0x215E18u;
    SET_GPR_U32(ctx, 31, 0x215E20u);
    ctx->pc = 0x215E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E18u;
    // 0x215e1c: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x215E18u, 0x215E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E20u;
label_215e20:
    // 0x215e20: 0xc091da4  jal         func_247690
    ctx->pc = 0x215E20u;
    SET_GPR_U32(ctx, 31, 0x215E28u);
    ctx->pc = 0x247690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247690u, 0x215E20u, 0x215E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E28u;
label_215e28:
    // 0x215e28: 0xc08f022  jal         func_23C088
    ctx->pc = 0x215E28u;
    SET_GPR_U32(ctx, 31, 0x215E30u);
    ctx->pc = 0x215E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E28u;
    // 0x215e2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x215E28u, 0x215E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E30u;
label_215e30:
    // 0x215e30: 0x266288d0  addiu       $v0, $s3, -0x7730
    ctx->pc = 0x215e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
    // 0x215e34: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215e38: 0xc0929f4  jal         func_24A7D0
    ctx->pc = 0x215E38u;
    SET_GPR_U32(ctx, 31, 0x215E40u);
    ctx->pc = 0x215E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E38u;
    // 0x215e3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A7D0u, 0x215E38u, 0x215E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E40u;
label_215e40:
    // 0x215e40: 0xc093720  jal         func_24DC80
    ctx->pc = 0x215E40u;
    SET_GPR_U32(ctx, 31, 0x215E48u);
    ctx->pc = 0x24DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC80u, 0x215E40u, 0x215E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E48u;
label_215e48:
    // 0x215e48: 0xc0a3af8  jal         func_28EBE0
    ctx->pc = 0x215E48u;
    SET_GPR_U32(ctx, 31, 0x215E50u);
    ctx->pc = 0x28EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBE0u, 0x215E48u, 0x215E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E50u;
label_215e50:
    // 0x215e50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x215e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215e54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215e58: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215E58u;
    {
        const bool branch_taken_0x215e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215e58) {
            ctx->pc = 0x215E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215E58u;
            // 0x215e5c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215E78u;
            goto label_215e78;
        }
    }
    ctx->pc = 0x215E60u;
    // 0x215e60: 0xc085214  jal         func_214850
    ctx->pc = 0x215E60u;
    SET_GPR_U32(ctx, 31, 0x215E68u);
    ctx->pc = 0x215E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E60u;
    // 0x215e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214850u, 0x215E60u, 0x215E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E68u;
label_215e68:
    // 0x215e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e6c: 0xc08572c  jal         func_215CB0
    ctx->pc = 0x215E6Cu;
    SET_GPR_U32(ctx, 31, 0x215E74u);
    ctx->pc = 0x215E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E6Cu;
    // 0x215e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CB0u, 0x215E6Cu, 0x215E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E74u;
label_215e74:
    // 0x215e74: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x215e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_215e78:
    // 0x215e78: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x215e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x215e7c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x215e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x215e80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215E80u;
    {
        const bool branch_taken_0x215e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E80u;
        // 0x215e84: 0x8f82c91c  lw          $v0, -0x36E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e80) {
            ctx->pc = 0x215E9Cu;
            goto label_215e9c;
        }
    }
    ctx->pc = 0x215E88u;
    // 0x215e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215e8c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x215e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x215e90: 0xac43c500  sw          $v1, -0x3B00($v0)
    ctx->pc = 0x215e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3BC500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BC500u, _value); } while (0);
    // 0x215e94: 0xaf83c91c  sw          $v1, -0x36E4($gp)
    ctx->pc = 0x215e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953244), GPR_U32(ctx, 3));
    // 0x215e98: 0x8f82c91c  lw          $v0, -0x36E4($gp)
    ctx->pc = 0x215e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
label_215e9c:
    // 0x215e9c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x215E9Cu;
    {
        const bool branch_taken_0x215e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e9c) {
            ctx->pc = 0x215F20u;
            goto label_215f20;
        }
    }
    ctx->pc = 0x215EA4u;
    // 0x215ea4: 0xc0a6100  jal         func_298400
    ctx->pc = 0x215EA4u;
    SET_GPR_U32(ctx, 31, 0x215EACu);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x215EA4u, 0x215EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EACu;
label_215eac:
    // 0x215eac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x215EACu;
    {
        const bool branch_taken_0x215eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215eac) {
            ctx->pc = 0x215F20u;
            goto label_215f20;
        }
    }
    ctx->pc = 0x215EB4u;
    // 0x215eb4: 0xc04041e  jal         func_101078
    ctx->pc = 0x215EB4u;
    SET_GPR_U32(ctx, 31, 0x215EBCu);
    ctx->pc = 0x101078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101078u, 0x215EB4u, 0x215EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EBCu;
label_215ebc:
    // 0x215ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ec0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x215EC0u;
    SET_GPR_U32(ctx, 31, 0x215EC8u);
    ctx->pc = 0x215EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EC0u;
    // 0x215ec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x215EC0u, 0x215EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EC8u;
label_215ec8:
    // 0x215ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ecc: 0xc0a46b4  jal         func_291AD0
    ctx->pc = 0x215ECCu;
    SET_GPR_U32(ctx, 31, 0x215ED4u);
    ctx->pc = 0x215ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215ECCu;
    // 0x215ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291AD0u, 0x215ECCu, 0x215ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215ED4u;
label_215ed4:
    // 0x215ed4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x215ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x215ed8: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x215ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x215edc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ee0: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x215EE0u;
    SET_GPR_U32(ctx, 31, 0x215EE8u);
    ctx->pc = 0x215EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EE0u;
    // 0x215ee4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x215EE0u, 0x215EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EE8u;
label_215ee8:
    // 0x215ee8: 0xc0a5a08  jal         func_296820
    ctx->pc = 0x215EE8u;
    SET_GPR_U32(ctx, 31, 0x215EF0u);
    ctx->pc = 0x296820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296820u, 0x215EE8u, 0x215EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EF0u;
label_215ef0:
    // 0x215ef0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215EF0u;
    {
        const bool branch_taken_0x215ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215ef0) {
            ctx->pc = 0x215F0Cu;
            goto label_215f0c;
        }
    }
    ctx->pc = 0x215EF8u;
    // 0x215ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215efc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x215EFCu;
    SET_GPR_U32(ctx, 31, 0x215F04u);
    ctx->pc = 0x215F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EFCu;
    // 0x215f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x215EFCu, 0x215F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F04u;
label_215f04:
    // 0x215f04: 0xc0a5a12  jal         func_296848
    ctx->pc = 0x215F04u;
    SET_GPR_U32(ctx, 31, 0x215F0Cu);
    ctx->pc = 0x215F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F04u;
    // 0x215f08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296848u, 0x215F04u, 0x215F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F0Cu;
label_215f0c:
    // 0x215f0c: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x215F0Cu;
    SET_GPR_U32(ctx, 31, 0x215F14u);
    ctx->pc = 0x215F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F0Cu;
    // 0x215f10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x215F0Cu, 0x215F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F14u;
label_215f14:
    // 0x215f14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x215F14u;
    {
        const bool branch_taken_0x215f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F14u;
        // 0x215f18: 0x266288d0  addiu       $v0, $s3, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f14) {
            ctx->pc = 0x215F60u;
            goto label_215f60;
        }
    }
    ctx->pc = 0x215F1Cu;
    // 0x215f1c: 0x0  nop
    ctx->pc = 0x215f1cu;
    // NOP
label_215f20:
    // 0x215f20: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x215F20u;
    SET_GPR_U32(ctx, 31, 0x215F28u);
    ctx->pc = 0x215F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F20u;
    // 0x215f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x215F20u, 0x215F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F28u;
label_215f28:
    // 0x215f28: 0xc0a5a0e  jal         func_296838
    ctx->pc = 0x215F28u;
    SET_GPR_U32(ctx, 31, 0x215F30u);
    ctx->pc = 0x296838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296838u, 0x215F28u, 0x215F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F30u;
label_215f30:
    // 0x215f30: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x215f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x215f34: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x215f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x215f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215f3c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x215f40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x215f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x215f44: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x215f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x215f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f54: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x215F54u;
    SET_GPR_U32(ctx, 31, 0x215F5Cu);
    ctx->pc = 0x215F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F54u;
    // 0x215f58: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x215F54u, 0x215F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F5Cu;
label_215f5c:
    // 0x215f5c: 0x266288d0  addiu       $v0, $s3, -0x7730
    ctx->pc = 0x215f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
label_215f60:
    // 0x215f60: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215f64: 0xc0a0fd0  jal         func_283F40
    ctx->pc = 0x215F64u;
    SET_GPR_U32(ctx, 31, 0x215F6Cu);
    ctx->pc = 0x215F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F64u;
    // 0x215f68: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F40u, 0x215F64u, 0x215F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F6Cu;
label_215f6c:
    // 0x215f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215f70: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x215f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x215f74: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215F74u;
    {
        const bool branch_taken_0x215f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215f74) {
            ctx->pc = 0x215F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215F74u;
            // 0x215f78: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215F88u;
            goto label_215f88;
        }
    }
    ctx->pc = 0x215F7Cu;
    // 0x215f7c: 0xc0c2336  jal         func_308CD8
    ctx->pc = 0x215F7Cu;
    SET_GPR_U32(ctx, 31, 0x215F84u);
    ctx->pc = 0x308CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308CD8u, 0x215F7Cu, 0x215F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F84u;
label_215f84:
    // 0x215f84: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x215f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_215f88:
    // 0x215f88: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x215f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215f90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215f94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215f98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215fa0: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x215fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
    // 0x215fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x215FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FA8u;
        // 0x215fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215FB0u;
}
