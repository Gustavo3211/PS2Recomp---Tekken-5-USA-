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

// Function: sub_0032CC90
// Address: 0x32cc90 - 0x32ce40
void sub_0032CC90_0x32cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CC90_0x32cc90");
#endif

    switch (ctx->pc) {
        case 0x32ccd0u: goto label_32ccd0;
        case 0x32cd48u: goto label_32cd48;
        case 0x32cdc0u: goto label_32cdc0;
        case 0x32cde8u: goto label_32cde8;
        case 0x32ce04u: goto label_32ce04;
        case 0x32ce18u: goto label_32ce18;
        default: break;
    }

    ctx->pc = 0x32cc90u;

    // 0x32cc90: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x32cc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32cc94: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x32cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x32cc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cc9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32cca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cca4: 0x24890028  addiu       $t1, $a0, 0x28
    ctx->pc = 0x32cca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x32cca8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x32cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32ccac: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x32ccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ccb0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x32ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x32ccb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ccb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ccb8: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x32ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x32ccbc: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x32ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x32ccc0: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x32ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x32ccc4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x32ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x32ccc8: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x32ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x32cccc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x32ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
label_32ccd0:
    // 0x32ccd0: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x32ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x32ccd4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x32ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x32ccd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32ccdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32cce0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32cce4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x32cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32cce8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x32cce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32ccec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32CCECu;
    {
        const bool branch_taken_0x32ccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCECu;
        // 0x32ccf0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ccec) {
            ctx->pc = 0x32CCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ccd0;
        }
    }
    ctx->pc = 0x32CCF4u;
    // 0x32ccf4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x32ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x32ccf8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x32ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ccfc: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x32ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x32cd00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32cd00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd04: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x32cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x32cd08: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x32cd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd0c: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x32cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x32cd10: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x32cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x32cd14: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x32cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32cd18: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x32cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x32cd1c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x32cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x32cd20: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x32cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x32cd24: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x32cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32cd28: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x32cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32cd2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32cd30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32cd34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32cd38: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x32cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x32cd3c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x32cd40: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x32cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x32cd44: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x32cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
label_32cd48:
    // 0x32cd48: 0x24e2fff4  addiu       $v0, $a3, -0xC
    ctx->pc = 0x32cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
    // 0x32cd4c: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x32cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x32cd50: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x32cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x32cd54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32cd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32cd58: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x32cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x32cd5c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x32cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32cd60: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x32cd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32cd64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32CD64u;
    {
        const bool branch_taken_0x32cd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD64u;
        // 0x32cd68: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd64) {
            ctx->pc = 0x32CD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cd48;
        }
    }
    ctx->pc = 0x32CD6Cu;
    // 0x32cd6c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x32cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x32cd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cd74: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x32cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x32cd78: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x32cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x32cd7c: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x32cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x32cd80: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x32cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x32cd84: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x32cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32cd88: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x32cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x32cd8c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x32cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x32cd90: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x32cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x32cd94: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x32cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32cd98: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x32cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32cd9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32cda0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32cda4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32cda8: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x32cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x32cdac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x32cdb0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x32cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x32cdb4: 0x80d0da6  j           func_343698
    ctx->pc = 0x32CDB4u;
    ctx->pc = 0x32CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDB4u;
    // 0x32cdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343698u, 0x32CDB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32CDBCu;
    // 0x32cdbc: 0x0  nop
    ctx->pc = 0x32cdbcu;
    // NOP
label_32cdc0:
    // 0x32cdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cdc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32cdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cdcc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32cdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdd0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32cdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdd4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x32cdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cddc: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x32cddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cde0: 0x80d0dd4  j           func_343750
    ctx->pc = 0x32CDE0u;
    ctx->pc = 0x32CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDE0u;
    // 0x32cde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343750u, 0x32CDE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32CDE8u;
label_32cde8:
    // 0x32cde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32cde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cdec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32cdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32cdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32cdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cdf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32cdf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32cdfc: 0xc0d0e36  jal         func_3438D8
    ctx->pc = 0x32CDFCu;
    SET_GPR_U32(ctx, 31, 0x32CE04u);
    ctx->pc = 0x32CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDFCu;
    // 0x32ce00: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3438D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3438D8u, 0x32CDFCu, 0x32CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE04u;
label_32ce04:
    // 0x32ce04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ce04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ce08: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32CE08u;
    {
        const bool branch_taken_0x32ce08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE08u;
        // 0x32ce0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce08) {
            ctx->pc = 0x32CE28u;
            goto label_32ce28;
        }
    }
    ctx->pc = 0x32CE10u;
    // 0x32ce10: 0xc0d0f18  jal         func_343C60
    ctx->pc = 0x32CE10u;
    SET_GPR_U32(ctx, 31, 0x32CE18u);
    ctx->pc = 0x343C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C60u, 0x32CE10u, 0x32CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE18u;
label_32ce18:
    // 0x32ce18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CE18u;
    {
        const bool branch_taken_0x32ce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce18) {
            ctx->pc = 0x32CE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CE18u;
            // 0x32ce1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CE2Cu;
            goto label_32ce2c;
        }
    }
    ctx->pc = 0x32CE20u;
    // 0x32ce20: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x32ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x32ce24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ce28:
    // 0x32ce28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ce28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ce2c:
    // 0x32ce2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ce2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ce30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x32CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE34u;
        // 0x32ce38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CE3Cu;
    // 0x32ce3c: 0x0  nop
    ctx->pc = 0x32ce3cu;
    // NOP
    ctx->pc = 0x32ce40u;
}
