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

// Function: sub_0033AB40
// Address: 0x33ab40 - 0x33abc8
void sub_0033AB40_0x33ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AB40_0x33ab40");
#endif

    switch (ctx->pc) {
        case 0x33ab40u: goto label_33ab40;
        case 0x33ab44u: goto label_33ab44;
        case 0x33ab48u: goto label_33ab48;
        case 0x33ab4cu: goto label_33ab4c;
        case 0x33ab50u: goto label_33ab50;
        case 0x33ab54u: goto label_33ab54;
        case 0x33ab58u: goto label_33ab58;
        case 0x33ab5cu: goto label_33ab5c;
        case 0x33ab60u: goto label_33ab60;
        case 0x33ab64u: goto label_33ab64;
        case 0x33ab68u: goto label_33ab68;
        case 0x33ab6cu: goto label_33ab6c;
        case 0x33ab70u: goto label_33ab70;
        case 0x33ab74u: goto label_33ab74;
        case 0x33ab78u: goto label_33ab78;
        case 0x33ab7cu: goto label_33ab7c;
        case 0x33ab80u: goto label_33ab80;
        case 0x33ab84u: goto label_33ab84;
        case 0x33ab88u: goto label_33ab88;
        case 0x33ab8cu: goto label_33ab8c;
        case 0x33ab90u: goto label_33ab90;
        case 0x33ab94u: goto label_33ab94;
        case 0x33ab98u: goto label_33ab98;
        case 0x33ab9cu: goto label_33ab9c;
        case 0x33aba0u: goto label_33aba0;
        case 0x33aba4u: goto label_33aba4;
        case 0x33aba8u: goto label_33aba8;
        case 0x33abacu: goto label_33abac;
        case 0x33abb0u: goto label_33abb0;
        case 0x33abb4u: goto label_33abb4;
        case 0x33abb8u: goto label_33abb8;
        case 0x33abbcu: goto label_33abbc;
        case 0x33abc0u: goto label_33abc0;
        case 0x33abc4u: goto label_33abc4;
        default: break;
    }

    ctx->pc = 0x33ab40u;

label_33ab40:
    // 0x33ab40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33ab44:
    // 0x33ab44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33ab48:
    // 0x33ab48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ab48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ab4c:
    // 0x33ab4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33ab50:
    // 0x33ab50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ab50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ab54:
    // 0x33ab54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33ab58:
    // 0x33ab58: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x33ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33ab5c:
    // 0x33ab5c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x33ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_33ab60:
    // 0x33ab60: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33ab60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33ab64:
    // 0x33ab64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33ab68:
    // 0x33ab68: 0x40f809  jalr        $v0
label_33ab6c:
    if (ctx->pc == 0x33AB6Cu) {
        ctx->pc = 0x33AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB68u;
        // 0x33ab6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB70u;
        goto label_33ab70;
    }
    ctx->pc = 0x33AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AB70u);
        ctx->pc = 0x33AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB68u;
        // 0x33ab6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB68u, 0x33AB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AB70u;
label_33ab70:
    // 0x33ab70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33ab74:
    // 0x33ab74: 0xc0cb06e  jal         func_32C1B8
label_33ab78:
    if (ctx->pc == 0x33AB78u) {
        ctx->pc = 0x33AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB74u;
        // 0x33ab78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB7Cu;
        goto label_33ab7c;
    }
    ctx->pc = 0x33AB74u;
    SET_GPR_U32(ctx, 31, 0x33AB7Cu);
    ctx->pc = 0x33AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB74u;
    // 0x33ab78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C1B8u, 0x33AB74u, 0x33AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB7Cu;
label_33ab7c:
    // 0x33ab7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33ab7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ab80:
    // 0x33ab80: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x33ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_33ab84:
    // 0x33ab84: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_33ab88:
    if (ctx->pc == 0x33AB88u) {
        ctx->pc = 0x33AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB84u;
        // 0x33ab88: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB8Cu;
        goto label_33ab8c;
    }
    ctx->pc = 0x33AB84u;
    {
        const bool branch_taken_0x33ab84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB84u;
        // 0x33ab88: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab84) {
            ctx->pc = 0x33ABB0u;
            goto label_33abb0;
        }
    }
    ctx->pc = 0x33AB8Cu;
label_33ab8c:
    // 0x33ab8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x33ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_33ab90:
    // 0x33ab90: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x33ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_33ab94:
    // 0x33ab94: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33ab98:
    // 0x33ab98: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x33ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_33ab9c:
    // 0x33ab9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33ab9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33aba0:
    // 0x33aba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33aba4:
    // 0x33aba4: 0x60f809  jalr        $v1
label_33aba8:
    if (ctx->pc == 0x33ABA8u) {
        ctx->pc = 0x33ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABA4u;
        // 0x33aba8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABACu;
        goto label_33abac;
    }
    ctx->pc = 0x33ABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33ABACu);
        ctx->pc = 0x33ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABA4u;
        // 0x33aba8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ABA4u, 0x33ABACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33ABACu;
label_33abac:
    // 0x33abac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33abb0:
    // 0x33abb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33abb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33abb4:
    // 0x33abb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33abb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33abb8:
    // 0x33abb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33abb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33abbc:
    // 0x33abbc: 0x3e00008  jr          $ra
label_33abc0:
    if (ctx->pc == 0x33ABC0u) {
        ctx->pc = 0x33ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABBCu;
        // 0x33abc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABC4u;
        goto label_33abc4;
    }
    ctx->pc = 0x33ABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABBCu;
        // 0x33abc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ABC4u;
label_33abc4:
    // 0x33abc4: 0x0  nop
    ctx->pc = 0x33abc4u;
    // NOP
    ctx->pc = 0x33abc8u;
}
