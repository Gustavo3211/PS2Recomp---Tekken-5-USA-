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

// Function: sub_0011AB30
// Address: 0x11ab30 - 0x11abd8
void sub_0011AB30_0x11ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AB30_0x11ab30");
#endif

    switch (ctx->pc) {
        case 0x11ab30u: goto label_11ab30;
        case 0x11ab34u: goto label_11ab34;
        case 0x11ab38u: goto label_11ab38;
        case 0x11ab3cu: goto label_11ab3c;
        case 0x11ab40u: goto label_11ab40;
        case 0x11ab44u: goto label_11ab44;
        case 0x11ab48u: goto label_11ab48;
        case 0x11ab4cu: goto label_11ab4c;
        case 0x11ab50u: goto label_11ab50;
        case 0x11ab54u: goto label_11ab54;
        case 0x11ab58u: goto label_11ab58;
        case 0x11ab5cu: goto label_11ab5c;
        case 0x11ab60u: goto label_11ab60;
        case 0x11ab64u: goto label_11ab64;
        case 0x11ab68u: goto label_11ab68;
        case 0x11ab6cu: goto label_11ab6c;
        case 0x11ab70u: goto label_11ab70;
        case 0x11ab74u: goto label_11ab74;
        case 0x11ab78u: goto label_11ab78;
        case 0x11ab7cu: goto label_11ab7c;
        case 0x11ab80u: goto label_11ab80;
        case 0x11ab84u: goto label_11ab84;
        case 0x11ab88u: goto label_11ab88;
        case 0x11ab8cu: goto label_11ab8c;
        case 0x11ab90u: goto label_11ab90;
        case 0x11ab94u: goto label_11ab94;
        case 0x11ab98u: goto label_11ab98;
        case 0x11ab9cu: goto label_11ab9c;
        case 0x11aba0u: goto label_11aba0;
        case 0x11aba4u: goto label_11aba4;
        case 0x11aba8u: goto label_11aba8;
        case 0x11abacu: goto label_11abac;
        case 0x11abb0u: goto label_11abb0;
        case 0x11abb4u: goto label_11abb4;
        case 0x11abb8u: goto label_11abb8;
        case 0x11abbcu: goto label_11abbc;
        case 0x11abc0u: goto label_11abc0;
        case 0x11abc4u: goto label_11abc4;
        case 0x11abc8u: goto label_11abc8;
        case 0x11abccu: goto label_11abcc;
        case 0x11abd0u: goto label_11abd0;
        case 0x11abd4u: goto label_11abd4;
        default: break;
    }

    ctx->pc = 0x11ab30u;

label_11ab30:
    // 0x11ab30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11ab34:
    // 0x11ab34: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11ab38:
    // 0x11ab38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_11ab3c:
    // 0x11ab3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11ab3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11ab40:
    // 0x11ab40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11ab44:
    // 0x11ab44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11ab48:
    // 0x11ab48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_11ab4c:
    if (ctx->pc == 0x11AB4Cu) {
        ctx->pc = 0x11AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB48u;
        // 0x11ab4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB50u;
        goto label_11ab50;
    }
    ctx->pc = 0x11AB48u;
    {
        const bool branch_taken_0x11ab48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB48u;
        // 0x11ab4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab48) {
            ctx->pc = 0x11AB60u;
            goto label_11ab60;
        }
    }
    ctx->pc = 0x11AB50u;
label_11ab50:
    // 0x11ab50: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11ab54:
    // 0x11ab54: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x11ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11ab58:
    // 0x11ab58: 0x10000005  b           . + 4 + (0x5 << 2)
label_11ab5c:
    if (ctx->pc == 0x11AB5Cu) {
        ctx->pc = 0x11AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB58u;
        // 0x11ab5c: 0x2442e3c8  addiu       $v0, $v0, -0x1C38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB60u;
        goto label_11ab60;
    }
    ctx->pc = 0x11AB58u;
    {
        const bool branch_taken_0x11ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB58u;
        // 0x11ab5c: 0x2442e3c8  addiu       $v0, $v0, -0x1C38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab58) {
            ctx->pc = 0x11AB70u;
            goto label_11ab70;
        }
    }
    ctx->pc = 0x11AB60u;
label_11ab60:
    // 0x11ab60: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11ab64:
    // 0x11ab64: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_11ab68:
    // 0x11ab68: 0x8c422168  lw          $v0, 0x2168($v0)
    ctx->pc = 0x11ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8552)));
label_11ab6c:
    // 0x11ab6c: 0x8c63216c  lw          $v1, 0x216C($v1)
    ctx->pc = 0x11ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8556)));
label_11ab70:
    // 0x11ab70: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x11ab70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11ab74:
    // 0x11ab74: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_11ab78:
    if (ctx->pc == 0x11AB78u) {
        ctx->pc = 0x11AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB74u;
        // 0x11ab78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB7Cu;
        goto label_11ab7c;
    }
    ctx->pc = 0x11AB74u;
    {
        const bool branch_taken_0x11ab74 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB74u;
        // 0x11ab78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab74) {
            ctx->pc = 0x11ABB4u;
            goto label_11abb4;
        }
    }
    ctx->pc = 0x11AB7Cu;
label_11ab7c:
    // 0x11ab7c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x11ab7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11ab80:
    // 0x11ab80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ab84:
    // 0x11ab84: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_11ab88:
    if (ctx->pc == 0x11AB88u) {
        ctx->pc = 0x11AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB84u;
        // 0x11ab88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB8Cu;
        goto label_11ab8c;
    }
    ctx->pc = 0x11AB84u;
    {
        const bool branch_taken_0x11ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ab84) {
            ctx->pc = 0x11AB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AB84u;
            // 0x11ab88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ABACu;
            goto label_11abac;
        }
    }
    ctx->pc = 0x11AB8Cu;
label_11ab8c:
    // 0x11ab8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11ab90:
    // 0x11ab90: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x11ab90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11ab94:
    // 0x11ab94: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x11ab94u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ab98:
    // 0x11ab98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11ab98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ab9c:
    // 0x11ab9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11aba0:
    // 0x11aba0: 0xc0f809  jalr        $a2
label_11aba4:
    if (ctx->pc == 0x11ABA4u) {
        ctx->pc = 0x11ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABA0u;
        // 0x11aba4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABA8u;
        goto label_11aba8;
    }
    ctx->pc = 0x11ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11ABA8u);
        ctx->pc = 0x11ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABA0u;
        // 0x11aba4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABA0u, 0x11ABA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ABA8u;
label_11aba8:
    // 0x11aba8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x11aba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_11abac:
    // 0x11abac: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_11abb0:
    if (ctx->pc == 0x11ABB0u) {
        ctx->pc = 0x11ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABACu;
        // 0x11abb0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABB4u;
        goto label_11abb4;
    }
    ctx->pc = 0x11ABACu;
    {
        const bool branch_taken_0x11abac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABACu;
        // 0x11abb0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abac) {
            ctx->pc = 0x11AB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ab80;
        }
    }
    ctx->pc = 0x11ABB4u;
label_11abb4:
    // 0x11abb4: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x11abb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11abb8:
    // 0x11abb8: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x11abb8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11abbc:
    // 0x11abbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11abbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11abc0:
    // 0x11abc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11abc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11abc4:
    // 0x11abc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11abc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11abc8:
    // 0x11abc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11abc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11abcc:
    // 0x11abcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11abccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11abd0:
    // 0x11abd0: 0x3e00008  jr          $ra
label_11abd4:
    if (ctx->pc == 0x11ABD4u) {
        ctx->pc = 0x11ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD0u;
        // 0x11abd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABD8u;
        goto label_fallthrough_0x11abd0;
    }
    ctx->pc = 0x11ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD0u;
        // 0x11abd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11abd0:
    ctx->pc = 0x11ABD8u;
}
