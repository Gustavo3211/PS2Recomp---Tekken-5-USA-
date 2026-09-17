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

// Function: sub_00107CD0
// Address: 0x107cd0 - 0x108228
void sub_00107CD0_0x107cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107CD0_0x107cd0");
#endif

    switch (ctx->pc) {
        case 0x107d48u: goto label_107d48;
        case 0x107d6cu: goto label_107d6c;
        case 0x107de4u: goto label_107de4;
        case 0x107e2cu: goto label_107e2c;
        case 0x107ee8u: goto label_107ee8;
        case 0x107f14u: goto label_107f14;
        case 0x107f84u: goto label_107f84;
        case 0x107fb0u: goto label_107fb0;
        case 0x108010u: goto label_108010;
        case 0x10803cu: goto label_10803c;
        case 0x10806cu: goto label_10806c;
        case 0x108094u: goto label_108094;
        case 0x10809cu: goto label_10809c;
        default: break;
    }

    ctx->pc = 0x107cd0u;

    // 0x107cd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x107cd4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x107cd8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x107cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x107cdc: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x107cdcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x107ce0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x107ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x107ce4: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x107ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x107ce8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x107ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x107cec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107cf0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x107cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x107cf4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x107cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cf8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x107cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x107cfc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x107cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d00: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x107d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x107d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d08: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x107d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x107d0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x107d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d10: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x107d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x107d14: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x107d14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d18: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x107d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x107d1c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x107d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x107d20: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x107d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x107d24: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x107d24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x107d28: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x107d2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x107d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x107d30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x107d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x107d34: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x107d34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x107d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d3c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x107d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x107d40: 0xc042226  jal         func_108898
    ctx->pc = 0x107D40u;
    SET_GPR_U32(ctx, 31, 0x107D48u);
    ctx->pc = 0x107D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D40u;
    // 0x107d44: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107D40u, 0x107D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D48u;
label_107d48:
    // 0x107d48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107d4c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x107d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x107d50: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107d54: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x107d58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x107d58u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x107d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d60: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x107d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x107d64: 0xc042142  jal         func_108508
    ctx->pc = 0x107D64u;
    SET_GPR_U32(ctx, 31, 0x107D6Cu);
    ctx->pc = 0x107D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D64u;
    // 0x107d68: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x107D64u, 0x107D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D6Cu;
label_107d6c:
    // 0x107d6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107d74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107d78: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107d7c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x107d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107d80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107d80u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107d84: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107d84u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x107d88: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x107d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107d8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107d90: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107D90u;
    {
        const bool branch_taken_0x107d90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x107D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D90u;
        // 0x107d94: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d90) {
            ctx->pc = 0x107DA8u;
            goto label_107da8;
        }
    }
    ctx->pc = 0x107D98u;
    // 0x107d98: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x107d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107d9c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x107d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x107da0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107DA0u;
    {
        const bool branch_taken_0x107da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA0u;
        // 0x107da4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107da0) {
            ctx->pc = 0x107DACu;
            goto label_107dac;
        }
    }
    ctx->pc = 0x107DA8u;
label_107da8:
    // 0x107da8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_107dac:
    // 0x107dac: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x107dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x107db0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x107db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107db4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x107db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x107db8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x107db8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x107dbc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x107dbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107dc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x107dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x107dc4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x107dc4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x107dc8: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x107dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x107dcc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107DCCu;
    {
        const bool branch_taken_0x107dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x107DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DCCu;
        // 0x107dd0: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dcc) {
            ctx->pc = 0x107DF4u;
            goto label_107df4;
        }
    }
    ctx->pc = 0x107DD4u;
    // 0x107dd4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x107dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x107dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ddc: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x107DDCu;
    SET_GPR_U32(ctx, 31, 0x107DE4u);
    ctx->pc = 0x107DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DDCu;
    // 0x107de0: 0x24a5da90  addiu       $a1, $a1, -0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x107DDCu, 0x107DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DE4u;
label_107de4:
    // 0x107de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dec: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x107DECu;
    {
        const bool branch_taken_0x107dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DECu;
        // 0x107df0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dec) {
            ctx->pc = 0x1081F8u;
            goto label_1081f8;
        }
    }
    ctx->pc = 0x107DF4u;
label_107df4:
    // 0x107df4: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x107df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x107df8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107DF8u;
    {
        const bool branch_taken_0x107df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DF8u;
        // 0x107dfc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107df8) {
            ctx->pc = 0x107E34u;
            goto label_107e34;
        }
    }
    ctx->pc = 0x107E00u;
    // 0x107e00: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x107e04: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107E04u;
    {
        const bool branch_taken_0x107e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107e04) {
            ctx->pc = 0x107E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107E04u;
            // 0x107e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107E24u;
            goto label_107e24;
        }
    }
    ctx->pc = 0x107E0Cu;
    // 0x107e0c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x107e10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107E10u;
    {
        const bool branch_taken_0x107e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E10u;
        // 0x107e14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e10) {
            ctx->pc = 0x107E20u;
            goto label_107e20;
        }
    }
    ctx->pc = 0x107E18u;
    // 0x107e18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x107E18u;
    {
        const bool branch_taken_0x107e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E18u;
        // 0x107e1c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e18) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107E20u;
label_107e20:
    // 0x107e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107e24:
    // 0x107e24: 0xc0421a2  jal         func_108688
    ctx->pc = 0x107E24u;
    SET_GPR_U32(ctx, 31, 0x107E2Cu);
    ctx->pc = 0x107E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E24u;
    // 0x107e28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x107E24u, 0x107E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E2Cu;
label_107e2c:
    // 0x107e2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107E2Cu;
    {
        const bool branch_taken_0x107e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E2Cu;
        // 0x107e30: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e2c) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107E34u;
label_107e34:
    // 0x107e34: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x107e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x107e38: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x107E38u;
    {
        const bool branch_taken_0x107e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107e38) {
            ctx->pc = 0x107E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107E38u;
            // 0x107e3c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107E40u;
    // 0x107e40: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x107e44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107E44u;
    {
        const bool branch_taken_0x107e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E44u;
        // 0x107e48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e44) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107E4Cu;
    // 0x107e4c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x107e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x107e50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107e54: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x107e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x107e58: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x107e58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x107e5c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x107e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_107e60:
    // 0x107e60: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x107e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_107e64:
    // 0x107e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107e68: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107E68u;
    {
        const bool branch_taken_0x107e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E68u;
        // 0x107e6c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e68) {
            ctx->pc = 0x107E8Cu;
            goto label_107e8c;
        }
    }
    ctx->pc = 0x107E70u;
    // 0x107e70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107e78: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x107e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x107e7c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x107e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x107e80: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x107e80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x107e84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107E84u;
    {
        const bool branch_taken_0x107e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E84u;
        // 0x107e88: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e84) {
            ctx->pc = 0x107EA0u;
            goto label_107ea0;
        }
    }
    ctx->pc = 0x107E8Cu;
label_107e8c:
    // 0x107e8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x107e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107e90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x107e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107e94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x107e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e98: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x107e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x107e9c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x107e9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_107ea0:
    // 0x107ea0: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x107ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x107ea4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x107ea4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ea8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x107EA8u;
    {
        const bool branch_taken_0x107ea8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EA8u;
        // 0x107eac: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ea8) {
            ctx->pc = 0x107EB8u;
            goto label_107eb8;
        }
    }
    ctx->pc = 0x107EB0u;
    // 0x107eb0: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x107eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x107eb4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x107eb4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_107eb8:
    // 0x107eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107ebc: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x107EBCu;
    {
        const bool branch_taken_0x107ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x107EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EBCu;
        // 0x107ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ebc) {
            ctx->pc = 0x107EF4u;
            goto label_107ef4;
        }
    }
    ctx->pc = 0x107EC4u;
    // 0x107ec4: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x107ec8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107EC8u;
    {
        const bool branch_taken_0x107ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EC8u;
        // 0x107ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ec8) {
            ctx->pc = 0x107EF4u;
            goto label_107ef4;
        }
    }
    ctx->pc = 0x107ED0u;
    // 0x107ed0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107ed4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x107ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x107ed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107ED8u;
    {
        const bool branch_taken_0x107ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ED8u;
        // 0x107edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ed8) {
            ctx->pc = 0x107EF0u;
            goto label_107ef0;
        }
    }
    ctx->pc = 0x107EE0u;
    // 0x107ee0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x107EE0u;
    SET_GPR_U32(ctx, 31, 0x107EE8u);
    ctx->pc = 0x107EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EE0u;
    // 0x107ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x107EE0u, 0x107EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EE8u;
label_107ee8:
    // 0x107ee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107EE8u;
    {
        const bool branch_taken_0x107ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE8u;
        // 0x107eec: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ee8) {
            ctx->pc = 0x107EF8u;
            goto label_107ef8;
        }
    }
    ctx->pc = 0x107EF0u;
label_107ef0:
    // 0x107ef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107ef4:
    // 0x107ef4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_107ef8:
    // 0x107ef8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x107ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x107efc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107f00: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x107f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x107f04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107F04u;
    {
        const bool branch_taken_0x107f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F04u;
        // 0x107f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f04) {
            ctx->pc = 0x107F1Cu;
            goto label_107f1c;
        }
    }
    ctx->pc = 0x107F0Cu;
    // 0x107f0c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x107F0Cu;
    SET_GPR_U32(ctx, 31, 0x107F14u);
    ctx->pc = 0x107F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F0Cu;
    // 0x107f10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x107F0Cu, 0x107F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F14u;
label_107f14:
    // 0x107f14: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x107f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x107f18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_107f1c:
    // 0x107f1c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x107f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x107f20: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x107F20u;
    {
        const bool branch_taken_0x107f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f20) {
            ctx->pc = 0x107F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F20u;
            // 0x107f24: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F44u;
            goto label_107f44;
        }
    }
    ctx->pc = 0x107F28u;
    // 0x107f28: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x107f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x107f2c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x107F2Cu;
    {
        const bool branch_taken_0x107f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107f2c) {
            ctx->pc = 0x107F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F2Cu;
            // 0x107f30: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FB4u;
            goto label_107fb4;
        }
    }
    ctx->pc = 0x107F34u;
    // 0x107f34: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x107f38: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F38u;
            // 0x107f3c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FB4u;
            goto label_107fb4;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_107f44:
    // 0x107f44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x107F44u;
    {
        const bool branch_taken_0x107f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F44u;
        // 0x107f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f44) {
            ctx->pc = 0x107F8Cu;
            goto label_107f8c;
        }
    }
    ctx->pc = 0x107F4Cu;
    // 0x107f4c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x107f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x107f50: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x107f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x107f5c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x107f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x107f60: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x107f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x107f64: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x107f68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x107f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x107f6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x107f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f70: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x107f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x107f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f78: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x107f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f7c: 0xc041ecc  jal         func_107B30
    ctx->pc = 0x107F7Cu;
    SET_GPR_U32(ctx, 31, 0x107F84u);
    ctx->pc = 0x107F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F7Cu;
    // 0x107f80: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B30u, 0x107F7Cu, 0x107F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F84u;
label_107f84:
    // 0x107f84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107F84u;
    {
        const bool branch_taken_0x107f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F84u;
        // 0x107f88: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f84) {
            ctx->pc = 0x107FB4u;
            goto label_107fb4;
        }
    }
    ctx->pc = 0x107F8Cu;
label_107f8c:
    // 0x107f8c: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x107f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x107f90: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x107f90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x107f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f98: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x107f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x107f9c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x107f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x107fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fa4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x107fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fa8: 0xc041dc2  jal         func_107708
    ctx->pc = 0x107FA8u;
    SET_GPR_U32(ctx, 31, 0x107FB0u);
    ctx->pc = 0x107FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FA8u;
    // 0x107fac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107708u, 0x107FA8u, 0x107FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FB0u;
label_107fb0:
    // 0x107fb0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x107fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_107fb4:
    // 0x107fb4: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x107FB4u;
    {
        const bool branch_taken_0x107fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FB4u;
        // 0x107fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fb4) {
            ctx->pc = 0x1081F8u;
            goto label_1081f8;
        }
    }
    ctx->pc = 0x107FBCu;
    // 0x107fbc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107fc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x107fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x107fc4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x107FC4u;
    {
        const bool branch_taken_0x107fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107fc4) {
            ctx->pc = 0x108040u;
            goto label_108040;
        }
    }
    ctx->pc = 0x107FCCu;
    // 0x107fcc: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x107fd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x107FD0u;
    {
        const bool branch_taken_0x107fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FD0u;
        // 0x107fd4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fd0) {
            ctx->pc = 0x108018u;
            goto label_108018;
        }
    }
    ctx->pc = 0x107FD8u;
    // 0x107fd8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x107fdc: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x107fe0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x107fe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fe4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x107fe8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x107fec: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x107fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x107ff0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x107ff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ff4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x107ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x107ff8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x107ff8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x107ffc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x107ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x108000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108008: 0xc041ecc  jal         func_107B30
    ctx->pc = 0x108008u;
    SET_GPR_U32(ctx, 31, 0x108010u);
    ctx->pc = 0x10800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108008u;
    // 0x10800c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B30u, 0x108008u, 0x108010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108010u;
label_108010:
    // 0x108010: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x108010u;
    {
        const bool branch_taken_0x108010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108010u;
        // 0x108014: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108010) {
            ctx->pc = 0x108040u;
            goto label_108040;
        }
    }
    ctx->pc = 0x108018u;
label_108018:
    // 0x108018: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x108018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x10801c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x108020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108024: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x108028: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10802c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10802cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108030: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x108030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108034: 0xc041dc2  jal         func_107708
    ctx->pc = 0x108034u;
    SET_GPR_U32(ctx, 31, 0x10803Cu);
    ctx->pc = 0x108038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108034u;
    // 0x108038: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107708u, 0x108034u, 0x10803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10803Cu;
label_10803c:
    // 0x10803c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x10803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_108040:
    // 0x108040: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x108040u;
    {
        const bool branch_taken_0x108040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108040u;
        // 0x108044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108040) {
            ctx->pc = 0x1081F8u;
            goto label_1081f8;
        }
    }
    ctx->pc = 0x108048u;
    // 0x108048: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x108048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10804c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x108050: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108050u;
    {
        const bool branch_taken_0x108050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108050u;
        // 0x108054: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108050) {
            ctx->pc = 0x108074u;
            goto label_108074;
        }
    }
    ctx->pc = 0x108058u;
    // 0x108058: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x108058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x10805c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10805Cu;
    {
        const bool branch_taken_0x10805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10805Cu;
        // 0x108060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10805c) {
            ctx->pc = 0x108070u;
            goto label_108070;
        }
    }
    ctx->pc = 0x108064u;
    // 0x108064: 0xc042234  jal         func_1088D0
    ctx->pc = 0x108064u;
    SET_GPR_U32(ctx, 31, 0x10806Cu);
    ctx->pc = 0x108068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108064u;
    // 0x108068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D0u, 0x108064u, 0x10806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10806Cu;
label_10806c:
    // 0x10806c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x10806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_108070:
    // 0x108070: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x108070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_108074:
    // 0x108074: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x108074u;
    {
        const bool branch_taken_0x108074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108074u;
        // 0x108078: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108074) {
            ctx->pc = 0x108118u;
            goto label_108118;
        }
    }
    ctx->pc = 0x10807Cu;
    // 0x10807c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x10807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x108080: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x108084: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x108084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x108088: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x108088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x10808c: 0xc04266e  jal         func_1099B8
    ctx->pc = 0x10808Cu;
    SET_GPR_U32(ctx, 31, 0x108094u);
    ctx->pc = 0x108090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10808Cu;
    // 0x108090: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1099B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1099B8u, 0x10808Cu, 0x108094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108094u;
label_108094:
    // 0x108094: 0xc042226  jal         func_108898
    ctx->pc = 0x108094u;
    SET_GPR_U32(ctx, 31, 0x10809Cu);
    ctx->pc = 0x108098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108094u;
    // 0x108098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x108094u, 0x10809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10809Cu;
label_10809c:
    // 0x10809c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1080a0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1080a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1080a4: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x1080a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1080a8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1080ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1080acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1080b0: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x1080b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x1080b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1080b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1080b8: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x1080b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x1080bc: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x1080bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x1080c0: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x1080c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x1080c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1080c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1080c8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1080c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1080cc: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x1080d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1080d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1080d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1080d8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1080d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1080dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1080dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1080e0: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1080e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1080e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1080e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1080e8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1080e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1080ec: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1080ECu;
    {
        const bool branch_taken_0x1080ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1080F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080ECu;
        // 0x1080f0: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080ec) {
            ctx->pc = 0x108108u;
            goto label_108108;
        }
    }
    ctx->pc = 0x1080F4u;
    // 0x1080f4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1080f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1080f8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1080F8u;
    {
        const bool branch_taken_0x1080f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1080FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F8u;
        // 0x1080fc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f8) {
            ctx->pc = 0x108108u;
            goto label_108108;
        }
    }
    ctx->pc = 0x108100u;
    // 0x108100: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108100u;
    {
        const bool branch_taken_0x108100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x108104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108100u;
        // 0x108104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108100) {
            ctx->pc = 0x108110u;
            goto label_108110;
        }
    }
    ctx->pc = 0x108108u;
label_108108:
    // 0x108108: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108108u;
    {
        const bool branch_taken_0x108108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108108u;
        // 0x10810c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108108) {
            ctx->pc = 0x10812Cu;
            goto label_10812c;
        }
    }
    ctx->pc = 0x108110u;
label_108110:
    // 0x108110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108110u;
    {
        const bool branch_taken_0x108110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108110u;
        // 0x108114: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108110) {
            ctx->pc = 0x10812Cu;
            goto label_10812c;
        }
    }
    ctx->pc = 0x108118u;
label_108118:
    // 0x108118: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x108118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x10811c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108120: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x108120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x108124: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x108124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x108128: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x108128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_10812c:
    // 0x10812c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x10812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x108130: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108130u;
    {
        const bool branch_taken_0x108130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108130u;
        // 0x108134: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108130) {
            ctx->pc = 0x108140u;
            goto label_108140;
        }
    }
    ctx->pc = 0x108138u;
    // 0x108138: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x108138u;
    {
        const bool branch_taken_0x108138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108138) {
            ctx->pc = 0x1081F8u;
            goto label_1081f8;
        }
    }
    ctx->pc = 0x108140u;
label_108140:
    // 0x108140: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x108144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x108148: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x108148u;
    {
        const bool branch_taken_0x108148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108148) {
            ctx->pc = 0x10814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108148u;
            // 0x10814c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10816Cu;
            goto label_10816c;
        }
    }
    ctx->pc = 0x108150u;
    // 0x108150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108154: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x108154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x108158: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10815c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10815cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x108160: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x108160u;
    {
        const bool branch_taken_0x108160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108160) {
            ctx->pc = 0x108164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108160u;
            // 0x108164: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108198u;
            goto label_108198;
        }
    }
    ctx->pc = 0x108168u;
    // 0x108168: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_10816c:
    // 0x10816c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10816Cu;
    {
        const bool branch_taken_0x10816c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10816c) {
            ctx->pc = 0x108170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10816Cu;
            // 0x108170: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108198u;
            goto label_108198;
        }
    }
    ctx->pc = 0x108174u;
    // 0x108174: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x108174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x108178: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x108178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10817c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10817cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x108180: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x108180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x108184: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x108184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x108188: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x108188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x10818c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10818cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x108190: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x108190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x108194: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x108194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_108198:
    // 0x108198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10819c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10819Cu;
    {
        const bool branch_taken_0x10819c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1081A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10819Cu;
        // 0x1081a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10819c) {
            ctx->pc = 0x1081F8u;
            goto label_1081f8;
        }
    }
    ctx->pc = 0x1081A4u;
    // 0x1081a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1081a8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x1081a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x1081ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1081ACu;
    {
        const bool branch_taken_0x1081ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1081B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081ACu;
        // 0x1081b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081ac) {
            ctx->pc = 0x1081F8u;
            goto label_1081f8;
        }
    }
    ctx->pc = 0x1081B4u;
    // 0x1081b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1081b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1081b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1081b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1081bc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1081c0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1081c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1081c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1081c8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1081c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1081cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1081CCu;
    {
        const bool branch_taken_0x1081cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1081D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081CCu;
        // 0x1081d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081cc) {
            ctx->pc = 0x1081DCu;
            goto label_1081dc;
        }
    }
    ctx->pc = 0x1081D4u;
    // 0x1081d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x1081F4u;
            goto label_1081f4;
        }
    }
    ctx->pc = 0x1081DCu;
label_1081dc:
    // 0x1081dc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1081dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1081e0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1081e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1081e4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1081e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1081e8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1081e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1081ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1081ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1081f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1081f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1081f4:
    // 0x1081f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1081f8:
    // 0x1081f8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1081f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1081fc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1081fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x108200: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x108200u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108204: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x108204u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108208: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x108208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10820c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10820cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108210: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x108210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108214: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x108214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108218: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x108218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10821c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10821cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108220: 0x3e00008  jr          $ra
    ctx->pc = 0x108220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108220u;
        // 0x108224: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108228u;
}
