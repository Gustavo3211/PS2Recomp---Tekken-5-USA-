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

// Function: sub_002EED58
// Address: 0x2eed58 - 0x2eee10
void sub_002EED58_0x2eed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EED58_0x2eed58");
#endif

    switch (ctx->pc) {
        case 0x2eed58u: goto label_2eed58;
        case 0x2eed5cu: goto label_2eed5c;
        case 0x2eed60u: goto label_2eed60;
        case 0x2eed64u: goto label_2eed64;
        case 0x2eed68u: goto label_2eed68;
        case 0x2eed6cu: goto label_2eed6c;
        case 0x2eed70u: goto label_2eed70;
        case 0x2eed74u: goto label_2eed74;
        case 0x2eed78u: goto label_2eed78;
        case 0x2eed7cu: goto label_2eed7c;
        case 0x2eed80u: goto label_2eed80;
        case 0x2eed84u: goto label_2eed84;
        case 0x2eed88u: goto label_2eed88;
        case 0x2eed8cu: goto label_2eed8c;
        case 0x2eed90u: goto label_2eed90;
        case 0x2eed94u: goto label_2eed94;
        case 0x2eed98u: goto label_2eed98;
        case 0x2eed9cu: goto label_2eed9c;
        case 0x2eeda0u: goto label_2eeda0;
        case 0x2eeda4u: goto label_2eeda4;
        case 0x2eeda8u: goto label_2eeda8;
        case 0x2eedacu: goto label_2eedac;
        case 0x2eedb0u: goto label_2eedb0;
        case 0x2eedb4u: goto label_2eedb4;
        case 0x2eedb8u: goto label_2eedb8;
        case 0x2eedbcu: goto label_2eedbc;
        case 0x2eedc0u: goto label_2eedc0;
        case 0x2eedc4u: goto label_2eedc4;
        case 0x2eedc8u: goto label_2eedc8;
        case 0x2eedccu: goto label_2eedcc;
        case 0x2eedd0u: goto label_2eedd0;
        case 0x2eedd4u: goto label_2eedd4;
        case 0x2eedd8u: goto label_2eedd8;
        case 0x2eeddcu: goto label_2eeddc;
        case 0x2eede0u: goto label_2eede0;
        case 0x2eede4u: goto label_2eede4;
        case 0x2eede8u: goto label_2eede8;
        case 0x2eedecu: goto label_2eedec;
        case 0x2eedf0u: goto label_2eedf0;
        case 0x2eedf4u: goto label_2eedf4;
        case 0x2eedf8u: goto label_2eedf8;
        case 0x2eedfcu: goto label_2eedfc;
        case 0x2eee00u: goto label_2eee00;
        case 0x2eee04u: goto label_2eee04;
        case 0x2eee08u: goto label_2eee08;
        case 0x2eee0cu: goto label_2eee0c;
        default: break;
    }

    ctx->pc = 0x2eed58u;

label_2eed58:
    // 0x2eed58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eed5c:
    // 0x2eed5c: 0x248500f0  addiu       $a1, $a0, 0xF0
    ctx->pc = 0x2eed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_2eed60:
    // 0x2eed60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2eed64:
    // 0x2eed64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eed68:
    // 0x2eed68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eed6c:
    if (ctx->pc == 0x2EED6Cu) {
        ctx->pc = 0x2EED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED68u;
        // 0x2eed6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED70u;
        goto label_2eed70;
    }
    ctx->pc = 0x2EED68u;
    {
        const bool branch_taken_0x2eed68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED68u;
        // 0x2eed6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed68) {
            ctx->pc = 0x2EED80u;
            goto label_2eed80;
        }
    }
    ctx->pc = 0x2EED70u;
label_2eed70:
    // 0x2eed70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2eed74:
    // 0x2eed74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eed78:
    // 0x2eed78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eed7c:
    if (ctx->pc == 0x2EED7Cu) {
        ctx->pc = 0x2EED80u;
        goto label_2eed80;
    }
    ctx->pc = 0x2EED78u;
    {
        const bool branch_taken_0x2eed78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eed78) {
            ctx->pc = 0x2EED8Cu;
            goto label_2eed8c;
        }
    }
    ctx->pc = 0x2EED80u;
label_2eed80:
    // 0x2eed80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eed80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eed84:
    // 0x2eed84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eed88:
    // 0x2eed88: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eed88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eed8c:
    // 0x2eed8c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2eed90:
    if (ctx->pc == 0x2EED90u) {
        ctx->pc = 0x2EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED8Cu;
        // 0x2eed90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EED94u;
        goto label_2eed94;
    }
    ctx->pc = 0x2EED8Cu;
    {
        const bool branch_taken_0x2eed8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED8Cu;
        // 0x2eed90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed8c) {
            ctx->pc = 0x2EEE08u;
            goto label_2eee08;
        }
    }
    ctx->pc = 0x2EED94u;
label_2eed94:
    // 0x2eed94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eed98:
    // 0x2eed98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eed9c:
    if (ctx->pc == 0x2EED9Cu) {
        ctx->pc = 0x2EED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED98u;
        // 0x2eed9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDA0u;
        goto label_2eeda0;
    }
    ctx->pc = 0x2EED98u;
    {
        const bool branch_taken_0x2eed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED98u;
        // 0x2eed9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed98) {
            ctx->pc = 0x2EEDB0u;
            goto label_2eedb0;
        }
    }
    ctx->pc = 0x2EEDA0u;
label_2eeda0:
    // 0x2eeda0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eeda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2eeda4:
    // 0x2eeda4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eeda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eeda8:
    // 0x2eeda8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2eedac:
    if (ctx->pc == 0x2EEDACu) {
        ctx->pc = 0x2EEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDA8u;
        // 0x2eedac: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDB0u;
        goto label_2eedb0;
    }
    ctx->pc = 0x2EEDA8u;
    {
        const bool branch_taken_0x2eeda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eeda8) {
            ctx->pc = 0x2EEDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDA8u;
            // 0x2eedac: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEDC0u;
            goto label_2eedc0;
        }
    }
    ctx->pc = 0x2EEDB0u;
label_2eedb0:
    // 0x2eedb0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eedb4:
    // 0x2eedb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eedb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eedb8:
    // 0x2eedb8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eedbc:
    // 0x2eedbc: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x2eedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
label_2eedc0:
    // 0x2eedc0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eedc4:
    // 0x2eedc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eedc8:
    if (ctx->pc == 0x2EEDC8u) {
        ctx->pc = 0x2EEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDC4u;
        // 0x2eedc8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDCCu;
        goto label_2eedcc;
    }
    ctx->pc = 0x2EEDC4u;
    {
        const bool branch_taken_0x2eedc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eedc4) {
            ctx->pc = 0x2EEDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDC4u;
            // 0x2eedc8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEDE0u;
            goto label_2eede0;
        }
    }
    ctx->pc = 0x2EEDCCu;
label_2eedcc:
    // 0x2eedcc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eedd0:
    // 0x2eedd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eedd4:
    // 0x2eedd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eedd8:
    if (ctx->pc == 0x2EEDD8u) {
        ctx->pc = 0x2EEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDD4u;
        // 0x2eedd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEDDCu;
        goto label_2eeddc;
    }
    ctx->pc = 0x2EEDD4u;
    {
        const bool branch_taken_0x2eedd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDD4u;
        // 0x2eedd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedd4) {
            ctx->pc = 0x2EEDE8u;
            goto label_2eede8;
        }
    }
    ctx->pc = 0x2EEDDCu;
label_2eeddc:
    // 0x2eeddc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eeddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eede0:
    // 0x2eede0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eede0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eede4:
    // 0x2eede4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eede4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eede8:
    // 0x2eede8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2eede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2eedec:
    // 0x2eedec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eedecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eedf0:
    // 0x2eedf0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2eedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2eedf4:
    // 0x2eedf4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eedf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eedf8:
    // 0x2eedf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eedfc:
    // 0x2eedfc: 0x60f809  jalr        $v1
label_2eee00:
    if (ctx->pc == 0x2EEE00u) {
        ctx->pc = 0x2EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDFCu;
        // 0x2eee00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE04u;
        goto label_2eee04;
    }
    ctx->pc = 0x2EEDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EEE04u);
        ctx->pc = 0x2EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDFCu;
        // 0x2eee00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEDFCu, 0x2EEE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEE04u;
label_2eee04:
    // 0x2eee04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eee04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eee08:
    // 0x2eee08: 0x3e00008  jr          $ra
label_2eee0c:
    if (ctx->pc == 0x2EEE0Cu) {
        ctx->pc = 0x2EEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE08u;
        // 0x2eee0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE10u;
        goto label_fallthrough_0x2eee08;
    }
    ctx->pc = 0x2EEE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE08u;
        // 0x2eee0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eee08:
    ctx->pc = 0x2EEE10u;
}
