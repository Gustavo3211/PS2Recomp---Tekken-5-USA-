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

// Function: sub_00242D10
// Address: 0x242d10 - 0x242e58
void sub_00242D10_0x242d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242D10_0x242d10");
#endif

    switch (ctx->pc) {
        case 0x242d60u: goto label_242d60;
        case 0x242d6cu: goto label_242d6c;
        case 0x242da0u: goto label_242da0;
        case 0x242dacu: goto label_242dac;
        case 0x242de0u: goto label_242de0;
        case 0x242decu: goto label_242dec;
        case 0x242e20u: goto label_242e20;
        case 0x242e2cu: goto label_242e2c;
        default: break;
    }

    ctx->pc = 0x242d10u;

    // 0x242d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242d14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x242d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x242d18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x242d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x242d1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x242d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x242d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x242d24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x242d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x242d30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242d34: 0x1682003f  bne         $s4, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x242D34u;
    {
        const bool branch_taken_0x242d34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x242D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D34u;
        // 0x242d38: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d34) {
            ctx->pc = 0x242E34u;
            goto label_242e34;
        }
    }
    ctx->pc = 0x242D3Cu;
    // 0x242d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242d40: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242D40u;
    {
        const bool branch_taken_0x242d40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x242D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D40u;
        // 0x242d44: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d40) {
            ctx->pc = 0x242D78u;
            goto label_242d78;
        }
    }
    ctx->pc = 0x242D48u;
    // 0x242d48: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x242d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x242d4c: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x242d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x242d50: 0x24503b30  addiu       $s0, $v0, 0x3B30
    ctx->pc = 0x242d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15152));
    // 0x242d54: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x242d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242d58: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x242d5c: 0x0  nop
    ctx->pc = 0x242d5cu;
    // NOP
label_242d60:
    // 0x242d60: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x242d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x242d64: 0xc0c0ff6  jal         func_303FD8
    ctx->pc = 0x242D64u;
    SET_GPR_U32(ctx, 31, 0x242D6Cu);
    ctx->pc = 0x242D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D64u;
    // 0x242d68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD8u, 0x242D64u, 0x242D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D6Cu;
label_242d6c:
    // 0x242d6c: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x242D6Cu;
    {
        const bool branch_taken_0x242d6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x242D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D6Cu;
        // 0x242d70: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d6c) {
            ctx->pc = 0x242D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242d60;
        }
    }
    ctx->pc = 0x242D74u;
    // 0x242d74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x242d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_242d78:
    // 0x242d78: 0x5682002f  bnel        $s4, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x242D78u;
    {
        const bool branch_taken_0x242d78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x242d78) {
            ctx->pc = 0x242D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D78u;
            // 0x242d7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E38u;
            goto label_242e38;
        }
    }
    ctx->pc = 0x242D80u;
    // 0x242d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242d84: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x242D84u;
    {
        const bool branch_taken_0x242d84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x242D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D84u;
        // 0x242d88: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d84) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242D8Cu;
    // 0x242d8c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x242d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x242d90: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x242d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x242d94: 0x24504a30  addiu       $s0, $v0, 0x4A30
    ctx->pc = 0x242d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x242d98: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x242d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242d9c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_242da0:
    // 0x242da0: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x242da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x242da4: 0xc0c0ff6  jal         func_303FD8
    ctx->pc = 0x242DA4u;
    SET_GPR_U32(ctx, 31, 0x242DACu);
    ctx->pc = 0x242DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DA4u;
    // 0x242da8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD8u, 0x242DA4u, 0x242DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DACu;
label_242dac:
    // 0x242dac: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x242DACu;
    {
        const bool branch_taken_0x242dac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x242DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DACu;
        // 0x242db0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dac) {
            ctx->pc = 0x242DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242da0;
        }
    }
    ctx->pc = 0x242DB4u;
    // 0x242db4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x242db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_242db8:
    // 0x242db8: 0x5682001f  bnel        $s4, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x242DB8u;
    {
        const bool branch_taken_0x242db8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x242db8) {
            ctx->pc = 0x242DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DB8u;
            // 0x242dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E38u;
            goto label_242e38;
        }
    }
    ctx->pc = 0x242DC0u;
    // 0x242dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242dc4: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x242DC4u;
    {
        const bool branch_taken_0x242dc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x242DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DC4u;
        // 0x242dc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dc4) {
            ctx->pc = 0x242DF8u;
            goto label_242df8;
        }
    }
    ctx->pc = 0x242DCCu;
    // 0x242dcc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x242dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x242dd0: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x242dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x242dd4: 0x24504e30  addiu       $s0, $v0, 0x4E30
    ctx->pc = 0x242dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
    // 0x242dd8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x242dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242ddc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x242ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_242de0:
    // 0x242de0: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x242de4: 0xc0c0ff6  jal         func_303FD8
    ctx->pc = 0x242DE4u;
    SET_GPR_U32(ctx, 31, 0x242DECu);
    ctx->pc = 0x242DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DE4u;
    // 0x242de8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD8u, 0x242DE4u, 0x242DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DECu;
label_242dec:
    // 0x242dec: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x242DECu;
    {
        const bool branch_taken_0x242dec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x242DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DECu;
        // 0x242df0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dec) {
            ctx->pc = 0x242DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242de0;
        }
    }
    ctx->pc = 0x242DF4u;
    // 0x242df4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x242df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_242df8:
    // 0x242df8: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x242DF8u;
    {
        const bool branch_taken_0x242df8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x242DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF8u;
        // 0x242dfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242df8) {
            ctx->pc = 0x242E38u;
            goto label_242e38;
        }
    }
    ctx->pc = 0x242E00u;
    // 0x242e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e04: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242E04u;
    {
        const bool branch_taken_0x242e04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x242e04) {
            ctx->pc = 0x242E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E04u;
            // 0x242e08: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E3Cu;
            goto label_242e3c;
        }
    }
    ctx->pc = 0x242E0Cu;
    // 0x242e0c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x242e10: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x242e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x242e14: 0x24505230  addiu       $s0, $v0, 0x5230
    ctx->pc = 0x242e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21040));
    // 0x242e18: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x242e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242e1c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x242e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_242e20:
    // 0x242e20: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x242e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x242e24: 0xc0c0ff6  jal         func_303FD8
    ctx->pc = 0x242E24u;
    SET_GPR_U32(ctx, 31, 0x242E2Cu);
    ctx->pc = 0x242E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E24u;
    // 0x242e28: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD8u, 0x242E24u, 0x242E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E2Cu;
label_242e2c:
    // 0x242e2c: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x242E2Cu;
    {
        const bool branch_taken_0x242e2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x242E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E2Cu;
        // 0x242e30: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e2c) {
            ctx->pc = 0x242E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242e20;
        }
    }
    ctx->pc = 0x242E34u;
label_242e34:
    // 0x242e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242e38:
    // 0x242e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_242e3c:
    // 0x242e3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242e40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x242e44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x242e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242e48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x242e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x242e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x242E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E4Cu;
        // 0x242e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242E54u;
    // 0x242e54: 0x0  nop
    ctx->pc = 0x242e54u;
    // NOP
    ctx->pc = 0x242e58u;
}
