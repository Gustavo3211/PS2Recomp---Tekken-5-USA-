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

// Function: sub_00507D48
// Address: 0x507d48 - 0x508148
void sub_00507D48_0x507d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507D48_0x507d48");
#endif

    switch (ctx->pc) {
        case 0x507dacu: goto label_507dac;
        case 0x507e60u: goto label_507e60;
        case 0x507e70u: goto label_507e70;
        case 0x507e80u: goto label_507e80;
        case 0x507ed0u: goto label_507ed0;
        case 0x508024u: goto label_508024;
        case 0x508084u: goto label_508084;
        default: break;
    }

    ctx->pc = 0x507d48u;

    // 0x507d48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x507d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x507d4c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x507d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x507d50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x507d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x507d54: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x507d54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x507d58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x507d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x507d5c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x507d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x507d60: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x507d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x507d64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x507d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507d68: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x507d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x507d6c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x507d6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507d70: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x507d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x507d74: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x507d74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507d78: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x507d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x507d7c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x507d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x507d80: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x507d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x507d84: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x507d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x507d88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x507d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x507d8c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x507d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x507d90: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x507d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x507d94: 0x8fd30000  lw          $s3, 0x0($fp)
    ctx->pc = 0x507d94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x507d98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x507d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x507d9c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x507d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x507da0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x507da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x507da4: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x507DA4u;
    SET_GPR_U32(ctx, 31, 0x507DACu);
    ctx->pc = 0x507DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507DA4u;
    // 0x507da8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x507DA4u, 0x507DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507DACu;
label_507dac:
    // 0x507dac: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x507dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507db0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x507db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x507db4: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x507db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x507db8: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x507db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x507dbc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x507dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x507dc0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x507dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507dc4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x507dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x507dc8: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x507dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507dcc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x507dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x507dd0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x507dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x507dd4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x507dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x507dd8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x507dd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x507ddc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x507ddcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x507de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x507de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507de4: 0x844a0010  lh          $t2, 0x10($v0)
    ctx->pc = 0x507de4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x507de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x507de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507dec: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x507decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507df0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x507df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507df4: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x507df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x507df8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x507df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x507dfc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x507dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x507e00: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x507e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x507e04: 0x86630004  lh          $v1, 0x4($s3)
    ctx->pc = 0x507e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x507e08: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x507e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x507e0c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x507e0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x507e10: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x507e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x507e14: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x507e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x507e18: 0x84470014  lh          $a3, 0x14($v0)
    ctx->pc = 0x507e18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x507e1c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x507e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507e20: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x507e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x507e24: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x507e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x507e28: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x507e28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x507e2c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x507e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x507e30: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x507e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x507e34: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x507e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x507e38: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x507e38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x507e3c: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x507e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x507e40: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x507e40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x507e44: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x507e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x507e48: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x507e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x507e4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x507e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x507e50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x507e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x507e54: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x507e54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x507e58: 0xc14123e  jal         func_5048F8
    ctx->pc = 0x507E58u;
    SET_GPR_U32(ctx, 31, 0x507E60u);
    ctx->pc = 0x507E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507E58u;
    // 0x507e5c: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5048F8u, 0x507E58u, 0x507E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507E60u;
label_507e60:
    // 0x507e60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x507e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507e64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x507e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507e68: 0xc1413a2  jal         func_504E88
    ctx->pc = 0x507E68u;
    SET_GPR_U32(ctx, 31, 0x507E70u);
    ctx->pc = 0x507E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507E68u;
    // 0x507e6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504E88u, 0x507E68u, 0x507E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507E70u;
label_507e70:
    // 0x507e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x507e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507e74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x507e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507e78: 0xc1413da  jal         func_504F68
    ctx->pc = 0x507E78u;
    SET_GPR_U32(ctx, 31, 0x507E80u);
    ctx->pc = 0x507E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507E78u;
    // 0x507e7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504F68u, 0x507E78u, 0x507E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507E80u;
label_507e80:
    // 0x507e80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x507e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x507e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x507e88: 0x1682009a  bne         $s4, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x507E88u;
    {
        const bool branch_taken_0x507e88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x507E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507E88u;
        // 0x507e8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507e88) {
            ctx->pc = 0x5080F4u;
            goto label_5080f4;
        }
    }
    ctx->pc = 0x507E90u;
    // 0x507e90: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x507e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x507e94: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x507e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x507e98: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x507e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x507e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x507e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507ea0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507ea4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x507ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507ea8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x507ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x507eac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507eb0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x507eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x507eb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507eb8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x507eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x507ebc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x507ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x507ec0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x507ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x507ec4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507ec8: 0xc141452  jal         func_505148
    ctx->pc = 0x507EC8u;
    SET_GPR_U32(ctx, 31, 0x507ED0u);
    ctx->pc = 0x507ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507EC8u;
    // 0x507ecc: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505148u, 0x507EC8u, 0x507ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507ED0u;
label_507ed0:
    // 0x507ed0: 0x87a4000c  lh          $a0, 0xC($sp)
    ctx->pc = 0x507ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x507ed4: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x507ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x507ed8: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x507ED8u;
    {
        const bool branch_taken_0x507ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x507EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507ED8u;
        // 0x507edc: 0x97a5000c  lhu         $a1, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507ed8) {
            ctx->pc = 0x5080F0u;
            goto label_5080f0;
        }
    }
    ctx->pc = 0x507EE0u;
    // 0x507ee0: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x507ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x507ee4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x507ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x507ee8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x507ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x507eec: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x507eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x507ef0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x507ef0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x507ef4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x507ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x507ef8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x507EF8u;
    {
        const bool branch_taken_0x507ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x507EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507EF8u;
        // 0x507efc: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507ef8) {
            ctx->pc = 0x507F2Cu;
            goto label_507f2c;
        }
    }
    ctx->pc = 0x507F00u;
    // 0x507f00: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x507f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x507f04: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x507f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x507f08: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x507f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x507f0c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x507f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x507f10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507f14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x507f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x507f18: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x507f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x507f1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507f20: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x507f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x507f24: 0x97a5000c  lhu         $a1, 0xC($sp)
    ctx->pc = 0x507f24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x507f28: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x507f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_507f2c:
    // 0x507f2c: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x507f2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507f30: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x507f30u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x507f34: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x507f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x507f38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x507f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507f3c: 0xf11025  or          $v0, $a3, $s1
    ctx->pc = 0x507f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x507f40: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x507f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507f44: 0x24a50176  addiu       $a1, $a1, 0x176
    ctx->pc = 0x507f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 374));
    // 0x507f48: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x507f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x507f4c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x507f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x507f50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x507f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x507f54: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x507f54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x507f58: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x507f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x507f5c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x507f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x507f60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x507f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x507f64: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x507f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x507f68: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x507f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x507f6c: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x507f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x507f70: 0x30c47fff  andi        $a0, $a2, 0x7FFF
    ctx->pc = 0x507f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x507f74: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x507f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507f78: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x507f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x507f7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x507f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x507f80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x507f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x507f84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x507f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x507f88: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x507f88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x507f8c: 0x4600058  bltz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x507F8Cu;
    {
        const bool branch_taken_0x507f8c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x507F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507F8Cu;
        // 0x507f90: 0x24e20256  addiu       $v0, $a3, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507f8c) {
            ctx->pc = 0x5080F0u;
            goto label_5080f0;
        }
    }
    ctx->pc = 0x507F94u;
    // 0x507f94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x507f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x507f98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x507f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x507f9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x507f9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x507fa0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x507fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x507fa4: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x507FA4u;
    {
        const bool branch_taken_0x507fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x507FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507FA4u;
        // 0x507fa8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507fa4) {
            ctx->pc = 0x5080F4u;
            goto label_5080f4;
        }
    }
    ctx->pc = 0x507FACu;
    // 0x507fac: 0x87a40004  lh          $a0, 0x4($sp)
    ctx->pc = 0x507facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507fb0: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x507fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x507fb4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x507fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507fb8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x507fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x507fbc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x507fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x507fc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507fc8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x507fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x507fcc: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x507fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507fd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x507fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x507fd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x507fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x507fd8: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x507fd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x507fdc: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x507FDCu;
    {
        const bool branch_taken_0x507fdc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x507FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507FDCu;
        // 0x507fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507fdc) {
            ctx->pc = 0x5080F0u;
            goto label_5080f0;
        }
    }
    ctx->pc = 0x507FE4u;
    // 0x507fe4: 0x304201f0  andi        $v0, $v0, 0x1F0
    ctx->pc = 0x507fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)496);
    // 0x507fe8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x507fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x507fec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x507fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x507ff0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x507ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x507ff4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x507ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x507ff8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x507FF8u;
    {
        const bool branch_taken_0x507ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x507FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507FF8u;
        // 0x507ffc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507ff8) {
            ctx->pc = 0x5080F4u;
            goto label_5080f4;
        }
    }
    ctx->pc = 0x508000u;
    // 0x508000: 0x3c150090  lui         $s5, 0x90
    ctx->pc = 0x508000u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)144 << 16));
    // 0x508004: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x508004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x508008: 0x26a2f080  addiu       $v0, $s5, -0xF80
    ctx->pc = 0x508008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963328));
    // 0x50800c: 0x8c500054  lw          $s0, 0x54($v0)
    ctx->pc = 0x50800cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x508010: 0x24520050  addiu       $s2, $v0, 0x50
    ctx->pc = 0x508010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x508014: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x508014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x508018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x508018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50801c: 0xc14481c  jal         func_512070
    ctx->pc = 0x50801Cu;
    SET_GPR_U32(ctx, 31, 0x508024u);
    ctx->pc = 0x508020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50801Cu;
    // 0x508020: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50801Cu, 0x508024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508024u;
label_508024:
    // 0x508024: 0x14540033  bne         $v0, $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x508024u;
    {
        const bool branch_taken_0x508024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x508028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508024u;
        // 0x508028: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508024) {
            ctx->pc = 0x5080F4u;
            goto label_5080f4;
        }
    }
    ctx->pc = 0x50802Cu;
    // 0x50802c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x50802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x508030: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x508030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x508034: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x508034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508038: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x508038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50803c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x50803cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508040: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x508040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x508044: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x508044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x508048: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x508048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x50804c: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x50804cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x508050: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x508050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x508054: 0x97a3000c  lhu         $v1, 0xC($sp)
    ctx->pc = 0x508054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x508058: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x508058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x50805c: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x50805cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x508060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x508060u;
    {
        const bool branch_taken_0x508060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x508064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508060u;
        // 0x508064: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508060) {
            ctx->pc = 0x508078u;
            goto label_508078;
        }
    }
    ctx->pc = 0x508068u;
    // 0x508068: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x508068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50806c: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x50806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x508070: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x508070u;
    {
        const bool branch_taken_0x508070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508070u;
        // 0x508074: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x508070) {
            ctx->pc = 0x5080D4u;
            goto label_5080d4;
        }
    }
    ctx->pc = 0x508078u;
label_508078:
    // 0x508078: 0x87a50008  lh          $a1, 0x8($sp)
    ctx->pc = 0x508078u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50807c: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50807Cu;
    SET_GPR_U32(ctx, 31, 0x508084u);
    ctx->pc = 0x508080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50807Cu;
    // 0x508080: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50807Cu, 0x508084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508084u;
label_508084:
    // 0x508084: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x508084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508088: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50808c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50808cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508090: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508094: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x508094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x508098: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50809c: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x50809cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5080a0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x5080a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x5080a4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5080a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5080a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5080a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5080ac: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x5080acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x5080b0: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x5080b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5080b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5080B4u;
    {
        const bool branch_taken_0x5080b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5080B4u;
        // 0x5080b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5080b4) {
            ctx->pc = 0x5080C8u;
            goto label_5080c8;
        }
    }
    ctx->pc = 0x5080BCu;
    // 0x5080bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5080bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5080c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5080C0u;
    {
        const bool branch_taken_0x5080c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5080C0u;
        // 0x5080c4: 0x511025  or          $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5080c0) {
            ctx->pc = 0x5080D4u;
            goto label_5080d4;
        }
    }
    ctx->pc = 0x5080C8u;
label_5080c8:
    // 0x5080c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5080c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x5080cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5080ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5080d0: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x5080d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
label_5080d4:
    // 0x5080d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5080d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5080d8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x5080d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x5080dc: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x5080dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5080e0: 0x26a3f080  addiu       $v1, $s5, -0xF80
    ctx->pc = 0x5080e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963328));
    // 0x5080e4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x5080e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x5080e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x5080e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x5080ec: 0xac700054  sw          $s0, 0x54($v1)
    ctx->pc = 0x5080ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 16));
label_5080f0:
    // 0x5080f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x5080f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_5080f4:
    // 0x5080f4: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x5080f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x5080f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x5080f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5080fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x5080fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508100: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x508100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x508104: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x508104u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x508108: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x508108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50810c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x50810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x508110: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x508110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x508114: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x508114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x508118: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x508118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50811c: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x50811cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x508120: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x508120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x508124: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x508124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x508128: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x508128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50812c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x50812cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x508130: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x508130u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x508134: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x508134u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x508138: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x508138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x50813c: 0x3e00008  jr          $ra
    ctx->pc = 0x50813Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50813Cu;
        // 0x508140: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50813Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508144u;
    // 0x508144: 0x0  nop
    ctx->pc = 0x508144u;
    // NOP
    ctx->pc = 0x508148u;
}
