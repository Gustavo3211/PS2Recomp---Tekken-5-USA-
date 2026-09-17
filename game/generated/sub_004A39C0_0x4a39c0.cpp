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

// Function: sub_004A39C0
// Address: 0x4a39c0 - 0x4a3e18
void sub_004A39C0_0x4a39c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A39C0_0x4a39c0");
#endif

    switch (ctx->pc) {
        case 0x4a3aecu: goto label_4a3aec;
        case 0x4a3b94u: goto label_4a3b94;
        case 0x4a3be8u: goto label_4a3be8;
        case 0x4a3c10u: goto label_4a3c10;
        case 0x4a3c48u: goto label_4a3c48;
        default: break;
    }

    ctx->pc = 0x4a39c0u;

    // 0x4a39c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a39c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a39c4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4a39c4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4a39c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a39c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a39cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a39ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a39d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a39d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a39d4: 0x25670c08  addiu       $a3, $t3, 0xC08
    ctx->pc = 0x4a39d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 3080));
    // 0x4a39d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a39dc: 0x26290130  addiu       $t1, $s1, 0x130
    ctx->pc = 0x4a39dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x4a39e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a39e4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a39e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a39e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a39ec: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4a39ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4a39f0: 0x25450c0c  addiu       $a1, $t2, 0xC0C
    ctx->pc = 0x4a39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3084));
    // 0x4a39f4: 0x240604dc  addiu       $a2, $zero, 0x4DC
    ctx->pc = 0x4a39f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    // 0x4a39f8: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x4a39f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a39fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a3a00: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4a3a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4a3a04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C0Cu));
    // 0x4a3a08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a3a0c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x4a3a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a3a10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3a14: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4a3a14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4a3a18: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x4a3a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a3a1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a3a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a3a20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3a24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a3a24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a3a28: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a3a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3a2c: 0x10460028  beq         $v0, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x4A3A2Cu;
    {
        const bool branch_taken_0x4a3a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A2Cu;
        // 0x4a3a30: 0x26250118  addiu       $a1, $s1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a2c) {
            ctx->pc = 0x4A3AD0u;
            goto label_4a3ad0;
        }
    }
    ctx->pc = 0x4A3A34u;
    // 0x4a3a34: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a3a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3a38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a3a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a3a3c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x4a3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x4a3a40: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a3a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a3a44: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a3a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a3a48: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4a3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4a3a4c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4a3a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3a50: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4a3a50u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3a54: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a3a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3a58: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3a5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a3a60: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4a3a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4a3a64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3a68: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a3a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a3a6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3a70: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a3a74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3a78: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a3a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3a7c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4a3a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4a3a80: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a3a84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3a88: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a3a8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3a90: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a3a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3a94: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4a3a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3a98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a3a9c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a3a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a3aa0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3aa4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a3aa8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a3aa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3aac: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x4a3aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x4a3ab0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A3AB0u;
    {
        const bool branch_taken_0x4a3ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3AB0u;
        // 0x4a3ab4: 0x25700c08  addiu       $s0, $t3, 0xC08 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 3080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ab0) {
            ctx->pc = 0x4A3AD4u;
            goto label_4a3ad4;
        }
    }
    ctx->pc = 0x4A3AB8u;
    // 0x4a3ab8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3abc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3ac0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4a3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4a3ac4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3ac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3AC8u;
    {
        const bool branch_taken_0x4a3ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3AC8u;
        // 0x4a3acc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ac8) {
            ctx->pc = 0x4A3AD4u;
            goto label_4a3ad4;
        }
    }
    ctx->pc = 0x4A3AD0u;
label_4a3ad0:
    // 0x4a3ad0: 0x25700c08  addiu       $s0, $t3, 0xC08
    ctx->pc = 0x4a3ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 3080));
label_4a3ad4:
    // 0x4a3ad4: 0x25530c0c  addiu       $s3, $t2, 0xC0C
    ctx->pc = 0x4a3ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 3084));
    // 0x4a3ad8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3adc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a3adcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3ae0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4a3ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3ae4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A3AE4u;
    SET_GPR_U32(ctx, 31, 0x4A3AECu);
    ctx->pc = 0x4A3AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3AE4u;
    // 0x4a3ae8: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A3AE4u, 0x4A3AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3AECu;
label_4a3aec:
    // 0x4a3aec: 0x2625018c  addiu       $a1, $s1, 0x18C
    ctx->pc = 0x4a3aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x4a3af0: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4a3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a3af4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a3af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a3af8: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x4a3af8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3afc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a3afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3b00: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x4a3b00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3b04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b08: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a3b08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3b0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3b10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3b14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3b18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3b1c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a3b1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b20: 0x2c820154  sltiu       $v0, $a0, 0x154
    ctx->pc = 0x4a3b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)340) ? 1 : 0);
    // 0x4a3b24: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x4A3B24u;
    {
        const bool branch_taken_0x4a3b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b24) {
            ctx->pc = 0x4A3B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3B24u;
            // 0x4a3b28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C2Cu;
            goto label_4a3c2c;
        }
    }
    ctx->pc = 0x4A3B2Cu;
    // 0x4a3b2c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a3b30: 0x26240132  addiu       $a0, $s1, 0x132
    ctx->pc = 0x4a3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 306));
    // 0x4a3b34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3b34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3b38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a3b40: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3b44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3b48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3b4c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b50: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4a3b50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3b54: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a3b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a3b58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3b60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3b64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3b68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3b6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3b70: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3b70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b74: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x4a3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x4a3b78: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3b7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3b80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3b84: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b88: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a3b88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3b8c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A3B8Cu;
    SET_GPR_U32(ctx, 31, 0x4A3B94u);
    ctx->pc = 0x4A3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3B8Cu;
    // 0x4a3b90: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A3B8Cu, 0x4A3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3B94u;
label_4a3b94:
    // 0x4a3b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3b98: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3b9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a3b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a3ba0: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x4a3ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x4a3ba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3ba8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a3ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a3bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a3bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3bb0: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x4a3bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3bb4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3bb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3bbc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3bc0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4a3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a3bc4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3bc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3bcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3bd0: 0x96230138  lhu         $v1, 0x138($s1)
    ctx->pc = 0x4a3bd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x4a3bd4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3bd8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a3bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a3be0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A3BE0u;
    SET_GPR_U32(ctx, 31, 0x4A3BE8u);
    ctx->pc = 0x4A3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3BE0u;
    // 0x4a3be4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A3BE0u, 0x4A3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3BE8u;
label_4a3be8:
    // 0x4a3be8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a3be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3bec: 0x8624011c  lh          $a0, 0x11C($s1)
    ctx->pc = 0x4a3becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4a3bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3bf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a3bf8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a3bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a3bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a3c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a3c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a3c04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a3c08: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A3C08u;
    SET_GPR_U32(ctx, 31, 0x4A3C10u);
    ctx->pc = 0x4A3C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3C08u;
    // 0x4a3c0c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A3C08u, 0x4A3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3C10u;
label_4a3c10:
    // 0x4a3c10: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4a3c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a3c14: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a3c18: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a3c1c: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x4a3c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3c20: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a3c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3c24: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x4a3c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3c28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a3c2c:
    // 0x4a3c2c: 0x86220120  lh          $v0, 0x120($s1)
    ctx->pc = 0x4a3c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4a3c30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3c34: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3c38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3c3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3c40: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A3C40u;
    SET_GPR_U32(ctx, 31, 0x4A3C48u);
    ctx->pc = 0x4A3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3C40u;
    // 0x4a3c44: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A3C40u, 0x4A3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3C48u;
label_4a3c48:
    // 0x4a3c48: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3c4c: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4a3c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a3c50: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a3c54: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a3c58: 0x34840067  ori         $a0, $a0, 0x67
    ctx->pc = 0x4a3c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)103);
    // 0x4a3c5c: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x4a3c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3c60: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4a3c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4a3c64: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a3c64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3c68: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x4a3c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4a3c6c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a3c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3c70: 0x34e7009b  ori         $a3, $a3, 0x9B
    ctx->pc = 0x4a3c70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)155);
    // 0x4a3c74: 0x26290018  addiu       $t1, $s1, 0x18
    ctx->pc = 0x4a3c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4a3c78: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x4a3c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3c7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3c80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3c84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a3c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a3c88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3c8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3c90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a3c94: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a3c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3c98: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a3c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a3c9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3ca0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a3ca4: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4a3ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4a3ca8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a3ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a3cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3cb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3cb4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3cb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3cb8: 0x2445001f  addiu       $a1, $v0, 0x1F
    ctx->pc = 0x4a3cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x4a3cbc: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x4a3cbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4a3cc0: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x4a3cc0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4a3cc4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x4a3cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x4a3cc8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3ccc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3cd0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3cd4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a3cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a3cd8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a3cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3cdc: 0x921024  and         $v0, $a0, $s2
    ctx->pc = 0x4a3cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4a3ce0: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4a3ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4a3ce4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a3cec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a3cf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a3cf4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a3cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a3cf8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4a3cfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3d00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3d04: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4a3d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4a3d08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3d0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3d10: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a3d14: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a3d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3d18: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a3d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a3d1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3d20: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4a3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a3d24: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4a3d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4a3d28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a3d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a3d2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3d30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3d34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3d38: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x4a3d38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4a3d3c: 0x2445001f  addiu       $a1, $v0, 0x1F
    ctx->pc = 0x4a3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x4a3d40: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x4a3d40u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4a3d44: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x4a3d44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x4a3d48: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3d4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3d50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3d54: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a3d58: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a3d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3d5c: 0x921024  and         $v0, $a0, $s2
    ctx->pc = 0x4a3d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4a3d60: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4a3d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4a3d64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a3d6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a3d70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a3d74: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a3d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a3d78: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a3d7c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a3d80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3d84: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a3d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a3d88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3d88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3d8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3d90: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3d94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3d98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3d9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3da0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3da4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4a3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4a3da8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3dac: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4a3dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3db0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a3db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a3db4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a3db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3db8: 0x2c620400  sltiu       $v0, $v1, 0x400
    ctx->pc = 0x4a3db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4a3dbc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A3DBCu;
    {
        const bool branch_taken_0x4a3dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3dbc) {
            ctx->pc = 0x4A3DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3DBCu;
            // 0x4a3dc0: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3DE0u;
            goto label_4a3de0;
        }
    }
    ctx->pc = 0x4A3DC4u;
    // 0x4a3dc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3dc8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4a3dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a3dcc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x4a3dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x4a3dd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3dd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3dd8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a3dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3ddc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4a3de0:
    // 0x4a3de0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a3de4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3dec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a3decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a3df0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a3df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a3df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a3df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3df8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a3df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a3dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a3dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a3e00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a3e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a3e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a3e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a3e08: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4a3e0c: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A3E0Cu;
    ctx->pc = 0x4A3E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3E0Cu;
    // 0x4a3e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A3E14u;
    // 0x4a3e14: 0x0  nop
    ctx->pc = 0x4a3e14u;
    // NOP
    ctx->pc = 0x4a3e18u;
}
