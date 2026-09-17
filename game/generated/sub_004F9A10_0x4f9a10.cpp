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

// Function: sub_004F9A10
// Address: 0x4f9a10 - 0x4f9c28
void sub_004F9A10_0x4f9a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9A10_0x4f9a10");
#endif

    switch (ctx->pc) {
        case 0x4f9a58u: goto label_4f9a58;
        case 0x4f9a60u: goto label_4f9a60;
        case 0x4f9a80u: goto label_4f9a80;
        case 0x4f9a88u: goto label_4f9a88;
        case 0x4f9b48u: goto label_4f9b48;
        case 0x4f9b50u: goto label_4f9b50;
        default: break;
    }

    ctx->pc = 0x4f9a10u;

    // 0x4f9a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f9a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f9a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f9a18: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4f9a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f9a1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f9a20: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4f9a20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4f9a24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f9a28: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4f9a28u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4f9a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f9a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f9a30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f9a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f9a34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f9a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f9a38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f9a3c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4f9a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4f9a40: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f9a44: 0x24543380  addiu       $s4, $v0, 0x3380
    ctx->pc = 0x4f9a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 13184));
    // 0x4f9a48: 0x26d1d680  addiu       $s1, $s6, -0x2980
    ctx->pc = 0x4f9a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4f9a4c: 0x2412ff00  addiu       $s2, $zero, -0x100
    ctx->pc = 0x4f9a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f9a50: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4f9a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9a54: 0x0  nop
    ctx->pc = 0x4f9a54u;
    // NOP
label_4f9a58:
    // 0x4f9a58: 0xc12a6f8  jal         func_4A9BE0
    ctx->pc = 0x4F9A58u;
    SET_GPR_U32(ctx, 31, 0x4F9A60u);
    ctx->pc = 0x4A9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9BE0u, 0x4F9A58u, 0x4F9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9A60u;
label_4f9a60:
    // 0x4f9a60: 0x26ab1380  addiu       $t3, $s5, 0x1380
    ctx->pc = 0x4f9a60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4992));
    // 0x4f9a64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4f9a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9a68: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x4f9a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x4f9a6c: 0x282580a  movz        $t3, $s4, $v0
    ctx->pc = 0x4f9a6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 20));
    // 0x4f9a70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f9a70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9a74: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x4f9a74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4f9a78: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x4f9a78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x4f9a7c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4f9a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4f9a80:
    // 0x4f9a80: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x4f9a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x4f9a84: 0x0  nop
    ctx->pc = 0x4f9a84u;
    // NOP
label_4f9a88:
    // 0x4f9a88: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x4f9a88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f9a8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9a90: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x4f9a90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f9a94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9a98: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x4f9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x4f9a9c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x4f9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x4f9aa0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f9aa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9aa4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4f9aa8: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x4f9aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4f9aac: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4f9aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9ab0: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x4f9ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f9ab4: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4f9ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4f9ab8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f9ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4f9abc: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x4f9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4f9ac0: 0x846600a0  lh          $a2, 0xA0($v1)
    ctx->pc = 0x4f9ac0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x4f9ac4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f9ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f9ac8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4f9ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f9acc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9ad0: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x4f9ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x4f9ad4: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x4f9ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4f9ad8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4f9ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f9adc: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x4f9adcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4f9ae0: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x4f9ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f9ae4: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x4f9ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x4f9ae8: 0x4a1ffe7  bgez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4F9AE8u;
    {
        const bool branch_taken_0x4f9ae8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9AE8u;
        // 0x4f9aec: 0x44c03  sra         $t1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9ae8) {
            ctx->pc = 0x4F9A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9a88;
        }
    }
    ctx->pc = 0x4F9AF0u;
    // 0x4f9af0: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x4f9af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9af4: 0x24e7fd00  addiu       $a3, $a3, -0x300
    ctx->pc = 0x4f9af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966528));
    // 0x4f9af8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4f9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f9afc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f9b00: 0x461ffdf  bgez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4F9B00u;
    {
        const bool branch_taken_0x4f9b00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4F9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9B00u;
        // 0x4f9b04: 0x26403  sra         $t4, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9b00) {
            ctx->pc = 0x4F9A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9a80;
        }
    }
    ctx->pc = 0x4F9B08u;
    // 0x4f9b08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4f9b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4f9b0c: 0x1613ffd2  bne         $s0, $s3, . + 4 + (-0x2E << 2)
    ctx->pc = 0x4F9B0Cu;
    {
        const bool branch_taken_0x4f9b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x4F9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9B0Cu;
        // 0x4f9b10: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9b0c) {
            ctx->pc = 0x4F9A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9a58;
        }
    }
    ctx->pc = 0x4F9B14u;
    // 0x4f9b14: 0x244ccb80  addiu       $t4, $v0, -0x3480
    ctx->pc = 0x4f9b14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953856));
    // 0x4f9b18: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4f9b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f9b1c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x4f9b1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4f9b20: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4f9b20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f9b24: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x4f9b24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x4f9b28: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4f9b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x4f9b2c: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x4F9B2Cu;
    {
        const bool branch_taken_0x4f9b2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9B2Cu;
        // 0x4f9b30: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9b2c) {
            ctx->pc = 0x4F9BD0u;
            goto label_4f9bd0;
        }
    }
    ctx->pc = 0x4F9B34u;
    // 0x4f9b34: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f9b38: 0x240eff00  addiu       $t6, $zero, -0x100
    ctx->pc = 0x4f9b38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f9b3c: 0x244dd680  addiu       $t5, $v0, -0x2980
    ctx->pc = 0x4f9b3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4f9b40: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x4f9b40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x4f9b44: 0x0  nop
    ctx->pc = 0x4f9b44u;
    // NOP
label_4f9b48:
    // 0x4f9b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f9b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9b4c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x4f9b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_4f9b50:
    // 0x4f9b50: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x4f9b50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f9b54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9b58: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x4f9b58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f9b5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9b60: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x4f9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x4f9b64: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x4f9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x4f9b68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f9b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9b6c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x4f9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x4f9b70: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x4f9b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4f9b74: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4f9b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9b78: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x4f9b78u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f9b7c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4f9b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4f9b80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f9b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4f9b84: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x4f9b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4f9b88: 0x846600a0  lh          $a2, 0xA0($v1)
    ctx->pc = 0x4f9b88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x4f9b8c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f9b90: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4f9b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f9b94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f9b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f9b98: 0xce3024  and         $a2, $a2, $t6
    ctx->pc = 0x4f9b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 14));
    // 0x4f9b9c: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x4f9b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4f9ba0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4f9ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f9ba4: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x4f9ba4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4f9ba8: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x4f9ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f9bac: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x4f9bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x4f9bb0: 0x4a1ffe7  bgez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4F9BB0u;
    {
        const bool branch_taken_0x4f9bb0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9BB0u;
        // 0x4f9bb4: 0x44c03  sra         $t1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9bb0) {
            ctx->pc = 0x4F9B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9b50;
        }
    }
    ctx->pc = 0x4F9BB8u;
    // 0x4f9bb8: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4f9bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f9bbc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x4f9bbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4f9bc0: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4f9bc0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f9bc4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x4f9bc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4f9bc8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4F9BC8u;
    {
        const bool branch_taken_0x4f9bc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9BC8u;
        // 0x4f9bcc: 0x16f5021  addu        $t2, $t3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9bc8) {
            ctx->pc = 0x4F9B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9b48;
        }
    }
    ctx->pc = 0x4F9BD0u;
label_4f9bd0:
    // 0x4f9bd0: 0x26c2d680  addiu       $v0, $s6, -0x2980
    ctx->pc = 0x4f9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4f9bd4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f9bd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f9bd8: 0x804700a5  lb          $a3, 0xA5($v0)
    ctx->pc = 0x4f9bd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 165)));
    // 0x4f9bdc: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x4f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x4f9be0: 0x804800a1  lb          $t0, 0xA1($v0)
    ctx->pc = 0x4f9be0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 161)));
    // 0x4f9be4: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x4f9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x4f9be8: 0x804600a3  lb          $a2, 0xA3($v0)
    ctx->pc = 0x4f9be8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 163)));
    // 0x4f9bec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4f9becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4f9bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f9bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f9bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f9bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f9bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f9bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f9c00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f9c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f9c04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f9c04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f9c08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f9c08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f9c0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4f9c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f9c10: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x4f9c10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x83138Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x83138Au, _value); } while (0);
    // 0x4f9c14: 0xaca407c0  sw          $a0, 0x7C0($a1)
    ctx->pc = 0x4f9c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F07C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F07C0u, _value); } while (0);
    // 0x4f9c18: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x4f9c18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x831388u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x831388u, _value); } while (0);
    // 0x4f9c1c: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x4f9c1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x831389u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x831389u, _value); } while (0);
    // 0x4f9c20: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9C20u;
        // 0x4f9c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9C28u;
}
