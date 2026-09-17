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

// Function: sub_00245D70
// Address: 0x245d70 - 0x245ed8
void sub_00245D70_0x245d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245D70_0x245d70");
#endif

    switch (ctx->pc) {
        case 0x245d94u: goto label_245d94;
        case 0x245dbcu: goto label_245dbc;
        case 0x245e80u: goto label_245e80;
        case 0x245e90u: goto label_245e90;
        case 0x245ea0u: goto label_245ea0;
        default: break;
    }

    ctx->pc = 0x245d70u;

    // 0x245d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245d80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245d88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x245d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x245d8c: 0xc0916b0  jal         func_245AC0
    ctx->pc = 0x245D8Cu;
    SET_GPR_U32(ctx, 31, 0x245D94u);
    ctx->pc = 0x245D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D8Cu;
    // 0x245d90: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x245D8Cu, 0x245D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D94u;
label_245d94:
    // 0x245d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x245d9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245da0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x245da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245da8: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
    // 0x245dac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x245DACu;
    {
        const bool branch_taken_0x245dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dac) {
            ctx->pc = 0x245E78u;
            goto label_245e78;
        }
    }
    ctx->pc = 0x245DB4u;
    // 0x245db4: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x245DB4u;
    SET_GPR_U32(ctx, 31, 0x245DBCu);
    ctx->pc = 0x245DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DB4u;
    // 0x245db8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x245DB4u, 0x245DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DBCu;
label_245dbc:
    // 0x245dbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245dc0: 0x50a00049  beql        $a1, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x245DC0u;
    {
        const bool branch_taken_0x245dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dc0) {
            ctx->pc = 0x245DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245DC0u;
            // 0x245dc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EE8u;
            return;
        }
    }
    ctx->pc = 0x245DC8u;
    // 0x245dc8: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x245dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x245dcc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x245DCCu;
    {
        const bool branch_taken_0x245dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DCCu;
        // 0x245dd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245dcc) {
            ctx->pc = 0x245EE4u;
            return;
        }
    }
    ctx->pc = 0x245DD4u;
    // 0x245dd4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x245dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x245dd8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x245ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245de0: 0x8c6308e0  lw          $v1, 0x8E0($v1)
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2272)));
    // 0x245de4: 0x600008  jr          $v1
    ctx->pc = 0x245DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245DF0u: goto label_245df0;
            case 0x245E10u: goto label_245e10;
            case 0x245E40u: goto label_245e40;
            case 0x245E48u: goto label_245e48;
            case 0x245E50u: goto label_245e50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245DECu;
    // 0x245dec: 0x0  nop
    ctx->pc = 0x245decu;
    // NOP
label_245df0:
    // 0x245df0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x245df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x245df4: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x245DF4u;
    {
        const bool branch_taken_0x245df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245df4) {
            ctx->pc = 0x245DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245DF4u;
            // 0x245df8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EE4u;
            return;
        }
    }
    ctx->pc = 0x245DFCu;
    // 0x245dfc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x245e00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x245e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245e08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x245E08u;
    {
        const bool branch_taken_0x245e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e08) {
            ctx->pc = 0x245E64u;
            goto label_245e64;
        }
    }
    ctx->pc = 0x245E10u;
label_245e10:
    // 0x245e10: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x245e14: 0x50600033  beql        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x245E14u;
    {
        const bool branch_taken_0x245e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e14) {
            ctx->pc = 0x245E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E14u;
            // 0x245e18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EE4u;
            return;
        }
    }
    ctx->pc = 0x245E1Cu;
    // 0x245e1c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x245e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x245e20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x245e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245e24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245e28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245e2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x245e30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x245e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x245E34u;
    {
        const bool branch_taken_0x245e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E34u;
        // 0x245e38: 0x24500090  addiu       $s0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e34) {
            ctx->pc = 0x245E70u;
            goto label_245e70;
        }
    }
    ctx->pc = 0x245E3Cu;
    // 0x245e3c: 0x0  nop
    ctx->pc = 0x245e3cu;
    // NOP
label_245e40:
    // 0x245e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x245E40u;
    {
        const bool branch_taken_0x245e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E40u;
        // 0x245e44: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e40) {
            ctx->pc = 0x245E54u;
            goto label_245e54;
        }
    }
    ctx->pc = 0x245E48u;
label_245e48:
    // 0x245e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245E48u;
    {
        const bool branch_taken_0x245e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E48u;
        // 0x245e4c: 0x8ca3004c  lw          $v1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e48) {
            ctx->pc = 0x245E54u;
            goto label_245e54;
        }
    }
    ctx->pc = 0x245E50u;
label_245e50:
    // 0x245e50: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x245e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_245e54:
    // 0x245e54: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x245E54u;
    {
        const bool branch_taken_0x245e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e54) {
            ctx->pc = 0x245E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E54u;
            // 0x245e58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EE4u;
            return;
        }
    }
    ctx->pc = 0x245E5Cu;
    // 0x245e5c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x245e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x245e60: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_245e64:
    // 0x245e64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x245e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245e6c: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_245e70:
    // 0x245e70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x245E70u;
    {
        const bool branch_taken_0x245e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E70u;
        // 0x245e74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e70) {
            ctx->pc = 0x245EE4u;
            return;
        }
    }
    ctx->pc = 0x245E78u;
label_245e78:
    // 0x245e78: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x245E78u;
    SET_GPR_U32(ctx, 31, 0x245E80u);
    ctx->pc = 0x245E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E78u;
    // 0x245e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x245E78u, 0x245E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E80u;
label_245e80:
    // 0x245e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245e88: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x245E88u;
    SET_GPR_U32(ctx, 31, 0x245E90u);
    ctx->pc = 0x245E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E88u;
    // 0x245e8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x245E88u, 0x245E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E90u;
label_245e90:
    // 0x245e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e98: 0xc091704  jal         func_245C10
    ctx->pc = 0x245E98u;
    SET_GPR_U32(ctx, 31, 0x245EA0u);
    ctx->pc = 0x245E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E98u;
    // 0x245e9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x245E98u, 0x245EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EA0u;
label_245ea0:
    // 0x245ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ea4: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x245EA4u;
    {
        const bool branch_taken_0x245ea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ea4) {
            ctx->pc = 0x245EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245EA4u;
            // 0x245ea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245EE8u;
            return;
        }
    }
    ctx->pc = 0x245EACu;
    // 0x245eac: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x245eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x245eb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x245EB0u;
    {
        const bool branch_taken_0x245eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB0u;
        // 0x245eb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245eb0) {
            ctx->pc = 0x245EDCu;
            return;
        }
    }
    ctx->pc = 0x245EB8u;
    // 0x245eb8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x245eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x245ebc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x245ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x245ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245ec4: 0x8c630900  lw          $v1, 0x900($v1)
    ctx->pc = 0x245ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2304)));
    // 0x245ec8: 0x600008  jr          $v1
    ctx->pc = 0x245EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245ED0u: goto label_245ed0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245ED0u;
label_245ed0:
    // 0x245ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245ED0u;
    {
        const bool branch_taken_0x245ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245ED0u;
        // 0x245ed4: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ed0) {
            ctx->pc = 0x245EDCu;
            return;
        }
    }
    ctx->pc = 0x245ED8u;
}
