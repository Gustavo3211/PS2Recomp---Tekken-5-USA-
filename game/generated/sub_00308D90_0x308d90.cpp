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

// Function: sub_00308D90
// Address: 0x308d90 - 0x309100
void sub_00308D90_0x308d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D90_0x308d90");
#endif

    switch (ctx->pc) {
        case 0x308de4u: goto label_308de4;
        case 0x308e70u: goto label_308e70;
        case 0x308ec0u: goto label_308ec0;
        case 0x308f08u: goto label_308f08;
        case 0x308f50u: goto label_308f50;
        case 0x308f98u: goto label_308f98;
        case 0x308fe0u: goto label_308fe0;
        case 0x309028u: goto label_309028;
        case 0x309034u: goto label_309034;
        case 0x309040u: goto label_309040;
        case 0x309080u: goto label_309080;
        case 0x30909cu: goto label_30909c;
        case 0x3090dcu: goto label_3090dc;
        case 0x3090e4u: goto label_3090e4;
        default: break;
    }

    ctx->pc = 0x308d90u;

    // 0x308d90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x308d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x308d94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x308d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d98: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x308d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x308d9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x308d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308da0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x308da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x308da4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x308da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x308da8: 0x10a000cf  beqz        $a1, . + 4 + (0xCF << 2)
    ctx->pc = 0x308DA8u;
    {
        const bool branch_taken_0x308da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DA8u;
        // 0x308dac: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308da8) {
            ctx->pc = 0x3090E8u;
            goto label_3090e8;
        }
    }
    ctx->pc = 0x308DB0u;
    // 0x308db0: 0x3c11001b  lui         $s1, 0x1B
    ctx->pc = 0x308db0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)27 << 16));
    // 0x308db4: 0x2630ed40  addiu       $s0, $s1, -0x12C0
    ctx->pc = 0x308db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x308db8: 0x8e020378  lw          $v0, 0x378($s0)
    ctx->pc = 0x308db8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1AF0B8u));
    // 0x308dbc: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308DBCu;
    {
        const bool branch_taken_0x308dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x308dbc) {
            ctx->pc = 0x308DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308DBCu;
            // 0x308dc0: 0xae030374  sw          $v1, 0x374($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308DD0u;
            goto label_308dd0;
        }
    }
    ctx->pc = 0x308DC4u;
    // 0x308dc4: 0xaf85cb78  sw          $a1, -0x3488($gp)
    ctx->pc = 0x308dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953848), GPR_U32(ctx, 5));
    // 0x308dc8: 0xae050378  sw          $a1, 0x378($s0)
    ctx->pc = 0x308dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 5));
    // 0x308dcc: 0xae030374  sw          $v1, 0x374($s0)
    ctx->pc = 0x308dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 3));
label_308dd0:
    // 0x308dd0: 0x24050c00  addiu       $a1, $zero, 0xC00
    ctx->pc = 0x308dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x308dd4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x308dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x308dd8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x308dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x308ddc: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x308DDCu;
    SET_GPR_U32(ctx, 31, 0x308DE4u);
    ctx->pc = 0x308DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308DDCu;
    // 0x308de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x308DDCu, 0x308DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308DE4u;
label_308de4:
    // 0x308de4: 0x8f83c528  lw          $v1, -0x3AD8($gp)
    ctx->pc = 0x308de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952232)));
    // 0x308de8: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x308de8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x308dec: 0x146000b7  bnez        $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x308DECu;
    {
        const bool branch_taken_0x308dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DECu;
        // 0x308df0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308dec) {
            ctx->pc = 0x3090CCu;
            goto label_3090cc;
        }
    }
    ctx->pc = 0x308DF4u;
    // 0x308df4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x308df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308df8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x308df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308dfc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x308dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x308e00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308e04: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x308e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308e08: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x308e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x308e0c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x308e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x308e10: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x308e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x308e14: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x308e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x308e18: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x308e18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308e1c: 0x240c0140  addiu       $t4, $zero, 0x140
    ctx->pc = 0x308e1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x308e20: 0x240d00e0  addiu       $t5, $zero, 0xE0
    ctx->pc = 0x308e20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x308e24: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x308e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x308e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308e2c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x308e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x308e30: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x308e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x308e34: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x308e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x308e38: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x308e38u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e3c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x308e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x308e40: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x308e40u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e44: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x308e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x308e48: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x308e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x308e4c: 0xae080020  sw          $t0, 0x20($s0)
    ctx->pc = 0x308e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 8));
    // 0x308e50: 0xae090024  sw          $t1, 0x24($s0)
    ctx->pc = 0x308e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 9));
    // 0x308e54: 0xae0a0028  sw          $t2, 0x28($s0)
    ctx->pc = 0x308e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 10));
    // 0x308e58: 0xae0b002c  sw          $t3, 0x2C($s0)
    ctx->pc = 0x308e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 11));
    // 0x308e5c: 0xae0c0030  sw          $t4, 0x30($s0)
    ctx->pc = 0x308e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 12));
    // 0x308e60: 0xae0d0034  sw          $t5, 0x34($s0)
    ctx->pc = 0x308e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 13));
    // 0x308e64: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x308e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x308e68: 0xaf8fc528  sw          $t7, -0x3AD8($gp)
    ctx->pc = 0x308e68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952232), GPR_U32(ctx, 15));
    // 0x308e6c: 0x0  nop
    ctx->pc = 0x308e6cu;
    // NOP
label_308e70:
    // 0x308e70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308e74: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x308e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x308e78: 0x0  nop
    ctx->pc = 0x308e78u;
    // NOP
    // 0x308e7c: 0x0  nop
    ctx->pc = 0x308e7cu;
    // NOP
    // 0x308e80: 0x0  nop
    ctx->pc = 0x308e80u;
    // NOP
    // 0x308e84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308E84u;
    {
        const bool branch_taken_0x308e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E84u;
        // 0x308e88: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e84) {
            ctx->pc = 0x308E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308e70;
        }
    }
    ctx->pc = 0x308E8Cu;
    // 0x308e8c: 0x2624ed40  addiu       $a0, $s1, -0x12C0
    ctx->pc = 0x308e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x308e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308e94: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x308e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x308e98: 0xaf030038  sw          $v1, 0x38($t8)
    ctx->pc = 0x308e98u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 3));
    // 0x308e9c: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x308e9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x308ea0: 0xac8e0038  sw          $t6, 0x38($a0)
    ctx->pc = 0x308ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 14));
    // 0x308ea4: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x308ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x308ea8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x308EA8u;
    {
        const bool branch_taken_0x308ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EA8u;
        // 0x308eac: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ea8) {
            ctx->pc = 0x308EE4u;
            goto label_308ee4;
        }
    }
    ctx->pc = 0x308EB0u;
    // 0x308eb0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x308eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308eb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x308eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ebc: 0x0  nop
    ctx->pc = 0x308ebcu;
    // NOP
label_308ec0:
    // 0x308ec0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308ec4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x308ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x308ec8: 0x0  nop
    ctx->pc = 0x308ec8u;
    // NOP
    // 0x308ecc: 0x0  nop
    ctx->pc = 0x308eccu;
    // NOP
    // 0x308ed0: 0x0  nop
    ctx->pc = 0x308ed0u;
    // NOP
    // 0x308ed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308ED4u;
    {
        const bool branch_taken_0x308ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308ED4u;
        // 0x308ed8: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ed4) {
            ctx->pc = 0x308EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308ec0;
        }
    }
    ctx->pc = 0x308EDCu;
    // 0x308edc: 0xacc3003c  sw          $v1, 0x3C($a2)
    ctx->pc = 0x308edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x308ee0: 0x2624ed40  addiu       $a0, $s1, -0x12C0
    ctx->pc = 0x308ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
label_308ee4:
    // 0x308ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ee8: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x308ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x308eec: 0xac8e003c  sw          $t6, 0x3C($a0)
    ctx->pc = 0x308eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 14));
    // 0x308ef0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x308ef0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ef4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x308ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x308ef8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x308EF8u;
    {
        const bool branch_taken_0x308ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EF8u;
        // 0x308efc: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ef8) {
            ctx->pc = 0x308F28u;
            goto label_308f28;
        }
    }
    ctx->pc = 0x308F00u;
    // 0x308f00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x308f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x308f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_308f08:
    // 0x308f08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308f0c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x308f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x308f10: 0x0  nop
    ctx->pc = 0x308f10u;
    // NOP
    // 0x308f14: 0x0  nop
    ctx->pc = 0x308f14u;
    // NOP
    // 0x308f18: 0x0  nop
    ctx->pc = 0x308f18u;
    // NOP
    // 0x308f1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308F1Cu;
    {
        const bool branch_taken_0x308f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F1Cu;
        // 0x308f20: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f1c) {
            ctx->pc = 0x308F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308f08;
        }
    }
    ctx->pc = 0x308F24u;
    // 0x308f24: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x308f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
label_308f28:
    // 0x308f28: 0x2624ed40  addiu       $a0, $s1, -0x12C0
    ctx->pc = 0x308f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x308f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f30: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x308f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x308f34: 0xac8e0040  sw          $t6, 0x40($a0)
    ctx->pc = 0x308f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 14));
    // 0x308f38: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x308f38u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f3c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x308f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x308f40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308F40u;
    {
        const bool branch_taken_0x308f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F40u;
        // 0x308f44: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f40) {
            ctx->pc = 0x308F78u;
            goto label_308f78;
        }
    }
    ctx->pc = 0x308F48u;
    // 0x308f48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x308f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x308f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_308f50:
    // 0x308f50: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308f54: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x308f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x308f58: 0x0  nop
    ctx->pc = 0x308f58u;
    // NOP
    // 0x308f5c: 0x0  nop
    ctx->pc = 0x308f5cu;
    // NOP
    // 0x308f60: 0x0  nop
    ctx->pc = 0x308f60u;
    // NOP
    // 0x308f64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308F64u;
    {
        const bool branch_taken_0x308f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F64u;
        // 0x308f68: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f64) {
            ctx->pc = 0x308F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308f50;
        }
    }
    ctx->pc = 0x308F6Cu;
    // 0x308f6c: 0xacc30044  sw          $v1, 0x44($a2)
    ctx->pc = 0x308f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
    // 0x308f70: 0x2624ed40  addiu       $a0, $s1, -0x12C0
    ctx->pc = 0x308f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x308f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308f78:
    // 0x308f78: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x308f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x308f7c: 0xac8e0044  sw          $t6, 0x44($a0)
    ctx->pc = 0x308f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 14));
    // 0x308f80: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x308f80u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f84: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x308f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x308f88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x308F88u;
    {
        const bool branch_taken_0x308f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F88u;
        // 0x308f8c: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f88) {
            ctx->pc = 0x308FB8u;
            goto label_308fb8;
        }
    }
    ctx->pc = 0x308F90u;
    // 0x308f90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x308f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x308f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_308f98:
    // 0x308f98: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308f9c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x308f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x308fa0: 0x0  nop
    ctx->pc = 0x308fa0u;
    // NOP
    // 0x308fa4: 0x0  nop
    ctx->pc = 0x308fa4u;
    // NOP
    // 0x308fa8: 0x0  nop
    ctx->pc = 0x308fa8u;
    // NOP
    // 0x308fac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308FACu;
    {
        const bool branch_taken_0x308fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FACu;
        // 0x308fb0: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fac) {
            ctx->pc = 0x308F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308f98;
        }
    }
    ctx->pc = 0x308FB4u;
    // 0x308fb4: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x308fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
label_308fb8:
    // 0x308fb8: 0x2624ed40  addiu       $a0, $s1, -0x12C0
    ctx->pc = 0x308fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x308fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308fc0: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x308fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x308fc4: 0xac8e0048  sw          $t6, 0x48($a0)
    ctx->pc = 0x308fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 14));
    // 0x308fc8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x308fc8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fcc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x308fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x308fd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x308FD0u;
    {
        const bool branch_taken_0x308fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FD0u;
        // 0x308fd4: 0xac83004c  sw          $v1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fd0) {
            ctx->pc = 0x309000u;
            goto label_309000;
        }
    }
    ctx->pc = 0x308FD8u;
    // 0x308fd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x308fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x308fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_308fe0:
    // 0x308fe0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308fe4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x308fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x308fe8: 0x0  nop
    ctx->pc = 0x308fe8u;
    // NOP
    // 0x308fec: 0x0  nop
    ctx->pc = 0x308fecu;
    // NOP
    // 0x308ff0: 0x0  nop
    ctx->pc = 0x308ff0u;
    // NOP
    // 0x308ff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308FF4u;
    {
        const bool branch_taken_0x308ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FF4u;
        // 0x308ff8: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ff4) {
            ctx->pc = 0x308FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308fe0;
        }
    }
    ctx->pc = 0x308FFCu;
    // 0x308ffc: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x308ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
label_309000:
    // 0x309000: 0x2630ed40  addiu       $s0, $s1, -0x12C0
    ctx->pc = 0x309000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x309004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309008: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30900c: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x30900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x309010: 0xae0e004c  sw          $t6, 0x4C($s0)
    ctx->pc = 0x309010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 14));
    // 0x309014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309018: 0xa203037e  sb          $v1, 0x37E($s0)
    ctx->pc = 0x309018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 894), (uint8_t)GPR_U32(ctx, 3));
    // 0x30901c: 0xa205037c  sb          $a1, 0x37C($s0)
    ctx->pc = 0x30901cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 892), (uint8_t)GPR_U32(ctx, 5));
    // 0x309020: 0xc0c26ca  jal         func_309B28
    ctx->pc = 0x309020u;
    SET_GPR_U32(ctx, 31, 0x309028u);
    ctx->pc = 0x309024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309020u;
    // 0x309024: 0xa202037d  sb          $v0, 0x37D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 893), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309B28u, 0x309020u, 0x309028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309028u;
label_309028:
    // 0x309028: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x30902c: 0xc0cc106  jal         func_330418
    ctx->pc = 0x30902Cu;
    SET_GPR_U32(ctx, 31, 0x309034u);
    ctx->pc = 0x309030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30902Cu;
    // 0x309030: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x30902Cu, 0x309034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309034u;
label_309034:
    // 0x309034: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x309034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x309038: 0xc0cc106  jal         func_330418
    ctx->pc = 0x309038u;
    SET_GPR_U32(ctx, 31, 0x309040u);
    ctx->pc = 0x30903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309038u;
    // 0x30903c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x309038u, 0x309040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309040u;
label_309040:
    // 0x309040: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x309040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x309044: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x309044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x309048: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x309048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x30904c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x30904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x309050: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x309050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x309054: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x309054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x309058: 0xaf85cb7c  sw          $a1, -0x3484($gp)
    ctx->pc = 0x309058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953852), GPR_U32(ctx, 5));
    // 0x30905c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x30905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x309060: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x309060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x309064: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x309064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x309068: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30906c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x30906cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x309070: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x309070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x309074: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x309074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x309078: 0xc0cbf82  jal         func_32FE08
    ctx->pc = 0x309078u;
    SET_GPR_U32(ctx, 31, 0x309080u);
    ctx->pc = 0x30907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309078u;
    // 0x30907c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE08u, 0x309078u, 0x309080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309080u;
label_309080:
    // 0x309080: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x309080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x309084: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x309084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x309088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30908c: 0x24a5f0d0  addiu       $a1, $a1, -0xF30
    ctx->pc = 0x30908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963408));
    // 0x309090: 0x24c60290  addiu       $a2, $a2, 0x290
    ctx->pc = 0x309090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 656));
    // 0x309094: 0xc0c25d4  jal         func_309750
    ctx->pc = 0x309094u;
    SET_GPR_U32(ctx, 31, 0x30909Cu);
    ctx->pc = 0x309098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309094u;
    // 0x309098: 0xff82cb80  sd          $v0, -0x3480($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294953856), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309750u, 0x309094u, 0x30909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30909Cu;
label_30909c:
    // 0x30909c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x30909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3090a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3090a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3090a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3090a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3090a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3090a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3090ac: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x3090acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x3090b0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x3090b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x3090b4: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x3090b8: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x3090b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x3090bc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x3090bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x3090c0: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x3090c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x3090c4: 0x3863000e  xori        $v1, $v1, 0xE
    ctx->pc = 0x3090c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
    // 0x3090c8: 0xa3900b  movn        $s2, $a1, $v1
    ctx->pc = 0x3090c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
label_3090cc:
    // 0x3090cc: 0x2630ed40  addiu       $s0, $s1, -0x12C0
    ctx->pc = 0x3090ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962496));
    // 0x3090d0: 0x8f85cb78  lw          $a1, -0x3488($gp)
    ctx->pc = 0x3090d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953848)));
    // 0x3090d4: 0xc0c25d8  jal         func_309760
    ctx->pc = 0x3090D4u;
    SET_GPR_U32(ctx, 31, 0x3090DCu);
    ctx->pc = 0x3090D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3090D4u;
    // 0x3090d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309760u, 0x3090D4u, 0x3090DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3090DCu;
label_3090dc:
    // 0x3090dc: 0xc0c25da  jal         func_309768
    ctx->pc = 0x3090DCu;
    SET_GPR_U32(ctx, 31, 0x3090E4u);
    ctx->pc = 0x3090E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3090DCu;
    // 0x3090e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309768u, 0x3090DCu, 0x3090E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3090E4u;
label_3090e4:
    // 0x3090e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3090e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3090e8:
    // 0x3090e8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x3090e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3090ec: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x3090ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3090f0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x3090f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3090f4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x3090f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3090f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3090F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090F8u;
        // 0x3090fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3090F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309100u;
}
