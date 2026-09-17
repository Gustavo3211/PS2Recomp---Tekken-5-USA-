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

// Function: sub_002EFBB0
// Address: 0x2efbb0 - 0x2efcd8
void sub_002EFBB0_0x2efbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFBB0_0x2efbb0");
#endif

    switch (ctx->pc) {
        case 0x2efbb0u: goto label_2efbb0;
        case 0x2efbb4u: goto label_2efbb4;
        case 0x2efbb8u: goto label_2efbb8;
        case 0x2efbbcu: goto label_2efbbc;
        case 0x2efbc0u: goto label_2efbc0;
        case 0x2efbc4u: goto label_2efbc4;
        case 0x2efbc8u: goto label_2efbc8;
        case 0x2efbccu: goto label_2efbcc;
        case 0x2efbd0u: goto label_2efbd0;
        case 0x2efbd4u: goto label_2efbd4;
        case 0x2efbd8u: goto label_2efbd8;
        case 0x2efbdcu: goto label_2efbdc;
        case 0x2efbe0u: goto label_2efbe0;
        case 0x2efbe4u: goto label_2efbe4;
        case 0x2efbe8u: goto label_2efbe8;
        case 0x2efbecu: goto label_2efbec;
        case 0x2efbf0u: goto label_2efbf0;
        case 0x2efbf4u: goto label_2efbf4;
        case 0x2efbf8u: goto label_2efbf8;
        case 0x2efbfcu: goto label_2efbfc;
        case 0x2efc00u: goto label_2efc00;
        case 0x2efc04u: goto label_2efc04;
        case 0x2efc08u: goto label_2efc08;
        case 0x2efc0cu: goto label_2efc0c;
        case 0x2efc10u: goto label_2efc10;
        case 0x2efc14u: goto label_2efc14;
        case 0x2efc18u: goto label_2efc18;
        case 0x2efc1cu: goto label_2efc1c;
        case 0x2efc20u: goto label_2efc20;
        case 0x2efc24u: goto label_2efc24;
        case 0x2efc28u: goto label_2efc28;
        case 0x2efc2cu: goto label_2efc2c;
        case 0x2efc30u: goto label_2efc30;
        case 0x2efc34u: goto label_2efc34;
        case 0x2efc38u: goto label_2efc38;
        case 0x2efc3cu: goto label_2efc3c;
        case 0x2efc40u: goto label_2efc40;
        case 0x2efc44u: goto label_2efc44;
        case 0x2efc48u: goto label_2efc48;
        case 0x2efc4cu: goto label_2efc4c;
        case 0x2efc50u: goto label_2efc50;
        case 0x2efc54u: goto label_2efc54;
        case 0x2efc58u: goto label_2efc58;
        case 0x2efc5cu: goto label_2efc5c;
        case 0x2efc60u: goto label_2efc60;
        case 0x2efc64u: goto label_2efc64;
        case 0x2efc68u: goto label_2efc68;
        case 0x2efc6cu: goto label_2efc6c;
        case 0x2efc70u: goto label_2efc70;
        case 0x2efc74u: goto label_2efc74;
        case 0x2efc78u: goto label_2efc78;
        case 0x2efc7cu: goto label_2efc7c;
        case 0x2efc80u: goto label_2efc80;
        case 0x2efc84u: goto label_2efc84;
        case 0x2efc88u: goto label_2efc88;
        case 0x2efc8cu: goto label_2efc8c;
        case 0x2efc90u: goto label_2efc90;
        case 0x2efc94u: goto label_2efc94;
        case 0x2efc98u: goto label_2efc98;
        case 0x2efc9cu: goto label_2efc9c;
        case 0x2efca0u: goto label_2efca0;
        case 0x2efca4u: goto label_2efca4;
        case 0x2efca8u: goto label_2efca8;
        case 0x2efcacu: goto label_2efcac;
        case 0x2efcb0u: goto label_2efcb0;
        case 0x2efcb4u: goto label_2efcb4;
        case 0x2efcb8u: goto label_2efcb8;
        case 0x2efcbcu: goto label_2efcbc;
        case 0x2efcc0u: goto label_2efcc0;
        case 0x2efcc4u: goto label_2efcc4;
        case 0x2efcc8u: goto label_2efcc8;
        case 0x2efcccu: goto label_2efccc;
        case 0x2efcd0u: goto label_2efcd0;
        case 0x2efcd4u: goto label_2efcd4;
        default: break;
    }

    ctx->pc = 0x2efbb0u;

label_2efbb0:
    // 0x2efbb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2efbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2efbb4:
    // 0x2efbb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2efbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2efbb8:
    // 0x2efbb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2efbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efbbc:
    // 0x2efbbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2efbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2efbc0:
    // 0x2efbc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2efbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efbc4:
    // 0x2efbc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2efbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2efbc8:
    // 0x2efbc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2efbc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2efbcc:
    // 0x2efbcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2efbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2efbd0:
    // 0x2efbd0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2efbd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2efbd4:
    // 0x2efbd4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2efbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2efbd8:
    // 0x2efbd8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2efbd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2efbdc:
    // 0x2efbdc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2efbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2efbe0:
    // 0x2efbe0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2efbe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2efbe4:
    // 0x2efbe4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2efbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2efbe8:
    // 0x2efbe8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2efbe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2efbec:
    // 0x2efbec: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2efbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2efbf0:
    // 0x2efbf0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2efbf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2efbf4:
    // 0x2efbf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2efbf8:
    // 0x2efbf8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2efbfc:
    if (ctx->pc == 0x2EFBFCu) {
        ctx->pc = 0x2EFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBF8u;
        // 0x2efbfc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC00u;
        goto label_2efc00;
    }
    ctx->pc = 0x2EFBF8u;
    {
        const bool branch_taken_0x2efbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBF8u;
        // 0x2efbfc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbf8) {
            ctx->pc = 0x2EFC60u;
            goto label_2efc60;
        }
    }
    ctx->pc = 0x2EFC00u;
label_2efc00:
    // 0x2efc00: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2efc04:
    if (ctx->pc == 0x2EFC04u) {
        ctx->pc = 0x2EFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC00u;
        // 0x2efc04: 0x2a42000c  slti        $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC08u;
        goto label_2efc08;
    }
    ctx->pc = 0x2EFC00u;
    {
        const bool branch_taken_0x2efc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC00u;
        // 0x2efc04: 0x2a42000c  slti        $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc00) {
            ctx->pc = 0x2EFC64u;
            goto label_2efc64;
        }
    }
    ctx->pc = 0x2EFC08u;
label_2efc08:
    // 0x2efc08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2efc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2efc0c:
    // 0x2efc0c: 0x2f13021  addu        $a2, $s7, $s1
    ctx->pc = 0x2efc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_2efc10:
    // 0x2efc10: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2efc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2efc14:
    // 0x2efc14: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2efc14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2efc18:
    // 0x2efc18: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2efc1c:
    // 0x2efc1c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2efc1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2efc20:
    // 0x2efc20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2efc24:
    // 0x2efc24: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2efc24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2efc28:
    // 0x2efc28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2efc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2efc2c:
    // 0x2efc2c: 0x60f809  jalr        $v1
label_2efc30:
    if (ctx->pc == 0x2EFC30u) {
        ctx->pc = 0x2EFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC2Cu;
        // 0x2efc30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC34u;
        goto label_2efc34;
    }
    ctx->pc = 0x2EFC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EFC34u);
        ctx->pc = 0x2EFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC2Cu;
        // 0x2efc30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC2Cu, 0x2EFC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFC34u;
label_2efc34:
    // 0x2efc34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2efc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2efc38:
    // 0x2efc38: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2efc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2efc3c:
    // 0x2efc3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2efc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2efc40:
    // 0x2efc40: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x2efc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2efc44:
    // 0x2efc44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2efc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2efc48:
    // 0x2efc48: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x2efc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_2efc4c:
    // 0x2efc4c: 0xae040108  sw          $a0, 0x108($s0)
    ctx->pc = 0x2efc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 4));
label_2efc50:
    // 0x2efc50: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2efc50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2efc54:
    // 0x2efc54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2efc58:
    // 0x2efc58: 0x40f809  jalr        $v0
label_2efc5c:
    if (ctx->pc == 0x2EFC5Cu) {
        ctx->pc = 0x2EFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC58u;
        // 0x2efc5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC60u;
        goto label_2efc60;
    }
    ctx->pc = 0x2EFC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EFC60u);
        ctx->pc = 0x2EFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC58u;
        // 0x2efc5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC58u, 0x2EFC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFC60u;
label_2efc60:
    // 0x2efc60: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x2efc60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
label_2efc64:
    // 0x2efc64: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2efc68:
    if (ctx->pc == 0x2EFC68u) {
        ctx->pc = 0x2EFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC64u;
        // 0x2efc68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC6Cu;
        goto label_2efc6c;
    }
    ctx->pc = 0x2EFC64u;
    {
        const bool branch_taken_0x2efc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc64) {
            ctx->pc = 0x2EFC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFC64u;
            // 0x2efc68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFCACu;
            goto label_2efcac;
        }
    }
    ctx->pc = 0x2EFC6Cu;
label_2efc6c:
    // 0x2efc6c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2efc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2efc70:
    // 0x2efc70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2efc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2efc74:
    // 0x2efc74: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2efc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2efc78:
    // 0x2efc78: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2efc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efc7c:
    // 0x2efc7c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2efc80:
    if (ctx->pc == 0x2EFC80u) {
        ctx->pc = 0x2EFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC7Cu;
        // 0x2efc80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC84u;
        goto label_2efc84;
    }
    ctx->pc = 0x2EFC7Cu;
    {
        const bool branch_taken_0x2efc7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC7Cu;
        // 0x2efc80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc7c) {
            ctx->pc = 0x2EFC94u;
            goto label_2efc94;
        }
    }
    ctx->pc = 0x2EFC84u;
label_2efc84:
    // 0x2efc84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2efc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2efc88:
    // 0x2efc88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efc8c:
    // 0x2efc8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efc90:
    if (ctx->pc == 0x2EFC90u) {
        ctx->pc = 0x2EFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC8Cu;
        // 0x2efc90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFC94u;
        goto label_2efc94;
    }
    ctx->pc = 0x2EFC8Cu;
    {
        const bool branch_taken_0x2efc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC8Cu;
        // 0x2efc90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc8c) {
            ctx->pc = 0x2EFCA0u;
            goto label_2efca0;
        }
    }
    ctx->pc = 0x2EFC94u;
label_2efc94:
    // 0x2efc94: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efc94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efc98:
    // 0x2efc98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2efc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efc9c:
    // 0x2efc9c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efca0:
    // 0x2efca0: 0x5600ffd7  bnel        $s0, $zero, . + 4 + (-0x29 << 2)
label_2efca4:
    if (ctx->pc == 0x2EFCA4u) {
        ctx->pc = 0x2EFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCA0u;
        // 0x2efca4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFCA8u;
        goto label_2efca8;
    }
    ctx->pc = 0x2EFCA0u;
    {
        const bool branch_taken_0x2efca0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efca0) {
            ctx->pc = 0x2EFCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFCA0u;
            // 0x2efca4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efc00;
        }
    }
    ctx->pc = 0x2EFCA8u;
label_2efca8:
    // 0x2efca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2efcac:
    // 0x2efcac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efcacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2efcb0:
    // 0x2efcb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2efcb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2efcb4:
    // 0x2efcb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2efcb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2efcb8:
    // 0x2efcb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2efcb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2efcbc:
    // 0x2efcbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2efcbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2efcc0:
    // 0x2efcc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2efcc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2efcc4:
    // 0x2efcc4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2efcc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2efcc8:
    // 0x2efcc8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2efcc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2efccc:
    // 0x2efccc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2efcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2efcd0:
    // 0x2efcd0: 0x3e00008  jr          $ra
label_2efcd4:
    if (ctx->pc == 0x2EFCD4u) {
        ctx->pc = 0x2EFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCD0u;
        // 0x2efcd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFCD8u;
        goto label_fallthrough_0x2efcd0;
    }
    ctx->pc = 0x2EFCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCD0u;
        // 0x2efcd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efcd0:
    ctx->pc = 0x2EFCD8u;
}
