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

// Function: sub_004B7D80
// Address: 0x4b7d80 - 0x4b81b0
void sub_004B7D80_0x4b7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7D80_0x4b7d80");
#endif

    switch (ctx->pc) {
        case 0x4b7dc8u: goto label_4b7dc8;
        case 0x4b7dd0u: goto label_4b7dd0;
        case 0x4b7df8u: goto label_4b7df8;
        case 0x4b7e98u: goto label_4b7e98;
        case 0x4b7ea0u: goto label_4b7ea0;
        case 0x4b7ea8u: goto label_4b7ea8;
        case 0x4b7eb0u: goto label_4b7eb0;
        case 0x4b7fd4u: goto label_4b7fd4;
        case 0x4b8124u: goto label_4b8124;
        case 0x4b814cu: goto label_4b814c;
        default: break;
    }

    ctx->pc = 0x4b7d80u;

    // 0x4b7d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b7d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b7d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b7d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b7d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7d90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b7d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b7d94: 0x263001b4  addiu       $s0, $s1, 0x1B4
    ctx->pc = 0x4b7d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4b7d98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b7d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b7d9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b7da0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b7da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b7da4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b7da8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b7da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b7dac: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4b7dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4b7db0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b7db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b7db4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b7db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7db8: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B7DB8u;
    {
        const bool branch_taken_0x4b7db8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b7db8) {
            ctx->pc = 0x4B7DF0u;
            goto label_4b7df0;
        }
    }
    ctx->pc = 0x4B7DC0u;
    // 0x4b7dc0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B7DC0u;
    SET_GPR_U32(ctx, 31, 0x4B7DC8u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B7DC0u, 0x4B7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7DC8u;
label_4b7dc8:
    // 0x4b7dc8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B7DC8u;
    SET_GPR_U32(ctx, 31, 0x4B7DD0u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B7DC8u, 0x4B7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7DD0u;
label_4b7dd0:
    // 0x4b7dd0: 0x2403049d  addiu       $v1, $zero, 0x49D
    ctx->pc = 0x4b7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1181));
    // 0x4b7dd4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x4b7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x4b7dd8: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4b7dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b7ddc: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4b7ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b7de0: 0xa6240158  sh          $a0, 0x158($s1)
    ctx->pc = 0x4b7de0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b7de4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b7de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7de8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b7de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b7dec: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4b7decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b7df0:
    // 0x4b7df0: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4B7DF0u;
    SET_GPR_U32(ctx, 31, 0x4B7DF8u);
    ctx->pc = 0x4B7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7DF0u;
    // 0x4b7df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4B7DF0u, 0x4B7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7DF8u;
label_4b7df8:
    // 0x4b7df8: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x4B7DF8u;
    {
        const bool branch_taken_0x4b7df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7DF8u;
        // 0x4b7dfc: 0x3c14007f  lui         $s4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7df8) {
            ctx->pc = 0x4B8180u;
            goto label_4b8180;
        }
    }
    ctx->pc = 0x4B7E00u;
    // 0x4b7e00: 0x862201b6  lh          $v0, 0x1B6($s1)
    ctx->pc = 0x4b7e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4b7e04: 0x26900d6c  addiu       $s0, $s4, 0xD6C
    ctx->pc = 0x4b7e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3436));
    // 0x4b7e08: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4b7e08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7e0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7e10: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7e18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7e1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7e20: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b7e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7e24: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b7e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b7e28: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4B7E28u;
    {
        const bool branch_taken_0x4b7e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7E28u;
        // 0x4b7e2c: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7e28) {
            ctx->pc = 0x4B7EA8u;
            goto label_4b7ea8;
        }
    }
    ctx->pc = 0x4B7E30u;
    // 0x4b7e30: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4b7e30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4b7e34: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b7e34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b7e38: 0x254a0d74  addiu       $t2, $t2, 0xD74
    ctx->pc = 0x4b7e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3444));
    // 0x4b7e3c: 0x256b0d78  addiu       $t3, $t3, 0xD78
    ctx->pc = 0x4b7e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3448));
    // 0x4b7e40: 0x258c0d7c  addiu       $t4, $t4, 0xD7C
    ctx->pc = 0x4b7e40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3452));
    // 0x4b7e44: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4b7e44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b7e48: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7e4c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4b7e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0D78u));
    // 0x4b7e50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7e54: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4b7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D7Cu));
    // 0x4b7e58: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4b7e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x4b7e5c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x4b7e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x4b7e60: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b7e60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b7e64: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b7e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b7e68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7e6c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4b7e6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4b7e70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7e74: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4b7e74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4b7e78: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4b7e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7e7c: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4b7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4b7e80: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4b7e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7e84: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4b7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4b7e88: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4b7e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7e8c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4b7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4b7e90: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4B7E90u;
    SET_GPR_U32(ctx, 31, 0x4B7E98u);
    ctx->pc = 0x4B7E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7E90u;
    // 0x4b7e94: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4B7E90u, 0x4B7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7E98u;
label_4b7e98:
    // 0x4b7e98: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B7E98u;
    SET_GPR_U32(ctx, 31, 0x4B7EA0u);
    ctx->pc = 0x4B7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7E98u;
    // 0x4b7e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B7E98u, 0x4B7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7EA0u;
label_4b7ea0:
    // 0x4b7ea0: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B7EA0u;
    SET_GPR_U32(ctx, 31, 0x4B7EA8u);
    ctx->pc = 0x4B7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7EA0u;
    // 0x4b7ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B7EA0u, 0x4B7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7EA8u;
label_4b7ea8:
    // 0x4b7ea8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B7EA8u;
    SET_GPR_U32(ctx, 31, 0x4B7EB0u);
    ctx->pc = 0x4B7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7EA8u;
    // 0x4b7eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B7EA8u, 0x4B7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7EB0u;
label_4b7eb0:
    // 0x4b7eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7eb4: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4b7eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4b7eb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7ebc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7ec0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7ec4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7ec8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7ecc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b7eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7ed0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b7ed4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b7ed8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7edc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7ee0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7ee4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7ee8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b7ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7eec: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x4B7EECu;
    {
        const bool branch_taken_0x4b7eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7EECu;
        // 0x4b7ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7eec) {
            ctx->pc = 0x4B8150u;
            goto label_4b8150;
        }
    }
    ctx->pc = 0x4B7EF4u;
    // 0x4b7ef4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7ef8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7efc: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x4b7efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x4b7f00: 0x2632015e  addiu       $s2, $s1, 0x15E
    ctx->pc = 0x4b7f00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4b7f04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7f08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7f0c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4b7f0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7f10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b7f14: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x4b7f14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b7f18: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b7f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7f1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7f20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b7f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b7f24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b7f28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7f2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b7f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b7f30: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7f34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7f38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7f3c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b7f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7f40: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x4B7F40u;
    {
        const bool branch_taken_0x4b7f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F40u;
        // 0x4b7f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f40) {
            ctx->pc = 0x4B8150u;
            goto label_4b8150;
        }
    }
    ctx->pc = 0x4B7F48u;
    // 0x4b7f48: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4b7f48u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4b7f4c: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4b7f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4b7f50: 0x27c30d74  addiu       $v1, $fp, 0xD74
    ctx->pc = 0x4b7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3444));
    // 0x4b7f54: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4b7f54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4b7f58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4b7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D74u));
    // 0x4b7f5c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7f60: 0x26ea0d78  addiu       $t2, $s7, 0xD78
    ctx->pc = 0x4b7f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 3448));
    // 0x4b7f64: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b7f64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b7f68: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b7f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b7f6c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4b7f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D78u));
    // 0x4b7f70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b7f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b7f74: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4b7f74u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4b7f78: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4b7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x4b7f7c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b7f7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b7f80: 0x26c70d70  addiu       $a3, $s6, 0xD70
    ctx->pc = 0x4b7f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 3440));
    // 0x4b7f84: 0x25290d7c  addiu       $t1, $t1, 0xD7C
    ctx->pc = 0x4b7f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3452));
    // 0x4b7f88: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4b7f88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4b7f8c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7f90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D70u));
    // 0x4b7f94: 0x34840c00  ori         $a0, $a0, 0xC00
    ctx->pc = 0x4b7f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3072);
    // 0x4b7f98: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7f9c: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4b7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b7fa0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b7fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b7fa4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7fa8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4b7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4b7fac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b7facu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b7fb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b7fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b7fb4: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4b7fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4b7fb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b7fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7fbc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b7fc0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b7fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b7fc4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b7fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b7fc8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4b7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4b7fcc: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B7FCCu;
    SET_GPR_U32(ctx, 31, 0x4B7FD4u);
    ctx->pc = 0x4B7FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7FCCu;
    // 0x4b7fd0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B7FCCu, 0x4B7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7FD4u;
label_4b7fd4:
    // 0x4b7fd4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B7FD4u;
    {
        const bool branch_taken_0x4b7fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7FD4u;
        // 0x4b7fd8: 0x3c0c0073  lui         $t4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7fd4) {
            ctx->pc = 0x4B8058u;
            goto label_4b8058;
        }
    }
    ctx->pc = 0x4B7FDCu;
    // 0x4b7fdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7fe0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7fe4: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x4b7fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x4b7fe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7fec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b7fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b7ff0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b7ff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b7ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b7ff8: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4b7ff8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b7ffc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b7ffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8000: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b8000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b8004: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b8004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b8008: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8008u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b800c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8010: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8014: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b8014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b8018: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b8018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b801c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B801Cu;
    {
        const bool branch_taken_0x4b801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B801Cu;
        // 0x4b8020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b801c) {
            ctx->pc = 0x4B8058u;
            goto label_4b8058;
        }
    }
    ctx->pc = 0x4B8024u;
    // 0x4b8024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b8024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b802c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b802cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8030: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b8030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8034: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b8034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8038: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b8038u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b803c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b803cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b8040: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b8040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b8044: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b8044u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b8048: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b8048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b804c: 0x812df5a  j           func_4B7D68
    ctx->pc = 0x4B804Cu;
    ctx->pc = 0x4B8050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B804Cu;
    // 0x4b8050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7D68u, 0x4B804Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B8054u;
    // 0x4b8054: 0x0  nop
    ctx->pc = 0x4b8054u;
    // NOP
label_4b8058:
    // 0x4b8058: 0x26900d6c  addiu       $s0, $s4, 0xD6C
    ctx->pc = 0x4b8058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3436));
    // 0x4b805c: 0x258cd680  addiu       $t4, $t4, -0x2980
    ctx->pc = 0x4b805cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956672));
    // 0x4b8060: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b8060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b8064: 0x25942330  addiu       $s4, $t4, 0x2330
    ctx->pc = 0x4b8064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 12), 9008));
    // 0x4b8068: 0x27cd0d74  addiu       $t5, $fp, 0xD74
    ctx->pc = 0x4b8068u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 3444));
    // 0x4b806c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4b806cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8070: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8074: 0x26ee0d78  addiu       $t6, $s7, 0xD78
    ctx->pc = 0x4b8074u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 3448));
    // 0x4b8078: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4b8078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4b807c: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x4b807cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4b8080: 0x2595233a  addiu       $s5, $t4, 0x233A
    ctx->pc = 0x4b8080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), 9018));
    // 0x4b8084: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4b8084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8088: 0x2593233c  addiu       $s3, $t4, 0x233C
    ctx->pc = 0x4b8088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), 9020));
    // 0x4b808c: 0xa5832334  sh          $v1, 0x2334($t4)
    ctx->pc = 0x4b808cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 9012), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8090: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x4b8090u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8094: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b8094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b8098: 0x26d20d70  addiu       $s2, $s6, 0xD70
    ctx->pc = 0x4b8098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 3440));
    // 0x4b809c: 0x96230016  lhu         $v1, 0x16($s1)
    ctx->pc = 0x4b809cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x4b80a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b80a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b80a4: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x4b80a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b80a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4b80a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b80ac: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x4b80acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b80b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4b80b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b80b4: 0xa5832336  sh          $v1, 0x2336($t4)
    ctx->pc = 0x4b80b4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b80b8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4b80b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4b80bc: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4b80bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4b80c0: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4b80c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4b80c4: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x4b80c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x4b80c8: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4b80c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4b80cc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4b80ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b80d0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4b80d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b80d4: 0xa5832338  sh          $v1, 0x2338($t4)
    ctx->pc = 0x4b80d4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b80d8: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x4b80d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4b80dc: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4b80dcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b80e0: 0x9623011c  lhu         $v1, 0x11C($s1)
    ctx->pc = 0x4b80e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4b80e4: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4b80e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b80e8: 0x86220120  lh          $v0, 0x120($s1)
    ctx->pc = 0x4b80e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4b80ec: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x4b80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x4b80f0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4b80f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4b80f4: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x4b80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x4b80f8: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4b80f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b80fc: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4b80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4b8100: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b8100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b8104: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b8104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8108: 0x24422aaa  addiu       $v0, $v0, 0x2AAA
    ctx->pc = 0x4b8108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10922));
    // 0x4b810c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4b810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4b8110: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4b8110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4b8114: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4b8114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4b8118: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b8118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b811c: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B811Cu;
    SET_GPR_U32(ctx, 31, 0x4B8124u);
    ctx->pc = 0x4B8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B811Cu;
    // 0x4b8120: 0xa582233e  sh          $v0, 0x233E($t4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 12), 9022), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B811Cu, 0x4B8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8124u;
label_4b8124:
    // 0x4b8124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b8124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8128: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8128u;
    {
        const bool branch_taken_0x4b8128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8128u;
        // 0x4b812c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8128) {
            ctx->pc = 0x4B8144u;
            goto label_4b8144;
        }
    }
    ctx->pc = 0x4B8130u;
    // 0x4b8130: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b8130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8134: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4b8134u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b8138: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x4b8138u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b813c: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4b813cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8140: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x4b8140u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
label_4b8144:
    // 0x4b8144: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4B8144u;
    SET_GPR_U32(ctx, 31, 0x4B814Cu);
    ctx->pc = 0x4B8148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8144u;
    // 0x4b8148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4B8144u, 0x4B814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B814Cu;
label_4b814c:
    // 0x4b814c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b8150:
    // 0x4b8150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b8150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8158: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b8158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b815c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b815cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8160: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b8160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8164: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b8164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b8168: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b8168u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b816c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b816cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b8170: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b8170u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b8174: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b8174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b8178: 0x812df5a  j           func_4B7D68
    ctx->pc = 0x4B8178u;
    ctx->pc = 0x4B817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8178u;
    // 0x4b817c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7D68u, 0x4B8178u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B8180u;
label_4b8180:
    // 0x4b8180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b8184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b8188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b818c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b818cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8190: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b8190u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8194: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b8194u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b8198: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b8198u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b819c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b819cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b81a0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b81a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b81a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b81a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b81a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B81A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B81A8u;
        // 0x4b81ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B81A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B81B0u;
}
