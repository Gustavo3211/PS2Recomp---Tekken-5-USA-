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

// Function: sub_004F2DD8
// Address: 0x4f2dd8 - 0x4f2fe8
void sub_004F2DD8_0x4f2dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2DD8_0x4f2dd8");
#endif

    switch (ctx->pc) {
        case 0x4f2e04u: goto label_4f2e04;
        case 0x4f2e20u: goto label_4f2e20;
        case 0x4f2e88u: goto label_4f2e88;
        case 0x4f2e90u: goto label_4f2e90;
        case 0x4f2f14u: goto label_4f2f14;
        case 0x4f2f8cu: goto label_4f2f8c;
        case 0x4f2f94u: goto label_4f2f94;
        default: break;
    }

    ctx->pc = 0x4f2dd8u;

    // 0x4f2dd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f2dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f2ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f2ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f2de0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f2de4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f2de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2de8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f2de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f2dec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f2df0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f2df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f2df4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f2df8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f2df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f2dfc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F2DFCu;
    SET_GPR_U32(ctx, 31, 0x4F2E04u);
    ctx->pc = 0x4F2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2DFCu;
    // 0x4f2e00: 0x265001b4  addiu       $s0, $s2, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F2DFCu, 0x4F2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2E04u;
label_4f2e04:
    // 0x4f2e04: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f2e08: 0xac621258  sw          $v0, 0x1258($v1)
    ctx->pc = 0x4f2e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1258u, _value); } while (0);
    // 0x4f2e0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f2e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2e10: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4F2E10u;
    {
        const bool branch_taken_0x4f2e10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f2e10) {
            ctx->pc = 0x4F2F0Cu;
            goto label_4f2f0c;
        }
    }
    ctx->pc = 0x4F2E18u;
    // 0x4f2e18: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F2E18u;
    SET_GPR_U32(ctx, 31, 0x4F2E20u);
    ctx->pc = 0x4F2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2E18u;
    // 0x4f2e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F2E18u, 0x4F2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2E20u;
label_4f2e20:
    // 0x4f2e20: 0xa640015e  sh          $zero, 0x15E($s2)
    ctx->pc = 0x4f2e20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f2e24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f2e28: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x4f2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4f2e2c: 0xa6440158  sh          $a0, 0x158($s2)
    ctx->pc = 0x4f2e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f2e30: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2e34: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x4f2e34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2e38: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f2e3c: 0xa64001b6  sh          $zero, 0x1B6($s2)
    ctx->pc = 0x4f2e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f2e40: 0x24651248  addiu       $a1, $v1, 0x1248
    ctx->pc = 0x4f2e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
    // 0x4f2e44: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4f2e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4f2e48: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f2e48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2e4c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f2e50: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4f2e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2e54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1248u));
    // 0x4f2e58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2e5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f2e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f2e60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f2e64: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f2e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f2e68: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4F2E68u;
    {
        const bool branch_taken_0x4f2e68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E68u;
        // 0x4f2e6c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2e68) {
            ctx->pc = 0x4F2F0Cu;
            goto label_4f2f0c;
        }
    }
    ctx->pc = 0x4F2E70u;
    // 0x4f2e70: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f2e74: 0x2453125c  addiu       $s3, $v0, 0x125C
    ctx->pc = 0x4f2e74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4700));
    // 0x4f2e78: 0x24701230  addiu       $s0, $v1, 0x1230
    ctx->pc = 0x4f2e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4656));
    // 0x4f2e7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f2e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2e80: 0x2415002a  addiu       $s5, $zero, 0x2A
    ctx->pc = 0x4f2e80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4f2e84: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4f2e84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_4f2e88:
    // 0x4f2e88: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F2E88u;
    SET_GPR_U32(ctx, 31, 0x4F2E90u);
    ctx->pc = 0x4F2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2E88u;
    // 0x4f2e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F2E88u, 0x4F2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2E90u;
label_4f2e90:
    // 0x4f2e90: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f2e94: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x4f2e94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x4f2e98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f2e9c: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x4f2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
    // 0x4f2ea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2ea4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f2ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2ea8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4f2ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4f2eac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f2eb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f2eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f2eb4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2eb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2ebc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f2ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2ec0: 0x244204da  addiu       $v0, $v0, 0x4DA
    ctx->pc = 0x4f2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1242));
    // 0x4f2ec4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f2ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f2ec8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2ecc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2ed0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f2ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2ed4: 0xa4a2015e  sh          $v0, 0x15E($a1)
    ctx->pc = 0x4f2ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2ed8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4f2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f2edc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f2edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2ee0: 0xa4820160  sh          $v0, 0x160($a0)
    ctx->pc = 0x4f2ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2ee4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f2ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2ee8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f2ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2eec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f2ef0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f2ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f2ef4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4f2ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4f2ef8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f2ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f2efc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4f2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4f2f00: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f2f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2f04: 0x441ffe0  bgez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4F2F04u;
    {
        const bool branch_taken_0x4f2f04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f2f04) {
            ctx->pc = 0x4F2E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2e88;
        }
    }
    ctx->pc = 0x4F2F0Cu;
label_4f2f0c:
    // 0x4f2f0c: 0xc12564a  jal         func_495928
    ctx->pc = 0x4F2F0Cu;
    SET_GPR_U32(ctx, 31, 0x4F2F14u);
    ctx->pc = 0x4F2F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2F0Cu;
    // 0x4f2f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4F2F0Cu, 0x4F2F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2F14u;
label_4f2f14:
    // 0x4f2f14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4F2F14u;
    {
        const bool branch_taken_0x4f2f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2F14u;
        // 0x4f2f18: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2f14) {
            ctx->pc = 0x4F2FC0u;
            goto label_4f2fc0;
        }
    }
    ctx->pc = 0x4F2F1Cu;
    // 0x4f2f1c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4f2f1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4f2f20: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f2f20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f2f24: 0x254a123c  addiu       $t2, $t2, 0x123C
    ctx->pc = 0x4f2f24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4668));
    // 0x4f2f28: 0x256b1240  addiu       $t3, $t3, 0x1240
    ctx->pc = 0x4f2f28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4672));
    // 0x4f2f2c: 0x258c1244  addiu       $t4, $t4, 0x1244
    ctx->pc = 0x4f2f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4676));
    // 0x4f2f30: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4f2f30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f2f34: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f2f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2f38: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4f2f38u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1240u));
    // 0x4f2f3c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f2f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2f40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1244u));
    // 0x4f2f44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2f48: 0x34420060  ori         $v0, $v0, 0x60
    ctx->pc = 0x4f2f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x4f2f4c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x4f2f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x4f2f50: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x4f2f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x4f2f54: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4f2f54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4f2f58: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f2f58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f2f5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2f60: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4f2f60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4f2f64: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4f2f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4f2f68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2f6c: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4f2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4f2f70: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4f2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4f2f74: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4f2f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f78: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4f2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4f2f7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f2f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f80: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4f2f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f84: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4F2F84u;
    SET_GPR_U32(ctx, 31, 0x4F2F8Cu);
    ctx->pc = 0x4F2F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2F84u;
    // 0x4f2f88: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4F2F84u, 0x4F2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2F8Cu;
label_4f2f8c:
    // 0x4f2f8c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4F2F8Cu;
    SET_GPR_U32(ctx, 31, 0x4F2F94u);
    ctx->pc = 0x4F2F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2F8Cu;
    // 0x4f2f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4F2F8Cu, 0x4F2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2F94u;
label_4f2f94:
    // 0x4f2f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2fa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2fa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2fa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f2fa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2fac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f2facu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f2fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f2fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f2fb4: 0x812b94c  j           func_4AE530
    ctx->pc = 0x4F2FB4u;
    ctx->pc = 0x4F2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2FB4u;
    // 0x4f2fb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    sub_004AE530_0x4ae530(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2FBCu;
    // 0x4f2fbc: 0x0  nop
    ctx->pc = 0x4f2fbcu;
    // NOP
label_4f2fc0:
    // 0x4f2fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2fcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2fd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f2fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2fd4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f2fd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f2fd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f2fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f2fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2FDCu;
        // 0x4f2fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2FE4u;
    // 0x4f2fe4: 0x0  nop
    ctx->pc = 0x4f2fe4u;
    // NOP
    ctx->pc = 0x4f2fe8u;
}
