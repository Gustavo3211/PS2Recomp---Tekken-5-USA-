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

// Function: sub_004A2C40
// Address: 0x4a2c40 - 0x4a2db8
void sub_004A2C40_0x4a2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2C40_0x4a2c40");
#endif

    switch (ctx->pc) {
        case 0x4a2c88u: goto label_4a2c88;
        case 0x4a2cb0u: goto label_4a2cb0;
        case 0x4a2d44u: goto label_4a2d44;
        case 0x4a2d60u: goto label_4a2d60;
        case 0x4a2d74u: goto label_4a2d74;
        case 0x4a2d8cu: goto label_4a2d8c;
        default: break;
    }

    ctx->pc = 0x4a2c40u;

    // 0x4a2c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a2c44: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a2c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a2c48: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x4a2c48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x4a2c4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a2c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a2c50: 0x2692d680  addiu       $s2, $s4, -0x2980
    ctx->pc = 0x4a2c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x4a2c54: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x4a2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6C4u));
    // 0x4a2c58: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x4a2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x4a2c5c: 0x24424008  addiu       $v0, $v0, 0x4008
    ctx->pc = 0x4a2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16392));
    // 0x4a2c60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a2c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a2c64: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4a2c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a2c68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a2c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a2c6c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a2c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a2c70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a2c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2c74: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a2c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a2c78: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x4A2C78u;
    {
        const bool branch_taken_0x4a2c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2C78u;
        // 0x4a2c7c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2c78) {
            ctx->pc = 0x4A2D98u;
            goto label_4a2d98;
        }
    }
    ctx->pc = 0x4A2C80u;
    // 0x4a2c80: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A2C80u;
    SET_GPR_U32(ctx, 31, 0x4A2C88u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A2C80u, 0x4A2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2C88u;
label_4a2c88:
    // 0x4a2c88: 0x86300030  lh          $s0, 0x30($s1)
    ctx->pc = 0x4a2c88u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x4a2c8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a2c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2c90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2c94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4a2c94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4a2c98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4a2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a2c9c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x4a2c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4a2ca0: 0x32100003  andi        $s0, $s0, 0x3
    ctx->pc = 0x4a2ca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x4a2ca4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4a2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a2ca8: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4A2CA8u;
    SET_GPR_U32(ctx, 31, 0x4A2CB0u);
    ctx->pc = 0x4A2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2CA8u;
    // 0x4a2cac: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4A2CA8u, 0x4A2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2CB0u;
label_4a2cb0:
    // 0x4a2cb0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4a2cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2cb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2cb8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4a2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4a2cbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a2cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a2cc0: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x4a2cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a2cc4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a2cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2cc8: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x4a2cc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a2ccc: 0x86460092  lh          $a2, 0x92($s2)
    ctx->pc = 0x4a2cccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x4a2cd0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4a2cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4a2cd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a2cd8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a2cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a2cdc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4a2cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a2ce0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2ce4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a2ce8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a2ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a2cec: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a2cecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2cf0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2cf4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2cf8: 0x11070015  beq         $t0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A2CF8u;
    {
        const bool branch_taken_0x4a2cf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x4A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CF8u;
        // 0x4a2cfc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cf8) {
            ctx->pc = 0x4A2D50u;
            goto label_4a2d50;
        }
    }
    ctx->pc = 0x4A2D00u;
    // 0x4a2d00: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x4a2d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a2d04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A2D04u;
    {
        const bool branch_taken_0x4a2d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D04u;
        // 0x4a2d08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d04) {
            ctx->pc = 0x4A2D20u;
            goto label_4a2d20;
        }
    }
    ctx->pc = 0x4A2D0Cu;
    // 0x4a2d0c: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A2D0Cu;
    {
        const bool branch_taken_0x4a2d0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D0Cu;
        // 0x4a2d10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d0c) {
            ctx->pc = 0x4A2D38u;
            goto label_4a2d38;
        }
    }
    ctx->pc = 0x4A2D14u;
    // 0x4a2d14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4A2D14u;
    {
        const bool branch_taken_0x4a2d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D14u;
        // 0x4a2d18: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d14) {
            ctx->pc = 0x4A2D90u;
            goto label_4a2d90;
        }
    }
    ctx->pc = 0x4A2D1Cu;
    // 0x4a2d1c: 0x0  nop
    ctx->pc = 0x4a2d1cu;
    // NOP
label_4a2d20:
    // 0x4a2d20: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A2D20u;
    {
        const bool branch_taken_0x4a2d20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D20u;
        // 0x4a2d24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d20) {
            ctx->pc = 0x4A2D68u;
            goto label_4a2d68;
        }
    }
    ctx->pc = 0x4A2D28u;
    // 0x4a2d28: 0x11020015  beq         $t0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A2D28u;
    {
        const bool branch_taken_0x4a2d28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D28u;
        // 0x4a2d2c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d28) {
            ctx->pc = 0x4A2D80u;
            goto label_4a2d80;
        }
    }
    ctx->pc = 0x4A2D30u;
    // 0x4a2d30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A2D30u;
    {
        const bool branch_taken_0x4a2d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D30u;
        // 0x4a2d34: 0x2682d680  addiu       $v0, $s4, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d30) {
            ctx->pc = 0x4A2D94u;
            goto label_4a2d94;
        }
    }
    ctx->pc = 0x4A2D38u;
label_4a2d38:
    // 0x4a2d38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a2d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d3c: 0xc128a78  jal         func_4A29E0
    ctx->pc = 0x4A2D3Cu;
    SET_GPR_U32(ctx, 31, 0x4A2D44u);
    ctx->pc = 0x4A2D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2D3Cu;
    // 0x4a2d40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A29E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A29E0u, 0x4A2D3Cu, 0x4A2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2D44u;
label_4a2d44:
    // 0x4a2d44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4A2D44u;
    {
        const bool branch_taken_0x4a2d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D44u;
        // 0x4a2d48: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d44) {
            ctx->pc = 0x4A2D90u;
            goto label_4a2d90;
        }
    }
    ctx->pc = 0x4A2D4Cu;
    // 0x4a2d4c: 0x0  nop
    ctx->pc = 0x4a2d4cu;
    // NOP
label_4a2d50:
    // 0x4a2d50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a2d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a2d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d58: 0xc128a8a  jal         func_4A2A28
    ctx->pc = 0x4A2D58u;
    SET_GPR_U32(ctx, 31, 0x4A2D60u);
    ctx->pc = 0x4A2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2D58u;
    // 0x4a2d5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2A28u, 0x4A2D58u, 0x4A2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2D60u;
label_4a2d60:
    // 0x4a2d60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A2D60u;
    {
        const bool branch_taken_0x4a2d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D60u;
        // 0x4a2d64: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d60) {
            ctx->pc = 0x4A2D90u;
            goto label_4a2d90;
        }
    }
    ctx->pc = 0x4A2D68u;
label_4a2d68:
    // 0x4a2d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a2d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d6c: 0xc128ab4  jal         func_4A2AD0
    ctx->pc = 0x4A2D6Cu;
    SET_GPR_U32(ctx, 31, 0x4A2D74u);
    ctx->pc = 0x4A2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2D6Cu;
    // 0x4a2d70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2AD0u, 0x4A2D6Cu, 0x4A2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2D74u;
label_4a2d74:
    // 0x4a2d74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A2D74u;
    {
        const bool branch_taken_0x4a2d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D74u;
        // 0x4a2d78: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d74) {
            ctx->pc = 0x4A2D90u;
            goto label_4a2d90;
        }
    }
    ctx->pc = 0x4A2D7Cu;
    // 0x4a2d7c: 0x0  nop
    ctx->pc = 0x4a2d7cu;
    // NOP
label_4a2d80:
    // 0x4a2d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a2d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d84: 0xc128ae2  jal         func_4A2B88
    ctx->pc = 0x4A2D84u;
    SET_GPR_U32(ctx, 31, 0x4A2D8Cu);
    ctx->pc = 0x4A2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2D84u;
    // 0x4a2d88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2B88u, 0x4A2D84u, 0x4A2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2D8Cu;
label_4a2d8c:
    // 0x4a2d8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a2d90:
    // 0x4a2d90: 0x2682d680  addiu       $v0, $s4, -0x2980
    ctx->pc = 0x4a2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
label_4a2d94:
    // 0x4a2d94: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x4a2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_4a2d98:
    // 0x4a2d98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a2d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2d9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a2d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a2da0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a2da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a2da4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a2da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a2da8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a2da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a2dac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a2dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a2db0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DB0u;
        // 0x4a2db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2DB8u;
}
