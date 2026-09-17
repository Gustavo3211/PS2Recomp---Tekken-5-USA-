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

// Function: sub_00226A38
// Address: 0x226a38 - 0x226dc8
void sub_00226A38_0x226a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226A38_0x226a38");
#endif

    switch (ctx->pc) {
        case 0x226a78u: goto label_226a78;
        case 0x226ad0u: goto label_226ad0;
        case 0x226ae8u: goto label_226ae8;
        case 0x226b38u: goto label_226b38;
        case 0x226b70u: goto label_226b70;
        case 0x226c58u: goto label_226c58;
        case 0x226d30u: goto label_226d30;
        case 0x226d60u: goto label_226d60;
        default: break;
    }

    ctx->pc = 0x226a38u;

    // 0x226a38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x226a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x226a3c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x226a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x226a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226a4c: 0x244761b0  addiu       $a3, $v0, 0x61B0
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
    // 0x226a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x226a54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x226a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226a58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x226a5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226a60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x226a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x226a64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x226a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x226a68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x226a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x226a6c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x226a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x226a70: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x226a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x226a74: 0x0  nop
    ctx->pc = 0x226a74u;
    // NOP
label_226a78:
    // 0x226a78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x226a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x226a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x226a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x226a80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226a84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x226a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226a88: 0x28830096  slti        $v1, $a0, 0x96
    ctx->pc = 0x226a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x226a8c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x226a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x226a90: 0xa4460040  sh          $a2, 0x40($v0)
    ctx->pc = 0x226a90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x226a94: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x226a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x226a98: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x226a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x226a9c: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x226a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x226aa0: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x226aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x226aa4: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x226aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x226aa8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x226aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x226aac: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x226aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x226ab0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x226AB0u;
    {
        const bool branch_taken_0x226ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AB0u;
        // 0x226ab4: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ab0) {
            ctx->pc = 0x226A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226a78;
        }
    }
    ctx->pc = 0x226AB8u;
    // 0x226ab8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x226ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x226abc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x226abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x226ac0: 0x24447120  addiu       $a0, $v0, 0x7120
    ctx->pc = 0x226ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28960));
    // 0x226ac4: 0x246861b0  addiu       $t0, $v1, 0x61B0
    ctx->pc = 0x226ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 25008));
    // 0x226ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226acc: 0x0  nop
    ctx->pc = 0x226accu;
    // NOP
label_226ad0:
    // 0x226ad0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x226ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ad8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x226ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226adc: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x226adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x226ae0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226AE0u;
    {
        const bool branch_taken_0x226ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AE0u;
        // 0x226ae4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ae0) {
            ctx->pc = 0x226B04u;
            goto label_226b04;
        }
    }
    ctx->pc = 0x226AE8u;
label_226ae8:
    // 0x226ae8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x226aec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x226aecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226af0: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x226af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x226af4: 0x0  nop
    ctx->pc = 0x226af4u;
    // NOP
    // 0x226af8: 0x0  nop
    ctx->pc = 0x226af8u;
    // NOP
    // 0x226afc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226AFCu;
    {
        const bool branch_taken_0x226afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AFCu;
        // 0x226b00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226afc) {
            ctx->pc = 0x226AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ae8;
        }
    }
    ctx->pc = 0x226B04u;
label_226b04:
    // 0x226b04: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x226b08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x226b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x226b0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x226b10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x226b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226b14: 0x28c30096  slti        $v1, $a2, 0x96
    ctx->pc = 0x226b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x226b18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x226b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x226b1c: 0xa4450040  sh          $a1, 0x40($v0)
    ctx->pc = 0x226b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x226b20: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x226B20u;
    {
        const bool branch_taken_0x226b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B20u;
        // 0x226b24: 0xac47003c  sw          $a3, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b20) {
            ctx->pc = 0x226AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ad0;
        }
    }
    ctx->pc = 0x226B28u;
    // 0x226b28: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x226b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x226b2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b30: 0x244661b0  addiu       $a2, $v0, 0x61B0
    ctx->pc = 0x226b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
    // 0x226b34: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_226b38:
    // 0x226b38: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x226b3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x226b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x226b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x226b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226b44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x226b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226b48: 0x28830096  slti        $v1, $a0, 0x96
    ctx->pc = 0x226b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x226b4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x226b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x226b50: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x226b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x226b54: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x226B54u;
    {
        const bool branch_taken_0x226b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B54u;
        // 0x226b58: 0xac450024  sw          $a1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b54) {
            ctx->pc = 0x226B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226b38;
        }
    }
    ctx->pc = 0x226B5Cu;
    // 0x226b5c: 0x3c1e0016  lui         $fp, 0x16
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)22 << 16));
    // 0x226b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b64: 0x27c690a8  addiu       $a2, $fp, -0x6F58
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938792));
    // 0x226b68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x226b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226b6c: 0x0  nop
    ctx->pc = 0x226b6cu;
    // NOP
label_226b70:
    // 0x226b70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x226b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x226b74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x226b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226b78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x226b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x226b7c: 0x2883006b  slti        $v1, $a0, 0x6B
    ctx->pc = 0x226b7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)107) ? 1 : 0);
    // 0x226b80: 0x0  nop
    ctx->pc = 0x226b80u;
    // NOP
    // 0x226b84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226B84u;
    {
        const bool branch_taken_0x226b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B84u;
        // 0x226b88: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b84) {
            ctx->pc = 0x226B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226b70;
        }
    }
    ctx->pc = 0x226B8Cu;
    // 0x226b8c: 0x27c290a8  addiu       $v0, $fp, -0x6F58
    ctx->pc = 0x226b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938792));
    // 0x226b90: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x226b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x226b94: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x226b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x226b98: 0xac43015c  sw          $v1, 0x15C($v0)
    ctx->pc = 0x226b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 3));
    // 0x226b9c: 0x24847830  addiu       $a0, $a0, 0x7830
    ctx->pc = 0x226b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30768));
    // 0x226ba0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x226ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226ba4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226ba8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226bac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x226bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226bb0: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x226bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226bb4: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226bb8: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x226bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226bbc: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x226bbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x226bc0: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x226bc4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226bc8: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x226bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x226bcc: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x226bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x226bd0: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x226bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x226bd4: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x226bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x226bd8: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x226bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226bdc: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x226bdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x226be0: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x226be0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x226be4: 0x24180012  addiu       $t8, $zero, 0x12
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x226be8: 0x24080097  addiu       $t0, $zero, 0x97
    ctx->pc = 0x226be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x226bec: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x226becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x226bf0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x226bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x226bf4: 0xac450110  sw          $a1, 0x110($v0)
    ctx->pc = 0x226bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 5));
    // 0x226bf8: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x226bfc: 0xac460114  sw          $a2, 0x114($v0)
    ctx->pc = 0x226bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 6));
    // 0x226c00: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x226c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x226c04: 0xac470118  sw          $a3, 0x118($v0)
    ctx->pc = 0x226c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 7));
    // 0x226c08: 0x2499e980  addiu       $t9, $a0, -0x1680
    ctx->pc = 0x226c08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961536));
    // 0x226c0c: 0xac4a011c  sw          $t2, 0x11C($v0)
    ctx->pc = 0x226c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 10));
    // 0x226c10: 0xac4b0120  sw          $t3, 0x120($v0)
    ctx->pc = 0x226c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 11));
    // 0x226c14: 0xac4c0124  sw          $t4, 0x124($v0)
    ctx->pc = 0x226c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 12));
    // 0x226c18: 0xac4d0128  sw          $t5, 0x128($v0)
    ctx->pc = 0x226c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 13));
    // 0x226c1c: 0xac4e012c  sw          $t6, 0x12C($v0)
    ctx->pc = 0x226c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 14));
    // 0x226c20: 0xac4f0130  sw          $t7, 0x130($v0)
    ctx->pc = 0x226c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 15));
    // 0x226c24: 0xac500134  sw          $s0, 0x134($v0)
    ctx->pc = 0x226c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 16));
    // 0x226c28: 0xac510138  sw          $s1, 0x138($v0)
    ctx->pc = 0x226c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 17));
    // 0x226c2c: 0xac52013c  sw          $s2, 0x13C($v0)
    ctx->pc = 0x226c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 18));
    // 0x226c30: 0xac530140  sw          $s3, 0x140($v0)
    ctx->pc = 0x226c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 19));
    // 0x226c34: 0xac540144  sw          $s4, 0x144($v0)
    ctx->pc = 0x226c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 20));
    // 0x226c38: 0xac550148  sw          $s5, 0x148($v0)
    ctx->pc = 0x226c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 21));
    // 0x226c3c: 0xac56014c  sw          $s6, 0x14C($v0)
    ctx->pc = 0x226c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 22));
    // 0x226c40: 0xac570150  sw          $s7, 0x150($v0)
    ctx->pc = 0x226c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 23));
    // 0x226c44: 0xac580154  sw          $t8, 0x154($v0)
    ctx->pc = 0x226c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 24));
    // 0x226c48: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x226c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
    // 0x226c4c: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x226c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x157854u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157854u, _value); } while (0);
    // 0x226c50: 0xac890028  sw          $t1, 0x28($a0)
    ctx->pc = 0x226c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x157858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x157858u, _value); } while (0);
    // 0x226c54: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x226c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
label_226c58:
    // 0x226c58: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x226c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x226c5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x226c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x226c60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x226c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x226c64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226c68: 0x28a3005d  slti        $v1, $a1, 0x5D
    ctx->pc = 0x226c68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)93) ? 1 : 0);
    // 0x226c6c: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x226c70: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x226c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
    // 0x226c74: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x226C74u;
    {
        const bool branch_taken_0x226c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C74u;
        // 0x226c78: 0xac460024  sw          $a2, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c74) {
            ctx->pc = 0x226C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226c58;
        }
    }
    ctx->pc = 0x226C7Cu;
    // 0x226c7c: 0x27c290a8  addiu       $v0, $fp, -0x6F58
    ctx->pc = 0x226c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938792));
    // 0x226c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226c84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226c88: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226c8c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x226c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226c90: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x226c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226c94: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x226c94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226c98: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x226c98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226c9c: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x226ca0: 0x240d0009  addiu       $t5, $zero, 0x9
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x226ca4: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226ca8: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x226cac: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x226cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x226cb0: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x226cb4: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x226cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x226cb8: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x226cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226cbc: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x226cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x226cc0: 0x24150011  addiu       $s5, $zero, 0x11
    ctx->pc = 0x226cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x226cc4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x226cc8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x226cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x226ccc: 0x24987ec0  addiu       $t8, $a0, 0x7EC0
    ctx->pc = 0x226cccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    // 0x226cd0: 0xac4301a8  sw          $v1, 0x1A8($v0)
    ctx->pc = 0x226cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 3));
    // 0x226cd4: 0xac450164  sw          $a1, 0x164($v0)
    ctx->pc = 0x226cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 5));
    // 0x226cd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x226cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cdc: 0xac460168  sw          $a2, 0x168($v0)
    ctx->pc = 0x226cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 6));
    // 0x226ce0: 0x24190097  addiu       $t9, $zero, 0x97
    ctx->pc = 0x226ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x226ce4: 0xac47016c  sw          $a3, 0x16C($v0)
    ctx->pc = 0x226ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 7));
    // 0x226ce8: 0x2717e2f0  addiu       $s7, $t8, -0x1D10
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 24), 4294959856));
    // 0x226cec: 0xac480170  sw          $t0, 0x170($v0)
    ctx->pc = 0x226cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 8));
    // 0x226cf0: 0xac490174  sw          $t1, 0x174($v0)
    ctx->pc = 0x226cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 9));
    // 0x226cf4: 0xac4a0178  sw          $t2, 0x178($v0)
    ctx->pc = 0x226cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 10));
    // 0x226cf8: 0xac4b017c  sw          $t3, 0x17C($v0)
    ctx->pc = 0x226cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 11));
    // 0x226cfc: 0xac4c0180  sw          $t4, 0x180($v0)
    ctx->pc = 0x226cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 12));
    // 0x226d00: 0xac4d0184  sw          $t5, 0x184($v0)
    ctx->pc = 0x226d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 13));
    // 0x226d04: 0xac4e0188  sw          $t6, 0x188($v0)
    ctx->pc = 0x226d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 14));
    // 0x226d08: 0xac4f018c  sw          $t7, 0x18C($v0)
    ctx->pc = 0x226d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 15));
    // 0x226d0c: 0xac500190  sw          $s0, 0x190($v0)
    ctx->pc = 0x226d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 16));
    // 0x226d10: 0xac510194  sw          $s1, 0x194($v0)
    ctx->pc = 0x226d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 17));
    // 0x226d14: 0xac520198  sw          $s2, 0x198($v0)
    ctx->pc = 0x226d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 408), GPR_U32(ctx, 18));
    // 0x226d18: 0xac53019c  sw          $s3, 0x19C($v0)
    ctx->pc = 0x226d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 412), GPR_U32(ctx, 19));
    // 0x226d1c: 0xac5401a0  sw          $s4, 0x1A0($v0)
    ctx->pc = 0x226d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 20));
    // 0x226d20: 0xac5501a4  sw          $s5, 0x1A4($v0)
    ctx->pc = 0x226d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 420), GPR_U32(ctx, 21));
    // 0x226d24: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x226d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    // 0x226d28: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x226d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x226d2c: 0x0  nop
    ctx->pc = 0x226d2cu;
    // NOP
label_226d30:
    // 0x226d30: 0x2407005e  addiu       $a3, $zero, 0x5E
    ctx->pc = 0x226d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x226d34: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x226d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x226d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x226d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226d3c: 0x562823  subu        $a1, $v0, $s6
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x226d40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x226d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x226d44: 0x24a2005d  addiu       $v0, $a1, 0x5D
    ctx->pc = 0x226d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 93));
    // 0x226d48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x226d4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x226d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x226d54: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x226d58: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x226d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x226d5c: 0xac790024  sw          $t9, 0x24($v1)
    ctx->pc = 0x226d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 25));
label_226d60:
    // 0x226d60: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x226d64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x226d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x226d68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226d6c: 0x28e40070  slti        $a0, $a3, 0x70
    ctx->pc = 0x226d6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x226d70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226d74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x226d78: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x226d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x226d7c: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x226d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x226d80: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x226D80u;
    {
        const bool branch_taken_0x226d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D80u;
        // 0x226d84: 0xac660024  sw          $a2, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d80) {
            ctx->pc = 0x226D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226d60;
        }
    }
    ctx->pc = 0x226D88u;
    // 0x226d88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x226d8c: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x226d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x226d90: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x226D90u;
    {
        const bool branch_taken_0x226d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226d90) {
            ctx->pc = 0x226D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226D90u;
            // 0x226d94: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226d30;
        }
    }
    ctx->pc = 0x226D98u;
    // 0x226d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226da8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x226da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226dac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x226dacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226db0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x226db0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226db4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x226db4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226db8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x226db8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x226DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DBCu;
        // 0x226dc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226DC4u;
    // 0x226dc4: 0x0  nop
    ctx->pc = 0x226dc4u;
    // NOP
    ctx->pc = 0x226dc8u;
}
