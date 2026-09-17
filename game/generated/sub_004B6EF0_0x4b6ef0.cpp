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

// Function: sub_004B6EF0
// Address: 0x4b6ef0 - 0x4b7380
void sub_004B6EF0_0x4b6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6EF0_0x4b6ef0");
#endif

    switch (ctx->pc) {
        case 0x4b6f3cu: goto label_4b6f3c;
        case 0x4b707cu: goto label_4b707c;
        case 0x4b70b4u: goto label_4b70b4;
        case 0x4b70c0u: goto label_4b70c0;
        case 0x4b7100u: goto label_4b7100;
        case 0x4b724cu: goto label_4b724c;
        case 0x4b7280u: goto label_4b7280;
        case 0x4b72b0u: goto label_4b72b0;
        case 0x4b72b8u: goto label_4b72b8;
        case 0x4b72c0u: goto label_4b72c0;
        case 0x4b7300u: goto label_4b7300;
        case 0x4b731cu: goto label_4b731c;
        default: break;
    }

    ctx->pc = 0x4b6ef0u;

    // 0x4b6ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b6ef4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b6ef8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b6efc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b6efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6f00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b6f04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b6f08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b6f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6f0c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b6f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b6f10: 0x267001b4  addiu       $s0, $s3, 0x1B4
    ctx->pc = 0x4b6f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x4b6f14: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b6f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b6f18: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b6f1c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4b6f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4b6f20: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4b6f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4b6f24: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4b6f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4b6f28: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b6f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6f2c: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B6F2Cu;
    {
        const bool branch_taken_0x4b6f2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6F2Cu;
        // 0x4b6f30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6f2c) {
            ctx->pc = 0x4B7010u;
            goto label_4b7010;
        }
    }
    ctx->pc = 0x4B6F34u;
    // 0x4b6f34: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B6F34u;
    SET_GPR_U32(ctx, 31, 0x4B6F3Cu);
    ctx->pc = 0x4B6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6F34u;
    // 0x4b6f38: 0x267e015e  addiu       $fp, $s3, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B6F34u, 0x4B6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6F3Cu;
label_4b6f3c:
    // 0x4b6f3c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4b6f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4b6f40: 0x3052001f  andi        $s2, $v0, 0x1F
    ctx->pc = 0x4b6f40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4b6f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6f48: 0x2652001e  addiu       $s2, $s2, 0x1E
    ctx->pc = 0x4b6f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 30));
    // 0x4b6f4c: 0x26670148  addiu       $a3, $s3, 0x148
    ctx->pc = 0x4b6f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
    // 0x4b6f50: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x4b6f50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b6f54: 0x26640160  addiu       $a0, $s3, 0x160
    ctx->pc = 0x4b6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x4b6f58: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4b6f58u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6f5c: 0x26620120  addiu       $v0, $s3, 0x120
    ctx->pc = 0x4b6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4b6f60: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4b6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4b6f64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4b6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4b6f68: 0x26750138  addiu       $s5, $s3, 0x138
    ctx->pc = 0x4b6f68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 312));
    // 0x4b6f6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4b6f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6f70: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x4b6f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b6f74: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4b6f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4b6f78: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x4b6f78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4b6f7c: 0x3a320040  xori        $s2, $s1, 0x40
    ctx->pc = 0x4b6f7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)64);
    // 0x4b6f80: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x4b6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4b6f84: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4b6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b6f88: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4b6f88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b6f8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b6f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b6f90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b6f94: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x4b6f94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b6f98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4b6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b6f9c: 0xa4520000  sh          $s2, 0x0($v0)
    ctx->pc = 0x4b6f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b6fa0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4b6fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6fa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6FA4u;
    {
        const bool branch_taken_0x4b6fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FA4u;
        // 0x4b6fa8: 0x24120020  addiu       $s2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6fa4) {
            ctx->pc = 0x4B6FC8u;
            goto label_4b6fc8;
        }
    }
    ctx->pc = 0x4B6FACu;
    // 0x4b6fac: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6FACu;
    {
        const bool branch_taken_0x4b6fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FACu;
        // 0x4b6fb0: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6fac) {
            ctx->pc = 0x4B6FD0u;
            goto label_4b6fd0;
        }
    }
    ctx->pc = 0x4B6FB4u;
    // 0x4b6fb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b6fb8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4b6fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4b6fbc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b6fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B6FC0u;
    {
        const bool branch_taken_0x4b6fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6FC0u;
        // 0x4b6fc4: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6fc0) {
            ctx->pc = 0x4B6FCCu;
            goto label_4b6fcc;
        }
    }
    ctx->pc = 0x4B6FC8u;
label_4b6fc8:
    // 0x4b6fc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b6fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6fcc:
    // 0x4b6fcc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x4b6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4b6fd0:
    // 0x4b6fd0: 0x2676013a  addiu       $s6, $s3, 0x13A
    ctx->pc = 0x4b6fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 314));
    // 0x4b6fd4: 0x26770162  addiu       $s7, $s3, 0x162
    ctx->pc = 0x4b6fd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 354));
    // 0x4b6fd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4b6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b6fdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6fe0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4b6fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b6fe4: 0xa4d20000  sh          $s2, 0x0($a2)
    ctx->pc = 0x4b6fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b6fe8: 0xa6c00000  sh          $zero, 0x0($s6)
    ctx->pc = 0x4b6fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b6fec: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4b6fecu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6ff0: 0xa66301c2  sh          $v1, 0x1C2($s3)
    ctx->pc = 0x4b6ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6ff4: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x4b6ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b6ff8: 0xa665002e  sh          $a1, 0x2E($s3)
    ctx->pc = 0x4b6ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b6ffc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b6ffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7000: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b7000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b7004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B7004u;
    {
        const bool branch_taken_0x4b7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7004u;
        // 0x4b7008: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7004) {
            ctx->pc = 0x4B7030u;
            goto label_4b7030;
        }
    }
    ctx->pc = 0x4B700Cu;
    // 0x4b700c: 0x0  nop
    ctx->pc = 0x4b700cu;
    // NOP
label_4b7010:
    // 0x4b7010: 0x26640120  addiu       $a0, $s3, 0x120
    ctx->pc = 0x4b7010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4b7014: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x4b7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x4b7018: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4b7018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4b701c: 0x267e015e  addiu       $fp, $s3, 0x15E
    ctx->pc = 0x4b701cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4b7020: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b7020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b7024: 0x26750138  addiu       $s5, $s3, 0x138
    ctx->pc = 0x4b7024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 312));
    // 0x4b7028: 0x2676013a  addiu       $s6, $s3, 0x13A
    ctx->pc = 0x4b7028u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 314));
    // 0x4b702c: 0x26770162  addiu       $s7, $s3, 0x162
    ctx->pc = 0x4b702cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 354));
label_4b7030:
    // 0x4b7030: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4b7030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b7034: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4b7034u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7038: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b7038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b703c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4b703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4b7040: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x4b7040u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b7044: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x4b7044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4b7048: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b7048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b704c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b7050: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4b7050u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b7054: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x4b7054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x4b7058: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B7058u;
    {
        const bool branch_taken_0x4b7058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7058u;
        // 0x4b705c: 0x267101b6  addiu       $s1, $s3, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 438));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7058) {
            ctx->pc = 0x4B7080u;
            goto label_4b7080;
        }
    }
    ctx->pc = 0x4B7060u;
    // 0x4b7060: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b7060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b7064: 0x86300000  lh          $s0, 0x0($s1)
    ctx->pc = 0x4b7064u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b7068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b7068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b706c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x4b706cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b7070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7074: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4B7074u;
    SET_GPR_U32(ctx, 31, 0x4B707Cu);
    ctx->pc = 0x4B7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7074u;
    // 0x4b7078: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4B7074u, 0x4B707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B707Cu;
label_4b707c:
    // 0x4b707c: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x4b707cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
label_4b7080:
    // 0x4b7080: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b7080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b7084: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b7084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b7088: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b7088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b708c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4b708cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b7090: 0x32430006  andi        $v1, $s2, 0x6
    ctx->pc = 0x4b7090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
    // 0x4b7094: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b7094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b7098: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4b7098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4b709c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x4b709cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b70a0: 0x32420006  andi        $v0, $s2, 0x6
    ctx->pc = 0x4b70a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
    // 0x4b70a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B70A4u;
    {
        const bool branch_taken_0x4b70a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b70a4) {
            ctx->pc = 0x4B70A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B70A4u;
            // 0x4b70a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B70B8u;
            goto label_4b70b8;
        }
    }
    ctx->pc = 0x4B70ACu;
    // 0x4b70ac: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4B70ACu;
    SET_GPR_U32(ctx, 31, 0x4B70B4u);
    ctx->pc = 0x4B70B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B70ACu;
    // 0x4b70b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4B70ACu, 0x4B70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B70B4u;
label_4b70b4:
    // 0x4b70b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b70b8:
    // 0x4b70b8: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4B70B8u;
    SET_GPR_U32(ctx, 31, 0x4B70C0u);
    ctx->pc = 0x4B70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B70B8u;
    // 0x4b70bc: 0x3c10ffff  lui         $s0, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4B70B8u, 0x4B70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B70C0u;
label_4b70c0:
    // 0x4b70c0: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b70c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b70c4: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b70c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b70c8: 0x2666011c  addiu       $a2, $s3, 0x11C
    ctx->pc = 0x4b70c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x4b70cc: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4b70ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b70d0: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4b70d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4b70d4: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x4b70d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b70d8: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4b70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b70dc: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4b70dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b70e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b70e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b70e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b70e8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b70e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b70ec: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4b70ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b70f0: 0xa4d20000  sh          $s2, 0x0($a2)
    ctx->pc = 0x4b70f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b70f4: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x4b70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b70f8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B70F8u;
    SET_GPR_U32(ctx, 31, 0x4B7100u);
    ctx->pc = 0x4B70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B70F8u;
    // 0x4b70fc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B70F8u, 0x4B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7100u;
label_4b7100:
    // 0x4b7100: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b7100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b7104: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b7104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7108: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x4b7108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4b710c: 0x2341024  and         $v0, $s1, $s4
    ctx->pc = 0x4b710cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x4b7110: 0xa6710028  sh          $s1, 0x28($s3)
    ctx->pc = 0x4b7110u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 17));
    // 0x4b7114: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b7114u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b7118: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x4b7118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4b711c: 0xa6620026  sh          $v0, 0x26($s3)
    ctx->pc = 0x4b711cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7120: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4b7120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b7124: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4b7124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b7128: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b7128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b712c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4b712cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4b7130: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4b7130u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b7134: 0xa38824  and         $s1, $a1, $v1
    ctx->pc = 0x4b7134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b7138: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x4b7138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b713c: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x4b713cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4b7140: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b7140u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b7144: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7148: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x4b7148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4b714c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b7150: 0x3648ffff  ori         $t0, $s2, 0xFFFF
    ctx->pc = 0x4b7150u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b7154: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b7154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b7158: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x4b7158u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b715c: 0x32238000  andi        $v1, $s1, 0x8000
    ctx->pc = 0x4b715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x4b7160: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x4b7160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4b7164: 0x3300a  movz        $a2, $zero, $v1
    ctx->pc = 0x4b7164u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x4b7168: 0xa6d10000  sh          $s1, 0x0($s6)
    ctx->pc = 0x4b7168u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x4b716c: 0x2261026  xor         $v0, $s1, $a2
    ctx->pc = 0x4b716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 6));
    // 0x4b7170: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4b7170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b7174: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b7174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b7178: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b7178u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b717c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b717cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7180: 0xd03824  and         $a3, $a2, $s0
    ctx->pc = 0x4b7180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4b7184: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7188: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b7188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b718c: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x4b718cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b7190: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x4b7190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4b7194: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x4b7194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4b7198: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4b7198u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b719c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4b719cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b71a0: 0x658824  and         $s1, $v1, $a1
    ctx->pc = 0x4b71a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b71a4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x4b71a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4b71a8: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x4b71a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x4b71ac: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x4b71acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x4b71b0: 0x2461826  xor         $v1, $s2, $a2
    ctx->pc = 0x4b71b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 6));
    // 0x4b71b4: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4b71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b71b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b71bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b71bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b71c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4b71c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b71c4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b71c8: 0x1039024  and         $s2, $t0, $v1
    ctx->pc = 0x4b71c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b71cc: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4b71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b71d0: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4b71d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b71d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b71d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b71d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b71dc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b71dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b71e0: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4b71e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b71e4: 0xa6f20000  sh          $s2, 0x0($s7)
    ctx->pc = 0x4b71e4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b71e8: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b71e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b71ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4b71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b71f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4b71f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b71f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4b71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b71f8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b71f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b71fc: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x4b71fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b7200: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7204: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4b7204u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b7208: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4b7208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b720c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b720cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7210: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4b7210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b7214: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b7218: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b721c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4b721cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7220: 0xa4920000  sh          $s2, 0x0($a0)
    ctx->pc = 0x4b7220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b7224: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4b7224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b7228: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x4b7228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b722c: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4b722cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b7230: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7230u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b7238: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b7238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b723c: 0x829024  and         $s2, $a0, $v0
    ctx->pc = 0x4b723cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b7240: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x4b7240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4b7244: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B7244u;
    SET_GPR_U32(ctx, 31, 0x4B724Cu);
    ctx->pc = 0x4B7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7244u;
    // 0x4b7248: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B7244u, 0x4B724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B724Cu;
label_4b724c:
    // 0x4b724c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b724cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7250: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x4b7250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x4b7254: 0xa671002c  sh          $s1, 0x2C($s3)
    ctx->pc = 0x4b7254u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 17));
    // 0x4b7258: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x4b7258u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4b725c: 0xa670002a  sh          $s0, 0x2A($s3)
    ctx->pc = 0x4b725cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 16));
    // 0x4b7260: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4b7260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b7264: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b7264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b7268: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4b7268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b726c: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B726Cu;
    {
        const bool branch_taken_0x4b726c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B726Cu;
        // 0x4b7270: 0xa7c20000  sh          $v0, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b726c) {
            ctx->pc = 0x4B728Cu;
            goto label_4b728c;
        }
    }
    ctx->pc = 0x4B7274u;
    // 0x4b7274: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7278: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B7278u;
    SET_GPR_U32(ctx, 31, 0x4B7280u);
    ctx->pc = 0x4B727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7278u;
    // 0x4b727c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B7278u, 0x4B7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7280u;
label_4b7280:
    // 0x4b7280: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b7280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b7284: 0x1450001c  bne         $v0, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B7284u;
    {
        const bool branch_taken_0x4b7284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7284u;
        // 0x4b7288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7284) {
            ctx->pc = 0x4B72F8u;
            goto label_4b72f8;
        }
    }
    ctx->pc = 0x4B728Cu;
label_4b728c:
    // 0x4b728c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b7290: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b7290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4b7294: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b7294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b7298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b729c: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4b729cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4b72a0: 0xa440232c  sh          $zero, 0x232C($v0)
    ctx->pc = 0x4b72a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4b72a4: 0x966301be  lhu         $v1, 0x1BE($s3)
    ctx->pc = 0x4b72a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4b72a8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B72A8u;
    SET_GPR_U32(ctx, 31, 0x4B72B0u);
    ctx->pc = 0x4B72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B72A8u;
    // 0x4b72ac: 0xa443232e  sh          $v1, 0x232E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B72A8u, 0x4B72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B72B0u;
label_4b72b0:
    // 0x4b72b0: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B72B0u;
    SET_GPR_U32(ctx, 31, 0x4B72B8u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B72B0u, 0x4B72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B72B8u;
label_4b72b8:
    // 0x4b72b8: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B72B8u;
    SET_GPR_U32(ctx, 31, 0x4B72C0u);
    ctx->pc = 0x4B72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B72B8u;
    // 0x4b72bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B72B8u, 0x4B72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B72C0u;
label_4b72c0:
    // 0x4b72c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b72c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b72c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b72c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b72c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b72c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b72cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b72ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b72d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b72d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b72d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b72d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b72d8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b72d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b72dc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b72dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b72e0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b72e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b72e4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b72e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b72e8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b72e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b72ec: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B72ECu;
    ctx->pc = 0x4B72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B72ECu;
    // 0x4b72f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B72F4u;
    // 0x4b72f4: 0x0  nop
    ctx->pc = 0x4b72f4u;
    // NOP
label_4b72f8:
    // 0x4b72f8: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B72F8u;
    SET_GPR_U32(ctx, 31, 0x4B7300u);
    ctx->pc = 0x4B72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B72F8u;
    // 0x4b72fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B72F8u, 0x4B7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7300u;
label_4b7300:
    // 0x4b7300: 0x54500013  bnel        $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B7300u;
    {
        const bool branch_taken_0x4b7300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b7300) {
            ctx->pc = 0x4B7304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7300u;
            // 0x4b7304: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7350u;
            goto label_4b7350;
        }
    }
    ctx->pc = 0x4B7308u;
    // 0x4b7308: 0x966301be  lhu         $v1, 0x1BE($s3)
    ctx->pc = 0x4b7308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4b730c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b7310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7314: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4B7314u;
    SET_GPR_U32(ctx, 31, 0x4B731Cu);
    ctx->pc = 0x4B7318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7314u;
    // 0x4b7318: 0xa443f9ae  sh          $v1, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4B7314u, 0x4B731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B731Cu;
label_4b731c:
    // 0x4b731c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b731cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b7320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7324: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b7324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b7328: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b7328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b732c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b732cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b7330: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b7330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b7334: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b7334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b7338: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b7338u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b733c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b733cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b7340: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b7340u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b7344: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b7344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b7348: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B7348u;
    ctx->pc = 0x4B734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7348u;
    // 0x4b734c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B7350u;
label_4b7350:
    // 0x4b7350: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b7350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b7354: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b7354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7358: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b7358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b735c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b735cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b7360: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b7360u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b7364: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b7364u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b7368: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b7368u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b736c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b736cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b7370: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b7370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b7374: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7374u;
        // 0x4b7378: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B737Cu;
    // 0x4b737c: 0x0  nop
    ctx->pc = 0x4b737cu;
    // NOP
    ctx->pc = 0x4b7380u;
}
