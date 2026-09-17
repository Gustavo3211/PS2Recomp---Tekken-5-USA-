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

// Function: sub_004B5CF0
// Address: 0x4b5cf0 - 0x4b60e0
void sub_004B5CF0_0x4b5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5CF0_0x4b5cf0");
#endif

    switch (ctx->pc) {
        case 0x4b5d8cu: goto label_4b5d8c;
        case 0x4b5db4u: goto label_4b5db4;
        case 0x4b5dd0u: goto label_4b5dd0;
        case 0x4b5df8u: goto label_4b5df8;
        case 0x4b5e00u: goto label_4b5e00;
        case 0x4b5e08u: goto label_4b5e08;
        case 0x4b5e38u: goto label_4b5e38;
        case 0x4b5e48u: goto label_4b5e48;
        case 0x4b5e5cu: goto label_4b5e5c;
        case 0x4b5ef0u: goto label_4b5ef0;
        case 0x4b5f74u: goto label_4b5f74;
        case 0x4b5f90u: goto label_4b5f90;
        case 0x4b5fb8u: goto label_4b5fb8;
        case 0x4b5fc0u: goto label_4b5fc0;
        case 0x4b5fe8u: goto label_4b5fe8;
        case 0x4b5ff8u: goto label_4b5ff8;
        case 0x4b600cu: goto label_4b600c;
        case 0x4b6014u: goto label_4b6014;
        case 0x4b601cu: goto label_4b601c;
        case 0x4b6024u: goto label_4b6024;
        default: break;
    }

    ctx->pc = 0x4b5cf0u;

    // 0x4b5cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b5cf4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b5cfc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b5cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b5d00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b5d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b5d04: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b5d04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b5d08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b5d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b5d0c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b5d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b5d10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b5d14: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4b5d14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5d18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b5d1c: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4b5d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4b5d20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b5d24: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4b5d24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4b5d28: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b5d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b5d2c: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4b5d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4b5d30: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b5d34: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4b5d34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5d38: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4b5d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4b5d3c: 0x26310d40  addiu       $s1, $s1, 0xD40
    ctx->pc = 0x4b5d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3392));
    // 0x4b5d40: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b5d44: 0x26520d44  addiu       $s2, $s2, 0xD44
    ctx->pc = 0x4b5d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3396));
    // 0x4b5d48: 0x34a50064  ori         $a1, $a1, 0x64
    ctx->pc = 0x4b5d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)100);
    // 0x4b5d4c: 0x26b50d3c  addiu       $s5, $s5, 0xD3C
    ctx->pc = 0x4b5d4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3388));
    // 0x4b5d50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b5d54: 0x26100d30  addiu       $s0, $s0, 0xD30
    ctx->pc = 0x4b5d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b5d58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D44u));
    // 0x4b5d5c: 0x26d6d680  addiu       $s6, $s6, -0x2980
    ctx->pc = 0x4b5d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4b5d60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5d64: 0x26de24a0  addiu       $fp, $s6, 0x24A0
    ctx->pc = 0x4b5d64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 9376));
    // 0x4b5d68: 0x30460064  andi        $a2, $v0, 0x64
    ctx->pc = 0x4b5d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)100);
    // 0x4b5d6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b5d70: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4b5d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4b5d74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b5d78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4b5d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4b5d7c: 0x26940d34  addiu       $s4, $s4, 0xD34
    ctx->pc = 0x4b5d7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3380));
    // 0x4b5d80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b5d84: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B5D84u;
    SET_GPR_U32(ctx, 31, 0x4B5D8Cu);
    ctx->pc = 0x4B5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5D84u;
    // 0x4b5d88: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B5D84u, 0x4B5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5D8Cu;
label_4b5d8c:
    // 0x4b5d8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5d90: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b5d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b5d94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5d98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5d9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b5da0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b5da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5da4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4b5da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5da8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x4b5da8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5dac: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B5DACu;
    SET_GPR_U32(ctx, 31, 0x4B5DB4u);
    ctx->pc = 0x4B5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5DACu;
    // 0x4b5db0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B5DACu, 0x4B5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5DB4u;
label_4b5db4:
    // 0x4b5db4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4b5db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5db8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b5dbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b5dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5dc0: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b5dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5dc4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4b5dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b5dc8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5DC8u;
    SET_GPR_U32(ctx, 31, 0x4B5DD0u);
    ctx->pc = 0x4B5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5DC8u;
    // 0x4b5dcc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5DC8u, 0x4B5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5DD0u;
label_4b5dd0:
    // 0x4b5dd0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4b5dd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5dd4: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4b5dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b5dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5ddc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5de0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4b5de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b5de4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b5de8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b5dec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4b5decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4b5df0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5DF0u;
    SET_GPR_U32(ctx, 31, 0x4B5DF8u);
    ctx->pc = 0x4B5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5DF0u;
    // 0x4b5df4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5DF0u, 0x4B5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5DF8u;
label_4b5df8:
    // 0x4b5df8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5DF8u;
    SET_GPR_U32(ctx, 31, 0x4B5E00u);
    ctx->pc = 0x4B5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5DF8u;
    // 0x4b5dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5DF8u, 0x4B5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5E00u;
label_4b5e00:
    // 0x4b5e00: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B5E00u;
    SET_GPR_U32(ctx, 31, 0x4B5E08u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B5E00u, 0x4B5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5E08u;
label_4b5e08:
    // 0x4b5e08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5e0c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b5e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b5e10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5e14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5e18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b5e1c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b5e20: 0x2463fb22  addiu       $v1, $v1, -0x4DE
    ctx->pc = 0x4b5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966050));
    // 0x4b5e24: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b5e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5e28: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b5e28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FB22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB22u, _value); } while (0);
    // 0x4b5e2c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4b5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5e30: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B5E30u;
    SET_GPR_U32(ctx, 31, 0x4B5E38u);
    ctx->pc = 0x4B5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5E30u;
    // 0x4b5e34: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B5E30u, 0x4B5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5E38u;
label_4b5e38:
    // 0x4b5e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b5e40: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5E40u;
    SET_GPR_U32(ctx, 31, 0x4B5E48u);
    ctx->pc = 0x4B5E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5E40u;
    // 0x4b5e44: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5E40u, 0x4B5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5E48u;
label_4b5e48:
    // 0x4b5e48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e4c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b5e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5e50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b5e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5e54: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B5E54u;
    SET_GPR_U32(ctx, 31, 0x4B5E5Cu);
    ctx->pc = 0x4B5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5E54u;
    // 0x4b5e58: 0x8e870000  lw          $a3, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B5E54u, 0x4B5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5E5Cu;
label_4b5e5c:
    // 0x4b5e5c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4b5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5e60: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x4b5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x4b5e64: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b5e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5e68: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b5e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b5e6c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b5e70: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4b5e70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5e74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5e78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4b5e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5e7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5e80: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4b5e80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5e84: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b5e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b5e88: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4b5e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5e8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b5e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b5e90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b5e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b5e94: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b5e94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b5e98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b5e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b5e9c: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4b5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4b5ea0: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x4b5ea0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b5ea4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b5ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b5ea8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5ea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5eac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b5eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b5eb0: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x4b5eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x4b5eb4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b5eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b5eb8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b5ebc: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4b5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4b5ec0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b5ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5ec4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b5ec8: 0xa6c42334  sh          $a0, 0x2334($s6)
    ctx->pc = 0x4b5ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9012), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b5ecc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5eccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5ed0: 0xa6c32336  sh          $v1, 0x2336($s6)
    ctx->pc = 0x4b5ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b5ed4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b5ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b5ed8: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4b5ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4b5edc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4b5edcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4b5ee0: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4b5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4b5ee4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b5ee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5ee8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B5EE8u;
    SET_GPR_U32(ctx, 31, 0x4B5EF0u);
    ctx->pc = 0x4B5EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5EE8u;
    // 0x4b5eec: 0xa6c22338  sh          $v0, 0x2338($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B5EE8u, 0x4B5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5EF0u;
label_4b5ef0:
    // 0x4b5ef0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5ef4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b5ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b5ef8: 0x87c70000  lh          $a3, 0x0($fp)
    ctx->pc = 0x4b5ef8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b5efc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5f00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b5f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5f04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5f08: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4b5f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4b5f0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b5f10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5f14: 0xd33024  and         $a2, $a2, $s3
    ctx->pc = 0x4b5f14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 19));
    // 0x4b5f18: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b5f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5f1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4b5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5f20: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x4b5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x4b5f24: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x4b5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x4b5f28: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b5f2c: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x4b5f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x4b5f30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5f34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b5f38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5f3c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b5f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5f40: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x4b5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x4b5f44: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b5f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b5f48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5f4c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4b5f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5f50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b5f54: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4b5f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4b5f58: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4b5f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4b5f5c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4b5f60: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4b5f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4b5f64: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4b5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4b5f68: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4b5f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5f6c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B5F6Cu;
    SET_GPR_U32(ctx, 31, 0x4B5F74u);
    ctx->pc = 0x4B5F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F6Cu;
    // 0x4b5f70: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B5F6Cu, 0x4B5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F74u;
label_4b5f74:
    // 0x4b5f74: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4b5f74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5f78: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b5f7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b5f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f80: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b5f80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5f84: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4b5f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b5f88: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5F88u;
    SET_GPR_U32(ctx, 31, 0x4B5F90u);
    ctx->pc = 0x4B5F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5F88u;
    // 0x4b5f8c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5F88u, 0x4B5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5F90u;
label_4b5f90:
    // 0x4b5f90: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4b5f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5f94: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4b5f94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b5f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b5f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5f9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5fa0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4b5fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b5fa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b5fa8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b5fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b5fac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4b5facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4b5fb0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5FB0u;
    SET_GPR_U32(ctx, 31, 0x4B5FB8u);
    ctx->pc = 0x4B5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5FB0u;
    // 0x4b5fb4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5FB0u, 0x4B5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5FB8u;
label_4b5fb8:
    // 0x4b5fb8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5FB8u;
    SET_GPR_U32(ctx, 31, 0x4B5FC0u);
    ctx->pc = 0x4B5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5FB8u;
    // 0x4b5fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5FB8u, 0x4B5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5FC0u;
label_4b5fc0:
    // 0x4b5fc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b5fc4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4b5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4b5fc8: 0x2484fb22  addiu       $a0, $a0, -0x4DE
    ctx->pc = 0x4b5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966050));
    // 0x4b5fcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5fd0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b5fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72FB22u));
    // 0x4b5fd4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b5fd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5fdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b5fe0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B5FE0u;
    SET_GPR_U32(ctx, 31, 0x4B5FE8u);
    ctx->pc = 0x4B5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5FE0u;
    // 0x4b5fe4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B5FE0u, 0x4B5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5FE8u;
label_4b5fe8:
    // 0x4b5fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5fec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b5ff0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B5FF0u;
    SET_GPR_U32(ctx, 31, 0x4B5FF8u);
    ctx->pc = 0x4B5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5FF0u;
    // 0x4b5ff4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B5FF0u, 0x4B5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5FF8u;
label_4b5ff8:
    // 0x4b5ff8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5ffc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b5ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b6000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6004: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B6004u;
    SET_GPR_U32(ctx, 31, 0x4B600Cu);
    ctx->pc = 0x4B6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6004u;
    // 0x4b6008: 0x8e870000  lw          $a3, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B6004u, 0x4B600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B600Cu;
label_4b600c:
    // 0x4b600c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B600Cu;
    SET_GPR_U32(ctx, 31, 0x4B6014u);
    ctx->pc = 0x4B6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B600Cu;
    // 0x4b6010: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B600Cu, 0x4B6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6014u;
label_4b6014:
    // 0x4b6014: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B6014u;
    SET_GPR_U32(ctx, 31, 0x4B601Cu);
    ctx->pc = 0x4B6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6014u;
    // 0x4b6018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B6014u, 0x4B601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B601Cu;
label_4b601c:
    // 0x4b601c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B601Cu;
    SET_GPR_U32(ctx, 31, 0x4B6024u);
    ctx->pc = 0x4B6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B601Cu;
    // 0x4b6020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B601Cu, 0x4B6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6024u;
label_4b6024:
    // 0x4b6024: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b6024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6028: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4b6028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b602c: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x4b602cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4b6030: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4b6030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b6034: 0x246a00ff  addiu       $t2, $v1, 0xFF
    ctx->pc = 0x4b6034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x4b6038: 0x28680000  slti        $t0, $v1, 0x0
    ctx->pc = 0x4b6038u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4b603c: 0x24a900ff  addiu       $t1, $a1, 0xFF
    ctx->pc = 0x4b603cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x4b6040: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x4b6040u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4b6044: 0x24c700ff  addiu       $a3, $a2, 0xFF
    ctx->pc = 0x4b6044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 255));
    // 0x4b6048: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x4b6048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4b604c: 0x124280b  movn        $a1, $t1, $a0
    ctx->pc = 0x4b604cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    // 0x4b6050: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x4b6050u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x4b6054: 0x148180b  movn        $v1, $t2, $t0
    ctx->pc = 0x4b6054u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x4b6058: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4b6058u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4b605c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x4b605cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x4b6060: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x4b6060u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x4b6064: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b6064u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b6068: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b6068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b606c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b606cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6070: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b6070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b6074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6078: 0x8ee20124  lw          $v0, 0x124($s7)
    ctx->pc = 0x4b6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 292)));
    // 0x4b607c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b607cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b6080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b6080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b6084: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b6084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b6088: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b6088u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b608c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b608cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b6090: 0x8ee20128  lw          $v0, 0x128($s7)
    ctx->pc = 0x4b6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 296)));
    // 0x4b6094: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b6094u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b6098: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b6098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b609c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b609cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b60a0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b60a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b60a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b60a8: 0x8ee2012c  lw          $v0, 0x12C($s7)
    ctx->pc = 0x4b60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
    // 0x4b60ac: 0xaec32340  sw          $v1, 0x2340($s6)
    ctx->pc = 0x4b60acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9024), GPR_U32(ctx, 3));
    // 0x4b60b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b60b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b60b4: 0xaec52344  sw          $a1, 0x2344($s6)
    ctx->pc = 0x4b60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9028), GPR_U32(ctx, 5));
    // 0x4b60b8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b60bc: 0xaec62348  sw          $a2, 0x2348($s6)
    ctx->pc = 0x4b60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 9032), GPR_U32(ctx, 6));
    // 0x4b60c0: 0xa6cb232c  sh          $t3, 0x232C($s6)
    ctx->pc = 0x4b60c0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9004), (uint16_t)GPR_U32(ctx, 11));
    // 0x4b60c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b60c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b60c8: 0x96e201b6  lhu         $v0, 0x1B6($s7)
    ctx->pc = 0x4b60c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 438)));
    // 0x4b60cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b60ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b60d0: 0xa6c22332  sh          $v0, 0x2332($s6)
    ctx->pc = 0x4b60d0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b60d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b60d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b60d8: 0x813d71c  j           func_4F5C70
    ctx->pc = 0x4B60D8u;
    ctx->pc = 0x4B60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B60D8u;
    // 0x4b60dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5C70u, 0x4B60D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B60E0u;
}
