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

// Function: sub_00209D58
// Address: 0x209d58 - 0x209f38
void sub_00209D58_0x209d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209D58_0x209d58");
#endif

    switch (ctx->pc) {
        case 0x209d84u: goto label_209d84;
        case 0x209d9cu: goto label_209d9c;
        case 0x209dd0u: goto label_209dd0;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e6cu: goto label_209e6c;
        case 0x209edcu: goto label_209edc;
        case 0x209ee4u: goto label_209ee4;
        case 0x209ef8u: goto label_209ef8;
        case 0x209f00u: goto label_209f00;
        case 0x209f14u: goto label_209f14;
        default: break;
    }

    ctx->pc = 0x209d58u;

    // 0x209d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209d60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209d64: 0x241108f0  addiu       $s1, $zero, 0x8F0
    ctx->pc = 0x209d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x209d68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209d6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x209d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x209d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x209d74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x209d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x209d78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x209d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x209d7c: 0xc09d940  jal         func_276500
    ctx->pc = 0x209D7Cu;
    SET_GPR_U32(ctx, 31, 0x209D84u);
    ctx->pc = 0x209D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D7Cu;
    // 0x209d80: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x209D7Cu, 0x209D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D84u;
label_209d84:
    // 0x209d84: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x209d88: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x209d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x209d8c: 0x24708858  addiu       $s0, $v1, -0x77A8
    ctx->pc = 0x209d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x209d90: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x209d90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x209d94: 0xc07e242  jal         func_1F8908
    ctx->pc = 0x209D94u;
    SET_GPR_U32(ctx, 31, 0x209D9Cu);
    ctx->pc = 0x209D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D94u;
    // 0x209d98: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8908u, 0x209D94u, 0x209D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D9Cu;
label_209d9c:
    // 0x209d9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209D9Cu;
    {
        const bool branch_taken_0x209d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D9Cu;
        // 0x209da0: 0x8f829730  lw          $v0, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d9c) {
            ctx->pc = 0x209DB4u;
            goto label_209db4;
        }
    }
    ctx->pc = 0x209DA4u;
    // 0x209da4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x209da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x209da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209dac: 0xa06283d6  sb          $v0, -0x7C2A($v1)
    ctx->pc = 0x209dacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A83D6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D6u, _value); } while (0);
    // 0x209db0: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x209db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_209db4:
    // 0x209db4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x209db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209db8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x209dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209dc0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x209DC0u;
    {
        const bool branch_taken_0x209dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DC0u;
        // 0x209dc4: 0xaf829730  sw          $v0, -0x68D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dc0) {
            ctx->pc = 0x209E7Cu;
            goto label_209e7c;
        }
    }
    ctx->pc = 0x209DC8u;
    // 0x209dc8: 0xc07c6be  jal         func_1F1AF8
    ctx->pc = 0x209DC8u;
    SET_GPR_U32(ctx, 31, 0x209DD0u);
    ctx->pc = 0x209DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DC8u;
    // 0x209dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1AF8u, 0x209DC8u, 0x209DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DD0u;
label_209dd0:
    // 0x209dd0: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x209DD0u;
    {
        const bool branch_taken_0x209dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209dd0) {
            ctx->pc = 0x209DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209DD0u;
            // 0x209dd4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E7Cu;
            goto label_209e7c;
        }
    }
    ctx->pc = 0x209DD8u;
    // 0x209dd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209ddc: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x209de0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x209de0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x209de4: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x209de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x209de8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x209DE8u;
    {
        const bool branch_taken_0x209de8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x209DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DE8u;
        // 0x209dec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209de8) {
            ctx->pc = 0x209DF8u;
            goto label_209df8;
        }
    }
    ctx->pc = 0x209DF0u;
    // 0x209df0: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x209df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x209df4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x209df4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209df8:
    // 0x209df8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x209DF8u;
    {
        const bool branch_taken_0x209df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209df8) {
            ctx->pc = 0x209DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209DF8u;
            // 0x209dfc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E14u;
            goto label_209e14;
        }
    }
    ctx->pc = 0x209E00u;
    // 0x209e00: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x209e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x209e04: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x209e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x209e08: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x209E08u;
    {
        const bool branch_taken_0x209e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e08) {
            ctx->pc = 0x209E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E08u;
            // 0x209e0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E7Cu;
            goto label_209e7c;
        }
    }
    ctx->pc = 0x209E10u;
    // 0x209e10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209e14:
    // 0x209e14: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x209e18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E28u;
            goto label_209e28;
        }
    }
    ctx->pc = 0x209E20u;
    // 0x209e20: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x209e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x209e24: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209e28:
    // 0x209e28: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x209E28u;
    {
        const bool branch_taken_0x209e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e28) {
            ctx->pc = 0x209E54u;
            goto label_209e54;
        }
    }
    ctx->pc = 0x209E30u;
    // 0x209e30: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x209E30u;
    {
        const bool branch_taken_0x209e30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x209E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E30u;
        // 0x209e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e30) {
            ctx->pc = 0x209E40u;
            goto label_209e40;
        }
    }
    ctx->pc = 0x209E38u;
    // 0x209e38: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x209e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x209e3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x209e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209e40:
    // 0x209e40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209E40u;
    {
        const bool branch_taken_0x209e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E40u;
        // 0x209e44: 0x8f82a850  lw          $v0, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e40) {
            ctx->pc = 0x209E54u;
            goto label_209e54;
        }
    }
    ctx->pc = 0x209E48u;
    // 0x209e48: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x209e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x209e4c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x209E4Cu;
    {
        const bool branch_taken_0x209e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e4c) {
            ctx->pc = 0x209E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E4Cu;
            // 0x209e50: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E7Cu;
            goto label_209e7c;
        }
    }
    ctx->pc = 0x209E54u;
label_209e54:
    // 0x209e54: 0xc09d940  jal         func_276500
    ctx->pc = 0x209E54u;
    SET_GPR_U32(ctx, 31, 0x209E5Cu);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x209E54u, 0x209E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E5Cu;
label_209e5c:
    // 0x209e5c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x209E5Cu;
    {
        const bool branch_taken_0x209e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e5c) {
            ctx->pc = 0x209E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E5Cu;
            // 0x209e60: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E80u;
            goto label_209e80;
        }
    }
    ctx->pc = 0x209E64u;
    // 0x209e64: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x209E64u;
    SET_GPR_U32(ctx, 31, 0x209E6Cu);
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x209E64u, 0x209E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E6Cu;
label_209e6c:
    // 0x209e6c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x209e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x209e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209E70u;
    {
        const bool branch_taken_0x209e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E70u;
        // 0x209e74: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e70) {
            ctx->pc = 0x209E80u;
            goto label_209e80;
        }
    }
    ctx->pc = 0x209E78u;
    // 0x209e78: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209e7c:
    // 0x209e7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x209e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209e80:
    // 0x209e80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x209E80u;
    {
        const bool branch_taken_0x209e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E80u;
        // 0x209e84: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e80) {
            ctx->pc = 0x209F14u;
            goto label_209f14;
        }
    }
    ctx->pc = 0x209E88u;
    // 0x209e88: 0x244583c0  addiu       $a1, $v0, -0x7C40
    ctx->pc = 0x209e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x209e8c: 0x90a30014  lbu         $v1, 0x14($a1)
    ctx->pc = 0x209e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x209e90: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x209E90u;
    {
        const bool branch_taken_0x209e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e90) {
            ctx->pc = 0x209EF0u;
            goto label_209ef0;
        }
    }
    ctx->pc = 0x209E98u;
    // 0x209e98: 0x928401bc  lbu         $a0, 0x1BC($s4)
    ctx->pc = 0x209e98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x209e9c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209E9Cu;
    {
        const bool branch_taken_0x209e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E9Cu;
        // 0x209ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e9c) {
            ctx->pc = 0x209EB0u;
            goto label_209eb0;
        }
    }
    ctx->pc = 0x209EA4u;
    // 0x209ea4: 0x90a20015  lbu         $v0, 0x15($a1)
    ctx->pc = 0x209ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x209ea8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x209EA8u;
    {
        const bool branch_taken_0x209ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EA8u;
        // 0x209eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ea8) {
            ctx->pc = 0x209ED4u;
            goto label_209ed4;
        }
    }
    ctx->pc = 0x209EB0u;
label_209eb0:
    // 0x209eb0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x209EB0u;
    {
        const bool branch_taken_0x209eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x209eb0) {
            ctx->pc = 0x209EF0u;
            goto label_209ef0;
        }
    }
    ctx->pc = 0x209EB8u;
    // 0x209eb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x209ebc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x209ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x209ec0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209EC0u;
    {
        const bool branch_taken_0x209ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209ec0) {
            ctx->pc = 0x209ED4u;
            goto label_209ed4;
        }
    }
    ctx->pc = 0x209EC8u;
    // 0x209ec8: 0x90a20015  lbu         $v0, 0x15($a1)
    ctx->pc = 0x209ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x209ecc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209ECCu;
    {
        const bool branch_taken_0x209ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209ecc) {
            ctx->pc = 0x209EF0u;
            goto label_209ef0;
        }
    }
    ctx->pc = 0x209ED4u;
label_209ed4:
    // 0x209ed4: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x209ED4u;
    SET_GPR_U32(ctx, 31, 0x209EDCu);
    ctx->pc = 0x209ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209ED4u;
    // 0x209ed8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x209ED4u, 0x209EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EDCu;
label_209edc:
    // 0x209edc: 0xc082162  jal         func_208588
    ctx->pc = 0x209EDCu;
    SET_GPR_U32(ctx, 31, 0x209EE4u);
    ctx->pc = 0x209EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EDCu;
    // 0x209ee0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209EDCu, 0x209EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EE4u;
label_209ee4:
    // 0x209ee4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x209EE4u;
    {
        const bool branch_taken_0x209ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209ee4) {
            ctx->pc = 0x209F0Cu;
            goto label_209f0c;
        }
    }
    ctx->pc = 0x209EECu;
    // 0x209eec: 0x0  nop
    ctx->pc = 0x209eecu;
    // NOP
label_209ef0:
    // 0x209ef0: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x209EF0u;
    SET_GPR_U32(ctx, 31, 0x209EF8u);
    ctx->pc = 0x209EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EF0u;
    // 0x209ef4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x209EF0u, 0x209EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EF8u;
label_209ef8:
    // 0x209ef8: 0xc082162  jal         func_208588
    ctx->pc = 0x209EF8u;
    SET_GPR_U32(ctx, 31, 0x209F00u);
    ctx->pc = 0x209EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EF8u;
    // 0x209efc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209EF8u, 0x209F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F00u;
label_209f00:
    // 0x209f00: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x209f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x209f04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209f08: 0xaf829730  sw          $v0, -0x68D0($gp)
    ctx->pc = 0x209f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
label_209f0c:
    // 0x209f0c: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x209F0Cu;
    SET_GPR_U32(ctx, 31, 0x209F14u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x209F0Cu, 0x209F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F14u;
label_209f14:
    // 0x209f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209f20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209f20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209f24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x209f24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209f28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x209f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x209f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x209F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F2Cu;
        // 0x209f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F34u;
    // 0x209f34: 0x0  nop
    ctx->pc = 0x209f34u;
    // NOP
    ctx->pc = 0x209f38u;
}
