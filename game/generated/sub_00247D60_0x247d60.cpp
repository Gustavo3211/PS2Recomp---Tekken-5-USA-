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

// Function: sub_00247D60
// Address: 0x247d60 - 0x247e98
void sub_00247D60_0x247d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247D60_0x247d60");
#endif

    switch (ctx->pc) {
        case 0x247dc0u: goto label_247dc0;
        case 0x247e28u: goto label_247e28;
        case 0x247e4cu: goto label_247e4c;
        default: break;
    }

    ctx->pc = 0x247d60u;

    // 0x247d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247d64: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x247d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x247d68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x247d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x247d6c: 0x3c140016  lui         $s4, 0x16
    ctx->pc = 0x247d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)22 << 16));
    // 0x247d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247d74: 0x26916fe0  addiu       $s1, $s4, 0x6FE0
    ctx->pc = 0x247d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 28640));
    // 0x247d78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x247d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x247d7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x247d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247d84: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x247d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x247d88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247d8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x247d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x247d90: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x247d90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x166FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FF8u, _value); } while (0);
    // 0x247d94: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x247d94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x166FECu));
    // 0x247d98: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x247d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x247d9c: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x247d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x247da0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x247da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247da4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x247da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247da8: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x247da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
    // 0x247dac: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x247dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x247db0: 0x54600032  bnel        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x247DB0u;
    {
        const bool branch_taken_0x247db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247db0) {
            ctx->pc = 0x247DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247DB0u;
            // 0x247db4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247E7Cu;
            goto label_247e7c;
        }
    }
    ctx->pc = 0x247DB8u;
    // 0x247db8: 0xc082fa8  jal         func_20BEA0
    ctx->pc = 0x247DB8u;
    SET_GPR_U32(ctx, 31, 0x247DC0u);
    ctx->pc = 0x20BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BEA0u, 0x247DB8u, 0x247DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DC0u;
label_247dc0:
    // 0x247dc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x247DC0u;
    {
        const bool branch_taken_0x247dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DC0u;
        // 0x247dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247dc0) {
            ctx->pc = 0x247DCCu;
            goto label_247dcc;
        }
    }
    ctx->pc = 0x247DC8u;
    // 0x247dc8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x247dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_247dcc:
    // 0x247dcc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x247dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x247dd0: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x247DD0u;
    {
        const bool branch_taken_0x247dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247dd0) {
            ctx->pc = 0x247DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247DD0u;
            // 0x247dd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247E7Cu;
            goto label_247e7c;
        }
    }
    ctx->pc = 0x247DD8u;
    // 0x247dd8: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x247dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x247ddc: 0x5c400027  bgtzl       $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x247DDCu;
    {
        const bool branch_taken_0x247ddc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x247ddc) {
            ctx->pc = 0x247DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247DDCu;
            // 0x247de0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247E7Cu;
            goto label_247e7c;
        }
    }
    ctx->pc = 0x247DE4u;
    // 0x247de4: 0x920201f0  lbu         $v0, 0x1F0($s0)
    ctx->pc = 0x247de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x247de8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x247DE8u;
    {
        const bool branch_taken_0x247de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247de8) {
            ctx->pc = 0x247DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247DE8u;
            // 0x247dec: 0x924201f0  lbu         $v0, 0x1F0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247E04u;
            goto label_247e04;
        }
    }
    ctx->pc = 0x247DF0u;
    // 0x247df0: 0x96020160  lhu         $v0, 0x160($s0)
    ctx->pc = 0x247df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x247df4: 0x2c420016  sltiu       $v0, $v0, 0x16
    ctx->pc = 0x247df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x247df8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x247DF8u;
    {
        const bool branch_taken_0x247df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DF8u;
        // 0x247dfc: 0x26826fe0  addiu       $v0, $s4, 0x6FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247df8) {
            ctx->pc = 0x247E68u;
            goto label_247e68;
        }
    }
    ctx->pc = 0x247E00u;
    // 0x247e00: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x247e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
label_247e04:
    // 0x247e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247E04u;
    {
        const bool branch_taken_0x247e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E04u;
        // 0x247e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e04) {
            ctx->pc = 0x247E20u;
            goto label_247e20;
        }
    }
    ctx->pc = 0x247E0Cu;
    // 0x247e0c: 0x96420160  lhu         $v0, 0x160($s2)
    ctx->pc = 0x247e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x247e10: 0x2c420016  sltiu       $v0, $v0, 0x16
    ctx->pc = 0x247e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x247e14: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x247E14u;
    {
        const bool branch_taken_0x247e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E14u;
        // 0x247e18: 0x26826fe0  addiu       $v0, $s4, 0x6FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e14) {
            ctx->pc = 0x247E68u;
            goto label_247e68;
        }
    }
    ctx->pc = 0x247E1Cu;
    // 0x247e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e20:
    // 0x247e20: 0xc08435a  jal         func_210D68
    ctx->pc = 0x247E20u;
    SET_GPR_U32(ctx, 31, 0x247E28u);
    ctx->pc = 0x247E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E20u;
    // 0x247e24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210D68u, 0x247E20u, 0x247E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E28u;
label_247e28:
    // 0x247e28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247E28u;
    {
        const bool branch_taken_0x247e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E28u;
        // 0x247e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e28) {
            ctx->pc = 0x247E44u;
            goto label_247e44;
        }
    }
    ctx->pc = 0x247E30u;
    // 0x247e30: 0x96020160  lhu         $v0, 0x160($s0)
    ctx->pc = 0x247e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x247e34: 0x2c420016  sltiu       $v0, $v0, 0x16
    ctx->pc = 0x247e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x247e38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x247E38u;
    {
        const bool branch_taken_0x247e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E38u;
        // 0x247e3c: 0x26826fe0  addiu       $v0, $s4, 0x6FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e38) {
            ctx->pc = 0x247E68u;
            goto label_247e68;
        }
    }
    ctx->pc = 0x247E40u;
    // 0x247e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e44:
    // 0x247e44: 0xc08435a  jal         func_210D68
    ctx->pc = 0x247E44u;
    SET_GPR_U32(ctx, 31, 0x247E4Cu);
    ctx->pc = 0x247E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E44u;
    // 0x247e48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210D68u, 0x247E44u, 0x247E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E4Cu;
label_247e4c:
    // 0x247e4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x247E4Cu;
    {
        const bool branch_taken_0x247e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E4Cu;
        // 0x247e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e4c) {
            ctx->pc = 0x247E7Cu;
            goto label_247e7c;
        }
    }
    ctx->pc = 0x247E54u;
    // 0x247e54: 0x96420160  lhu         $v0, 0x160($s2)
    ctx->pc = 0x247e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x247e58: 0x2c420016  sltiu       $v0, $v0, 0x16
    ctx->pc = 0x247e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x247e5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x247E5Cu;
    {
        const bool branch_taken_0x247e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E5Cu;
        // 0x247e60: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e5c) {
            ctx->pc = 0x247E80u;
            goto label_247e80;
        }
    }
    ctx->pc = 0x247E64u;
    // 0x247e64: 0x26826fe0  addiu       $v0, $s4, 0x6FE0
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28640));
label_247e68:
    // 0x247e68: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x247e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x247e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247e70: 0xae630084  sw          $v1, 0x84($s3)
    ctx->pc = 0x247e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
    // 0x247e74: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x247e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x247e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247e7c:
    // 0x247e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_247e80:
    // 0x247e80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247e84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x247e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247e88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x247e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247e8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x247e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247e90: 0x3e00008  jr          $ra
    ctx->pc = 0x247E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E90u;
        // 0x247e94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247E98u;
}
