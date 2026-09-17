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

// Function: sub_00112B38
// Address: 0x112b38 - 0x112d70
void sub_00112B38_0x112b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112B38_0x112b38");
#endif

    switch (ctx->pc) {
        case 0x112b68u: goto label_112b68;
        case 0x112b78u: goto label_112b78;
        case 0x112bd0u: goto label_112bd0;
        case 0x112c48u: goto label_112c48;
        case 0x112c9cu: goto label_112c9c;
        case 0x112cacu: goto label_112cac;
        case 0x112cd4u: goto label_112cd4;
        case 0x112ce4u: goto label_112ce4;
        case 0x112cecu: goto label_112cec;
        case 0x112cfcu: goto label_112cfc;
        case 0x112d04u: goto label_112d04;
        case 0x112d34u: goto label_112d34;
        case 0x112d44u: goto label_112d44;
        default: break;
    }

    ctx->pc = 0x112b38u;

    // 0x112b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x112b3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x112b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x112b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x112b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x112b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112b4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x112b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b50: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x112b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x112b54: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x112b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x112b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112B58u;
    {
        const bool branch_taken_0x112b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b58) {
            ctx->pc = 0x112B70u;
            goto label_112b70;
        }
    }
    ctx->pc = 0x112B60u;
    // 0x112b60: 0xc044a7a  jal         func_1129E8
    ctx->pc = 0x112B60u;
    SET_GPR_U32(ctx, 31, 0x112B68u);
    ctx->pc = 0x112B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B60u;
    // 0x112b64: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129E8u, 0x112B60u, 0x112B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B68u;
label_112b68:
    // 0x112b68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112B68u;
    {
        const bool branch_taken_0x112b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B68u;
        // 0x112b6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b68) {
            ctx->pc = 0x112B7Cu;
            goto label_112b7c;
        }
    }
    ctx->pc = 0x112B70u;
label_112b70:
    // 0x112b70: 0xc044a6e  jal         func_1129B8
    ctx->pc = 0x112B70u;
    SET_GPR_U32(ctx, 31, 0x112B78u);
    ctx->pc = 0x1129B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B8u, 0x112B70u, 0x112B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B78u;
label_112b78:
    // 0x112b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112b7c:
    // 0x112b7c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x112b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x112b80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x112b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x112b84: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x112b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x112b88: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x112b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x112b8c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x112b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x112b90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x112b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x112b94: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x112b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x112b98: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x112b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x112b9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x112b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x112ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ba4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x112ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112ba8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x112ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x112bac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x112bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x112bb0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x112bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x112bb4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x112bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x112bb8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x112bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x112bbc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x112bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x112bc0: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x112bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x112bc4: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x112bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x112bc8: 0xc04493c  jal         func_1124F0
    ctx->pc = 0x112BC8u;
    SET_GPR_U32(ctx, 31, 0x112BD0u);
    ctx->pc = 0x112BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BC8u;
    // 0x112bcc: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124F0u, 0x112BC8u, 0x112BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BD0u;
label_112bd0:
    // 0x112bd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112BD0u;
    {
        const bool branch_taken_0x112bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BD0u;
        // 0x112bd4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bd0) {
            ctx->pc = 0x112BF8u;
            goto label_112bf8;
        }
    }
    ctx->pc = 0x112BD8u;
    // 0x112bd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x112bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bdc: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x112bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x112be0: 0x24a52af8  addiu       $a1, $a1, 0x2AF8
    ctx->pc = 0x112be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11000));
    // 0x112be4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112be8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x112be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x112bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112bf0: 0x80469da  j           func_11A768
    ctx->pc = 0x112BF0u;
    ctx->pc = 0x112BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BF0u;
    // 0x112bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A768u, 0x112BF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x112BF8u;
label_112bf8:
    // 0x112bf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112c00: 0x3e00008  jr          $ra
    ctx->pc = 0x112C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C00u;
        // 0x112c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112C08u;
    // 0x112c08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x112c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x112c0c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x112c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x112c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c14: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x112c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x112c18: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x112c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x112c1c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x112c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x112c20: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x112c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x112c24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x112c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x112c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x112c2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x112c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c30: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x112c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x112c34: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x112c34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x112c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x112c3c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x112c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c40: 0xc044a3c  jal         func_1128F0
    ctx->pc = 0x112C40u;
    SET_GPR_U32(ctx, 31, 0x112C48u);
    ctx->pc = 0x112C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C40u;
    // 0x112c44: 0x2484a2c0  addiu       $a0, $a0, -0x5D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1128F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1128F0u, 0x112C40u, 0x112C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C48u;
label_112c48:
    // 0x112c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c4c: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x112C4Cu;
    {
        const bool branch_taken_0x112c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C4Cu;
        // 0x112c50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c4c) {
            ctx->pc = 0x112D48u;
            goto label_112d48;
        }
    }
    ctx->pc = 0x112C54u;
    // 0x112c54: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x112c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x112c58: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x112c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x112c5c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x112c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x112c60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x112c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x112c64: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x112c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x112c68: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x112c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x112c6c: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x112c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x112c70: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x112c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x112c74: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x112C74u;
    {
        const bool branch_taken_0x112c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x112C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C74u;
        // 0x112c78: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c74) {
            ctx->pc = 0x112D0Cu;
            goto label_112d0c;
        }
    }
    ctx->pc = 0x112C7Cu;
    // 0x112c7c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x112c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x112c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112c84: 0x2442e178  addiu       $v0, $v0, -0x1E88
    ctx->pc = 0x112c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x112c88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x112c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x112c8c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x112c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x112c90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c94: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x112C94u;
    SET_GPR_U32(ctx, 31, 0x112C9Cu);
    ctx->pc = 0x112C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C94u;
    // 0x112c98: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x112C94u, 0x112C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C9Cu;
label_112c9c:
    // 0x112c9c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112C9Cu;
    {
        const bool branch_taken_0x112c9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C9Cu;
        // 0x112ca0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c9c) {
            ctx->pc = 0x112CB4u;
            goto label_112cb4;
        }
    }
    ctx->pc = 0x112CA4u;
    // 0x112ca4: 0xc044a66  jal         func_112998
    ctx->pc = 0x112CA4u;
    SET_GPR_U32(ctx, 31, 0x112CACu);
    ctx->pc = 0x112CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CA4u;
    // 0x112ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112998u, 0x112CA4u, 0x112CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CACu;
label_112cac:
    // 0x112cac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x112CACu;
    {
        const bool branch_taken_0x112cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CACu;
        // 0x112cb0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cac) {
            ctx->pc = 0x112D48u;
            goto label_112d48;
        }
    }
    ctx->pc = 0x112CB4u;
label_112cb4:
    // 0x112cb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x112cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cbc: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x112cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x112cc0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x112cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112cc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112cc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ccc: 0xc04492c  jal         func_1124B0
    ctx->pc = 0x112CCCu;
    SET_GPR_U32(ctx, 31, 0x112CD4u);
    ctx->pc = 0x112CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CCCu;
    // 0x112cd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124B0u, 0x112CCCu, 0x112CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD4u;
label_112cd4:
    // 0x112cd4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112CD4u;
    {
        const bool branch_taken_0x112cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112cd4) {
            ctx->pc = 0x112CF4u;
            goto label_112cf4;
        }
    }
    ctx->pc = 0x112CDCu;
    // 0x112cdc: 0xc044a66  jal         func_112998
    ctx->pc = 0x112CDCu;
    SET_GPR_U32(ctx, 31, 0x112CE4u);
    ctx->pc = 0x112CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CDCu;
    // 0x112ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112998u, 0x112CDCu, 0x112CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CE4u;
label_112ce4:
    // 0x112ce4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x112CE4u;
    SET_GPR_U32(ctx, 31, 0x112CECu);
    ctx->pc = 0x112CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CE4u;
    // 0x112ce8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x112CE4u, 0x112CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CECu;
label_112cec:
    // 0x112cec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112CECu;
    {
        const bool branch_taken_0x112cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CECu;
        // 0x112cf0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cec) {
            ctx->pc = 0x112D48u;
            goto label_112d48;
        }
    }
    ctx->pc = 0x112CF4u;
label_112cf4:
    // 0x112cf4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x112CF4u;
    SET_GPR_U32(ctx, 31, 0x112CFCu);
    ctx->pc = 0x112CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CF4u;
    // 0x112cf8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x112CF4u, 0x112CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CFCu;
label_112cfc:
    // 0x112cfc: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x112CFCu;
    SET_GPR_U32(ctx, 31, 0x112D04u);
    ctx->pc = 0x112D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CFCu;
    // 0x112d00: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x112CFCu, 0x112D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D04u;
label_112d04:
    // 0x112d04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x112D04u;
    {
        const bool branch_taken_0x112d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D04u;
        // 0x112d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d04) {
            ctx->pc = 0x112D48u;
            goto label_112d48;
        }
    }
    ctx->pc = 0x112D0Cu;
label_112d0c:
    // 0x112d0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112d10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x112d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x112d14: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x112d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x112d18: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x112d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x112d1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d20: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x112d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112d24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d2c: 0xc04492c  jal         func_1124B0
    ctx->pc = 0x112D2Cu;
    SET_GPR_U32(ctx, 31, 0x112D34u);
    ctx->pc = 0x112D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D2Cu;
    // 0x112d30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124B0u, 0x112D2Cu, 0x112D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D34u;
label_112d34:
    // 0x112d34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112D34u;
    {
        const bool branch_taken_0x112d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D34u;
        // 0x112d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d34) {
            ctx->pc = 0x112D48u;
            goto label_112d48;
        }
    }
    ctx->pc = 0x112D3Cu;
    // 0x112d3c: 0xc044a66  jal         func_112998
    ctx->pc = 0x112D3Cu;
    SET_GPR_U32(ctx, 31, 0x112D44u);
    ctx->pc = 0x112D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D3Cu;
    // 0x112d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112998u, 0x112D3Cu, 0x112D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D44u;
label_112d44:
    // 0x112d44: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x112d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_112d48:
    // 0x112d48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x112d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112d4c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x112d4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112d50: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x112d50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112d54: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x112d54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112d58: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x112d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112d5c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x112d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112d60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x112d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112d64: 0x3e00008  jr          $ra
    ctx->pc = 0x112D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D64u;
        // 0x112d68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112D6Cu;
    // 0x112d6c: 0x0  nop
    ctx->pc = 0x112d6cu;
    // NOP
    ctx->pc = 0x112d70u;
}
