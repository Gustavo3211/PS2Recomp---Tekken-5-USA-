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

// Function: sub_004F3A50
// Address: 0x4f3a50 - 0x4f3c18
void sub_004F3A50_0x4f3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3A50_0x4f3a50");
#endif

    switch (ctx->pc) {
        case 0x4f3a98u: goto label_4f3a98;
        case 0x4f3b08u: goto label_4f3b08;
        case 0x4f3b84u: goto label_4f3b84;
        default: break;
    }

    ctx->pc = 0x4f3a50u;

    // 0x4f3a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f3a54: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f3a58: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3a5c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f3a60: 0x24428180  addiu       $v0, $v0, -0x7E80
    ctx->pc = 0x4f3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934912));
    // 0x4f3a64: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4f3a64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4f3a68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f3a6c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f3a70: 0xac621250  sw          $v0, 0x1250($v1)
    ctx->pc = 0x4f3a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1250u, _value); } while (0);
    // 0x4f3a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f3a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f3a80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f3a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f3a84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f3a88: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4f3a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4f3a8c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4f3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4f3a90: 0xc124c7c  jal         func_4931F0
    ctx->pc = 0x4F3A90u;
    SET_GPR_U32(ctx, 31, 0x4F3A98u);
    ctx->pc = 0x4F3A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3A90u;
    // 0x4f3a94: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931F0u, 0x4F3A90u, 0x4F3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3A98u;
label_4f3a98:
    // 0x4f3a98: 0x26c81230  addiu       $t0, $s6, 0x1230
    ctx->pc = 0x4f3a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4656));
    // 0x4f3a9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3aa0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f3aa4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3aa8: 0x94661248  lhu         $a2, 0x1248($v1)
    ctx->pc = 0x4f3aa8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x7F1248u));
    // 0x4f3aac: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4f3aacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4f3ab0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f3ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f3ab4: 0x2527124c  addiu       $a3, $t1, 0x124C
    ctx->pc = 0x4f3ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4684));
    // 0x4f3ab8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4f3ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4f3abc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f3abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3ac0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4f3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4f3ac4: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x4f3ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x4f3ac8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4f3ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f3acc: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4f3accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f3ad0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f3ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f3ad8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4f3ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4f3adc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f3adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f3ae0: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x4f3ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f3ae4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4f3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4f3ae8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4f3ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f3aec: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4F3AECu;
    {
        const bool branch_taken_0x4f3aec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3AECu;
        // 0x4f3af0: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3aec) {
            ctx->pc = 0x4F3BE8u;
            goto label_4f3be8;
        }
    }
    ctx->pc = 0x4F3AF4u;
    // 0x4f3af4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4f3af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3af8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4f3af8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3afc: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4f3afcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4f3b00: 0x8523124c  lh          $v1, 0x124C($t1)
    ctx->pc = 0x4f3b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4684)));
    // 0x4f3b04: 0x0  nop
    ctx->pc = 0x4f3b04u;
    // NOP
label_4f3b08:
    // 0x4f3b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f3b0c: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F3B0Cu;
    {
        const bool branch_taken_0x4f3b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f3b0c) {
            ctx->pc = 0x4F3B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3B0Cu;
            // 0x4f3b10: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3B48u;
            goto label_4f3b48;
        }
    }
    ctx->pc = 0x4F3B14u;
    // 0x4f3b14: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4f3b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4f3b18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F3B18u;
    {
        const bool branch_taken_0x4f3b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B18u;
        // 0x4f3b1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3b18) {
            ctx->pc = 0x4F3B30u;
            goto label_4f3b30;
        }
    }
    ctx->pc = 0x4F3B20u;
    // 0x4f3b20: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4F3B20u;
    {
        const bool branch_taken_0x4f3b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B20u;
        // 0x4f3b24: 0x26d11230  addiu       $s1, $s6, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3b20) {
            ctx->pc = 0x4F3B50u;
            goto label_4f3b50;
        }
    }
    ctx->pc = 0x4F3B28u;
    // 0x4f3b28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4F3B28u;
    {
        const bool branch_taken_0x4f3b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B28u;
        // 0x4f3b2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3b28) {
            ctx->pc = 0x4F3B70u;
            goto label_4f3b70;
        }
    }
    ctx->pc = 0x4F3B30u;
label_4f3b30:
    // 0x4f3b30: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F3B30u;
    {
        const bool branch_taken_0x4f3b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4F3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B30u;
        // 0x4f3b34: 0x26d11230  addiu       $s1, $s6, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3b30) {
            ctx->pc = 0x4F3B6Cu;
            goto label_4f3b6c;
        }
    }
    ctx->pc = 0x4F3B38u;
    // 0x4f3b38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f3b3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4F3B3Cu;
    {
        const bool branch_taken_0x4f3b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B3Cu;
        // 0x4f3b40: 0x86a20008  lh          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3b3c) {
            ctx->pc = 0x4F3B58u;
            goto label_4f3b58;
        }
    }
    ctx->pc = 0x4F3B44u;
    // 0x4f3b44: 0x0  nop
    ctx->pc = 0x4f3b44u;
    // NOP
label_4f3b48:
    // 0x4f3b48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F3B48u;
    {
        const bool branch_taken_0x4f3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3B48u;
        // 0x4f3b4c: 0x86a2000a  lh          $v0, 0xA($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3b48) {
            ctx->pc = 0x4F3B58u;
            goto label_4f3b58;
        }
    }
    ctx->pc = 0x4F3B50u;
label_4f3b50:
    // 0x4f3b50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f3b54: 0x86a2000c  lh          $v0, 0xC($s5)
    ctx->pc = 0x4f3b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_4f3b58:
    // 0x4f3b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3b5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f3b60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3b64: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f3b68: 0x26d11230  addiu       $s1, $s6, 0x1230
    ctx->pc = 0x4f3b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4656));
label_4f3b6c:
    // 0x4f3b6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f3b70:
    // 0x4f3b70: 0x86300000  lh          $s0, 0x0($s1)
    ctx->pc = 0x4f3b70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3b74: 0x5202001d  beql        $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4F3B74u;
    {
        const bool branch_taken_0x4f3b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f3b74) {
            ctx->pc = 0x4F3B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3B74u;
            // 0x4f3b78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3BECu;
            goto label_4f3bec;
        }
    }
    ctx->pc = 0x4F3B7Cu;
    // 0x4f3b7c: 0xc13cf06  jal         func_4F3C18
    ctx->pc = 0x4F3B7Cu;
    SET_GPR_U32(ctx, 31, 0x4F3B84u);
    ctx->pc = 0x4F3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3B7Cu;
    // 0x4f3b80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C18u, 0x4F3B7Cu, 0x4F3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3B84u;
label_4f3b84:
    // 0x4f3b84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4f3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3b88: 0x2121025  or          $v0, $s0, $s2
    ctx->pc = 0x4f3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x4f3b8c: 0x8fc4125c  lw          $a0, 0x125C($fp)
    ctx->pc = 0x4f3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4700)));
    // 0x4f3b90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3b94: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4f3b94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4f3b98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3b9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f3b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f3ba0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3ba4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f3ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3ba8: 0x244206cb  addiu       $v0, $v0, 0x6CB
    ctx->pc = 0x4f3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1739));
    // 0x4f3bac: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f3bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f3bb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3bb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f3bb8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f3bb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3bbc: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x4f3bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3bc0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4f3bc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f3bc4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4f3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f3bc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f3bcc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f3bd0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4f3bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4f3bd4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f3bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f3bd8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4f3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4f3bdc: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4f3bdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f3be0: 0x441ffc9  bgez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x4F3BE0u;
    {
        const bool branch_taken_0x4f3be0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4F3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3BE0u;
        // 0x4f3be4: 0x8523124c  lh          $v1, 0x124C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3be0) {
            ctx->pc = 0x4F3B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3b08;
        }
    }
    ctx->pc = 0x4F3BE8u;
label_4f3be8:
    // 0x4f3be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3bec:
    // 0x4f3bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3bf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f3bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3bf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f3bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f3bf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f3bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f3bfc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f3bfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f3c00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f3c00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f3c04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f3c04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f3c08: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4f3c08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f3c0c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f3c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f3c10: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C10u;
        // 0x4f3c14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3C18u;
}
