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

// Function: sub_0034CCC8
// Address: 0x34ccc8 - 0x34ce68
void sub_0034CCC8_0x34ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CCC8_0x34ccc8");
#endif

    switch (ctx->pc) {
        case 0x34ccf8u: goto label_34ccf8;
        case 0x34cd5cu: goto label_34cd5c;
        case 0x34cd80u: goto label_34cd80;
        case 0x34ce1cu: goto label_34ce1c;
        default: break;
    }

    ctx->pc = 0x34ccc8u;

    // 0x34ccc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34ccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34cccc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x34ccd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34ccd4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ccd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ccd8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34ccdc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34cce0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34cce4: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34cce8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ccec: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x34ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x34ccf0: 0xc04a3d7  jal         func_128F5C
    ctx->pc = 0x34CCF0u;
    SET_GPR_U32(ctx, 31, 0x34CCF8u);
    ctx->pc = 0x128F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F5Cu, 0x34CCF0u, 0x34CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCF8u;
label_34ccf8:
    // 0x34ccf8: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34ccfc: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34cd00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CD00u;
    {
        const bool branch_taken_0x34cd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cd00) {
            ctx->pc = 0x34CD14u;
            goto label_34cd14;
        }
    }
    ctx->pc = 0x34CD08u;
    // 0x34cd08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34cd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd0c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x34CD0Cu;
    {
        const bool branch_taken_0x34cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd0c) {
            ctx->pc = 0x34CE50u;
            goto label_34ce50;
        }
    }
    ctx->pc = 0x34CD14u;
label_34cd14:
    // 0x34cd14: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34cd18: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34cd1c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x34cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cd20: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34cd24: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34cd28: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x34cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34cd2c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34cd30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34cd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34cd34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CD34u;
    {
        const bool branch_taken_0x34cd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cd34) {
            ctx->pc = 0x34CD48u;
            goto label_34cd48;
        }
    }
    ctx->pc = 0x34CD3Cu;
    // 0x34cd3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34cd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd40: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x34CD40u;
    {
        const bool branch_taken_0x34cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd40) {
            ctx->pc = 0x34CE50u;
            goto label_34ce50;
        }
    }
    ctx->pc = 0x34CD48u;
label_34cd48:
    // 0x34cd48: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34cd4c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34cd50: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34cd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34cd54: 0xc04a58e  jal         func_129638
    ctx->pc = 0x34CD54u;
    SET_GPR_U32(ctx, 31, 0x34CD5Cu);
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x34CD54u, 0x34CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD5Cu;
label_34cd5c:
    // 0x34cd5c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34cd60: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34cd64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cd68: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x34cd68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cd6c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34cd70: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34cd74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cd78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34cd7c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_34cd80:
    // 0x34cd80: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cd84: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34cd88: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x34cd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34cd8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CD8Cu;
    {
        const bool branch_taken_0x34cd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cd8c) {
            ctx->pc = 0x34CD9Cu;
            goto label_34cd9c;
        }
    }
    ctx->pc = 0x34CD94u;
    // 0x34cd94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34CD94u;
    {
        const bool branch_taken_0x34cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd94) {
            ctx->pc = 0x34CDE0u;
            goto label_34cde0;
        }
    }
    ctx->pc = 0x34CD9Cu;
label_34cd9c:
    // 0x34cd9c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cda0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x34cda0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cda4: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x34cda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x34cda8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x34cda8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x34cdac: 0x9022f4f1  lbu         $v0, -0xB0F($at)
    ctx->pc = 0x34cdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964465)));
    // 0x34cdb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34cdb4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x34cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x34cdb8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x34cdb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x34cdbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CDBCu;
    {
        const bool branch_taken_0x34cdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cdbc) {
            ctx->pc = 0x34CDCCu;
            goto label_34cdcc;
        }
    }
    ctx->pc = 0x34CDC4u;
    // 0x34cdc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34CDC4u;
    {
        const bool branch_taken_0x34cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cdc4) {
            ctx->pc = 0x34CDE0u;
            goto label_34cde0;
        }
    }
    ctx->pc = 0x34CDCCu;
label_34cdcc:
    // 0x34cdcc: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cdd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34cdd4: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34cdd8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x34CDD8u;
    {
        const bool branch_taken_0x34cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cdd8) {
            ctx->pc = 0x34CD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34cd80;
        }
    }
    ctx->pc = 0x34CDE0u;
label_34cde0:
    // 0x34cde0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cde4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34cde8: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34cdec: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34cdf0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34cdf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cdf8: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cdfc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CDFCu;
    {
        const bool branch_taken_0x34cdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34cdfc) {
            ctx->pc = 0x34CE10u;
            goto label_34ce10;
        }
    }
    ctx->pc = 0x34CE04u;
    // 0x34ce04: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x34ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x34ce08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34CE08u;
    {
        const bool branch_taken_0x34ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ce08) {
            ctx->pc = 0x34CE20u;
            goto label_34ce20;
        }
    }
    ctx->pc = 0x34CE10u;
label_34ce10:
    // 0x34ce10: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x34ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ce14: 0xc049d7e  jal         func_1275F8
    ctx->pc = 0x34CE14u;
    SET_GPR_U32(ctx, 31, 0x34CE1Cu);
    ctx->pc = 0x1275F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275F8u, 0x34CE14u, 0x34CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE1Cu;
label_34ce1c:
    // 0x34ce1c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34ce20:
    // 0x34ce20: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ce24: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x34ce24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ce28: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ce2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CE2Cu;
    {
        const bool branch_taken_0x34ce2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ce2c) {
            ctx->pc = 0x34CE40u;
            goto label_34ce40;
        }
    }
    ctx->pc = 0x34CE34u;
    // 0x34ce34: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ce38: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ce3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34ce40:
    // 0x34ce40: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ce44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34ce48: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34ce4c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34ce50:
    // 0x34ce50: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ce50u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce54: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34ce54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ce58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34ce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ce5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34ce5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34ce60: 0x3e00008  jr          $ra
    ctx->pc = 0x34CE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CE68u;
}
