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

// Function: sub_002EEB30
// Address: 0x2eeb30 - 0x2eebc0
void sub_002EEB30_0x2eeb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEB30_0x2eeb30");
#endif

    switch (ctx->pc) {
        case 0x2eeb30u: goto label_2eeb30;
        case 0x2eeb34u: goto label_2eeb34;
        case 0x2eeb38u: goto label_2eeb38;
        case 0x2eeb3cu: goto label_2eeb3c;
        case 0x2eeb40u: goto label_2eeb40;
        case 0x2eeb44u: goto label_2eeb44;
        case 0x2eeb48u: goto label_2eeb48;
        case 0x2eeb4cu: goto label_2eeb4c;
        case 0x2eeb50u: goto label_2eeb50;
        case 0x2eeb54u: goto label_2eeb54;
        case 0x2eeb58u: goto label_2eeb58;
        case 0x2eeb5cu: goto label_2eeb5c;
        case 0x2eeb60u: goto label_2eeb60;
        case 0x2eeb64u: goto label_2eeb64;
        case 0x2eeb68u: goto label_2eeb68;
        case 0x2eeb6cu: goto label_2eeb6c;
        case 0x2eeb70u: goto label_2eeb70;
        case 0x2eeb74u: goto label_2eeb74;
        case 0x2eeb78u: goto label_2eeb78;
        case 0x2eeb7cu: goto label_2eeb7c;
        case 0x2eeb80u: goto label_2eeb80;
        case 0x2eeb84u: goto label_2eeb84;
        case 0x2eeb88u: goto label_2eeb88;
        case 0x2eeb8cu: goto label_2eeb8c;
        case 0x2eeb90u: goto label_2eeb90;
        case 0x2eeb94u: goto label_2eeb94;
        case 0x2eeb98u: goto label_2eeb98;
        case 0x2eeb9cu: goto label_2eeb9c;
        case 0x2eeba0u: goto label_2eeba0;
        case 0x2eeba4u: goto label_2eeba4;
        case 0x2eeba8u: goto label_2eeba8;
        case 0x2eebacu: goto label_2eebac;
        case 0x2eebb0u: goto label_2eebb0;
        case 0x2eebb4u: goto label_2eebb4;
        case 0x2eebb8u: goto label_2eebb8;
        case 0x2eebbcu: goto label_2eebbc;
        default: break;
    }

    ctx->pc = 0x2eeb30u;

label_2eeb30:
    // 0x2eeb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eeb34:
    // 0x2eeb34: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2eeb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
label_2eeb38:
    // 0x2eeb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eeb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2eeb3c:
    // 0x2eeb3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eeb40:
    // 0x2eeb40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2eeb44:
    if (ctx->pc == 0x2EEB44u) {
        ctx->pc = 0x2EEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB40u;
        // 0x2eeb44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB48u;
        goto label_2eeb48;
    }
    ctx->pc = 0x2EEB40u;
    {
        const bool branch_taken_0x2eeb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB40u;
        // 0x2eeb44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb40) {
            ctx->pc = 0x2EEB58u;
            goto label_2eeb58;
        }
    }
    ctx->pc = 0x2EEB48u;
label_2eeb48:
    // 0x2eeb48: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eeb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2eeb4c:
    // 0x2eeb4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eeb50:
    // 0x2eeb50: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eeb54:
    if (ctx->pc == 0x2EEB54u) {
        ctx->pc = 0x2EEB58u;
        goto label_2eeb58;
    }
    ctx->pc = 0x2EEB50u;
    {
        const bool branch_taken_0x2eeb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eeb50) {
            ctx->pc = 0x2EEB64u;
            goto label_2eeb64;
        }
    }
    ctx->pc = 0x2EEB58u;
label_2eeb58:
    // 0x2eeb58: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eeb58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eeb5c:
    // 0x2eeb5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eeb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb60:
    // 0x2eeb60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eeb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eeb64:
    // 0x2eeb64: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2eeb68:
    if (ctx->pc == 0x2EEB68u) {
        ctx->pc = 0x2EEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB64u;
        // 0x2eeb68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB6Cu;
        goto label_2eeb6c;
    }
    ctx->pc = 0x2EEB64u;
    {
        const bool branch_taken_0x2eeb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB64u;
        // 0x2eeb68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb64) {
            ctx->pc = 0x2EEBB4u;
            goto label_2eebb4;
        }
    }
    ctx->pc = 0x2EEB6Cu;
label_2eeb6c:
    // 0x2eeb6c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eeb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2eeb70:
    // 0x2eeb70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2eeb74:
    if (ctx->pc == 0x2EEB74u) {
        ctx->pc = 0x2EEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB70u;
        // 0x2eeb74: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB78u;
        goto label_2eeb78;
    }
    ctx->pc = 0x2EEB70u;
    {
        const bool branch_taken_0x2eeb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb70) {
            ctx->pc = 0x2EEB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEB70u;
            // 0x2eeb74: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEB8Cu;
            goto label_2eeb8c;
        }
    }
    ctx->pc = 0x2EEB78u;
label_2eeb78:
    // 0x2eeb78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eeb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2eeb7c:
    // 0x2eeb7c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eeb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eeb80:
    // 0x2eeb80: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2eeb84:
    if (ctx->pc == 0x2EEB84u) {
        ctx->pc = 0x2EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB80u;
        // 0x2eeb84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB88u;
        goto label_2eeb88;
    }
    ctx->pc = 0x2EEB80u;
    {
        const bool branch_taken_0x2eeb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB80u;
        // 0x2eeb84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb80) {
            ctx->pc = 0x2EEB94u;
            goto label_2eeb94;
        }
    }
    ctx->pc = 0x2EEB88u;
label_2eeb88:
    // 0x2eeb88: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eeb88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eeb8c:
    // 0x2eeb8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eeb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb90:
    // 0x2eeb90: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eeb90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eeb94:
    // 0x2eeb94: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2eeb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2eeb98:
    // 0x2eeb98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eeb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb9c:
    // 0x2eeb9c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2eeb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2eeba0:
    // 0x2eeba0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eeba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eeba4:
    // 0x2eeba4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eeba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eeba8:
    // 0x2eeba8: 0x60f809  jalr        $v1
label_2eebac:
    if (ctx->pc == 0x2EEBACu) {
        ctx->pc = 0x2EEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBA8u;
        // 0x2eebac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBB0u;
        goto label_2eebb0;
    }
    ctx->pc = 0x2EEBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EEBB0u);
        ctx->pc = 0x2EEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBA8u;
        // 0x2eebac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEBA8u, 0x2EEBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEBB0u;
label_2eebb0:
    // 0x2eebb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eebb4:
    // 0x2eebb4: 0x3e00008  jr          $ra
label_2eebb8:
    if (ctx->pc == 0x2EEBB8u) {
        ctx->pc = 0x2EEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB4u;
        // 0x2eebb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBBCu;
        goto label_2eebbc;
    }
    ctx->pc = 0x2EEBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB4u;
        // 0x2eebb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEBBCu;
label_2eebbc:
    // 0x2eebbc: 0x0  nop
    ctx->pc = 0x2eebbcu;
    // NOP
    ctx->pc = 0x2eebc0u;
}
