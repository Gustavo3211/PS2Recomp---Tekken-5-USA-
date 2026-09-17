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

// Function: sub_004E1D98
// Address: 0x4e1d98 - 0x4e2150
void sub_004E1D98_0x4e1d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1D98_0x4e1d98");
#endif

    switch (ctx->pc) {
        case 0x4e1dc0u: goto label_4e1dc0;
        case 0x4e1ddcu: goto label_4e1ddc;
        case 0x4e1f0cu: goto label_4e1f0c;
        case 0x4e1f20u: goto label_4e1f20;
        case 0x4e1f70u: goto label_4e1f70;
        case 0x4e1f78u: goto label_4e1f78;
        case 0x4e1facu: goto label_4e1fac;
        case 0x4e2060u: goto label_4e2060;
        case 0x4e2068u: goto label_4e2068;
        case 0x4e209cu: goto label_4e209c;
        case 0x4e20a4u: goto label_4e20a4;
        case 0x4e20b0u: goto label_4e20b0;
        case 0x4e20dcu: goto label_4e20dc;
        case 0x4e20e4u: goto label_4e20e4;
        case 0x4e20ecu: goto label_4e20ec;
        case 0x4e20f4u: goto label_4e20f4;
        case 0x4e2108u: goto label_4e2108;
        case 0x4e2124u: goto label_4e2124;
        case 0x4e212cu: goto label_4e212c;
        default: break;
    }

    ctx->pc = 0x4e1d98u;

    // 0x4e1d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e1d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e1da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e1da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e1da8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e1da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e1dac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e1dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e1db0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e1db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e1db4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4e1db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4e1db8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E1DB8u;
    SET_GPR_U32(ctx, 31, 0x4E1DC0u);
    ctx->pc = 0x4E1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1DB8u;
    // 0x4e1dbc: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E1DB8u, 0x4E1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1DC0u;
label_4e1dc0:
    // 0x4e1dc0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e1dc4: 0xac621198  sw          $v0, 0x1198($v1)
    ctx->pc = 0x4e1dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1198u, _value); } while (0);
    // 0x4e1dc8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e1dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1dcc: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E1DCCu;
    {
        const bool branch_taken_0x4e1dcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DCCu;
        // 0x4e1dd0: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1dcc) {
            ctx->pc = 0x4E1E88u;
            goto label_4e1e88;
        }
    }
    ctx->pc = 0x4E1DD4u;
    // 0x4e1dd4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E1DD4u;
    SET_GPR_U32(ctx, 31, 0x4E1DDCu);
    ctx->pc = 0x4E1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1DD4u;
    // 0x4e1dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E1DD4u, 0x4E1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1DDCu;
label_4e1ddc:
    // 0x4e1ddc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4e1ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4e1de0: 0x25241180  addiu       $a0, $t1, 0x1180
    ctx->pc = 0x4e1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4480));
    // 0x4e1de4: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x4e1de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4e1de8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e1de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e1dec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e1decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1df0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1180u));
    // 0x4e1df4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4e1df4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4e1df8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e1df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e1dfc: 0x2506119c  addiu       $a2, $t0, 0x119C
    ctx->pc = 0x4e1dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4508));
    // 0x4e1e00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1e04: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x4e1e04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
    // 0x4e1e08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1e0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e1e10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1e14: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e1e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e1e18: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x4e1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x4e1e1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e1e20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1e24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e1e28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1e2c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e1e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e1e30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e1e34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e1e38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1e3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e1e40: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e1e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e1e44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1e48: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1e48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e1e4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e1e50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e1e54: 0x24217cf8  addiu       $at, $at, 0x7CF8
    ctx->pc = 0x4e1e54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31992));
    // 0x4e1e58: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e1e5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e1e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e1e60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e1e64: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4e1e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1e68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e1e6c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x4e1e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e1e70: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4e1e70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1e74: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e1e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1e78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e1e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e1e7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1E7Cu;
    {
        const bool branch_taken_0x4e1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1E7Cu;
        // 0x4e1e80: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1e7c) {
            ctx->pc = 0x4E1E94u;
            goto label_4e1e94;
        }
    }
    ctx->pc = 0x4E1E84u;
    // 0x4e1e84: 0x0  nop
    ctx->pc = 0x4e1e84u;
    // NOP
label_4e1e88:
    // 0x4e1e88: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x4e1e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4e1e8c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4e1e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4e1e90: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x4e1e90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
label_4e1e94:
    // 0x4e1e94: 0x25311180  addiu       $s1, $t1, 0x1180
    ctx->pc = 0x4e1e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 4480));
    // 0x4e1e98: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e1e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e1e9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1ea0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4e1ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1ea4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1ea8: 0x25457cf8  addiu       $a1, $t2, 0x7CF8
    ctx->pc = 0x4e1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 31992));
    // 0x4e1eac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1eb0: 0x2514119c  addiu       $s4, $t0, 0x119C
    ctx->pc = 0x4e1eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 4508));
    // 0x4e1eb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1ebc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e1ec0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1ec4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e1ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1ec8: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x4e1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x4e1ecc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1ed0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1ed4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e1ed8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1edc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e1edcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1ee0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e1ee4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1ee8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1eec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e1ef0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e1ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1ef4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1ef8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e1efc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e1f00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4e1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4e1f04: 0xc12564a  jal         func_495928
    ctx->pc = 0x4E1F04u;
    SET_GPR_U32(ctx, 31, 0x4E1F0Cu);
    ctx->pc = 0x4E1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1F04u;
    // 0x4e1f08: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4E1F04u, 0x4E1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1F0Cu;
label_4e1f0c:
    // 0x4e1f0c: 0x50400088  beql        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x4E1F0Cu;
    {
        const bool branch_taken_0x4e1f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f0c) {
            ctx->pc = 0x4E1F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1F0Cu;
            // 0x4e1f10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2130u;
            goto label_4e2130;
        }
    }
    ctx->pc = 0x4E1F14u;
    // 0x4e1f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1f18: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E1F18u;
    SET_GPR_U32(ctx, 31, 0x4E1F20u);
    ctx->pc = 0x4E1F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1F18u;
    // 0x4e1f1c: 0x26130120  addiu       $s3, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E1F18u, 0x4E1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1F20u;
label_4e1f20:
    // 0x4e1f20: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e1f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e1f24: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4e1f24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1f28: 0x24a51188  addiu       $a1, $a1, 0x1188
    ctx->pc = 0x4e1f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4488));
    // 0x4e1f2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4e1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1188u));
    // 0x4e1f30: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e1f30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e1f34: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x4e1f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x4e1f38: 0x24e7118c  addiu       $a3, $a3, 0x118C
    ctx->pc = 0x4e1f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4492));
    // 0x4e1f3c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e1f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e1f40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F118Cu));
    // 0x4e1f44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1f48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4e1f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1f4c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e1f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e1f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1f54: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4e1f58: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x4e1f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4e1f5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1f60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1f64: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e1f68: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4E1F68u;
    SET_GPR_U32(ctx, 31, 0x4E1F70u);
    ctx->pc = 0x4E1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1F68u;
    // 0x4e1f6c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4E1F68u, 0x4E1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1F70u;
label_4e1f70:
    // 0x4e1f70: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E1F70u;
    SET_GPR_U32(ctx, 31, 0x4E1F78u);
    ctx->pc = 0x4E1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1F70u;
    // 0x4e1f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E1F70u, 0x4E1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1F78u;
label_4e1f78:
    // 0x4e1f78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1f7c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1f88: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x4e1f88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4e1f8c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1f90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1f94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e1f98: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4e1f98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1f9c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4e1f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e1fa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4e1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4e1fa4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E1FA4u;
    SET_GPR_U32(ctx, 31, 0x4E1FACu);
    ctx->pc = 0x4E1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1FA4u;
    // 0x4e1fa8: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E1FA4u, 0x4E1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1FACu;
label_4e1fac:
    // 0x4e1fac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4e1facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1fb0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1fb4: 0x2605015e  addiu       $a1, $s0, 0x15E
    ctx->pc = 0x4e1fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4e1fb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e1fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e1fbc: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x4e1fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x4e1fc0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1fc4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e1fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e1fc8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4e1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4e1fcc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e1fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1fd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4e1fd4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4e1fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1fd8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e1fd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1fdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4e1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e1fe0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e1fe4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1fe8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e1fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e1fec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e1fecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e1ff0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1ff4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e1ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e1ff8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4e1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4e1ffc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e1ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e2000: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4E2000u;
    {
        const bool branch_taken_0x4e2000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2000u;
        // 0x4e2004: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2000) {
            ctx->pc = 0x4E2060u;
            goto label_4e2060;
        }
    }
    ctx->pc = 0x4E2008u;
    // 0x4e2008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e200c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4e200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4e2010: 0xa4a02330  sh          $zero, 0x2330($a1)
    ctx->pc = 0x4e2010u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9008), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e2014: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4e2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e2018: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e201c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e201cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e2020: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4e2020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2024: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4e2024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e2028: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4e2028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4e202c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4e202cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4e2030: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4e2030u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2034: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e2038: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e2038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e203c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e203cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e2040: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4e2040u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2044: 0x96030118  lhu         $v1, 0x118($s0)
    ctx->pc = 0x4e2044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4e2048: 0xa4a3233a  sh          $v1, 0x233A($a1)
    ctx->pc = 0x4e2048u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e204c: 0x9602011c  lhu         $v0, 0x11C($s0)
    ctx->pc = 0x4e204cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4e2050: 0xa4a2233c  sh          $v0, 0x233C($a1)
    ctx->pc = 0x4e2050u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2054: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4e2054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e2058: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4E2058u;
    SET_GPR_U32(ctx, 31, 0x4E2060u);
    ctx->pc = 0x4E205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2058u;
    // 0x4e205c: 0xa4a3233e  sh          $v1, 0x233E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4E2058u, 0x4E2060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2060u;
label_4e2060:
    // 0x4e2060: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E2060u;
    SET_GPR_U32(ctx, 31, 0x4E2068u);
    ctx->pc = 0x4E2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2060u;
    // 0x4e2064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E2060u, 0x4E2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2068u;
label_4e2068:
    // 0x4e2068: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4E2068u;
    {
        const bool branch_taken_0x4e2068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2068u;
        // 0x4e206c: 0x3c06007f  lui         $a2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2068) {
            ctx->pc = 0x4E212Cu;
            goto label_4e212c;
        }
    }
    ctx->pc = 0x4E2070u;
    // 0x4e2070: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e2070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e2074: 0x24c61194  addiu       $a2, $a2, 0x1194
    ctx->pc = 0x4e2074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4500));
    // 0x4e2078: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4e2078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4e207c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e2080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2084: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4e2084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e2088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e208c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e2090: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e2090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e2094: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4E2094u;
    SET_GPR_U32(ctx, 31, 0x4E209Cu);
    ctx->pc = 0x4E2098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2094u;
    // 0x4e2098: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4E2094u, 0x4E209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E209Cu;
label_4e209c:
    // 0x4e209c: 0xc12b3d4  jal         func_4ACF50
    ctx->pc = 0x4E209Cu;
    SET_GPR_U32(ctx, 31, 0x4E20A4u);
    ctx->pc = 0x4E20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E209Cu;
    // 0x4e20a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF50u, 0x4E209Cu, 0x4E20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E20A4u;
label_4e20a4:
    // 0x4e20a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e20a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e20a8: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E20A8u;
    SET_GPR_U32(ctx, 31, 0x4E20B0u);
    ctx->pc = 0x4E20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E20A8u;
    // 0x4e20ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E20A8u, 0x4E20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E20B0u;
label_4e20b0:
    // 0x4e20b0: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4E20B0u;
    {
        const bool branch_taken_0x4e20b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E20B0u;
        // 0x4e20b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20b0) {
            ctx->pc = 0x4E2100u;
            goto label_4e2100;
        }
    }
    ctx->pc = 0x4E20B8u;
    // 0x4e20b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4e20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4e20bc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4e20bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4e20c0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4e20c4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4e20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4e20c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e20cc: 0xa446232c  sh          $a2, 0x232C($v0)
    ctx->pc = 0x4e20ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4e20d0: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4e20d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4e20d4: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4E20D4u;
    SET_GPR_U32(ctx, 31, 0x4E20DCu);
    ctx->pc = 0x4E20D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E20D4u;
    // 0x4e20d8: 0xa445232e  sh          $a1, 0x232E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4E20D4u, 0x4E20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E20DCu;
label_4e20dc:
    // 0x4e20dc: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E20DCu;
    SET_GPR_U32(ctx, 31, 0x4E20E4u);
    ctx->pc = 0x4E20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E20DCu;
    // 0x4e20e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E20DCu, 0x4E20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E20E4u;
label_4e20e4:
    // 0x4e20e4: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E20E4u;
    SET_GPR_U32(ctx, 31, 0x4E20ECu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E20E4u, 0x4E20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E20ECu;
label_4e20ec:
    // 0x4e20ec: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4E20ECu;
    SET_GPR_U32(ctx, 31, 0x4E20F4u);
    ctx->pc = 0x4E20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E20ECu;
    // 0x4e20f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4E20ECu, 0x4E20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E20F4u;
label_4e20f4:
    // 0x4e20f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4E20F4u;
    {
        const bool branch_taken_0x4e20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E20F4u;
        // 0x4e20f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20f4) {
            ctx->pc = 0x4E2130u;
            goto label_4e2130;
        }
    }
    ctx->pc = 0x4E20FCu;
    // 0x4e20fc: 0x0  nop
    ctx->pc = 0x4e20fcu;
    // NOP
label_4e2100:
    // 0x4e2100: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E2100u;
    SET_GPR_U32(ctx, 31, 0x4E2108u);
    ctx->pc = 0x4E2104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2100u;
    // 0x4e2104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E2100u, 0x4E2108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2108u;
label_4e2108:
    // 0x4e2108: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E2108u;
    {
        const bool branch_taken_0x4e2108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e2108) {
            ctx->pc = 0x4E210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2108u;
            // 0x4e210c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2130u;
            goto label_4e2130;
        }
    }
    ctx->pc = 0x4E2110u;
    // 0x4e2110: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e2110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e2114: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4e2118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e211c: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4E211Cu;
    SET_GPR_U32(ctx, 31, 0x4E2124u);
    ctx->pc = 0x4E2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E211Cu;
    // 0x4e2120: 0xa462f9ae  sh          $v0, -0x652($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965678), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4E211Cu, 0x4E2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2124u;
label_4e2124:
    // 0x4e2124: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4E2124u;
    SET_GPR_U32(ctx, 31, 0x4E212Cu);
    ctx->pc = 0x4E2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2124u;
    // 0x4e2128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4E2124u, 0x4E212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E212Cu;
label_4e212c:
    // 0x4e212c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e212cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2130:
    // 0x4e2130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2138: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e213c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e213cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2140: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e2140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2144: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2144u;
        // 0x4e2148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E214Cu;
    // 0x4e214c: 0x0  nop
    ctx->pc = 0x4e214cu;
    // NOP
    ctx->pc = 0x4e2150u;
}
