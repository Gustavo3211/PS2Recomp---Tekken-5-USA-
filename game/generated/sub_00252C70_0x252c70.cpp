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

// Function: sub_00252C70
// Address: 0x252c70 - 0x253088
void sub_00252C70_0x252c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C70_0x252c70");
#endif

    switch (ctx->pc) {
        case 0x252ca4u: goto label_252ca4;
        case 0x252cb4u: goto label_252cb4;
        case 0x252cbcu: goto label_252cbc;
        case 0x252cccu: goto label_252ccc;
        case 0x252ce0u: goto label_252ce0;
        case 0x252d00u: goto label_252d00;
        case 0x252d18u: goto label_252d18;
        case 0x252d70u: goto label_252d70;
        case 0x252d80u: goto label_252d80;
        case 0x252d8cu: goto label_252d8c;
        case 0x252d9cu: goto label_252d9c;
        case 0x252da8u: goto label_252da8;
        case 0x252db8u: goto label_252db8;
        case 0x252dc0u: goto label_252dc0;
        case 0x252e20u: goto label_252e20;
        case 0x252e2cu: goto label_252e2c;
        case 0x252e38u: goto label_252e38;
        case 0x252e70u: goto label_252e70;
        case 0x252ee4u: goto label_252ee4;
        case 0x252f2cu: goto label_252f2c;
        case 0x252f78u: goto label_252f78;
        case 0x252fa8u: goto label_252fa8;
        case 0x252fd0u: goto label_252fd0;
        case 0x253018u: goto label_253018;
        case 0x253050u: goto label_253050;
        default: break;
    }

    ctx->pc = 0x252c70u;

    // 0x252c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252c78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x252c7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x252c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x252c80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x252c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x252c84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x252c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x252c88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x252c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x252c8c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x252c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x252c90: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x252c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x252c94: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x252c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x252c98: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x252c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x252c9c: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x252C9Cu;
    SET_GPR_U32(ctx, 31, 0x252CA4u);
    ctx->pc = 0x252CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C9Cu;
    // 0x252ca0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x252C9Cu, 0x252CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CA4u;
label_252ca4:
    // 0x252ca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252CA4u;
    {
        const bool branch_taken_0x252ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ca4) {
            ctx->pc = 0x252CB4u;
            goto label_252cb4;
        }
    }
    ctx->pc = 0x252CACu;
    // 0x252cac: 0xc08f1ce  jal         func_23C738
    ctx->pc = 0x252CACu;
    SET_GPR_U32(ctx, 31, 0x252CB4u);
    ctx->pc = 0x23C738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C738u, 0x252CACu, 0x252CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CB4u;
label_252cb4:
    // 0x252cb4: 0xc08b8bc  jal         func_22E2F0
    ctx->pc = 0x252CB4u;
    SET_GPR_U32(ctx, 31, 0x252CBCu);
    ctx->pc = 0x252CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252CB4u;
    // 0x252cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2F0u, 0x252CB4u, 0x252CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CBCu;
label_252cbc:
    // 0x252cbc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x252CBCu;
    {
        const bool branch_taken_0x252cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cbc) {
            ctx->pc = 0x252CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252CBCu;
            // 0x252cc0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CD4u;
            goto label_252cd4;
        }
    }
    ctx->pc = 0x252CC4u;
    // 0x252cc4: 0xc08b8bc  jal         func_22E2F0
    ctx->pc = 0x252CC4u;
    SET_GPR_U32(ctx, 31, 0x252CCCu);
    ctx->pc = 0x252CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252CC4u;
    // 0x252cc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2F0u, 0x252CC4u, 0x252CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CCCu;
label_252ccc:
    // 0x252ccc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x252CCCu;
    {
        const bool branch_taken_0x252ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CCCu;
        // 0x252cd0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ccc) {
            ctx->pc = 0x252D68u;
            goto label_252d68;
        }
    }
    ctx->pc = 0x252CD4u;
label_252cd4:
    // 0x252cd4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x252cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cd8: 0x24517f70  addiu       $s1, $v0, 0x7F70
    ctx->pc = 0x252cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32624));
    // 0x252cdc: 0x0  nop
    ctx->pc = 0x252cdcu;
    // NOP
label_252ce0:
    // 0x252ce0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x252ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x252ce4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x252CE4u;
    {
        const bool branch_taken_0x252ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ce4) {
            ctx->pc = 0x252CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252CE4u;
            // 0x252ce8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252D54u;
            goto label_252d54;
        }
    }
    ctx->pc = 0x252CECu;
    // 0x252cec: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x252cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x252cf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x252cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cf4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252cf8: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x252CF8u;
    {
        const bool branch_taken_0x252cf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CF8u;
        // 0x252cfc: 0x9625000c  lhu         $a1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cf8) {
            ctx->pc = 0x252D50u;
            goto label_252d50;
        }
    }
    ctx->pc = 0x252D00u;
label_252d00:
    // 0x252d00: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x252d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x252d04: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x252D04u;
    {
        const bool branch_taken_0x252d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D04u;
        // 0x252d08: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d04) {
            ctx->pc = 0x252D3Cu;
            goto label_252d3c;
        }
    }
    ctx->pc = 0x252D0Cu;
    // 0x252d0c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x252d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x252d10: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x252d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x252d14: 0x0  nop
    ctx->pc = 0x252d14u;
    // NOP
label_252d18:
    // 0x252d18: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x252d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x252d1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x252d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d20: 0x0  nop
    ctx->pc = 0x252d20u;
    // NOP
    // 0x252d24: 0x0  nop
    ctx->pc = 0x252d24u;
    // NOP
    // 0x252d28: 0x0  nop
    ctx->pc = 0x252d28u;
    // NOP
    // 0x252d2c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x252D2Cu;
    {
        const bool branch_taken_0x252d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252d2c) {
            ctx->pc = 0x252D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252D2Cu;
            // 0x252d30: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252d18;
        }
    }
    ctx->pc = 0x252D34u;
    // 0x252d34: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x252d34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x252d38: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x252d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_252d3c:
    // 0x252d3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x252d40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x252d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x252d44: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x252d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252d48: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x252D48u;
    {
        const bool branch_taken_0x252d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D48u;
        // 0x252d4c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d48) {
            ctx->pc = 0x252D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252d00;
        }
    }
    ctx->pc = 0x252D50u;
label_252d50:
    // 0x252d50: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x252d50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_252d54:
    // 0x252d54: 0x2ac20067  slti        $v0, $s6, 0x67
    ctx->pc = 0x252d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)103) ? 1 : 0);
    // 0x252d58: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x252D58u;
    {
        const bool branch_taken_0x252d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D58u;
        // 0x252d5c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d58) {
            ctx->pc = 0x252CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252ce0;
        }
    }
    ctx->pc = 0x252D60u;
    // 0x252d60: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x252D60u;
    {
        const bool branch_taken_0x252d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D60u;
        // 0x252d64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d60) {
            ctx->pc = 0x253054u;
            goto label_253054;
        }
    }
    ctx->pc = 0x252D68u;
label_252d68:
    // 0x252d68: 0xc08c02e  jal         func_2300B8
    ctx->pc = 0x252D68u;
    SET_GPR_U32(ctx, 31, 0x252D70u);
    ctx->pc = 0x252D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D68u;
    // 0x252d6c: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x252D68u, 0x252D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D70u;
label_252d70:
    // 0x252d70: 0x261037e0  addiu       $s0, $s0, 0x37E0
    ctx->pc = 0x252d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x252d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d78: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x252D78u;
    SET_GPR_U32(ctx, 31, 0x252D80u);
    ctx->pc = 0x252D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D78u;
    // 0x252d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x252D78u, 0x252D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D80u;
label_252d80:
    // 0x252d80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x252d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x252d84: 0xc0b772c  jal         func_2DDCB0
    ctx->pc = 0x252D84u;
    SET_GPR_U32(ctx, 31, 0x252D8Cu);
    ctx->pc = 0x252D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D84u;
    // 0x252d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDCB0u, 0x252D84u, 0x252D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D8Cu;
label_252d8c:
    // 0x252d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d94: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x252D94u;
    SET_GPR_U32(ctx, 31, 0x252D9Cu);
    ctx->pc = 0x252D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D94u;
    // 0x252d98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x252D94u, 0x252D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D9Cu;
label_252d9c:
    // 0x252d9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252da0: 0xc0b772c  jal         func_2DDCB0
    ctx->pc = 0x252DA0u;
    SET_GPR_U32(ctx, 31, 0x252DA8u);
    ctx->pc = 0x252DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DA0u;
    // 0x252da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDCB0u, 0x252DA0u, 0x252DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DA8u;
label_252da8:
    // 0x252da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252db0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x252DB0u;
    SET_GPR_U32(ctx, 31, 0x252DB8u);
    ctx->pc = 0x252DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DB0u;
    // 0x252db4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x252DB0u, 0x252DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DB8u;
label_252db8:
    // 0x252db8: 0xc0b778c  jal         func_2DDE30
    ctx->pc = 0x252DB8u;
    SET_GPR_U32(ctx, 31, 0x252DC0u);
    ctx->pc = 0x252DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DB8u;
    // 0x252dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE30u, 0x252DB8u, 0x252DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DC0u;
label_252dc0:
    // 0x252dc0: 0x8f83a9f0  lw          $v1, -0x5610($gp)
    ctx->pc = 0x252dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945264)));
    // 0x252dc4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x252DC4u;
    {
        const bool branch_taken_0x252dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DC4u;
        // 0x252dc8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dc4) {
            ctx->pc = 0x252DE0u;
            goto label_252de0;
        }
    }
    ctx->pc = 0x252DCCu;
    // 0x252dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252dd0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x252DD0u;
    {
        const bool branch_taken_0x252dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x252DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DD0u;
        // 0x252dd4: 0x241701e0  addiu       $s7, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dd0) {
            ctx->pc = 0x252E00u;
            goto label_252e00;
        }
    }
    ctx->pc = 0x252DD8u;
    // 0x252dd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x252DD8u;
    {
        const bool branch_taken_0x252dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252dd8) {
            ctx->pc = 0x252E18u;
            goto label_252e18;
        }
    }
    ctx->pc = 0x252DE0u;
label_252de0:
    // 0x252de0: 0xc780a9f4  lwc1        $f0, -0x560C($gp)
    ctx->pc = 0x252de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294945268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252de4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252de8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x252DE8u;
    {
        const bool branch_taken_0x252de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DE8u;
        // 0x252dec: 0x241701e0  addiu       $s7, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252de8) {
            ctx->pc = 0x252E18u;
            goto label_252e18;
        }
    }
    ctx->pc = 0x252DF0u;
    // 0x252df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252df4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x252df4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252df8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x252DF8u;
    {
        const bool branch_taken_0x252df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DF8u;
        // 0x252dfc: 0xaf82a9f0  sw          $v0, -0x5610($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252df8) {
            ctx->pc = 0x252E18u;
            goto label_252e18;
        }
    }
    ctx->pc = 0x252E00u;
label_252e00:
    // 0x252e00: 0xc780a9f8  lwc1        $f0, -0x5608($gp)
    ctx->pc = 0x252e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294945272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252E08u;
    {
        const bool branch_taken_0x252e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e08) {
            ctx->pc = 0x252E18u;
            goto label_252e18;
        }
    }
    ctx->pc = 0x252E10u;
    // 0x252e10: 0xaf80a9f0  sw          $zero, -0x5610($gp)
    ctx->pc = 0x252e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945264), GPR_U32(ctx, 0));
    // 0x252e14: 0x241701e0  addiu       $s7, $zero, 0x1E0
    ctx->pc = 0x252e14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_252e18:
    // 0x252e18: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x252E18u;
    SET_GPR_U32(ctx, 31, 0x252E20u);
    ctx->pc = 0x252E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E18u;
    // 0x252e1c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x252E18u, 0x252E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E20u;
label_252e20:
    // 0x252e20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x252e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252e24: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x252E24u;
    SET_GPR_U32(ctx, 31, 0x252E2Cu);
    ctx->pc = 0x252E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E24u;
    // 0x252e28: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x252E24u, 0x252E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E2Cu;
label_252e2c:
    // 0x252e2c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x252e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x252e30: 0x24517f70  addiu       $s1, $v0, 0x7F70
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32624));
    // 0x252e34: 0x0  nop
    ctx->pc = 0x252e34u;
    // NOP
label_252e38:
    // 0x252e38: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x252e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x252e3c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x252E3Cu;
    {
        const bool branch_taken_0x252e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E3Cu;
        // 0x252e40: 0x26c2ffc8  addiu       $v0, $s6, -0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e3c) {
            ctx->pc = 0x252F4Cu;
            goto label_252f4c;
        }
    }
    ctx->pc = 0x252E44u;
    // 0x252e44: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x252e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x252e48: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x252E48u;
    {
        const bool branch_taken_0x252e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252e48) {
            ctx->pc = 0x252E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252E48u;
            // 0x252e4c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252F50u;
            goto label_252f50;
        }
    }
    ctx->pc = 0x252E50u;
    // 0x252e50: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x252e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x252e54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x252e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e58: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x252e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252e5c: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x252E5Cu;
    {
        const bool branch_taken_0x252e5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E5Cu;
        // 0x252e60: 0x9625000c  lhu         $a1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e5c) {
            ctx->pc = 0x252F4Cu;
            goto label_252f4c;
        }
    }
    ctx->pc = 0x252E64u;
    // 0x252e64: 0x2795c9f8  addiu       $s5, $gp, -0x3608
    ctx->pc = 0x252e64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953464));
    // 0x252e68: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x252e68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x252e6c: 0x0  nop
    ctx->pc = 0x252e6cu;
    // NOP
label_252e70:
    // 0x252e70: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x252e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x252e74: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x252E74u;
    {
        const bool branch_taken_0x252e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E74u;
        // 0x252e78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e74) {
            ctx->pc = 0x252F34u;
            goto label_252f34;
        }
    }
    ctx->pc = 0x252E7Cu;
    // 0x252e7c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x252e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x252e80: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x252e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x252e84: 0x219c3  sra         $v1, $v0, 7
    ctx->pc = 0x252e84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 7));
    // 0x252e88: 0x21643  sra         $v0, $v0, 25
    ctx->pc = 0x252e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 25));
    // 0x252e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x252e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x252e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252E90u;
    {
        const bool branch_taken_0x252e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E90u;
        // 0x252e94: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e90) {
            ctx->pc = 0x252EA8u;
            goto label_252ea8;
        }
    }
    ctx->pc = 0x252E98u;
    // 0x252e98: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x252e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x252e9c: 0x2792c9f0  addiu       $s2, $gp, -0x3610
    ctx->pc = 0x252e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953456));
    // 0x252ea0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x252EA0u;
    {
        const bool branch_taken_0x252ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EA0u;
        // 0x252ea4: 0x24742530  addiu       $s4, $v1, 0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ea0) {
            ctx->pc = 0x252ED0u;
            goto label_252ed0;
        }
    }
    ctx->pc = 0x252EA8u;
label_252ea8:
    // 0x252ea8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x252EA8u;
    {
        const bool branch_taken_0x252ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EA8u;
        // 0x252eac: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ea8) {
            ctx->pc = 0x252EC0u;
            goto label_252ec0;
        }
    }
    ctx->pc = 0x252EB0u;
    // 0x252eb0: 0x2792c9f0  addiu       $s2, $gp, -0x3610
    ctx->pc = 0x252eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953456));
    // 0x252eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252EB4u;
    {
        const bool branch_taken_0x252eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EB4u;
        // 0x252eb8: 0x24542688  addiu       $s4, $v0, 0x2688 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 9864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252eb4) {
            ctx->pc = 0x252ED0u;
            goto label_252ed0;
        }
    }
    ctx->pc = 0x252EBCu;
    // 0x252ebc: 0x0  nop
    ctx->pc = 0x252ebcu;
    // NOP
label_252ec0:
    // 0x252ec0: 0x2792c9f0  addiu       $s2, $gp, -0x3610
    ctx->pc = 0x252ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953456));
    // 0x252ec4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x252ec8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x252ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x252ecc: 0x24742970  addiu       $s4, $v1, 0x2970
    ctx->pc = 0x252eccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10608));
label_252ed0:
    // 0x252ed0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x252ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ed4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x252ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252edc: 0xc094ae6  jal         func_252B98
    ctx->pc = 0x252EDCu;
    SET_GPR_U32(ctx, 31, 0x252EE4u);
    ctx->pc = 0x252EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252EDCu;
    // 0x252ee0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B98u, 0x252EDCu, 0x252EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252EE4u;
label_252ee4:
    // 0x252ee4: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x252ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x252ee8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x252ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x252eec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x252eecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ef0: 0x27c4af00  addiu       $a0, $fp, -0x5100
    ctx->pc = 0x252ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946560));
    // 0x252ef4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x252EF4u;
    {
        const bool branch_taken_0x252ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EF4u;
        // 0x252ef8: 0x8ea70004  lw          $a3, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ef4) {
            ctx->pc = 0x252F30u;
            goto label_252f30;
        }
    }
    ctx->pc = 0x252EFCu;
    // 0x252efc: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x252efcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x252f00: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x252f00u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x252f04: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x252f04u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x252f08: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x252f08u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x252f0c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x252f0cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x252f10: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x252f10u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x252f14: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x252f14u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252f18: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x252f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x252f1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252f20: 0x34e71af0  ori         $a3, $a3, 0x1AF0
    ctx->pc = 0x252f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6896);
    // 0x252f24: 0xc0c9dda  jal         func_327768
    ctx->pc = 0x252F24u;
    SET_GPR_U32(ctx, 31, 0x252F2Cu);
    ctx->pc = 0x252F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F24u;
    // 0x252f28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x252F24u, 0x252F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F2Cu;
label_252f2c:
    // 0x252f2c: 0xaf80c9f0  sw          $zero, -0x3610($gp)
    ctx->pc = 0x252f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953456), GPR_U32(ctx, 0));
label_252f30:
    // 0x252f30: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x252f30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_252f34:
    // 0x252f34: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x252f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x252f38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x252f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x252f3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x252f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x252f40: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x252f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252f44: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x252F44u;
    {
        const bool branch_taken_0x252f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F44u;
        // 0x252f48: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f44) {
            ctx->pc = 0x252E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252e70;
        }
    }
    ctx->pc = 0x252F4Cu;
label_252f4c:
    // 0x252f4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x252f4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_252f50:
    // 0x252f50: 0x2ac20067  slti        $v0, $s6, 0x67
    ctx->pc = 0x252f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)103) ? 1 : 0);
    // 0x252f54: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x252F54u;
    {
        const bool branch_taken_0x252f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F54u;
        // 0x252f58: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f54) {
            ctx->pc = 0x252E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252e38;
        }
    }
    ctx->pc = 0x252F5Cu;
    // 0x252f5c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x252f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x252f60: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x252f64: 0x24627f70  addiu       $v0, $v1, 0x7F70
    ctx->pc = 0x252f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32624));
    // 0x252f68: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x252f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x252f6c: 0x24742970  addiu       $s4, $v1, 0x2970
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10608));
    // 0x252f70: 0x24510380  addiu       $s1, $v0, 0x380
    ctx->pc = 0x252f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x252f74: 0x24160038  addiu       $s6, $zero, 0x38
    ctx->pc = 0x252f74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_252f78:
    // 0x252f78: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x252f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x252f7c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x252F7Cu;
    {
        const bool branch_taken_0x252f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252f7c) {
            ctx->pc = 0x252F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252F7Cu;
            // 0x252f80: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25303Cu;
            goto label_25303c;
        }
    }
    ctx->pc = 0x252F84u;
    // 0x252f84: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x252f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x252f88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x252f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f8c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x252f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252f90: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x252F90u;
    {
        const bool branch_taken_0x252f90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F90u;
        // 0x252f94: 0x9625000c  lhu         $a1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f90) {
            ctx->pc = 0x253038u;
            goto label_253038;
        }
    }
    ctx->pc = 0x252F98u;
    // 0x252f98: 0x2795c9f0  addiu       $s5, $gp, -0x3610
    ctx->pc = 0x252f98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953456));
    // 0x252f9c: 0x2792c9f8  addiu       $s2, $gp, -0x3608
    ctx->pc = 0x252f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953464));
    // 0x252fa0: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x252fa0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x252fa4: 0x0  nop
    ctx->pc = 0x252fa4u;
    // NOP
label_252fa8:
    // 0x252fa8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x252fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x252fac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x252FACu;
    {
        const bool branch_taken_0x252fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FACu;
        // 0x252fb0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fac) {
            ctx->pc = 0x253020u;
            goto label_253020;
        }
    }
    ctx->pc = 0x252FB4u;
    // 0x252fb4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x252fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x252fb8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x252fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fbc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x252fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x252fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fc4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x252fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fc8: 0xc094ae6  jal         func_252B98
    ctx->pc = 0x252FC8u;
    SET_GPR_U32(ctx, 31, 0x252FD0u);
    ctx->pc = 0x252FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FC8u;
    // 0x252fcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x252B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B98u, 0x252FC8u, 0x252FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FD0u;
label_252fd0:
    // 0x252fd0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x252fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x252fd4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x252fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x252fd8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x252fd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fdc: 0x27c4af00  addiu       $a0, $fp, -0x5100
    ctx->pc = 0x252fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946560));
    // 0x252fe0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x252FE0u;
    {
        const bool branch_taken_0x252fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FE0u;
        // 0x252fe4: 0x8e470004  lw          $a3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fe0) {
            ctx->pc = 0x25301Cu;
            goto label_25301c;
        }
    }
    ctx->pc = 0x252FE8u;
    // 0x252fe8: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x252fe8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x252fec: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x252fecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x252ff0: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x252ff0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x252ff4: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x252ff4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x252ff8: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x252ff8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x252ffc: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x252ffcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x253000: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x253000u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x253004: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x253004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x253008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x253008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25300c: 0x34e71af0  ori         $a3, $a3, 0x1AF0
    ctx->pc = 0x25300cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6896);
    // 0x253010: 0xc0c9dda  jal         func_327768
    ctx->pc = 0x253010u;
    SET_GPR_U32(ctx, 31, 0x253018u);
    ctx->pc = 0x253014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253010u;
    // 0x253014: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x253010u, 0x253018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253018u;
label_253018:
    // 0x253018: 0xaf80c9f0  sw          $zero, -0x3610($gp)
    ctx->pc = 0x253018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953456), GPR_U32(ctx, 0));
label_25301c:
    // 0x25301c: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x25301cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_253020:
    // 0x253020: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x253020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x253024: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x253024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x253028: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x253028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25302c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x25302cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253030: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x253030u;
    {
        const bool branch_taken_0x253030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253030u;
        // 0x253034: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253030) {
            ctx->pc = 0x252FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252fa8;
        }
    }
    ctx->pc = 0x253038u;
label_253038:
    // 0x253038: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x253038u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_25303c:
    // 0x25303c: 0x2ac2003d  slti        $v0, $s6, 0x3D
    ctx->pc = 0x25303cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x253040: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x253040u;
    {
        const bool branch_taken_0x253040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253040u;
        // 0x253044: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253040) {
            ctx->pc = 0x252F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252f78;
        }
    }
    ctx->pc = 0x253048u;
    // 0x253048: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x253048u;
    SET_GPR_U32(ctx, 31, 0x253050u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x253048u, 0x253050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253050u;
label_253050:
    // 0x253050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253054:
    // 0x253054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25305c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25305cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253060: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x253060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253064: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x253064u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253068: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x253068u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25306c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x25306cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x253070: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x253070u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253074: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x253074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x253078: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x253078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25307c: 0x3e00008  jr          $ra
    ctx->pc = 0x25307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25307Cu;
        // 0x253080: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25307Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253084u;
    // 0x253084: 0x0  nop
    ctx->pc = 0x253084u;
    // NOP
    ctx->pc = 0x253088u;
}
