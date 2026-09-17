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

// Function: sub_00214D38
// Address: 0x214d38 - 0x214ef0
void sub_00214D38_0x214d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D38_0x214d38");
#endif

    switch (ctx->pc) {
        case 0x214d78u: goto label_214d78;
        case 0x214e10u: goto label_214e10;
        case 0x214e34u: goto label_214e34;
        case 0x214e54u: goto label_214e54;
        case 0x214e64u: goto label_214e64;
        case 0x214e6cu: goto label_214e6c;
        case 0x214eb8u: goto label_214eb8;
        case 0x214ec0u: goto label_214ec0;
        case 0x214ec8u: goto label_214ec8;
        case 0x214ed0u: goto label_214ed0;
        default: break;
    }

    ctx->pc = 0x214d38u;

    // 0x214d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214d3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214d44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214d4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214d54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x214d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214d5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214d64: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x214D64u;
    {
        const bool branch_taken_0x214d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D64u;
        // 0x214d68: 0x86320042  lh          $s2, 0x42($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d64) {
            ctx->pc = 0x214ED0u;
            goto label_214ed0;
        }
    }
    ctx->pc = 0x214D6Cu;
    // 0x214d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d70: 0xc085238  jal         func_2148E0
    ctx->pc = 0x214D70u;
    SET_GPR_U32(ctx, 31, 0x214D78u);
    ctx->pc = 0x214D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D70u;
    // 0x214d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x214D70u, 0x214D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D78u;
label_214d78:
    // 0x214d78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x214d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d7c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x214d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x214d80: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x214D80u;
    {
        const bool branch_taken_0x214d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D80u;
        // 0x214d84: 0x28620042  slti        $v0, $v1, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d80) {
            ctx->pc = 0x214E78u;
            goto label_214e78;
        }
    }
    ctx->pc = 0x214D88u;
    // 0x214d88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214D88u;
    {
        const bool branch_taken_0x214d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D88u;
        // 0x214d8c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d88) {
            ctx->pc = 0x214DB0u;
            goto label_214db0;
        }
    }
    ctx->pc = 0x214D90u;
    // 0x214d90: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x214d94: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x214D94u;
    {
        const bool branch_taken_0x214d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D94u;
        // 0x214d98: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d94) {
            ctx->pc = 0x214DE0u;
            goto label_214de0;
        }
    }
    ctx->pc = 0x214D9Cu;
    // 0x214d9c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x214D9Cu;
    {
        const bool branch_taken_0x214d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214d9c) {
            ctx->pc = 0x214DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D9Cu;
            // 0x214da0: 0x86230012  lh          $v1, 0x12($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214DF8u;
            goto label_214df8;
        }
    }
    ctx->pc = 0x214DA4u;
    // 0x214da4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x214DA4u;
    {
        const bool branch_taken_0x214da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA4u;
        // 0x214da8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da4) {
            ctx->pc = 0x214E98u;
            goto label_214e98;
        }
    }
    ctx->pc = 0x214DACu;
    // 0x214dac: 0x0  nop
    ctx->pc = 0x214dacu;
    // NOP
label_214db0:
    // 0x214db0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x214DB0u;
    {
        const bool branch_taken_0x214db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DB0u;
        // 0x214db4: 0x28620047  slti        $v0, $v1, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)71) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214db0) {
            ctx->pc = 0x214E78u;
            goto label_214e78;
        }
    }
    ctx->pc = 0x214DB8u;
    // 0x214db8: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x214DB8u;
    {
        const bool branch_taken_0x214db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214db8) {
            ctx->pc = 0x214DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214DB8u;
            // 0x214dbc: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214E98u;
            goto label_214e98;
        }
    }
    ctx->pc = 0x214DC0u;
    // 0x214dc0: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x214dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x214dc4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x214DC4u;
    {
        const bool branch_taken_0x214dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DC4u;
        // 0x214dc8: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dc4) {
            ctx->pc = 0x214E18u;
            goto label_214e18;
        }
    }
    ctx->pc = 0x214DCCu;
    // 0x214dcc: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x214DCCu;
    {
        const bool branch_taken_0x214dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214dcc) {
            ctx->pc = 0x214DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214DCCu;
            // 0x214dd0: 0x9202002d  lbu         $v0, 0x2D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214E40u;
            goto label_214e40;
        }
    }
    ctx->pc = 0x214DD4u;
    // 0x214dd4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x214DD4u;
    {
        const bool branch_taken_0x214dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DD4u;
        // 0x214dd8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dd4) {
            ctx->pc = 0x214E98u;
            goto label_214e98;
        }
    }
    ctx->pc = 0x214DDCu;
    // 0x214ddc: 0x0  nop
    ctx->pc = 0x214ddcu;
    // NOP
label_214de0:
    // 0x214de0: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x214de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x214de4: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x214de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x214de8: 0x50620039  beql        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x214DE8u;
    {
        const bool branch_taken_0x214de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214de8) {
            ctx->pc = 0x214DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214DE8u;
            // 0x214dec: 0x2412004b  addiu       $s2, $zero, 0x4B (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214ED0u;
            goto label_214ed0;
        }
    }
    ctx->pc = 0x214DF0u;
    // 0x214df0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x214DF0u;
    {
        const bool branch_taken_0x214df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DF0u;
        // 0x214df4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214df0) {
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214DF8u;
label_214df8:
    // 0x214df8: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x214df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x214dfc: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x214DFCu;
    {
        const bool branch_taken_0x214dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214dfc) {
            ctx->pc = 0x214E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214DFCu;
            // 0x214e00: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214E04u;
    // 0x214e04: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x214e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x214e08: 0xc086b22  jal         func_21AC88
    ctx->pc = 0x214E08u;
    SET_GPR_U32(ctx, 31, 0x214E10u);
    ctx->pc = 0x214E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E08u;
    // 0x214e0c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC88u, 0x214E08u, 0x214E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E10u;
label_214e10:
    // 0x214e10: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x214E10u;
    {
        const bool branch_taken_0x214e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E10u;
        // 0x214e14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e10) {
            ctx->pc = 0x214ED0u;
            goto label_214ed0;
        }
    }
    ctx->pc = 0x214E18u;
label_214e18:
    // 0x214e18: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x214e1c: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x214e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x214e20: 0x5482002c  bnel        $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x214E20u;
    {
        const bool branch_taken_0x214e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x214e20) {
            ctx->pc = 0x214E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214E20u;
            // 0x214e24: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214E28u;
    // 0x214e28: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x214e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x214e2c: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x214E2Cu;
    SET_GPR_U32(ctx, 31, 0x214E34u);
    ctx->pc = 0x214E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E2Cu;
    // 0x214e30: 0x24120044  addiu       $s2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x214E2Cu, 0x214E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E34u;
label_214e34:
    // 0x214e34: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x214e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x214e38: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x214E38u;
    {
        const bool branch_taken_0x214e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E38u;
        // 0x214e3c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e38) {
            ctx->pc = 0x214ED0u;
            goto label_214ed0;
        }
    }
    ctx->pc = 0x214E40u;
label_214e40:
    // 0x214e40: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x214e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x214e44: 0x54820023  bnel        $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x214E44u;
    {
        const bool branch_taken_0x214e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x214e44) {
            ctx->pc = 0x214E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214E44u;
            // 0x214e48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214E4Cu;
    // 0x214e4c: 0xc086644  jal         func_219910
    ctx->pc = 0x214E4Cu;
    SET_GPR_U32(ctx, 31, 0x214E54u);
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x214E4Cu, 0x214E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E54u;
label_214e54:
    // 0x214e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e5c: 0xc086308  jal         func_218C20
    ctx->pc = 0x214E5Cu;
    SET_GPR_U32(ctx, 31, 0x214E64u);
    ctx->pc = 0x214E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E5Cu;
    // 0x214e60: 0xa6320042  sh          $s2, 0x42($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C20u, 0x214E5Cu, 0x214E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E64u;
label_214e64:
    // 0x214e64: 0xc0b27de  jal         func_2C9F78
    ctx->pc = 0x214E64u;
    SET_GPR_U32(ctx, 31, 0x214E6Cu);
    ctx->pc = 0x214E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E64u;
    // 0x214e68: 0xa6220040  sh          $v0, 0x40($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F78u, 0x214E64u, 0x214E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E6Cu;
label_214e6c:
    // 0x214e6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x214E6Cu;
    {
        const bool branch_taken_0x214e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E6Cu;
        // 0x214e70: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e6c) {
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214E74u;
    // 0x214e74: 0x0  nop
    ctx->pc = 0x214e74u;
    // NOP
label_214e78:
    // 0x214e78: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x214e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x214e7c: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x214e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x214e80: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x214E80u;
    {
        const bool branch_taken_0x214e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E80u;
        // 0x214e84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e80) {
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214E88u;
    // 0x214e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214e8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x214E8Cu;
    {
        const bool branch_taken_0x214e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E8Cu;
        // 0x214e90: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e8c) {
            ctx->pc = 0x214ED0u;
            goto label_214ed0;
        }
    }
    ctx->pc = 0x214E94u;
    // 0x214e94: 0x0  nop
    ctx->pc = 0x214e94u;
    // NOP
label_214e98:
    // 0x214e98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x214E98u;
    {
        const bool branch_taken_0x214e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E98u;
        // 0x214e9c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e98) {
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214EA0u;
    // 0x214ea0: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x214ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x214ea4: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x214ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x214ea8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x214EA8u;
    {
        const bool branch_taken_0x214ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214ea8) {
            ctx->pc = 0x214EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214EA8u;
            // 0x214eac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214ED4u;
            goto label_214ed4;
        }
    }
    ctx->pc = 0x214EB0u;
    // 0x214eb0: 0xc086f22  jal         func_21BC88
    ctx->pc = 0x214EB0u;
    SET_GPR_U32(ctx, 31, 0x214EB8u);
    ctx->pc = 0x214EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EB0u;
    // 0x214eb4: 0x2412004b  addiu       $s2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BC88u, 0x214EB0u, 0x214EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EB8u;
label_214eb8:
    // 0x214eb8: 0xc086f28  jal         func_21BCA0
    ctx->pc = 0x214EB8u;
    SET_GPR_U32(ctx, 31, 0x214EC0u);
    ctx->pc = 0x214EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EB8u;
    // 0x214ebc: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BCA0u, 0x214EB8u, 0x214EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EC0u;
label_214ec0:
    // 0x214ec0: 0xc086b42  jal         func_21AD08
    ctx->pc = 0x214EC0u;
    SET_GPR_U32(ctx, 31, 0x214EC8u);
    ctx->pc = 0x214EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EC0u;
    // 0x214ec4: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD08u, 0x214EC0u, 0x214EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EC8u;
label_214ec8:
    // 0x214ec8: 0xc07c47a  jal         func_1F11E8
    ctx->pc = 0x214EC8u;
    SET_GPR_U32(ctx, 31, 0x214ED0u);
    ctx->pc = 0x214ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EC8u;
    // 0x214ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11E8u, 0x214EC8u, 0x214ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214ED0u;
label_214ed0:
    // 0x214ed0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x214ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_214ed4:
    // 0x214ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214edc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x214EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EE8u;
        // 0x214eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214EF0u;
}
