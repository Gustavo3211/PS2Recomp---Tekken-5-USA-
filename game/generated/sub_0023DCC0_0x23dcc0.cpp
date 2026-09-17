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

// Function: sub_0023DCC0
// Address: 0x23dcc0 - 0x23ddb8
void sub_0023DCC0_0x23dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DCC0_0x23dcc0");
#endif

    switch (ctx->pc) {
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        default: break;
    }

    ctx->pc = 0x23dcc0u;

label_23dcc0:
    // 0x23dcc0: 0x8f82a970  lw          $v0, -0x5690($gp)
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945136)));
label_23dcc4:
    // 0x23dcc4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23dcc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23dcc8:
    // 0x23dcc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23dccc:
    // 0x23dccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23dcd0:
    // 0x23dcd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23dcd4:
    // 0x23dcd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23dcd8:
    // 0x23dcd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23dcdc:
    if (ctx->pc == 0x23DCDCu) {
        ctx->pc = 0x23DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCD8u;
        // 0x23dcdc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCE0u;
        goto label_23dce0;
    }
    ctx->pc = 0x23DCD8u;
    {
        const bool branch_taken_0x23dcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCD8u;
        // 0x23dcdc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcd8) {
            ctx->pc = 0x23DD10u;
            goto label_23dd10;
        }
    }
    ctx->pc = 0x23DCE0u;
label_23dce0:
    // 0x23dce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23dce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dce4:
    // 0x23dce4: 0xc08f70e  jal         func_23DC38
label_23dce8:
    if (ctx->pc == 0x23DCE8u) {
        ctx->pc = 0x23DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE4u;
        // 0x23dce8: 0xaf80a970  sw          $zero, -0x5690($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCECu;
        goto label_23dcec;
    }
    ctx->pc = 0x23DCE4u;
    SET_GPR_U32(ctx, 31, 0x23DCECu);
    ctx->pc = 0x23DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCE4u;
    // 0x23dce8: 0xaf80a970  sw          $zero, -0x5690($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC38u, 0x23DCE4u, 0x23DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCECu;
label_23dcec:
    // 0x23dcec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dcf0:
    // 0x23dcf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23dcf4:
    // 0x23dcf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23dcf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23dcf8:
    // 0x23dcf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23dcf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23dcfc:
    // 0x23dcfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23dcfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23dd00:
    // 0x23dd00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23dd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23dd04:
    // 0x23dd04: 0x808f70e  j           func_23DC38
label_23dd08:
    if (ctx->pc == 0x23DD08u) {
        ctx->pc = 0x23DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD04u;
        // 0x23dd08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD0Cu;
        goto label_23dd0c;
    }
    ctx->pc = 0x23DD04u;
    ctx->pc = 0x23DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD04u;
    // 0x23dd08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC38u;
    sub_0023DC38_0x23dc38(rdram, ctx, runtime); return;
    ctx->pc = 0x23DD0Cu;
label_23dd0c:
    // 0x23dd0c: 0x0  nop
    ctx->pc = 0x23dd0cu;
    // NOP
label_23dd10:
    // 0x23dd10: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_23dd14:
    // 0x23dd14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23dd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dd18:
    // 0x23dd18: 0x24530af0  addiu       $s3, $v0, 0xAF0
    ctx->pc = 0x23dd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2800));
label_23dd1c:
    // 0x23dd1c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23dd20:
    // 0x23dd20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23dd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dd24:
    // 0x23dd24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23dd28:
    // 0x23dd28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23dd2c:
    // 0x23dd2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23dd30:
    // 0x23dd30: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_23dd34:
    // 0x23dd34: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x23dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_23dd38:
    // 0x23dd38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23dd3c:
    // 0x23dd3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_23dd40:
    // 0x23dd40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_23dd44:
    // 0x23dd44: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x23dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_23dd48:
    // 0x23dd48: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_23dd4c:
    // 0x23dd4c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_23dd50:
    if (ctx->pc == 0x23DD50u) {
        ctx->pc = 0x23DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD4Cu;
        // 0x23dd50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD54u;
        goto label_23dd54;
    }
    ctx->pc = 0x23DD4Cu;
    {
        const bool branch_taken_0x23dd4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD4Cu;
        // 0x23dd50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd4c) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD54u;
label_23dd54:
    // 0x23dd54: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x23dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_23dd58:
    // 0x23dd58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23dd5c:
    if (ctx->pc == 0x23DD5Cu) {
        ctx->pc = 0x23DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD58u;
        // 0x23dd5c: 0x24a20040  addiu       $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD60u;
        goto label_23dd60;
    }
    ctx->pc = 0x23DD58u;
    {
        const bool branch_taken_0x23dd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD58u;
        // 0x23dd5c: 0x24a20040  addiu       $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd58) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD60u;
label_23dd60:
    // 0x23dd60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23dd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23dd64:
    // 0x23dd64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dd68:
    // 0x23dd68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23dd6c:
    // 0x23dd6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23dd70:
    // 0x23dd70: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_23dd74:
    // 0x23dd74: 0xa0f809  jalr        $a1
label_23dd78:
    if (ctx->pc == 0x23DD78u) {
        ctx->pc = 0x23DD7Cu;
        goto label_23dd7c;
    }
    ctx->pc = 0x23DD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23DD7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD74u, 0x23DD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DD7Cu;
label_23dd7c:
    // 0x23dd7c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x23dd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_23dd80:
    // 0x23dd80: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_23dd84:
    if (ctx->pc == 0x23DD84u) {
        ctx->pc = 0x23DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD80u;
        // 0x23dd84: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD88u;
        goto label_23dd88;
    }
    ctx->pc = 0x23DD80u;
    {
        const bool branch_taken_0x23dd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD80u;
        // 0x23dd84: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd80) {
            ctx->pc = 0x23DD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dd38;
        }
    }
    ctx->pc = 0x23DD88u;
label_23dd88:
    // 0x23dd88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23dd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23dd8c:
    // 0x23dd8c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x23dd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_23dd90:
    // 0x23dd90: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
label_23dd94:
    if (ctx->pc == 0x23DD94u) {
        ctx->pc = 0x23DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD90u;
        // 0x23dd94: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD98u;
        goto label_23dd98;
    }
    ctx->pc = 0x23DD90u;
    {
        const bool branch_taken_0x23dd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd90) {
            ctx->pc = 0x23DD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD90u;
            // 0x23dd94: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dd20;
        }
    }
    ctx->pc = 0x23DD98u;
label_23dd98:
    // 0x23dd98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23dd98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23dd9c:
    // 0x23dd9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23dda0:
    // 0x23dda0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23dda0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23dda4:
    // 0x23dda4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23dda4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23dda8:
    // 0x23dda8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23dda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23ddac:
    // 0x23ddac: 0x3e00008  jr          $ra
label_23ddb0:
    if (ctx->pc == 0x23DDB0u) {
        ctx->pc = 0x23DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDACu;
        // 0x23ddb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB4u;
        goto label_23ddb4;
    }
    ctx->pc = 0x23DDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDACu;
        // 0x23ddb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DDB4u;
label_23ddb4:
    // 0x23ddb4: 0x0  nop
    ctx->pc = 0x23ddb4u;
    // NOP
    ctx->pc = 0x23ddb8u;
}
