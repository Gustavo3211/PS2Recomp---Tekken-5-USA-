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

// Function: sub_001F8DA0
// Address: 0x1f8da0 - 0x1f92b8
void sub_001F8DA0_0x1f8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8DA0_0x1f8da0");
#endif

    switch (ctx->pc) {
        case 0x1f8e3cu: goto label_1f8e3c;
        case 0x1f8ec8u: goto label_1f8ec8;
        case 0x1f8ed0u: goto label_1f8ed0;
        case 0x1f8ed8u: goto label_1f8ed8;
        case 0x1f8f3cu: goto label_1f8f3c;
        case 0x1f8fa4u: goto label_1f8fa4;
        case 0x1f905cu: goto label_1f905c;
        case 0x1f908cu: goto label_1f908c;
        case 0x1f90e8u: goto label_1f90e8;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f910cu: goto label_1f910c;
        case 0x1f911cu: goto label_1f911c;
        case 0x1f913cu: goto label_1f913c;
        case 0x1f91b4u: goto label_1f91b4;
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9280u: goto label_1f9280;
        default: break;
    }

    ctx->pc = 0x1f8da0u;

    // 0x1f8da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f8da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f8da4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8da8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f8da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f8dac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f8dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8db0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f8db4: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x1f8db4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x1f8db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8dbc: 0x26c488d0  addiu       $a0, $s6, -0x7730
    ctx->pc = 0x1f8dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
    // 0x1f8dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8dc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f8dc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f8dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f8dcc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f8dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f8dd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f8dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f8dd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f8dd8: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f8dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f8ddc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8DDCu;
    {
        const bool branch_taken_0x1f8ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DDCu;
        // 0x1f8de0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ddc) {
            ctx->pc = 0x1F8DF4u;
            goto label_1f8df4;
        }
    }
    ctx->pc = 0x1F8DE4u;
    // 0x1f8de4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f8de8: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f8de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f8dec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8DECu;
    {
        const bool branch_taken_0x1f8dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DECu;
        // 0x1f8df0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dec) {
            ctx->pc = 0x1F8E18u;
            goto label_1f8e18;
        }
    }
    ctx->pc = 0x1F8DF4u;
label_1f8df4:
    // 0x1f8df4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f8df8: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x1f8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f8dfc: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x1f8dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1f8e00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8E00u;
    {
        const bool branch_taken_0x1f8e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E00u;
        // 0x1f8e04: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e00) {
            ctx->pc = 0x1F8E18u;
            goto label_1f8e18;
        }
    }
    ctx->pc = 0x1F8E08u;
    // 0x1f8e08: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1f8e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1f8e0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8E0Cu;
    {
        const bool branch_taken_0x1f8e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E0Cu;
        // 0x1f8e10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e0c) {
            ctx->pc = 0x1F8E18u;
            goto label_1f8e18;
        }
    }
    ctx->pc = 0x1F8E14u;
    // 0x1f8e14: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f8e14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8e18:
    // 0x1f8e18: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8E18u;
    {
        const bool branch_taken_0x1f8e18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E18u;
        // 0x1f8e1c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e18) {
            ctx->pc = 0x1F8E4Cu;
            goto label_1f8e4c;
        }
    }
    ctx->pc = 0x1F8E20u;
    // 0x1f8e20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1f8e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1f8e24: 0x245055b0  addiu       $s0, $v0, 0x55B0
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1f8e28: 0x2484f454  addiu       $a0, $a0, -0xBAC
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964308));
    // 0x1f8e2c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1f8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1f8e30: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1f8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1f8e34: 0xc0da610  jal         func_369840
    ctx->pc = 0x1F8E34u;
    SET_GPR_U32(ctx, 31, 0x1F8E3Cu);
    ctx->pc = 0x1F8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E34u;
    // 0x1f8e38: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369840u, 0x1F8E34u, 0x1F8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E3Cu;
label_1f8e3c:
    // 0x1f8e3c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f8e40: 0x12e30002  beq         $s7, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8E40u;
    {
        const bool branch_taken_0x1f8e40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E40u;
        // 0x1f8e44: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e40) {
            ctx->pc = 0x1F8E4Cu;
            goto label_1f8e4c;
        }
    }
    ctx->pc = 0x1F8E48u;
    // 0x1f8e48: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1f8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1f8e4c:
    // 0x1f8e4c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8E4Cu;
    {
        const bool branch_taken_0x1f8e4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E4Cu;
        // 0x1f8e50: 0x3c150015  lui         $s5, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e4c) {
            ctx->pc = 0x1F8E78u;
            goto label_1f8e78;
        }
    }
    ctx->pc = 0x1F8E54u;
    // 0x1f8e54: 0x26a455b0  addiu       $a0, $s5, 0x55B0
    ctx->pc = 0x1f8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f8e58: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1f8e5c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1f8e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f8e60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8E60u;
    {
        const bool branch_taken_0x1f8e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E60u;
        // 0x1f8e64: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e60) {
            ctx->pc = 0x1F8E94u;
            goto label_1f8e94;
        }
    }
    ctx->pc = 0x1F8E68u;
    // 0x1f8e68: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8e6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8E6Cu;
    {
        const bool branch_taken_0x1f8e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E6Cu;
        // 0x1f8e70: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e6c) {
            ctx->pc = 0x1F8E90u;
            goto label_1f8e90;
        }
    }
    ctx->pc = 0x1F8E74u;
    // 0x1f8e74: 0x0  nop
    ctx->pc = 0x1f8e74u;
    // NOP
label_1f8e78:
    // 0x1f8e78: 0x26a355b0  addiu       $v1, $s5, 0x55B0
    ctx->pc = 0x1f8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f8e7c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1f8e80: 0x18400103  blez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1F8E80u;
    {
        const bool branch_taken_0x1f8e80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E80u;
        // 0x1f8e84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e80) {
            ctx->pc = 0x1F9290u;
            goto label_1f9290;
        }
    }
    ctx->pc = 0x1F8E88u;
    // 0x1f8e88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f8e8c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1f8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_1f8e90:
    // 0x1f8e90: 0x26a255b0  addiu       $v0, $s5, 0x55B0
    ctx->pc = 0x1f8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
label_1f8e94:
    // 0x1f8e94: 0x124000fa  beqz        $s2, . + 4 + (0xFA << 2)
    ctx->pc = 0x1F8E94u;
    {
        const bool branch_taken_0x1f8e94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E94u;
        // 0x1f8e98: 0x8c510038  lw          $s1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e94) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F8E9Cu;
    // 0x1f8e9c: 0x26d288d0  addiu       $s2, $s6, -0x7730
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
    // 0x1f8ea0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8ea4: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f8ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f8ea8: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8EA8u;
    {
        const bool branch_taken_0x1f8ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ea8) {
            ctx->pc = 0x1F8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8EA8u;
            // 0x1f8eac: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8EE8u;
            goto label_1f8ee8;
        }
    }
    ctx->pc = 0x1F8EB0u;
    // 0x1f8eb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f8eb4: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f8eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f8eb8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F8EB8u;
    {
        const bool branch_taken_0x1f8eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EB8u;
        // 0x1f8ebc: 0x8f93a848  lw          $s3, -0x57B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8eb8) {
            ctx->pc = 0x1F8F08u;
            goto label_1f8f08;
        }
    }
    ctx->pc = 0x1F8EC0u;
    // 0x1f8ec0: 0xc08e6d0  jal         func_239B40
    ctx->pc = 0x1F8EC0u;
    SET_GPR_U32(ctx, 31, 0x1F8EC8u);
    ctx->pc = 0x239B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B40u, 0x1F8EC0u, 0x1F8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EC8u;
label_1f8ec8:
    // 0x1f8ec8: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x1F8EC8u;
    SET_GPR_U32(ctx, 31, 0x1F8ED0u);
    ctx->pc = 0x1F8ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EC8u;
    // 0x1f8ecc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x1F8EC8u, 0x1F8ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8ED0u;
label_1f8ed0:
    // 0x1f8ed0: 0xc08e6d4  jal         func_239B50
    ctx->pc = 0x1F8ED0u;
    SET_GPR_U32(ctx, 31, 0x1F8ED8u);
    ctx->pc = 0x1F8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8ED0u;
    // 0x1f8ed4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B50u, 0x1F8ED0u, 0x1F8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8ED8u;
label_1f8ed8:
    // 0x1f8ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f8ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8edc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F8EDCu;
    {
        const bool branch_taken_0x1f8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EDCu;
        // 0x1f8ee0: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8edc) {
            ctx->pc = 0x1F8F14u;
            goto label_1f8f14;
        }
    }
    ctx->pc = 0x1F8EE4u;
    // 0x1f8ee4: 0x0  nop
    ctx->pc = 0x1f8ee4u;
    // NOP
label_1f8ee8:
    // 0x1f8ee8: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1f8ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f8eec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8EECu;
    {
        const bool branch_taken_0x1f8eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8eec) {
            ctx->pc = 0x1F8EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8EECu;
            // 0x1f8ef0: 0x8f93a848  lw          $s3, -0x57B8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8F08u;
            goto label_1f8f08;
        }
    }
    ctx->pc = 0x1F8EF4u;
    // 0x1f8ef4: 0x8f93a84c  lw          $s3, -0x57B4($gp)
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944844)));
    // 0x1f8ef8: 0x8f90a854  lw          $s0, -0x57AC($gp)
    ctx->pc = 0x1f8ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x1f8efc: 0x8f85a85c  lw          $a1, -0x57A4($gp)
    ctx->pc = 0x1f8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
    // 0x1f8f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F00u;
    {
        const bool branch_taken_0x1f8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F00u;
        // 0x1f8f04: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f00) {
            ctx->pc = 0x1F8F14u;
            goto label_1f8f14;
        }
    }
    ctx->pc = 0x1F8F08u;
label_1f8f08:
    // 0x1f8f08: 0x8f90a850  lw          $s0, -0x57B0($gp)
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x1f8f0c: 0x8f85a858  lw          $a1, -0x57A8($gp)
    ctx->pc = 0x1f8f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x1f8f10: 0x8ec688d0  lw          $a2, -0x7730($s6)
    ctx->pc = 0x1f8f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936784)));
label_1f8f14:
    // 0x1f8f14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8f18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8f1c: 0x32020090  andi        $v0, $s0, 0x90
    ctx->pc = 0x1f8f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)144);
    // 0x1f8f20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8F20u;
    {
        const bool branch_taken_0x1f8f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F20u;
        // 0x1f8f24: 0x77200a  movz        $a0, $v1, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f20) {
            ctx->pc = 0x1F8F48u;
            goto label_1f8f48;
        }
    }
    ctx->pc = 0x1F8F28u;
    // 0x1f8f28: 0x26a255b0  addiu       $v0, $s5, 0x55B0
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f8f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8f30: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1f8f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x1f8f34: 0xc07e56c  jal         func_1F95B0
    ctx->pc = 0x1F8F34u;
    SET_GPR_U32(ctx, 31, 0x1F8F3Cu);
    ctx->pc = 0x1F8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F34u;
    // 0x1f8f38: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95B0u, 0x1F8F34u, 0x1F8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F3Cu;
label_1f8f3c:
    // 0x1f8f3c: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1F8F3Cu;
    {
        const bool branch_taken_0x1f8f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F3Cu;
        // 0x1f8f40: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f3c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F8F44u;
    // 0x1f8f44: 0x0  nop
    ctx->pc = 0x1f8f44u;
    // NOP
label_1f8f48:
    // 0x1f8f48: 0x30a75000  andi        $a3, $a1, 0x5000
    ctx->pc = 0x1f8f48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)20480);
    // 0x1f8f4c: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F8F4Cu;
    {
        const bool branch_taken_0x1f8f4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F4Cu;
        // 0x1f8f50: 0x32020060  andi        $v0, $s0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f4c) {
            ctx->pc = 0x1F8FB0u;
            goto label_1f8fb0;
        }
    }
    ctx->pc = 0x1F8F54u;
    // 0x1f8f54: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8F54u;
    {
        const bool branch_taken_0x1f8f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F54u;
        // 0x1f8f58: 0x32625000  andi        $v0, $s3, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f54) {
            ctx->pc = 0x1F8FB4u;
            goto label_1f8fb4;
        }
    }
    ctx->pc = 0x1F8F5Cu;
    // 0x1f8f5c: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x1f8f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x1f8f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8F60u;
    {
        const bool branch_taken_0x1f8f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F60u;
        // 0x1f8f64: 0x30a34000  andi        $v1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f60) {
            ctx->pc = 0x1F8F70u;
            goto label_1f8f70;
        }
    }
    ctx->pc = 0x1F8F68u;
    // 0x1f8f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8F68u;
    {
        const bool branch_taken_0x1f8f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F68u;
        // 0x1f8f6c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f68) {
            ctx->pc = 0x1F8F78u;
            goto label_1f8f78;
        }
    }
    ctx->pc = 0x1F8F70u;
label_1f8f70:
    // 0x1f8f70: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1f8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f74: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1f8f74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1f8f78:
    // 0x1f8f78: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8F78u;
    {
        const bool branch_taken_0x1f8f78 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F78u;
        // 0x1f8f7c: 0x2241823  subu        $v1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f78) {
            ctx->pc = 0x1F8F88u;
            goto label_1f8f88;
        }
    }
    ctx->pc = 0x1F8F80u;
    // 0x1f8f80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8F80u;
    {
        const bool branch_taken_0x1f8f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F80u;
        // 0x1f8f84: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f80) {
            ctx->pc = 0x1F8F90u;
            goto label_1f8f90;
        }
    }
    ctx->pc = 0x1F8F88u;
label_1f8f88:
    // 0x1f8f88: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x1f8f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f8f8c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1f8f8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1f8f90:
    // 0x1f8f90: 0x10e000bb  beqz        $a3, . + 4 + (0xBB << 2)
    ctx->pc = 0x1F8F90u;
    {
        const bool branch_taken_0x1f8f90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F90u;
        // 0x1f8f94: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f90) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F8F98u;
    // 0x1f8f98: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8f9c: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F8F9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8FA4u);
    ctx->pc = 0x1F8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F9Cu;
    // 0x1f8fa0: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F8F9Cu, 0x1F8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FA4u;
label_1f8fa4:
    // 0x1f8fa4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1F8FA4u;
    {
        const bool branch_taken_0x1f8fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FA4u;
        // 0x1f8fa8: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fa4) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F8FACu;
    // 0x1f8fac: 0x0  nop
    ctx->pc = 0x1f8facu;
    // NOP
label_1f8fb0:
    // 0x1f8fb0: 0x32625000  andi        $v0, $s3, 0x5000
    ctx->pc = 0x1f8fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)20480);
label_1f8fb4:
    // 0x1f8fb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8FB4u;
    {
        const bool branch_taken_0x1f8fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB4u;
        // 0x1f8fb8: 0x32020060  andi        $v0, $s0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fb4) {
            ctx->pc = 0x1F8FC4u;
            goto label_1f8fc4;
        }
    }
    ctx->pc = 0x1F8FBCu;
    // 0x1f8fbc: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1F8FBCu;
    {
        const bool branch_taken_0x1f8fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FBCu;
        // 0x1f8fc0: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fbc) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F8FC4u;
label_1f8fc4:
    // 0x1f8fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8fc8: 0x16e20033  bne         $s7, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F8FC8u;
    {
        const bool branch_taken_0x1f8fc8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8fc8) {
            ctx->pc = 0x1F9098u;
            goto label_1f9098;
        }
    }
    ctx->pc = 0x1F8FD0u;
    // 0x1f8fd0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8FD0u;
    {
        const bool branch_taken_0x1f8fd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FD0u;
        // 0x1f8fd4: 0x3a220003  xori        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fd0) {
            ctx->pc = 0x1F8FDCu;
            goto label_1f8fdc;
        }
    }
    ctx->pc = 0x1F8FD8u;
    // 0x1f8fd8: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1f8fd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1f8fdc:
    // 0x1f8fdc: 0x12370052  beq         $s1, $s7, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F8FDCu;
    {
        const bool branch_taken_0x1f8fdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x1F8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FDCu;
        // 0x1f8fe0: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fdc) {
            ctx->pc = 0x1F9128u;
            goto label_1f9128;
        }
    }
    ctx->pc = 0x1F8FE4u;
    // 0x1f8fe4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8FE4u;
    {
        const bool branch_taken_0x1f8fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FE4u;
        // 0x1f8fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fe4) {
            ctx->pc = 0x1F9000u;
            goto label_1f9000;
        }
    }
    ctx->pc = 0x1F8FECu;
    // 0x1f8fec: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F8FECu;
    {
        const bool branch_taken_0x1f8fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FECu;
        // 0x1f8ff0: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fec) {
            ctx->pc = 0x1F90C8u;
            goto label_1f90c8;
        }
    }
    ctx->pc = 0x1F8FF4u;
    // 0x1f8ff4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1F8FF4u;
    {
        const bool branch_taken_0x1f8ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FF4u;
        // 0x1f8ff8: 0xac57004c  sw          $s7, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ff4) {
            ctx->pc = 0x1F9288u;
            goto label_1f9288;
        }
    }
    ctx->pc = 0x1F8FFCu;
    // 0x1f8ffc: 0x0  nop
    ctx->pc = 0x1f8ffcu;
    // NOP
label_1f9000:
    // 0x1f9000: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9000u;
    {
        const bool branch_taken_0x1f9000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9000u;
        // 0x1f9004: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9000) {
            ctx->pc = 0x1F9018u;
            goto label_1f9018;
        }
    }
    ctx->pc = 0x1F9008u;
    // 0x1f9008: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9008u;
    {
        const bool branch_taken_0x1f9008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9008u;
        // 0x1f900c: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9008) {
            ctx->pc = 0x1F9038u;
            goto label_1f9038;
        }
    }
    ctx->pc = 0x1F9010u;
    // 0x1f9010: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1F9010u;
    {
        const bool branch_taken_0x1f9010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9010u;
        // 0x1f9014: 0xac57004c  sw          $s7, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9010) {
            ctx->pc = 0x1F9288u;
            goto label_1f9288;
        }
    }
    ctx->pc = 0x1F9018u;
label_1f9018:
    // 0x1f9018: 0x26a255b0  addiu       $v0, $s5, 0x55B0
    ctx->pc = 0x1f9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f901c: 0x32030060  andi        $v1, $s0, 0x60
    ctx->pc = 0x1f901cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
    // 0x1f9020: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1f9020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x1f9024: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1F9024u;
    {
        const bool branch_taken_0x1f9024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9024u;
        // 0x1f9028: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9024) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F902Cu;
    // 0x1f902c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F902Cu;
    {
        const bool branch_taken_0x1f902c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F902Cu;
        // 0x1f9030: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f902c) {
            ctx->pc = 0x1F91E0u;
            goto label_1f91e0;
        }
    }
    ctx->pc = 0x1F9034u;
    // 0x1f9034: 0x0  nop
    ctx->pc = 0x1f9034u;
    // NOP
label_1f9038:
    // 0x1f9038: 0x26a355b0  addiu       $v1, $s5, 0x55B0
    ctx->pc = 0x1f9038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f903c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1f903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1f9040: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9040u;
    {
        const bool branch_taken_0x1f9040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9040u;
        // 0x1f9044: 0x32020060  andi        $v0, $s0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9040) {
            ctx->pc = 0x1F9068u;
            goto label_1f9068;
        }
    }
    ctx->pc = 0x1F9048u;
    // 0x1f9048: 0x5040008e  beql        $v0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x1F9048u;
    {
        const bool branch_taken_0x1f9048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9048) {
            ctx->pc = 0x1F904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9048u;
            // 0x1f904c: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9050u;
    // 0x1f9050: 0xac770044  sw          $s7, 0x44($v1)
    ctx->pc = 0x1f9050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 23));
    // 0x1f9054: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9054u;
    SET_GPR_U32(ctx, 31, 0x1F905Cu);
    ctx->pc = 0x1F9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9054u;
    // 0x1f9058: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9054u, 0x1F905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F905Cu;
label_1f905c:
    // 0x1f905c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1F905Cu;
    {
        const bool branch_taken_0x1f905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F905Cu;
        // 0x1f9060: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f905c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9064u;
    // 0x1f9064: 0x0  nop
    ctx->pc = 0x1f9064u;
    // NOP
label_1f9068:
    // 0x1f9068: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x1F9068u;
    {
        const bool branch_taken_0x1f9068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9068) {
            ctx->pc = 0x1F906Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9068u;
            // 0x1f906c: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F9070u;
    // 0x1f9070: 0x30a2a000  andi        $v0, $a1, 0xA000
    ctx->pc = 0x1f9070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)40960);
    // 0x1f9074: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1F9074u;
    {
        const bool branch_taken_0x1f9074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9074u;
        // 0x1f9078: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9074) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F907Cu;
    // 0x1f907c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f9080: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f9084: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9084u;
    SET_GPR_U32(ctx, 31, 0x1F908Cu);
    ctx->pc = 0x1F9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9084u;
    // 0x1f9088: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9084u, 0x1F908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F908Cu;
label_1f908c:
    // 0x1f908c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1F908Cu;
    {
        const bool branch_taken_0x1f908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F908Cu;
        // 0x1f9090: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f908c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9094u;
    // 0x1f9094: 0x0  nop
    ctx->pc = 0x1f9094u;
    // NOP
label_1f9098:
    // 0x1f9098: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9098u;
    {
        const bool branch_taken_0x1f9098 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9098u;
        // 0x1f909c: 0x3a220004  xori        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9098) {
            ctx->pc = 0x1F90A4u;
            goto label_1f90a4;
        }
    }
    ctx->pc = 0x1F90A0u;
    // 0x1f90a0: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1f90a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1f90a4:
    // 0x1f90a4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1f90a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f90a8: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1F90A8u;
    {
        const bool branch_taken_0x1f90a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90A8u;
        // 0x1f90ac: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90a8) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F90B0u;
    // 0x1f90b0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1f90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f90b4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f90b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f90bc: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x1f90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13664)));
    // 0x1f90c0: 0x600008  jr          $v1
    ctx->pc = 0x1F90C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F90C8u: goto label_1f90c8;
            case 0x1F9128u: goto label_1f9128;
            case 0x1F9148u: goto label_1f9148;
            case 0x1F91C0u: goto label_1f91c0;
            case 0x1F91F8u: goto label_1f91f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F90C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F90C8u;
label_1f90c8:
    // 0x1f90c8: 0x26b255b0  addiu       $s2, $s5, 0x55B0
    ctx->pc = 0x1f90c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f90cc: 0x32020060  andi        $v0, $s0, 0x60
    ctx->pc = 0x1f90ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
    // 0x1f90d0: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1f90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1f90d4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1F90D4u;
    {
        const bool branch_taken_0x1f90d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90D4u;
        // 0x1f90d8: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90d4) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F90DCu;
    // 0x1f90dc: 0x26d088d0  addiu       $s0, $s6, -0x7730
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
    // 0x1f90e0: 0xc07e56c  jal         func_1F95B0
    ctx->pc = 0x1F90E0u;
    SET_GPR_U32(ctx, 31, 0x1F90E8u);
    ctx->pc = 0x1F90E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90E0u;
    // 0x1f90e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95B0u, 0x1F90E0u, 0x1F90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90E8u;
label_1f90e8:
    // 0x1f90e8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1f90ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f90f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f90f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f90f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f90f8: 0xc099132  jal         func_2644C8
    ctx->pc = 0x1F90F8u;
    SET_GPR_U32(ctx, 31, 0x1F9100u);
    ctx->pc = 0x1F90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90F8u;
    // 0x1f90fc: 0xac43888c  sw          $v1, -0x7774($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936716), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C8u, 0x1F90F8u, 0x1F9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9100u;
label_1f9100:
    // 0x1f9100: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f9100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f9104: 0xc099132  jal         func_2644C8
    ctx->pc = 0x1F9104u;
    SET_GPR_U32(ctx, 31, 0x1F910Cu);
    ctx->pc = 0x1F9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9104u;
    // 0x1f9108: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C8u, 0x1F9104u, 0x1F910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F910Cu;
label_1f910c:
    // 0x1f910c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1f910cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1f9110: 0x82450048  lb          $a1, 0x48($s2)
    ctx->pc = 0x1f9110u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1f9114: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x1F9114u;
    SET_GPR_U32(ctx, 31, 0x1F911Cu);
    ctx->pc = 0x1F9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9114u;
    // 0x1f9118: 0x2484f454  addiu       $a0, $a0, -0xBAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x1F9114u, 0x1F911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F911Cu;
label_1f911c:
    // 0x1f911c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1F911Cu;
    {
        const bool branch_taken_0x1f911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F911Cu;
        // 0x1f9120: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f911c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9124u;
    // 0x1f9124: 0x0  nop
    ctx->pc = 0x1f9124u;
    // NOP
label_1f9128:
    // 0x1f9128: 0x32020060  andi        $v0, $s0, 0x60
    ctx->pc = 0x1f9128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
    // 0x1f912c: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F912Cu;
    {
        const bool branch_taken_0x1f912c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f912c) {
            ctx->pc = 0x1F9130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F912Cu;
            // 0x1f9130: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9134u;
    // 0x1f9134: 0xc07e55c  jal         func_1F9570
    ctx->pc = 0x1F9134u;
    SET_GPR_U32(ctx, 31, 0x1F913Cu);
    ctx->pc = 0x1F9138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9134u;
    // 0x1f9138: 0x94c4003c  lhu         $a0, 0x3C($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9570u, 0x1F9134u, 0x1F913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F913Cu;
label_1f913c:
    // 0x1f913c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1F913Cu;
    {
        const bool branch_taken_0x1f913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F913Cu;
        // 0x1f9140: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f913c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9144u;
    // 0x1f9144: 0x0  nop
    ctx->pc = 0x1f9144u;
    // NOP
label_1f9148:
    // 0x1f9148: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x1f9148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1f914c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F914Cu;
    {
        const bool branch_taken_0x1f914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F914Cu;
        // 0x1f9150: 0x26a355b0  addiu       $v1, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f914c) {
            ctx->pc = 0x1F9160u;
            goto label_1f9160;
        }
    }
    ctx->pc = 0x1F9154u;
    // 0x1f9154: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1f9158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9158u;
    {
        const bool branch_taken_0x1f9158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9158u;
        // 0x1f915c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9158) {
            ctx->pc = 0x1F9174u;
            goto label_1f9174;
        }
    }
    ctx->pc = 0x1F9160u;
label_1f9160:
    // 0x1f9160: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x1f9160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x1f9164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9164u;
    {
        const bool branch_taken_0x1f9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9164u;
        // 0x1f9168: 0x26a455b0  addiu       $a0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9164) {
            ctx->pc = 0x1F917Cu;
            goto label_1f917c;
        }
    }
    ctx->pc = 0x1F916Cu;
    // 0x1f916c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1f916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1f9170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f9174:
    // 0x1f9174: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1f9174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x1f9178: 0x26a455b0  addiu       $a0, $s5, 0x55B0
    ctx->pc = 0x1f9178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
label_1f917c:
    // 0x1f917c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1f917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1f9180: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9180u;
    {
        const bool branch_taken_0x1f9180 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f9180) {
            ctx->pc = 0x1F9184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9180u;
            // 0x1f9184: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9190u;
            goto label_1f9190;
        }
    }
    ctx->pc = 0x1F9188u;
    // 0x1f9188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9188u;
    {
        const bool branch_taken_0x1f9188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9188u;
        // 0x1f918c: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9188) {
            ctx->pc = 0x1F919Cu;
            goto label_1f919c;
        }
    }
    ctx->pc = 0x1F9190u;
label_1f9190:
    // 0x1f9190: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9190u;
    {
        const bool branch_taken_0x1f9190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9190u;
        // 0x1f9194: 0x30a2a000  andi        $v0, $a1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9190) {
            ctx->pc = 0x1F91A4u;
            goto label_1f91a4;
        }
    }
    ctx->pc = 0x1F9198u;
    // 0x1f9198: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x1f9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1f919c:
    // 0x1f919c: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1f919cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x1f91a0: 0x30a2a000  andi        $v0, $a1, 0xA000
    ctx->pc = 0x1f91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)40960);
label_1f91a4:
    // 0x1f91a4: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F91A4u;
    {
        const bool branch_taken_0x1f91a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f91a4) {
            ctx->pc = 0x1F91A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F91A4u;
            // 0x1f91a8: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F91ACu;
    // 0x1f91ac: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F91ACu;
    SET_GPR_U32(ctx, 31, 0x1F91B4u);
    ctx->pc = 0x1F91B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F91ACu;
    // 0x1f91b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F91ACu, 0x1F91B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91B4u;
label_1f91b4:
    // 0x1f91b4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F91B4u;
    {
        const bool branch_taken_0x1f91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91B4u;
        // 0x1f91b8: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91b4) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F91BCu;
    // 0x1f91bc: 0x0  nop
    ctx->pc = 0x1f91bcu;
    // NOP
label_1f91c0:
    // 0x1f91c0: 0x26a555b0  addiu       $a1, $s5, 0x55B0
    ctx->pc = 0x1f91c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f91c4: 0x32020060  andi        $v0, $s0, 0x60
    ctx->pc = 0x1f91c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
    // 0x1f91c8: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1f91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1f91cc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F91CCu;
    {
        const bool branch_taken_0x1f91cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91CCu;
        // 0x1f91d0: 0xaca00044  sw          $zero, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91cc) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F91D4u;
    // 0x1f91d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f91d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f91dc: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1f91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_1f91e0:
    // 0x1f91e0: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F91E0u;
    SET_GPR_U32(ctx, 31, 0x1F91E8u);
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F91E0u, 0x1F91E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91E8u;
label_1f91e8:
    // 0x1f91e8: 0xc07e262  jal         func_1F8988
    ctx->pc = 0x1F91E8u;
    SET_GPR_U32(ctx, 31, 0x1F91F0u);
    ctx->pc = 0x1F91ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F91E8u;
    // 0x1f91ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8988u, 0x1F91E8u, 0x1F91F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91F0u;
label_1f91f0:
    // 0x1f91f0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F91F0u;
    {
        const bool branch_taken_0x1f91f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F0u;
        // 0x1f91f4: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f0) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F91F8u;
label_1f91f8:
    // 0x1f91f8: 0x26a355b0  addiu       $v1, $s5, 0x55B0
    ctx->pc = 0x1f91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
    // 0x1f91fc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1f91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1f9200: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9200u;
    {
        const bool branch_taken_0x1f9200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9200u;
        // 0x1f9204: 0x32020060  andi        $v0, $s0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9200) {
            ctx->pc = 0x1F9228u;
            goto label_1f9228;
        }
    }
    ctx->pc = 0x1F9208u;
    // 0x1f9208: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9208u;
    {
        const bool branch_taken_0x1f9208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9208u;
        // 0x1f920c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9208) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F9210u;
    // 0x1f9210: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f9210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9214: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9214u;
    SET_GPR_U32(ctx, 31, 0x1F921Cu);
    ctx->pc = 0x1F9218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9214u;
    // 0x1f9218: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9214u, 0x1F921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F921Cu;
label_1f921c:
    // 0x1f921c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F921Cu;
    {
        const bool branch_taken_0x1f921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F921Cu;
        // 0x1f9220: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f921c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9224u;
    // 0x1f9224: 0x0  nop
    ctx->pc = 0x1f9224u;
    // NOP
label_1f9228:
    // 0x1f9228: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9228u;
    {
        const bool branch_taken_0x1f9228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9228u;
        // 0x1f922c: 0x30a2a000  andi        $v0, $a1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9228) {
            ctx->pc = 0x1F9268u;
            goto label_1f9268;
        }
    }
    ctx->pc = 0x1F9230u;
    // 0x1f9230: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1f9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1f9234:
    // 0x1f9234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9234u;
    {
        const bool branch_taken_0x1f9234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9234u;
        // 0x1f9238: 0xac600044  sw          $zero, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9234) {
            ctx->pc = 0x1F9258u;
            goto label_1f9258;
        }
    }
    ctx->pc = 0x1F923Cu;
    // 0x1f923c: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F923Cu;
    SET_GPR_U32(ctx, 31, 0x1F9244u);
    ctx->pc = 0x1F9240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F923Cu;
    // 0x1f9240: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F923Cu, 0x1F9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9244u;
label_1f9244:
    // 0x1f9244: 0xc084ec2  jal         func_213B08
    ctx->pc = 0x1F9244u;
    SET_GPR_U32(ctx, 31, 0x1F924Cu);
    ctx->pc = 0x213B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B08u, 0x1F9244u, 0x1F924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F924Cu;
label_1f924c:
    // 0x1f924c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F924Cu;
    {
        const bool branch_taken_0x1f924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F924Cu;
        // 0x1f9250: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f924c) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9254u;
    // 0x1f9254: 0x0  nop
    ctx->pc = 0x1f9254u;
    // NOP
label_1f9258:
    // 0x1f9258: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9258u;
    SET_GPR_U32(ctx, 31, 0x1F9260u);
    ctx->pc = 0x1F925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9258u;
    // 0x1f925c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9258u, 0x1F9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9260u;
label_1f9260:
    // 0x1f9260: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9260u;
    {
        const bool branch_taken_0x1f9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9260u;
        // 0x1f9264: 0x26a255b0  addiu       $v0, $s5, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9260) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F9268u;
label_1f9268:
    // 0x1f9268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9268u;
    {
        const bool branch_taken_0x1f9268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9268u;
        // 0x1f926c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9268) {
            ctx->pc = 0x1F9280u;
            goto label_1f9280;
        }
    }
    ctx->pc = 0x1F9270u;
    // 0x1f9270: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f9274: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f9278: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F9278u;
    SET_GPR_U32(ctx, 31, 0x1F9280u);
    ctx->pc = 0x1F927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9278u;
    // 0x1f927c: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F9278u, 0x1F9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9280u;
label_1f9280:
    // 0x1f9280: 0x26a255b0  addiu       $v0, $s5, 0x55B0
    ctx->pc = 0x1f9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 21936));
label_1f9284:
    // 0x1f9284: 0xac57004c  sw          $s7, 0x4C($v0)
    ctx->pc = 0x1f9284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 23));
label_1f9288:
    // 0x1f9288: 0xac510038  sw          $s1, 0x38($v0)
    ctx->pc = 0x1f9288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 17));
    // 0x1f928c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f928cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9290:
    // 0x1f9290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f9298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f929c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f929cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f92a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f92a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f92a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f92a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f92a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f92a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f92ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f92acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f92b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F92B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92B0u;
        // 0x1f92b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F92B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F92B8u;
}
