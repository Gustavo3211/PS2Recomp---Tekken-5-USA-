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

// Function: sub_002EFA20
// Address: 0x2efa20 - 0x2efaf0
void sub_002EFA20_0x2efa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFA20_0x2efa20");
#endif

    switch (ctx->pc) {
        case 0x2efa20u: goto label_2efa20;
        case 0x2efa24u: goto label_2efa24;
        case 0x2efa28u: goto label_2efa28;
        case 0x2efa2cu: goto label_2efa2c;
        case 0x2efa30u: goto label_2efa30;
        case 0x2efa34u: goto label_2efa34;
        case 0x2efa38u: goto label_2efa38;
        case 0x2efa3cu: goto label_2efa3c;
        case 0x2efa40u: goto label_2efa40;
        case 0x2efa44u: goto label_2efa44;
        case 0x2efa48u: goto label_2efa48;
        case 0x2efa4cu: goto label_2efa4c;
        case 0x2efa50u: goto label_2efa50;
        case 0x2efa54u: goto label_2efa54;
        case 0x2efa58u: goto label_2efa58;
        case 0x2efa5cu: goto label_2efa5c;
        case 0x2efa60u: goto label_2efa60;
        case 0x2efa64u: goto label_2efa64;
        case 0x2efa68u: goto label_2efa68;
        case 0x2efa6cu: goto label_2efa6c;
        case 0x2efa70u: goto label_2efa70;
        case 0x2efa74u: goto label_2efa74;
        case 0x2efa78u: goto label_2efa78;
        case 0x2efa7cu: goto label_2efa7c;
        case 0x2efa80u: goto label_2efa80;
        case 0x2efa84u: goto label_2efa84;
        case 0x2efa88u: goto label_2efa88;
        case 0x2efa8cu: goto label_2efa8c;
        case 0x2efa90u: goto label_2efa90;
        case 0x2efa94u: goto label_2efa94;
        case 0x2efa98u: goto label_2efa98;
        case 0x2efa9cu: goto label_2efa9c;
        case 0x2efaa0u: goto label_2efaa0;
        case 0x2efaa4u: goto label_2efaa4;
        case 0x2efaa8u: goto label_2efaa8;
        case 0x2efaacu: goto label_2efaac;
        case 0x2efab0u: goto label_2efab0;
        case 0x2efab4u: goto label_2efab4;
        case 0x2efab8u: goto label_2efab8;
        case 0x2efabcu: goto label_2efabc;
        case 0x2efac0u: goto label_2efac0;
        case 0x2efac4u: goto label_2efac4;
        case 0x2efac8u: goto label_2efac8;
        case 0x2efaccu: goto label_2efacc;
        case 0x2efad0u: goto label_2efad0;
        case 0x2efad4u: goto label_2efad4;
        case 0x2efad8u: goto label_2efad8;
        case 0x2efadcu: goto label_2efadc;
        case 0x2efae0u: goto label_2efae0;
        case 0x2efae4u: goto label_2efae4;
        case 0x2efae8u: goto label_2efae8;
        case 0x2efaecu: goto label_2efaec;
        default: break;
    }

    ctx->pc = 0x2efa20u;

label_2efa20:
    // 0x2efa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2efa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2efa24:
    // 0x2efa24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2efa28:
    // 0x2efa28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2efa2c:
    // 0x2efa2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2efa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2efa30:
    // 0x2efa30: 0xc0bb8e4  jal         func_2EE390
label_2efa34:
    if (ctx->pc == 0x2EFA34u) {
        ctx->pc = 0x2EFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA30u;
        // 0x2efa34: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA38u;
        goto label_2efa38;
    }
    ctx->pc = 0x2EFA30u;
    SET_GPR_U32(ctx, 31, 0x2EFA38u);
    ctx->pc = 0x2EFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA30u;
    // 0x2efa34: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2EFA30u, 0x2EFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA38u;
label_2efa38:
    // 0x2efa38: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_2efa3c:
    if (ctx->pc == 0x2EFA3Cu) {
        ctx->pc = 0x2EFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA38u;
        // 0x2efa3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA40u;
        goto label_2efa40;
    }
    ctx->pc = 0x2EFA38u;
    {
        const bool branch_taken_0x2efa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efa38) {
            ctx->pc = 0x2EFA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA38u;
            // 0x2efa3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFAE4u;
            goto label_2efae4;
        }
    }
    ctx->pc = 0x2EFA40u;
label_2efa40:
    // 0x2efa40: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2efa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2efa44:
    // 0x2efa44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2efa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2efa48:
    // 0x2efa48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2efa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2efa4c:
    // 0x2efa4c: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2efa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2efa50:
    // 0x2efa50: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2efa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efa54:
    // 0x2efa54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2efa58:
    if (ctx->pc == 0x2EFA58u) {
        ctx->pc = 0x2EFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA54u;
        // 0x2efa58: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA5Cu;
        goto label_2efa5c;
    }
    ctx->pc = 0x2EFA54u;
    {
        const bool branch_taken_0x2efa54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efa54) {
            ctx->pc = 0x2EFA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA54u;
            // 0x2efa58: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA5Cu;
label_2efa5c:
    // 0x2efa5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2efa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2efa60:
    // 0x2efa60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efa64:
    // 0x2efa64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efa68:
    if (ctx->pc == 0x2EFA68u) {
        ctx->pc = 0x2EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA64u;
        // 0x2efa68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA6Cu;
        goto label_2efa6c;
    }
    ctx->pc = 0x2EFA64u;
    {
        const bool branch_taken_0x2efa64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA64u;
        // 0x2efa68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa64) {
            ctx->pc = 0x2EFA78u;
            goto label_2efa78;
        }
    }
    ctx->pc = 0x2EFA6Cu;
label_2efa6c:
    // 0x2efa6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efa70:
    // 0x2efa70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2efa70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efa74:
    // 0x2efa74: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efa74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efa78:
    // 0x2efa78: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2efa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2efa7c:
    // 0x2efa7c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2efa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2efa80:
    // 0x2efa80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2efa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2efa84:
    // 0x2efa84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2efa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2efa88:
    // 0x2efa88: 0x60f809  jalr        $v1
label_2efa8c:
    if (ctx->pc == 0x2EFA8Cu) {
        ctx->pc = 0x2EFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA88u;
        // 0x2efa8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA90u;
        goto label_2efa90;
    }
    ctx->pc = 0x2EFA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EFA90u);
        ctx->pc = 0x2EFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA88u;
        // 0x2efa8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA88u, 0x2EFA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFA90u;
label_2efa90:
    // 0x2efa90: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2efa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2efa94:
    // 0x2efa94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2efa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2efa98:
    // 0x2efa98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2efa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2efa9c:
    // 0x2efa9c: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2efa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2efaa0:
    // 0x2efaa0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2efaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efaa4:
    // 0x2efaa4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2efaa8:
    if (ctx->pc == 0x2EFAA8u) {
        ctx->pc = 0x2EFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAA4u;
        // 0x2efaa8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFAACu;
        goto label_2efaac;
    }
    ctx->pc = 0x2EFAA4u;
    {
        const bool branch_taken_0x2efaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efaa4) {
            ctx->pc = 0x2EFAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFAA4u;
            // 0x2efaa8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFAC0u;
            goto label_2efac0;
        }
    }
    ctx->pc = 0x2EFAACu;
label_2efaac:
    // 0x2efaac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2efaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2efab0:
    // 0x2efab0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efab4:
    // 0x2efab4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efab8:
    if (ctx->pc == 0x2EFAB8u) {
        ctx->pc = 0x2EFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAB4u;
        // 0x2efab8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFABCu;
        goto label_2efabc;
    }
    ctx->pc = 0x2EFAB4u;
    {
        const bool branch_taken_0x2efab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAB4u;
        // 0x2efab8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efab4) {
            ctx->pc = 0x2EFAC8u;
            goto label_2efac8;
        }
    }
    ctx->pc = 0x2EFABCu;
label_2efabc:
    // 0x2efabc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efac0:
    // 0x2efac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2efac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efac4:
    // 0x2efac4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efac8:
    // 0x2efac8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2efacc:
    // 0x2efacc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2efad0:
    // 0x2efad0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2efad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2efad4:
    // 0x2efad4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2efad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2efad8:
    // 0x2efad8: 0x60f809  jalr        $v1
label_2efadc:
    if (ctx->pc == 0x2EFADCu) {
        ctx->pc = 0x2EFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAD8u;
        // 0x2efadc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFAE0u;
        goto label_2efae0;
    }
    ctx->pc = 0x2EFAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EFAE0u);
        ctx->pc = 0x2EFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAD8u;
        // 0x2efadc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFAD8u, 0x2EFAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFAE0u;
label_2efae0:
    // 0x2efae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2efae4:
    // 0x2efae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2efae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2efae8:
    // 0x2efae8: 0x3e00008  jr          $ra
label_2efaec:
    if (ctx->pc == 0x2EFAECu) {
        ctx->pc = 0x2EFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAE8u;
        // 0x2efaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFAF0u;
        goto label_fallthrough_0x2efae8;
    }
    ctx->pc = 0x2EFAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAE8u;
        // 0x2efaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efae8:
    ctx->pc = 0x2EFAF0u;
}
