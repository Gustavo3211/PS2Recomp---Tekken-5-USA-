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

// Function: sub_004A8A98
// Address: 0x4a8a98 - 0x4a8c70
void sub_004A8A98_0x4a8a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8A98_0x4a8a98");
#endif

    switch (ctx->pc) {
        case 0x4a8ae0u: goto label_4a8ae0;
        case 0x4a8b6cu: goto label_4a8b6c;
        case 0x4a8b7cu: goto label_4a8b7c;
        case 0x4a8b9cu: goto label_4a8b9c;
        case 0x4a8ba4u: goto label_4a8ba4;
        default: break;
    }

    ctx->pc = 0x4a8a98u;

    // 0x4a8a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a8a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a8a9c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a8a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a8aa0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a8aa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8aa4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a8aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a8aa8: 0x26a7013c  addiu       $a3, $s5, 0x13C
    ctx->pc = 0x4a8aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 316));
    // 0x4a8aac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a8aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a8ab0: 0x26a5014a  addiu       $a1, $s5, 0x14A
    ctx->pc = 0x4a8ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 330));
    // 0x4a8ab4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a8ab8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a8abc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a8abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a8ac0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a8ac4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4a8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4a8ac8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a8ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a8acc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4a8accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4a8ad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A8AD0u;
    {
        const bool branch_taken_0x4a8ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AD0u;
        // 0x4a8ad4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ad0) {
            ctx->pc = 0x4A8AE8u;
            goto label_4a8ae8;
        }
    }
    ctx->pc = 0x4A8AD8u;
    // 0x4a8ad8: 0xc12a298  jal         func_4A8A60
    ctx->pc = 0x4A8AD8u;
    SET_GPR_U32(ctx, 31, 0x4A8AE0u);
    ctx->pc = 0x4A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8A60u, 0x4A8AD8u, 0x4A8AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8AE0u;
label_4a8ae0:
    // 0x4a8ae0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x4A8AE0u;
    {
        const bool branch_taken_0x4a8ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AE0u;
        // 0x4a8ae4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ae0) {
            ctx->pc = 0x4A8C50u;
            goto label_4a8c50;
        }
    }
    ctx->pc = 0x4A8AE8u;
label_4a8ae8:
    // 0x4a8ae8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a8ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a8af0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4a8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8af4: 0x4610055  bgez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x4A8AF4u;
    {
        const bool branch_taken_0x4a8af4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AF4u;
        // 0x4a8af8: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8af4) {
            ctx->pc = 0x4A8C4Cu;
            goto label_4a8c4c;
        }
    }
    ctx->pc = 0x4A8AFCu;
    // 0x4a8afc: 0x26a5015c  addiu       $a1, $s5, 0x15C
    ctx->pc = 0x4a8afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 348));
    // 0x4a8b00: 0x96a4015a  lhu         $a0, 0x15A($s5)
    ctx->pc = 0x4a8b00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 346)));
    // 0x4a8b04: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a8b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8b08: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a8b08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8b0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a8b10: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4a8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8b14: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a8b14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a8b18: 0x28631800  slti        $v1, $v1, 0x1800
    ctx->pc = 0x4a8b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6144) ? 1 : 0);
    // 0x4a8b1c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A8B1Cu;
    {
        const bool branch_taken_0x4a8b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B1Cu;
        // 0x4a8b20: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b1c) {
            ctx->pc = 0x4A8BB0u;
            goto label_4a8bb0;
        }
    }
    ctx->pc = 0x4A8B24u;
    // 0x4a8b24: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a8b24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a8b28: 0x26b20130  addiu       $s2, $s5, 0x130
    ctx->pc = 0x4a8b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x4a8b2c: 0x26b30132  addiu       $s3, $s5, 0x132
    ctx->pc = 0x4a8b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 306));
    // 0x4a8b30: 0x26b40134  addiu       $s4, $s5, 0x134
    ctx->pc = 0x4a8b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 308));
    // 0x4a8b34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a8b38: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x4a8b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a8b3c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4a8b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a8b40: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4a8b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a8b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8b4c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4a8b4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a8b50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a8b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8b54: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a8b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a8b58: 0x96870000  lhu         $a3, 0x0($s4)
    ctx->pc = 0x4a8b58u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a8b5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a8b60: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4a8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4a8b64: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4A8B64u;
    SET_GPR_U32(ctx, 31, 0x4A8B6Cu);
    ctx->pc = 0x4A8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8B64u;
    // 0x4a8b68: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A8B64u, 0x4A8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8B6Cu;
label_4a8b6c:
    // 0x4a8b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8b74: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4A8B74u;
    SET_GPR_U32(ctx, 31, 0x4A8B7Cu);
    ctx->pc = 0x4A8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8B74u;
    // 0x4a8b78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4A8B74u, 0x4A8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8B7Cu;
label_4a8b7c:
    // 0x4a8b7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a8b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8b80: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a8b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8b84: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x4a8b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a8b88: 0x97a50008  lhu         $a1, 0x8($sp)
    ctx->pc = 0x4a8b88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a8b8c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4a8b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a8b90: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4a8b90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8b94: 0xc12475a  jal         func_491D68
    ctx->pc = 0x4A8B94u;
    SET_GPR_U32(ctx, 31, 0x4A8B9Cu);
    ctx->pc = 0x4A8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8B94u;
    // 0x4a8b98: 0xa6850000  sh          $a1, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491D68u, 0x4A8B94u, 0x4A8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8B9Cu;
label_4a8b9c:
    // 0x4a8b9c: 0xc12aec4  jal         func_4ABB10
    ctx->pc = 0x4A8B9Cu;
    SET_GPR_U32(ctx, 31, 0x4A8BA4u);
    ctx->pc = 0x4A8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8B9Cu;
    // 0x4a8ba0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABB10u, 0x4A8B9Cu, 0x4A8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8BA4u;
label_4a8ba4:
    // 0x4a8ba4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4A8BA4u;
    {
        const bool branch_taken_0x4a8ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BA4u;
        // 0x4a8ba8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ba4) {
            ctx->pc = 0x4A8C50u;
            goto label_4a8c50;
        }
    }
    ctx->pc = 0x4A8BACu;
    // 0x4a8bac: 0x0  nop
    ctx->pc = 0x4a8bacu;
    // NOP
label_4a8bb0:
    // 0x4a8bb0: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x4a8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4a8bb4: 0x8ea40124  lw          $a0, 0x124($s5)
    ctx->pc = 0x4a8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x4a8bb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8bbc: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x4a8bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4a8bc0: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4a8bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4a8bc4: 0x26a70018  addiu       $a3, $s5, 0x18
    ctx->pc = 0x4a8bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4a8bc8: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x4a8bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4a8bcc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4a8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4a8bd0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4a8bd0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a8bd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a8bd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8bd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a8bdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8be0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8be4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8be8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a8be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a8bec: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a8becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a8bf0: 0x8ea30128  lw          $v1, 0x128($s5)
    ctx->pc = 0x4a8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x4a8bf4: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x4a8bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4a8bf8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4a8bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4a8bfc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4a8bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4a8c00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a8c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8c04: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a8c04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a8c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a8c0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8c10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8c14: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a8c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a8c18: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a8c18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4a8c1c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4a8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a8c20: 0x8ea3012c  lw          $v1, 0x12C($s5)
    ctx->pc = 0x4a8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x4a8c24: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x4a8c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4a8c28: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4a8c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4a8c2c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4a8c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4a8c30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a8c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8c34: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a8c34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a8c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a8c3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8c40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8c44: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a8c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a8c48: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4a8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_4a8c4c:
    // 0x4a8c4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a8c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8c50:
    // 0x4a8c50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a8c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a8c54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a8c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8c58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a8c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a8c5c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a8c5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a8c60: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a8c60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a8c64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a8c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a8c68: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C68u;
        // 0x4a8c6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8C70u;
}
