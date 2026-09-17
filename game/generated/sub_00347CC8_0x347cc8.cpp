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

// Function: sub_00347CC8
// Address: 0x347cc8 - 0x347fd0
void sub_00347CC8_0x347cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347CC8_0x347cc8");
#endif

    switch (ctx->pc) {
        case 0x347d1cu: goto label_347d1c;
        case 0x347d28u: goto label_347d28;
        case 0x347d58u: goto label_347d58;
        case 0x347e40u: goto label_347e40;
        case 0x347ed4u: goto label_347ed4;
        case 0x347f34u: goto label_347f34;
        case 0x347f9cu: goto label_347f9c;
        default: break;
    }

    ctx->pc = 0x347cc8u;

    // 0x347cc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x347cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x347ccc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x347cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x347cd0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x347cd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cd4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x347cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x347cd8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x347cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cdc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x347cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x347ce0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x347ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ce4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x347ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x347ce8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x347ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x347cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x347cf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cf4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x347cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x347cf8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x347cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x347cfc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x347cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x347d00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x347d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x347d04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x347d04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d08: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x347d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x347d0c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x347d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x347d10: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x347d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x347d14: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x347D14u;
    SET_GPR_U32(ctx, 31, 0x347D1Cu);
    ctx->pc = 0x347D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D14u;
    // 0x347d18: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x347D14u, 0x347D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D1Cu;
label_347d1c:
    // 0x347d1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x347d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d20: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x347D20u;
    SET_GPR_U32(ctx, 31, 0x347D28u);
    ctx->pc = 0x347D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D20u;
    // 0x347d24: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x347D20u, 0x347D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D28u;
label_347d28:
    // 0x347d28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x347d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d2c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x347d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347d30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x347d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x347d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347d38: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x347d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x347d3c: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x347D3Cu;
    {
        const bool branch_taken_0x347d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D3Cu;
        // 0x347d40: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d3c) {
            ctx->pc = 0x347F64u;
            goto label_347f64;
        }
    }
    ctx->pc = 0x347D44u;
    // 0x347d44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x347d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x347d48: 0x2415001b  addiu       $s5, $zero, 0x1B
    ctx->pc = 0x347d48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x347d4c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x347d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x347d50: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x347d50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x347d54: 0x0  nop
    ctx->pc = 0x347d54u;
    // NOP
label_347d58:
    // 0x347d58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x347d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x347d5c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347D5Cu;
    {
        const bool branch_taken_0x347d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x347D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D5Cu;
        // 0x347d60: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d5c) {
            ctx->pc = 0x347D6Cu;
            goto label_347d6c;
        }
    }
    ctx->pc = 0x347D64u;
    // 0x347d64: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347D64u;
    {
        const bool branch_taken_0x347d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D64u;
        // 0x347d68: 0x2462ff7f  addiu       $v0, $v1, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d64) {
            ctx->pc = 0x347D80u;
            goto label_347d80;
        }
    }
    ctx->pc = 0x347D6Cu;
label_347d6c:
    // 0x347d6c: 0x12800071  beqz        $s4, . + 4 + (0x71 << 2)
    ctx->pc = 0x347D6Cu;
    {
        const bool branch_taken_0x347d6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D6Cu;
        // 0x347d70: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d6c) {
            ctx->pc = 0x347F34u;
            goto label_347f34;
        }
    }
    ctx->pc = 0x347D74u;
    // 0x347d74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x347d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d78: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x347D78u;
    {
        const bool branch_taken_0x347d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D78u;
        // 0x347d7c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d78) {
            ctx->pc = 0x347F10u;
            goto label_347f10;
        }
    }
    ctx->pc = 0x347D80u;
label_347d80:
    // 0x347d80: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x347d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x347d84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347D84u;
    {
        const bool branch_taken_0x347d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D84u;
        // 0x347d88: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d84) {
            ctx->pc = 0x347DA0u;
            goto label_347da0;
        }
    }
    ctx->pc = 0x347D8Cu;
    // 0x347d8c: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x347d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x347d90: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x347d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x347d94: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x347D94u;
    {
        const bool branch_taken_0x347d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D94u;
        // 0x347d98: 0x2462ff5f  addiu       $v0, $v1, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d94) {
            ctx->pc = 0x347E20u;
            goto label_347e20;
        }
    }
    ctx->pc = 0x347D9Cu;
    // 0x347d9c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x347d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_347da0:
    // 0x347da0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x347da0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347da4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x347da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347da8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x347da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x347dac: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x347dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x347db0: 0x2c6300bd  sltiu       $v1, $v1, 0xBD
    ctx->pc = 0x347db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)189) ? 1 : 0);
    // 0x347db4: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x347DB4u;
    {
        const bool branch_taken_0x347db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DB4u;
        // 0x347db8: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347db4) {
            ctx->pc = 0x347ED4u;
            goto label_347ed4;
        }
    }
    ctx->pc = 0x347DBCu;
    // 0x347dbc: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x347dbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347dc0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x347dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x347dc4: 0x93a40004  lbu         $a0, 0x4($sp)
    ctx->pc = 0x347dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x347dc8: 0x240900b0  addiu       $t1, $zero, 0xB0
    ctx->pc = 0x347dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x347dcc: 0x2cc200a0  sltiu       $v0, $a2, 0xA0
    ctx->pc = 0x347dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x347dd0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x347dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347dd4: 0x2c85009f  sltiu       $a1, $a0, 0x9F
    ctx->pc = 0x347dd4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)159) ? 1 : 0);
    // 0x347dd8: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x347dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x347ddc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x347DDCu;
    {
        const bool branch_taken_0x347ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x347DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DDCu;
        // 0x347de0: 0x122180a  movz        $v1, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ddc) {
            ctx->pc = 0x347DF8u;
            goto label_347df8;
        }
    }
    ctx->pc = 0x347DE4u;
    // 0x347de4: 0x411fa  dsrl        $v0, $a0, 7
    ctx->pc = 0x347de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 7);
    // 0x347de8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x347de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347dec: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x347decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x347df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x347DF0u;
    {
        const bool branch_taken_0x347df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DF0u;
        // 0x347df4: 0x122200a  movz        $a0, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347df0) {
            ctx->pc = 0x347DFCu;
            goto label_347dfc;
        }
    }
    ctx->pc = 0x347DF8u;
label_347df8:
    // 0x347df8: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x347df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_347dfc:
    // 0x347dfc: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x347dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x347e00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x347e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x347e04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x347e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x347e08: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x347e08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x347e0c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x347e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x347e10: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x347e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347e14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x347E14u;
    {
        const bool branch_taken_0x347e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E14u;
        // 0x347e18: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e14) {
            ctx->pc = 0x347EA0u;
            goto label_347ea0;
        }
    }
    ctx->pc = 0x347E1Cu;
    // 0x347e1c: 0x0  nop
    ctx->pc = 0x347e1cu;
    // NOP
label_347e20:
    // 0x347e20: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x347e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x347e24: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x347E24u;
    {
        const bool branch_taken_0x347e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E24u;
        // 0x347e28: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e24) {
            ctx->pc = 0x347F00u;
            goto label_347f00;
        }
    }
    ctx->pc = 0x347E2Cu;
    // 0x347e2c: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x347e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x347e30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x347e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347e34: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x347e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x347e38: 0xc0d2240  jal         func_348900
    ctx->pc = 0x347E38u;
    SET_GPR_U32(ctx, 31, 0x347E40u);
    ctx->pc = 0x347E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E38u;
    // 0x347e3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348900u, 0x347E38u, 0x347E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E40u;
label_347e40:
    // 0x347e40: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x347e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x347e44: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x347e44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347e48: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x347e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x347e4c: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x347e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x347e50: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x347e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347e54: 0x2ce200a0  sltiu       $v0, $a3, 0xA0
    ctx->pc = 0x347e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x347e58: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x347e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x347e5c: 0x2c66009f  sltiu       $a2, $v1, 0x9F
    ctx->pc = 0x347e5cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)159) ? 1 : 0);
    // 0x347e60: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x347E60u;
    {
        const bool branch_taken_0x347e60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E60u;
        // 0x347e64: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e60) {
            ctx->pc = 0x347E80u;
            goto label_347e80;
        }
    }
    ctx->pc = 0x347E68u;
    // 0x347e68: 0x311fa  dsrl        $v0, $v1, 7
    ctx->pc = 0x347e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
    // 0x347e6c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x347e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x347e70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x347e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347E74u;
    {
        const bool branch_taken_0x347e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E74u;
        // 0x347e78: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e74) {
            ctx->pc = 0x347E84u;
            goto label_347e84;
        }
    }
    ctx->pc = 0x347E7Cu;
    // 0x347e7c: 0x0  nop
    ctx->pc = 0x347e7cu;
    // NOP
label_347e80:
    // 0x347e80: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x347e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_347e84:
    // 0x347e84: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x347e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x347e88: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x347e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x347e8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x347e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x347e90: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x347e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x347e94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x347e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347e98: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x347e98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x347e9c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x347e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_347ea0:
    // 0x347ea0: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x347EA0u;
    {
        const bool branch_taken_0x347ea0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x347EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EA0u;
        // 0x347ea4: 0x26220002  addiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ea0) {
            ctx->pc = 0x347ED8u;
            goto label_347ed8;
        }
    }
    ctx->pc = 0x347EA8u;
    // 0x347ea8: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x347ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x347eac: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x347eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x347eb0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x347EB0u;
    {
        const bool branch_taken_0x347eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EB0u;
        // 0x347eb4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347eb0) {
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347EB8u;
    // 0x347eb8: 0xa2350000  sb          $s5, 0x0($s1)
    ctx->pc = 0x347eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x347ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ec4: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x347ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x347ec8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x347ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ecc: 0xc04a125  jal         func_128494
    ctx->pc = 0x347ECCu;
    SET_GPR_U32(ctx, 31, 0x347ED4u);
    ctx->pc = 0x347ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347ECCu;
    // 0x347ed0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x347ECCu, 0x347ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347ED4u;
label_347ed4:
    // 0x347ed4: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x347ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_347ed8:
    // 0x347ed8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x347ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x347edc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x347EDCu;
    {
        const bool branch_taken_0x347edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EDCu;
        // 0x347ee0: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347edc) {
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347EE4u;
    // 0x347ee4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x347ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347eec: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x347eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x347ef0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x347ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347ef4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x347EF4u;
    {
        const bool branch_taken_0x347ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EF4u;
        // 0x347ef8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ef4) {
            ctx->pc = 0x347F4Cu;
            goto label_347f4c;
        }
    }
    ctx->pc = 0x347EFCu;
    // 0x347efc: 0x0  nop
    ctx->pc = 0x347efcu;
    // NOP
label_347f00:
    // 0x347f00: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x347F00u;
    {
        const bool branch_taken_0x347f00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x347F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F00u;
        // 0x347f04: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f00) {
            ctx->pc = 0x347F34u;
            goto label_347f34;
        }
    }
    ctx->pc = 0x347F08u;
    // 0x347f08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x347f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f0c: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x347f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_347f10:
    // 0x347f10: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x347f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x347f14: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x347F14u;
    {
        const bool branch_taken_0x347f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F14u;
        // 0x347f18: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f14) {
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347F1Cu;
    // 0x347f1c: 0xa2350000  sb          $s5, 0x0($s1)
    ctx->pc = 0x347f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x347f20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f28: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x347f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x347f2c: 0xc04a125  jal         func_128494
    ctx->pc = 0x347F2Cu;
    SET_GPR_U32(ctx, 31, 0x347F34u);
    ctx->pc = 0x347F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F2Cu;
    // 0x347f30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x347F2Cu, 0x347F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F34u;
label_347f34:
    // 0x347f34: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x347f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347f38: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x347f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x347f3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x347F3Cu;
    {
        const bool branch_taken_0x347f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F3Cu;
        // 0x347f40: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f3c) {
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347F44u;
    // 0x347f44: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x347f44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347f48: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x347f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_347f4c:
    // 0x347f4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x347f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347f50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x347f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x347f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347f58: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x347f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x347f5c: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x347F5Cu;
    {
        const bool branch_taken_0x347f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x347F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F5Cu;
        // 0x347f60: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f5c) {
            ctx->pc = 0x347D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347d58;
        }
    }
    ctx->pc = 0x347F64u;
label_347f64:
    // 0x347f64: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x347F64u;
    {
        const bool branch_taken_0x347f64 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x347F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F64u;
        // 0x347f68: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f64) {
            ctx->pc = 0x347F9Cu;
            goto label_347f9c;
        }
    }
    ctx->pc = 0x347F6Cu;
    // 0x347f6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x347f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x347f70: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x347f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x347f74: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x347F74u;
    {
        const bool branch_taken_0x347f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f74) {
            ctx->pc = 0x347F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F74u;
            // 0x347f78: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347FA0u;
            goto label_347fa0;
        }
    }
    ctx->pc = 0x347F7Cu;
    // 0x347f7c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x347f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x347f80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x347f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f84: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x347f84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f90: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x347f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x347f94: 0xc04a125  jal         func_128494
    ctx->pc = 0x347F94u;
    SET_GPR_U32(ctx, 31, 0x347F9Cu);
    ctx->pc = 0x347F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F94u;
    // 0x347f98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x347F94u, 0x347F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F9Cu;
label_347f9c:
    // 0x347f9c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x347f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_347fa0:
    // 0x347fa0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x347fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347fa4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x347fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347fa8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x347fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347fac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x347facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x347fb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x347fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347fb4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x347fb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fb8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x347fb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347fbc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x347fbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347fc0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x347fc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x347fc4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x347fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x347fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x347FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FC8u;
        // 0x347fcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347FD0u;
}
